/* gettxt.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 08 Jul 21   MLA           Bug: Fix end of line immediately after nested text.
 * 15 Aug 20   MLA           Detect/allow for BoL text switches in style < 10.
 * 01 Jul 20   MLA           Allowed for style 2.
 * 27 Feb 20   MLA           BUG: Restore use of DWARVISH_TAG!
 * 18 Dec 16   MLA           Handle words split across lines in style 1.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 06 Feb 10   MLA           Added quote-block handling.
 * 11 Jan 10   MLA           Renamed getline() to nextline() to avoid a
 *                           new gcc header clash.
 * 14 Jul 09   MLA           Fixed gcc --pedantic warnings.
 * 12 Jul 09   MLA           Need tag handling in style 10 too.
 * 03 Jul 09   MLA           Bug: had to revert to style 11 centered block handling.
 * 21 Sep 08   MLA           Signal cyclic texts to doswitch().
 * 20 Mar 08   MLA           Bug: fixed text and text line counts.
 *                           BUG: Style 1 feature description fix.
 * 15 Mar 08   MLA           Version 12 changes.
 * 08 May 07   Stuart Munro  bug: correct the seting of description level 3.
 * 04 May 07   MLA           bug: Suppress qualifier checks for style 1.
 * 15 Oct 06   MLA           Reinstated HTML tag handling.
 *                           Also eliminated redundand NEST_VAR.
 * 03 Jan 05   MLA           Added VHOLDER.
 * 24 Mar 03   MLA           Added 4th argument to signal presence of a
 *                           word holder, if requested to do so.
 * 01 Dec 02   MLA           bug: Allow abutting nested texts.
 * 26 Dec 01   MLA           Added text_lines.
 * 25 Nov 01   MLA           Bug: Throw a new line if text ends on BLOCK_END.
 *                           Added IGNORE_EOL.
 * 30 Oct 01   MLA           Add a dummy state for implicit switches
 *                           for old-style A-code.
 * 06 Oct 01   MLA           Added text_count.
 * 14 Mar 01   MLA           Various checks for style value.
 * 28 Feb 01   MLA           Added DWARVISH.
 * 06 Jan 01   MLA           Added blocks of centered lines, as
 *                           opposed to centered blocks of lines.
 * 03 Dec 00   MLA           Allowed '#' as a comment delimiter.
 * 16 Dec 99   MLA           Added block handling.
 * 11 Dec 99   MLA           Added HTML tag handling and hard spaces.
 * 30 Aug 99   MLA           Allowed nested text.
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 12 Dec 91   MLA           Allowed for the FRAGMENT directive.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include <ctype.h>

#include "acdc.h"
#include "game.h"
#include "const.h"
#include "line.h"
#include "symbol.h"
#include "major.h"
#include "text.h"

int gettxt (int description, int *max_states, int *text_type)
{
   char *text_ptr;
   char *temp_ptr;
   char *text_top;
   char *old_text_ptr;
   int  had_forced_lf;
   int  formatted;
   int  lf_pending;
   int  states;
   int  explicit_switch;
   int  implicit_switch;
   int escaped;
   int frag;
   int in_line;
   struct node *nest_text;
   char nest_name [80];
   char *nest_ptr;
   int nest_len;
   int nest_type;
   int in_block = 0;
   int null_text = 1;
   int text_len = 0;
   int first_char;

   states = 0;
   frag = (text_type && (*text_type & FRAGMENT_TEXT));
   in_line = (text_type && (*text_type & INLINE_TEXT));
   text_count++;
   text_ptr = text_buf_ptr + 1;
   text_top = text_ptr + text_buf_len - 15;
   had_forced_lf = TRUE;     /* To get LF count at start of text right */
   explicit_switch = FALSE;
   implicit_switch = FALSE;
   lf_pending = FALSE;
   if (description)
      *max_states = 1;       /* For objects/places initialise state count */

next_line:

   if (nextline(ACCEPT_BLANK) == EOF ||
       (*line_ptr != ' ' && *line_ptr != '\t' && *line_ptr != '\n'))
   {
      if (null_text)
         text_count--;
      if (description)
         description = -1;              /* End of descriptions */
      goto store;
   }
   else
      null_text = 0;

   if (lf_pending)
      *text_ptr++ = '\n';
   lf_pending = FALSE;

/* Got another line. Start by skipping white-space. */

   formatted = FALSE;
   while (*line_ptr == ' ' || *line_ptr == '\t')
      line_ptr++;
    first_char = 1;

