/* domajor.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 08 Mar 22   MLA           Allowed for cpaces in game name.
 * 08 Aug 21   MLA           Replaced COMMA and SEMICOLON with barred names.
 * 30 Jul 21   MLA           Removed utf8 flag as no longer required.
 * 24 Jul 20   MLA           Use recase for recasing.
 * 17 Jul 20   MLA           Added utf8.
 * 02 Jul 20   MLA           Added CIF and CENDIF for Adv580.
 * 27 Jun 20   MLA           Added COMMA and SEMICOLON.
 * 21 Aug 16   MLA           Bug: Fixed skipping in-line text with text holders.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 02 Jan 15   MLA           Disallow DBNAME directive.
 * 18 May 13   MLA           Allowed in-line texts in all styles 
 *                             (for single turn mode).
 * 09 Apr 13   MLA           Ditched second arg of openout().
 * 09 Jan 11   MLA           Added in-line text parsing.
 * 11 Jan 10   MLA           Renamed getline() to nextline() to avoid a
 *                           new gcc header clash.
 * 14 Jul 09   MLA           Fixed gcc --pedantic warnings.
 * 22 Oct 08   MLA           Bug: fixed handling of the DATE directive.
 * 15 Mar 08   MLA           Version 12 changes.
 * 06 May 07   MLA           Added deprecated warnings.
 * 14 Feb 04   MLA           Converted longs to ints.
 * 24 Mar 03   MLA           Added 4th arg to gettxt().
 * 09 Mar 03   MLA           Replaced trace with debug.
 * 23 Feb 03   MLA           Preserve mask value.
 * 21 Feb 03   MLA           bug: Display full version string.
 * 20 Feb 03   MLA           Chage to code file naming conventions.
 * 10 Mar 02   MLA           bug: Write xref for parameter declarations.
 * 13 Jan 02   MLA           Pass "hidden" type parameters.
 * 12 Jan 02   MLA           bug: construct own parameter names.
 * 10 Jan 02   MLA           dominor() now takes an argument.
 * 01 Jan 02   MLA           bug: only zap local vars at code chunk start.
 * 30 Dec 01   MLA           Added call parameters code.
 * 18 Nov 01   MLA           Tag autop files with 2 digits.
 * 17 Nov 01   MLA           Bug: Corrected title construction.
 * 04 Nov 01   MLA           Construct a better default name.
 * 14 Mar 01   MLA           Replaced old_style with style.
 * 28 Feb 01   MLA           Allowed assigned text type.
 * 10 Jan 01   MLA           Allowed for text type specification.
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 31 Dec 98   MLA           Allowed array declarations.
 * 20 Mar 94   MLA           Tracing now done dynamically.
 * 18 Mar 94   MLA           Second arg to gettxt should be NULL, not 0!
 * 14 Mar 94   MLA           Corrected FLAGS type handling.
 * 12 Dec 91   MLA           Added the FRAGMENT directive.
 * 23 Feb 91   MLA           Allowed variable bit fields.
 * 30 Dec 90   MLA           Use voc_buf for intermediate vocabulary storage.
 * 29 Dec 90   MLA           Trapped for output file errors.
 * 27 Dec 90   MLA           Separated FLAGS and STATE from CONSTANT.
 * 26 Dec 90   MLA           STATE and FLAGS directives + new CONSTANT syntax.
 * 15 Sep 90   MLA           Initial coding.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "acdc.h"
#include "const.h"
#include "line.h"
#include "symbol.h"
#include "major.h"
#include "source.h"
#include "text.h"
#include "output.h"
#include "param.h"
#include "game.h"

int parser_word [] = {0, 0, 0, 0};
struct node *repeater = NULL;

int skip (int check_text)
{
   int qualifiers = 0;
   
   line_status = EOL;

   while (1)
   {
      if (nextline (IGNORE_BLANK) == EOF || (*line != ' ' && *line != '\t'))
         break;
      if (check_text == 1)
      {
         char *cptr = line;
         char lc = '\0';
         while (*cptr)
         {
            if (lc != '\\')
            {
               if (*cptr == '$' || *cptr == '#')
                  qualifiers |= QUALIFIER_MANDATORY;
               if (*cptr == '[' || *cptr == '{')
                  qualifiers |= QUALIFIER_ALLOWED;
               lc = *cptr;
            }
            else
               lc = '\0';
            cptr++;
         }
      }
      if (check_text == 2)
      {
         char autoname [32];
         struct node *np;
         int got_end;
         char *cptr = line; 
#ifndef MLA
         int lesc = 0;
         int quot = 0;
         char *inl = NULL;
         
         while (*cptr)
         {
            if (!lesc)
            {
               if (*cptr == '\\')
               {
                  lesc = 1 - lesc;
                  cptr++;
                  continue;
               }
               if (*cptr == '"')
               {
                  quot = 1 - quot;
                  cptr++;
                  if (!inl)
                     inl = cptr;
                  continue;
               }
               if (!quot)
               {
                  if (strchr ("*[(", *cptr) && style < 10)
                  {
                     *cptr = '\0';
                     break;
                  }
                  if (*cptr == '#' || (*cptr == '{' && style < 11))
                  {
                     *cptr = '\0';
                     break;
                  }
               }
            }
            else
               lesc = 0;
            cptr++;
         }
         if (!inl)
         {
            line_status = EOL;
            continue;
         }
         cptr = inl;
#else

         if ((cptr = strpbrk(line, style < 11 ? "#{" : "#")) != NULL)
            *cptr = '\0';
         if ((cptr = strchr(line, '"')) == NULL)
         {
            line_status = EOL;
            continue;
         }
#endif /* MLA */
         sprintf (autoname, "inline_%d_", ++inline_count);
         np = addsymb (SYMBOL, autoname, TEXT, inline_count);
         np -> inline_text = 1;
         got_end = 0;
         while (1)
         {
            char lc = '\0';
            cptr++;
            while (*cptr)
            {
               if (lc != '\\')
               {
                  lc = *cptr;
                  if (*cptr == '$' || *cptr == '#')
                     np -> text_type |= QUALIFIER_MANDATORY;
                  else if (*cptr == '[' || *cptr == '{')
                     np -> text_type |= QUALIFIER_ALLOWED;
                  if (*cptr == '"')
                  {
                     got_end = 1;
                     break;
                  }
               }
               else
                  lc = '\0';
               cptr++;
            }
            line_status = EOL;
            if (got_end)
               break;
            if (nextline (IGNORE_BLANK) == EOF || 
                (*line != ' ' && *line != '\t'))
            {
               line_status = BOL;
               break;
            }
            cptr = line;
         }
      }
      line_status = EOL;
   }
   return (qualifiers);
}

