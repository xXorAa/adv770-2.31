 /* parse.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 24 Jul 21   MLA           Allowed text fragments for object synonyms.
 * 24 Jul 20   MLA           Use new, UTF8-capabale version of recase().
 * 01 Jul 20   MLA           Allowed for style 2 (Adv580).
 * 07 Mar 16   MLA           Bug: In-line automatic text names can get too long.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 28 Feb 16   MLA           BUG: Fixed buffer overrun in the inline text fudge.
 * 04 Jan 15   MLA           BUG: Hendle CR-terminated lines correctly.
 * 02 Dec 13   MLA           BUG: Take care with in-line texts in style 1!
 * 09 Jan 11   MLA           Added in-line text parsing.
 * 14 Jul 09   MLA           Fixed gcc --pedantic warnings.
 * 15 Mar 08   MLA           Version 12 changes.
 * 19 Aug 04   MLA           Added FREE_ARG.
 * 03 Mar 03   MLA           Use new-style get_token().
 * 06 Nov 01   MLA           Fiddle FULLDISP for Platt-style A-code.
 * 17 Oct 01   MLA           Improved compatibility with Platt's A-code.
 * 03 Dec 00   MLA           Allowed '#' as a comment delimiter.
 * 09 Aug 99   MLA           Allowed for \r in sources imported from Windows.
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 26 Dec 90   MLA           Support for new CONSTANT etc syntax.
 * 15 Sep 90   MLA           Initial coding.
 *
 */
 
#include <stdio.h>
#include <string.h>

#include "acdc.h"
#include "game.h"
#include "const.h"
#include "line.h"
#include "symbol.h"
#include "major.h"
#include "text.h"
#include "source.h"

char *get_token(char **cstring, char *delims)
{
   char *cptr;
   char *token = *cstring;

   if (! *token)
      return (NULL);

   while ((cptr = strpbrk(token, delims)) == token)
      (token)++;

   if (cptr)
   {
      *cptr++ = 0;
      while (*cptr == ' ' || *cptr == '\t')
        cptr++;
   }
      
   *cstring = cptr;

   return(token);
}

/*====================================================================*/

struct node *parse(int type)
{
   int index = 0;
   struct node *np;
   char *cptr = line;
   int minargs;
   int direct_call = 0;

   strcpy (raw_line, line);
   recase ('L', line, line, MAXLINE);
   tp [1] = NULL;
   if ((tp[0] = get_token(&cptr, " ,\t\r\n")) == NULL)
      gripe ("","Null directive???");
   if (type != NONE)
   {
      if ((np = fndsymb(type, tp[0])) == NULL)
      {
         if (type != MINOR || 
            (np = fndsymb(TESTSYMBOL, tp[0])) == NULL)
               return (NULL);
         direct_call = 1;
      }
      if (direct_call == 0 && np -> max_args == REST)
      {
         cptr = raw_line + (cptr - line);
         cptr += strspn (cptr, " ,\r\n");
         tp [1] = cptr;
         cptr += strlen(cptr) - 1;
         if (*cptr == '\n' || *cptr == '\r') *cptr = '\0';
         if (! *tp[1])
            gripe (tp[0], "Missing \"rest of line\" argument.");
         return (np);
      }
   }

   while (cptr)
   {
//
// Objects and locations can have mixed case strings in place of some names 
//(for echoing).
//
      int text_name = type == MAJOR && np->refno < 2 && *cptr == '"';
      int tkstart;
            char *delim = text_name ? "\"\n\r" : ", \n\r";
      if (text_name) {  cptr++; tkstart = cptr - line;}
      if ((tp[++index] = get_token(&cptr, delim)) == NULL)
          break;
      if (text_name)
      {
        strncpy(tp[index], raw_line + tkstart, strlen(tp[index]));
        tp[index]--; // Include the leading ", to suppress addsymb validation
      }
      if (style < 10)
      {
         if (strcmp (tp[index], "object") == 0) 
            tp[index] = "objflag";
         else if (strcmp (tp[index], "place") == 0) 
            tp[index] = "placeflag";
         else if (strcmp (tp[index], "verb") == 0) 
           tp[index] = "verbflag";
         else if (strcmp (tp[index], "variable") == 0) 
            tp[index] = "varflag";
         else if (strcmp (tp[index], "fulldisp") == 0) 
            tp[index] = "fulldisplay";
      }

      if (index > ANY_NUMBER)
         gripe ("","*Far* too many arguments!");
      if (strchr ("*[(", *tp[index]) && style < 10)
      {
         if (style <= 1) style = 2;
         tp[index] = NULL;
         break;
      }
      if (! *tp[index] || *tp[index] == '#' || 
         (*tp[index] == '{' && style < 11))
      {
         tp[index] = NULL;
         break;
      }

//
// For minor directives, check 1st arg to be an in-line text.
//
      if (type == MINOR && *tp[index] == '"' && (style >= 10 || index == 1))
      {
         struct node *np;
         char autoname [32];
         char tmpline [MAXLINE];
         char *aptr;
         int offset;
         int tail;
         
         sprintf (autoname, "inline_%d_", ++inline_count);
         np = fndsymb (SYMBOL, autoname);
         np -> text_type = 0;
         np -> name_addr = next_addr;
         offset = tp[index] - line;
         memcpy (tmpline, line, offset);
         strcpy (tmpline + offset, autoname);
         aptr = tp[index] + 1;
         while (
            (*aptr == 'c' || *aptr == 'i' || *aptr == 'r' || *aptr == 'f') &&
               *(aptr + 1) == ':')
         {
            if (*aptr == 'f')
            {
               if (np -> text_type & FRAGMENT_TEXT)
                  gripe("", "Repeated 'f:' in inline text definition.");
               np -> text_type |= FRAGMENT_TEXT;
            }
            else
            {
               if ( np -> text_type & MORPHING_TEXT)
                  gripe ("", "Multiple inline text typifiers.");
               if (*aptr == 'r')
                  np -> text_type |= RANDOM_TEXT;
               else if (*aptr == 'c')
                  np -> text_type |= CYCLIC_TEXT;
               else if (*aptr == 'i')
                  np -> text_type |= INCREMENTING_TEXT;
            }
            aptr += 2;
         }
         memcpy (line + 1, raw_line + (aptr - line), MAXLINE - offset);
         *line = ' ';
         line_status = BOL;
         np -> text_type |= INLINE_TEXT;
         tail = gettxt (0, &(np -> state_count), &(np -> text_type));
         offset += strlen (autoname) + 1;
         strcpy (tmpline + offset, line + tail + 1);
         recase ('L', tmpline + offset, 
           tmpline + offset, MAXLINE - offset);
         memcpy (line, tmpline, MAXLINE);
         cptr = tp[index] + strlen(tp[index]) + 1;
         line_status = EOL;
      }
   }

   if (type == NONE)
      return NULL;
   if (direct_call == 0)
   {
      index--;
      minargs = np -> min_args;
      if (minargs >= FREE_ARG)
         minargs -= FREE_ARG - 1;
      if (index < minargs)
         gripe (tp[0],"Not enough arguments.");
      if (index > np -> max_args)
         gripe (tp[0],"Too many arguments.");
   }
   return (np);
}