/* Check for a description part separator. */

   if (description)
   {
      if (style < 10 && description == 1 && *line_ptr == '{')
      {
         *line_ptr = '\n';
         goto next_line;
      }
      if (*line_ptr == '%')
      {
         if (description == 2)
         {
            *text_ptr++ = SWITCH_BREAK;
            implicit_switch = TRUE;
            *text_buf_ptr = SWITCH_START;
            line_ptr++;
            formatted = TRUE;
         }
         else if (description == 1)
         {
            description = 2;
            *line_ptr = ' ';
            goto store;
         }
      }
      else if (*line_ptr == '&')
      {
         if (description == 3)
         {
            *text_ptr++ = SWITCH_BREAK;
            implicit_switch = TRUE;
            *text_buf_ptr = SWITCH_START;
            line_ptr++;
            formatted = TRUE;
         }
         else if (description == 1 || description == 2)
         {
            description = 3;
            *line_ptr = ' ';
            goto store;
         }
      }
   }

   text_lines++;

/* Check for a signal to leave this line dangling. */

   if (style >= 10 && *line_ptr == '!' && *(line_ptr + 1) == '`')
   {
      *text_ptr++ = IGNORE_EOL;
      line_ptr += 2;
   }

/* Check for end of block */

   if ((in_block == 1 && *line_ptr != '=') ||
       (in_block == 2 && *line_ptr != '+') ||
       (in_block == 3 && *line_ptr != '^'))
   {
      *text_ptr++ = BLOCK_END;
      *text_ptr++ = '\n';
      in_block = 0;
   }
      
/* Here comes a tricky bit. A '/', '=', '+' or '^' at the beginning of a line 
 * forces a new line. If *only* that character is present, we treat the line
 * as completly blank. The !@ combination is an obsolete equivalent of '/'.*/

   if (*line_ptr == '/' || 
      (style < 10 &&  *line_ptr == '!' && *(line_ptr + 1) == '@') ||
      (style >= 10 && (*line_ptr == '=' || *line_ptr == '+' ||
                       *line_ptr == '^')))
   {
      if (*line_ptr == '!')
         line_ptr++;
      else if (*line_ptr != '/' && in_block == 0)
      {
         if (*line_ptr == '^') in_block = -3;
         else in_block = *line_ptr == '=' ? -1 : -2;
      }
      line_ptr++;
      temp_ptr = line_ptr;
      while (*temp_ptr == ' ' || *temp_ptr == '\t')
         temp_ptr++;
      if (*temp_ptr == '\n')
         line_ptr = temp_ptr;   /* Pretend line blank. */
      else
      {
         formatted = TRUE;
         if (!had_forced_lf)
            *text_ptr++ = '\n';
      }
      if (in_block < 0)
      {
         in_block = -in_block;
         if (in_block == 3)
            *text_ptr++ = QUOTE_START;
         else
            *text_ptr++ = in_block == 1 ? BLOCK_START : CENTRE_START;
      }
   }

/* Check for the line being blank. */

   if (*line_ptr == '\n')
   {
      if (!had_forced_lf)
      {
         had_forced_lf = TRUE;
         *text_ptr++ = '\n';
      }
      lf_pending = TRUE;
      line_status = EOL;
      goto next_line;
   }

/* Check for null messages */

   if (*line_ptr == '>' && *(line_ptr + 1) == '$' && *(line_ptr + 2) == '<')
    {
       *text_ptr++ = SILENCE;
       line_ptr += 2;
       while(*(++line_ptr) == ' ');
       if (*line_ptr == '\n' || *line_ptr == '#' || *line_ptr == '{')
       {
          line_status = EOL;
          goto next_line;
       }
    }

/* If we are just spilling from one line to the next remember to insert
a space before the first token on this line, unless this is Platt's
source and a word is split over two lines, in which case remove the
trailing stored dash instead */

   if (had_forced_lf)
      had_forced_lf = FALSE;
   else
   {
      if (style < 10 && isalnum(*line_ptr) && *(text_ptr - 1) == '-')
        text_ptr--;
      else if (!formatted && *(temp_ptr = text_ptr - 1) != SWITCH_START &&
         *temp_ptr != SWITCH_BREAK && *temp_ptr != SWITCH_END &&
         (*line_ptr != SWITCH_START || style == 1) && 
         *line_ptr != SWITCH_BREAK && *line_ptr != SWITCH_END)
            *text_ptr++ = ' ';
   }
   escaped = 0;

/*   if (in_block == 2)
 *      while (*line_ptr == ' ' || *line_ptr == '\t')
 *         line_ptr++;
 */
    