void domajor (void)
{
   int index;
   struct node *np;
   int refno;
   int value;
   int flag_type;
   int major_type;
   int type;
   int next_arg;
   char *chr;
   char *tag;
   char dummy_text [10];
   char proc_name [10];
   char prochead [MAXLINE];
   char proccond [MAXLINE];
   char proctemp [MAXLINE];

   static int next_dummy;
   static int last_stage = -1;
   
   extern void dominor (char *, char *);
   extern void opnsrc (char *, int);
   extern void organise (void);
   extern struct node *getnames (int, struct node *);

   line_ptr = line;
   if (isspace (*line_ptr))
      gripe ("","Major directives must start in column 1!");

   if ((np = parse (MAJOR)) == NULL)
      gripe (tp [0], "Unknown major directive.");

   index = 0;
   major_type = np -> refno;

   if (stage != last_stage)
   {
      last_stage = stage;
      next_dummy = 0;
      if (stage == 1)
         organise ();
   }
   
   if (stage == 1)    /* I.e. second pass! */
   {
      switch (major_type)
      {
         case STYLE:
         case NAME:
         case GVERSION:
         case DATE:
         case AUTHOR:
         case GAMEID:
         case NOUN:
         case ADJECTIVE:
         case PREPOSITION:
         case VERB:
         case NOISE:
         case VAR:
         case ARRAY:
         case SYNONYM:
         case DEFINE:
            line_status = EOL;
            return;

         case INCLUDE:
         case CONCLUDE:
            break;
            
         case STATE:
         case CONSTANT:
         case FLAGS:
            skip (0);
            return;              /* Preserving line status as BOL! */
            
         case PROCEDURE:
         case ACTION:
         case AT:
         case INIT:
         case REPEAT:
            zapparam ();
            if (minor_count >= CODE_CHUNK)
            {
               clsfile (code_file, "Automatic code");
               sprintf (proc_name, "adv%02d.c", ++code_part);
               if ((code_file = openout (proc_name)) == NULL)
                  gripe (proc_name, "Unable to open new code chunk.");
               fprintf (code_file, "#include \"adv0.h\"\n");
               fprintf (code_file, "#include \"adv3.h\"\n");
               minor_count = 0;
            }
            break;
   
         default:
            break;
      }
   }

   switch (major_type)
   {
      case DBNAME:
         gripe ("DBNAME", 
            "Obsolete directive!\n      Please replace with STYLE 10.\n");
         break;
      case INCLUDE:
      case CONCLUDE:
         if (level == MAXLEVEL - 1)
            gripe ("", "Includes nested too deeply.");
         opnsrc (tp [1], major_type == INCLUDE ? 1 : 0);
         break;

      case ARRAY:
         np = addsymb (SYMBOL, tp [++index], VAR, type_counts[VAR]);
         if (xref)
            write_ref ("ARRAY", tp [index]);
         if (tp [++index] == NULL)
            gripe ("", "Missing array size specification.");
         if ((value = atoi (tp [index])) <= 0)
            gripe (tp [index], "Invalid array size specification.");
         if (tp [++index] != NULL)
            gripe ("", "Invalid array declaration.");
         np -> state_count = value;
         type_counts[VAR] += value;
         break;
         
      case VAR:
         while (tp [++index] != NULL)
         {
            np = addsymb (SYMBOL, tp [index], VAR, type_counts[VAR]++);
            if (xref)
               write_ref (" VAR ", tp [index]);
         }
         break;

      case SYNONYM:
         deprecate ("SYNONYM", 10, 1);
         if ((np = fndsymb (TESTSYMBOL, tp [1])) != NULL)
         {
            getnames (np -> type, np);
            break;
         }           /* Otherwise assume a constant and fall through! */
            
      case STATE:
      case CONSTANT:
      case FLAGS:
         index = 1;
         value = -1;
         flag_type = -1;
         if (major_type == FLAGS)
         {
            if (tp [1] == NULL)
               flag_type = LAST_DEFAULT_FLAG;
            else 
            {
               if ((np = fndsymb (SYMBOL, tp [1])) == NULL)
                  gripe (tp [1], "Unknown symbol used as a flag type.");
               flag_type = np -> refno;
               if (flag_type != OBJFLAG && flag_type != LOCFLAG && 
                  flag_type != VARFLAG)
                     gripe (tp [1], "Illegal flag type.");
               if (flag_type != VARFLAG)
                  value = LAST_DEFAULT_FLAG;
            }
            line_status = EOL;
            if ((line_status = nextline (IGNORE_BLANK)) == EOF)
               return;
            if (*line_ptr != ' ' && *line_ptr != '\t')
               gripe ("", "FLAGS directive has no flag declarations!");
            if (flag_type != VARFLAG && 
               flag_field_size [flag_type] > LAST_DEFAULT_FLAG)
                  gripe (tp [1], 
                     "Only one set of this flag type allowed!");
            parse (NONE);
            index = 0;
         }

         while (TRUE)
         {
            chr = tp [index];
            if (*chr == '+')
            {
               if (major_type != FLAGS && flag_type != OBJFLAG && 
                  flag_type != LOCFLAG)
                     gripe ("", 
                        "Only object and place flags may have vocab entries.");

/* Adjective flags not in use yet, so for the moment ignore the vocabulary
 * entry request.
 */
               chr++;
            }
            if (isdigit (*chr) || *chr == '-')
            {
               if (major_type == FLAGS)
                  gripe (tp [index], 
                     "FLAGS may not be set to explicit values!");
               if (tp [index + 1] == NULL)
                  gripe ("", "Missing symbolic name.");
               value = chrtobin (tp [index]);
            }
            else
            {
               value++;
               index--;
            }
            if (major_type == FLAGS)
               flag_field_size [flag_type] = value;
            else if (major_type == STATE)
               if (value < 0)
                  gripe ("", "Negative state values not legal!");

            while (tp [++index] != NULL)
            {
               np = addsymb (SYMBOL, tp [index], major_type, value);
               if (xref)
               {
                  if (major_type == FLAGS)
                     tag = " FLG ";
                  else if (major_type == STATE)
                     tag = "STATE";
                  else
                     tag = "CONST";
                  write_ref (tag, tp [index]);
               }
            }
            line_status = EOL;
            if ((line_status = nextline (IGNORE_BLANK)) == EOF)
               return;
            if (*line_ptr != ' ' && *line_ptr != '\t')
               break;
            parse (NONE);
            index = 0;
         }
         return;          /* Preserve line_status as BOL ! */
	 
      case STYLE:
         if (style_set)
            gripe ("", "Repeated STYLE directive.");
         index = 1;
         style_set = 1;
         if (strcmp(tp[index], "a-code") == 0 ||strcmp(tp[index], "acode") == 0)
            index++;
         style = chrtobin (tp[index++]);
         if (style > DEFAULT_STYLE && style != 20)
            gripe ("",
               "Style higher than the current maximum!");
         if (style < 10 && style > 2)
            gripe ("", "Style values from 3 to 9 are meaningless.");
         break;
         
      case NAME:
         if (*title)
            gripe ("", "Repeated NAME directive.");
         strncpy (title, tp [1], sizeof (title) - 1);
         *(title + sizeof (title) - 1) = '\0';
         {
            char *cptr = title;
            while ((cptr = strpbrk (cptr, " \t")))
               *cptr++ = '_';
         }
         break;
         
      case UTF8:
         utf8 = 1;
         break;
         
      case GVERSION:
         if (*version)
            gripe ("", "Repeated VERSION directive.");
         strncpy (version, tp [1], sizeof (version) - 1);
         *(version + sizeof (version) - 1) = '\0';
         break;

      case DATE:
        if (*date)
           gripe ("", "Repeated DATE directive.");
        strncpy (date, tp [1], sizeof (date) - 1);
/*         if (tp [2])
 *         {
 *            strncat (date, " ", sizeof (date) - strlen (date) - 1);
 *            strncat (date, tp [2], sizeof (date) - strlen (date) - 1);
 *         }
 *         if (tp [3])
 *         {
 *            strncat (date, " ", sizeof (date) - strlen (date) - 1);
 *            strncat (date, tp [3], sizeof (date) - strlen (date) - 1);
 *         }
 */
         *(date + sizeof (date) - 1) = '\0';
         break;

      case AUTHOR:
         if (*author)
            gripe ("", "Repeated AUTHOR directive.");
         strncpy (author, tp [1], sizeof (author) - 1);
         *(author + sizeof (author) - 1) = '\0';
         break;

      case GAMEID:
         if (*gameid)
            gripe ("", "Repeated GAMEID directive.");
         strncpy (gameid, tp [1], 80);
         *(gameid + 79) = '\0';
          break;

      case NOISE:
         while (tp [++index] != NULL)
            storword (tp [index], major_type, next_vocaddr);
         break;

      case NOUN:
      case ADJECTIVE:
      case PREPOSITION:
      case VERB:
         np = getnames (major_type, NULL);
         if (np -> type == ACTION)
            np -> type = major_type;
         else if (np -> type != VERB)
            gripe (tp [1], "Already declared as other than a command word.");
         np -> refno = type_counts[VERB]++;
         break;

      case OBJ:
      case LOC:
         line_status = EOL;
         if (stage == 0)
         {
            np = getnames (major_type, NULL);
            if (np -> type == AT || np -> type == ACTION || np -> type == WORD)
               np -> type = major_type;
            else if (np -> type != major_type)
               gripe (tp [1], "Already declared as other than a place or an object.");
            np -> refno = type_counts[major_type]++;
            skip (0);
	 }
         else
         {
            int description = 1;
            int max_states = 0;
            int states = 0;

            char ch = *tp[1];
            if (ch == '-' || ch == '+' || ch == '!')
               tp[1]++;
// Allow for 1st synonym being a string.
            if (*tp[1] == '"' && tp[2] == NULL)
               gripe ("", "A string cannot be the only name!");
            np = fndsymb (SYMBOL, *tp[1] == '"' ? tp[2] : tp[1]);
            while (description > 0)
            {
               np -> text_addr [description - 1] = next_addr;
               description = gettxt (description, &states, NULL);
               if (max_states < states) max_states = states;
            }
            np -> state_count = max_states;
         }
         return;          /* Preserve line_status as BOL ! */

      case TEXT:
      case FRAGMENT:
         line_status = EOL;
         type = texttyp();

         if (type & FRAGMENT_TEXT)
            major_type = FRAGMENT;
         else if (major_type == FRAGMENT)
            type |= FRAGMENT_TEXT;
         
         if (tp[1] == NULL) /* Might have changed! */
         {
            sprintf (dummy_text, ".t%d", next_dummy++);
            tp [1] = dummy_text;
         }
      
         if (stage == 0)
         {
            np = addsymb (SYMBOL, tp [1], TEXT, type_counts[TEXT]++);
            if (xref && tp [1] != dummy_text)
               write_ref ((char *)(major_type == TEXT ? " TXT " : " FRG "), 
                  tp [1]);
            np -> text_type = type | skip (1);
         }
         else
         {
            np = fndsymb (SYMBOL, tp[2] ? tp[2] : tp[1]);
            np -> name_addr = next_addr; /* Sort of "name" */
            gettxt (0, &(np -> state_count), &(np -> text_type));
         }
         return;          /* preserve the BOL line_status! */

      case INIT:
      case REPEAT:
         tp [2] = NULL;
         tp [1] = major_type == INIT ? "INIT_PROC" : "REPEAT_PROC";

      case ACTION:
      case AT:
      case PROCEDURE:
         if (stage == 0)      /* First pass */
         {
            if ((np = fndsymb (TESTSYMBOL, tp [1])) == NULL)
               np = addsymb (SYMBOL, tp [1], major_type, -1);
            else if (major_type == AT && np -> type != AT && 
               np -> type != OBJ && np -> type != LOC)
                  gripe (tp[1], "Already defined as other than a place or an object.");
            else if (major_type == ACTION && np -> type != ACTION &&
               np -> type != VERB && np -> type != OBJ && np -> type != LOC && 
                  np -> type != NOUN && np -> type != PREP && np -> type != ADJ)
                     gripe (tp[1], "Already defined as other than a command word.");

            if (major_type == PROCEDURE)
            {
               int args = 0;
               index = 2;
               while (tp [index++]) args++;
               if (np -> arg_count < 0)
                  np -> arg_count = args;
               else if (np -> arg_count != args)
                  gripe (tp[1], "Inconsistent procedure argument count!");
	    }

            (np -> proc_count)++;
            if (xref)
               write_ref (" PRC ", tp [1]);
            skip (2);
            return;
         }
/*
 * Now for the second pass...
 */
         np = fndsymb (SYMBOL, tp[1]);
         if (major_type != PROCEDURE)
            (np -> used_count)++;
         if (debug)
            fprintf (code_file, "/* %s */\n", tp [1]);
         if (np -> proc_count > 1)
            (np -> proc_done)++;
         refno = np -> proc_base + (np -> proc_done);
         fprintf (code_file, "int p%d(", refno);
         next_arg = 0;
         if (tp [2] == NULL || major_type != PROCEDURE)
            fprintf (code_file, "void");
         else
         {
            for (index = 2; tp [index]; index++, next_arg++)
            {
               addparam (1, tp [index]);
               fprintf (code_file, "%sint typ%d,int par%d",
                  index == 2 ? "" : ",", index - 2, index - 2);
               if (xref)
                  write_ref (" ARG ", tp [index]);
            }
         }
         fprintf (code_file, ")\n{\n");
         if (debug)
         {
            strcpy (prochead, tp [0]);
            for (index = 1; tp [index]; index++)
            {
               strcat (prochead, " ");
               strcat (prochead, tp [index]);
            }
         }
         else
            *prochead = '\0';
         
         *proccond = '\0';
         index = 1;
         if (major_type == ACTION)
         {
            while (tp [++index] != NULL)
            {
               np = fndsymb (SYMBOL, tp [index]);
               if (np -> type > VERB)
                  gripe (tp [index], "Not a verb, place or object.");
               sprintf (proctemp, "if (!KEY(%d)) return 0;\n", np -> refno);
               strcat (proccond, proctemp);
            }
	 }
         dominor (prochead, proccond);
         fprintf (code_file, "return 0;\n}\n");
         return;

      case DEFINE:
         deprecate ("DEFINE", 10, 1);
         index = 0;
         while (tp [++index] != NULL)
         {
            np = fndsymb (SYMBOL, tp [index]);
            if (np -> type != VAR)
            {
               if (np -> type != LOC)
                  gripe (tp [index], "Only places can be defined!");
               if (fndsymb (VOCAB, tp [index]) == NULL)
               {
                  struct node *vp = storword (tp [index], LOC, next_vocaddr);
                  vp -> symbol = np;
               }
               if (xref)
                  write_ref ("(LOC)", tp [index]);
            }
         }
         break;

      case CIF:
         deprecate ("CIF", 10, 1);
         if (getconst(tp[1]) == 0)
         {
            while (1)       /* Skip to CENDIF */
            {
              line_status = EOL;
              if (nextline (IGNORE_BLANK) == EOF)
                 gripe(tp[0], "Missing CENDIF!");
              recase ('L', line, line, MAXLINE);
              if (strncmp(line, "cendif", 6) == 0)
                 break;
            }
         }
         break;
         
      case CENDIF:
         break;
         
      default:
         gripe (tp [0], "Unimplemented major directive.");
   }
   line_status = EOL;
   return;
}
