/* storchar.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 31 Jul 09   MLA           BUG: text file screwed up in plain mode!
 * 09 Mar 03   MLA           Store as binary or ASCII data depending on 
 *                           value of memory. 
 * 03 Mar 03   MLA           Store as ASCII data.
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include "text.h"
#include "game.h"

void storchar (int ch)
{
/*   ch &= 255; */
   if (plain_text)
   {
      if (memory == 3)
         fprintf (text_file,"%s%d", 
            (next_addr + 1) % 16 == 0 ? ",\n" : ",", ch);
      else
         fputc(ch, text_file);
   }
   else
   {
      int mask;

      if (*(++gameid_ptr) == '\0')
         gameid_ptr = gameid;
      mask = (next_addr >> 4) & 127;
      if (mask == 0) 
         mask = next_addr & 127;
      if (mask == 0)
         mask = 'X';
      mask = (17 * mask + 13) & 127;
      if (memory == 3)
         fprintf (text_file, "%s%d", 
            (next_addr + 1) % 16 == 0 ? ",\n" : ",", ch ^ *gameid_ptr ^ mask);
      else
         fputc(ch ^ *gameid_ptr ^ mask, text_file);
   }
   next_addr++;
   return;
}
