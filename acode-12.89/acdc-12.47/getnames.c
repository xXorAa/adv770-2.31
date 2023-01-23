/* getnames.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 25 Feb 22   MLA           Bug: barred name convention is not for objects!
 * 20 Feb 22   MLA           Hid bar notation behind '-' prefix.
 * 31 Jul 21   MLA           Added barred names support.
 *                           Added more sytax checks.
 * 19 Feb 19   MLA           bug: store names following a minus-prefised one.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 11 May 13   MLA           bug: Fixed LOC spacing in cross-reference file.
 * 08 Jul 09   MLA           bug: Reinstate style 1 support.
 * 15 Mar 08   MLA           Version 12 changes.
 * 14 Feb 04   MLA           Converted longs to ints.
 * 14 Jul 02   MLA           BUG: Report primary names too!
 * 13 Jan 02   MLA           Added xref.
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 16 Mar 91   MLA           Suppress used count for . prefix.
 * 30 Dec 90   MLA           Use voc_buf for intermediate vocab storage.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include "acdc.h"
#include "const.h"
#include "line.h"
#include "symbol.h"
#include "major.h"
#include "output.h"
#include "source.h"
#include "text.h"

struct node *getnames (int major_type, struct node *gp)
{
   int index;
   int prefix;
   int current_type;
   int real_type;
   int used;
   int last_addr;
   char *tag;
   struct node *np;
   struct node *vp;
   
   if (*tp [1] == '=')
      gripe (tp [1], "No preceding word to equate to!");
   if (*tp [1] == '-' && tp[2] && major_type != OBJ)
      *tp [1] = '|';            /* It's a barred name! */
   index = 0;

   current_type = real_type = major_type;
   if (major_type == NOUN || major_type == ADJECTIVE || 
       major_type == PREPOSITION)  
          current_type = major_type = VERB;
   
   if ((np = gp) != NULL)
   {
      index = 1;
      last_addr = gp -> word_addr;
   }

   while (tp [++index] != NULL)
   {
      prefix = *tp [index];
      used = (prefix == '.');
      if (prefix == '+' ||prefix == '-' || prefix == '=' || prefix == '!')
         tp [index]++;
      else
         prefix = (major_type == LOC) ? '-' : '+';

      if (index == 1)
      {
         if ((np = fndsymb (TESTSYMBOL, tp [index])) == NULL || major_type == OBJECT)
            np = addsymb (SYMBOL, tp [index], current_type, -1);
         else if (np -> type > PROC)
            np -> type = major_type;
         if (used)
            np -> used_count = 1;
         
         if (xref)
         {
            if (real_type == LOC)
               tag = " LOC ";
            else if (real_type == OBJ)
               tag = " OBJ ";
            else if (real_type == SYNONYM)
               tag = "SYNON";
            else if (real_type == VERB)
               tag = " VRB ";
            else if (real_type == NOUN)
               tag = "NOUN  ";
            else if (real_type == ADJECTIVE)
               tag = " ADJ ";
            else if (real_type == PREPOSITION)
               tag = "PREP ";
            write_ref (tag, tp [index]);
         }
         
         if (prefix == '-' || prefix == '|')
            continue;
      }

      if (prefix == '"' && *tp[index + 1] != '=')
         gripe (tp [index + 1], 
           "A string pseudo-name must be followed by a = prefixed name!");
      if (np -> name_addr == -1)
         np -> name_addr = next_vocaddr;
      if (xref) 
      {
         if (real_type == LOC)
            tag = "place";
         else if (real_type == OBJ)
            tag = " obj ";
         else if (real_type == SYNONYM)
            tag = "synon";
         else if (real_type == VERB)
            tag = " vrb ";
         else if (real_type == NOUN)
            tag = "noun ";
         else if (real_type == ADJECTIVE)
            tag = " adj ";
         else if (real_type == PREPOSITION)
            tag = "prep ";
         write_ref (tag, tp [index]);
      }

      if (prefix == '!') tp [index]--;
      current_type = SYNONYM;            /* For the next loop! */

      if (prefix == '=')
         vp = storword (tp [index], major_type, last_addr);
      else
      {
         last_addr = next_vocaddr;
         vp = storword (tp [index], major_type, next_vocaddr);
      }
      vp -> symbol = np;
   }

   return (np);
}