next_char:

   if (text_ptr > text_top)
   {
      text_buf_len += TEXT_INIT_LEN;
      old_text_ptr = text_buf_ptr;
      if ((text_buf_ptr = (char *)realloc(text_buf_ptr, text_buf_len)) == NULL)
         gripe ("","Unable to extend text buffer.");
      text_ptr = text_buf_ptr + (text_ptr - old_text_ptr);
      text_top = text_buf_ptr + text_buf_len - 16;
      printf ("Text buffer size increased to %d.\n", text_buf_len);
   }

   if (escaped == 0)
   {
      if (in_line && *line_ptr == '"')
         goto store;
      if (*line_ptr == LOGICAL_ESCAPE)
         escaped = 1;
      else if (style < 10 && *line_ptr == '!' && *(line_ptr + 1) == '`')
      {
         *text_ptr++ = IGNORE_EOL;
         line_ptr += 2;
      }

      else if (*line_ptr == SWITCH_START)
         explicit_switch = TRUE;
      else if (*line_ptr == '>' && *(line_ptr + 1) == '$' && 
         *(line_ptr + 2) == '<')
      {
         line_ptr += 3;
         *text_ptr++ = SILENCE;
      }
      else if (*line_ptr == NEST_START && style >= 10)
      {
         line_ptr++;
         nest_ptr = nest_name;
         nest_len = 0;
         while (*line_ptr != NEST_END)
         {
            if (*line_ptr == ' ')
               gripe ("", "A blank in embedded text name!");
            if (*line_ptr == '\n')
               gripe ("", "Missing '}' to end nested text name!");
            if (nest_len >= sizeof (nest_name) - 1)
               gripe ("", "Nested text name too long!");
            *nest_ptr++ = *line_ptr++;
            nest_len++;
         }
         *nest_ptr = '\0';
         recase ('L', nest_name, nest_name, 80);
         if ((nest_text = fndsymb (SYMBOL, nest_name)) == NULL)
            gripe (nest_name, "Nested text name not known.");
         nest_type = nest_text -> type;
         (nest_text -> used_count)++;
         *text_ptr++ = NEST_TEXT;
         if (nest_type > TEXT)
            gripe (nest_name, "Not reducible to text.");
         if (nest_type == OBJ)
            *text_ptr++ = 0;
         else if (nest_type == LOC)
            *text_ptr++ = 1;
         else if (nest_type == VERB)
            *text_ptr++ = 2;
         else if (nest_type == VAR)
            *text_ptr++ = 3;
         else
            *text_ptr++ = 4;
         nest_type = nest_text -> refno;
         *text_ptr++ = nest_type / 256;
         *text_ptr++ = nest_type % 256;
         line_ptr++;
         if (*line_ptr == '\n')
         {
            line_status = EOL;
            goto next_line;
         }
         goto next_char;
      }
      else if (style >= 10 && *line_ptr == DWARVISH_TAG)
      {
         *text_ptr++ = DWARVISH;
         line_ptr++;
         goto next_char;
      }
   }
   else
      escaped = 0;
   
   if (*line_ptr != '\n')
   {
      *text_ptr++ = *line_ptr++;
      goto next_char;
   }

   while (*(text_ptr - 1) == ' ' && text_ptr > text_buf_ptr)
      text_ptr--;

   line_status = EOL;
   goto next_line;

store:
   if (text_ptr <= text_buf_ptr + 1)  /* Special case of null message */
   {
      if (!lf_pending)
         frag = 1;
      goto end_of_text;         /* Null text */
   }

   if (implicit_switch && explicit_switch)
      gripe ("","Explicit/implicit switch clash.");

   if (implicit_switch)
      *text_ptr++ = SWITCH_END;

   *text_ptr = '\0';
   text_len = text_ptr - text_buf_ptr;
   text_ptr = text_buf_ptr;
   if (implicit_switch)
   {
      text_ptr--;
      implicit_switch = FALSE;
   }

   escaped = 0;

   while (text_len-- && *(++text_ptr) != '\0')
   {
      if (escaped == 0)
      {
         if (*text_ptr == LOGICAL_ESCAPE)
         {
            escaped = 1;
            continue;
         }
         else if (*text_ptr == NEST_TEXT)
         {
            storchar (*text_ptr++);
            storchar (*text_ptr++);
            storchar (*text_ptr++);
         }
         else
         {
            if (*text_ptr == SWITCH_START &&
               (style != 2 || first_char))
            {
               doswitch(text_ptr, &states, (text_type && (*text_type & CYCLIC_TEXT)));
               continue;
            }
            first_char = 0;
            if (*text_ptr == '#')
            {
               if (text_type && style >= 10) 
                  *text_type |= QUALIFIER_MANDATORY;    /* Will need a qualifier */
               *text_ptr = HOLDER;
            }
            if (*text_ptr == '$' && style >= 11)
            {
               if (text_type) 
                  *text_type |= QUALIFIER_MANDATORY;    /* Will need a qualifier */
               *text_ptr = VHOLDER;
            }
            else if (*text_ptr == SILENCE)
               *text_ptr = '\0';
            else if (*text_ptr == '_' && style >= 10)
               *text_ptr = NBSP;
//            else if (*text_ptr == '<' && style >= 10)
//               *text_ptr = TAG_START;
//            else if (*text_ptr == '>' && style >= 10)
//               *text_ptr = TAG_END;
         }
      }
      escaped = 0;
      storchar (*text_ptr);
   }

end_of_text:
   if (!frag && in_block != 2) // Not a fragment and not centering a line
      storchar ('\n');
   if (in_block)
   {
      storchar (BLOCK_END);
      storchar ('\n');
   }
   storchar('\0');

   if (max_states)
      *max_states = states;
   return (in_line ? line_ptr - line : description);
}
