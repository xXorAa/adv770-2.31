/* doswitch.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 21 Sep 08   MLA           Use LCM max states for cycled texts.
 * 15 Mar 08   MLA           Version 12 changes.
 * 14 Mar 08   MLA           Fixed switch offsets!
 * 11 Jan 03   MLA           Allowed nested text to be a proc.
 * 03 Dec 02   MLA           BUG: Allow for nested texts in switches!
 * 02 Oct 02   MLA           Check for single component switches.
 * 04 Nov 01   MLA           Added the "same as" switch notation.
 * 06 Oct 01   MLA           Added switch_count.
 * 11 Dec 99   MLA           Don't count logical escapes in switch length!
 * 24 Jul 99   MLA           Fixed compiler warnings.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include "acdc.h"
#include "text.h"

void doswitch (char *text_ptr, int *max_states, int cycle)
{
   int breaks [MAX_BREAKS];
   int states = 0;
   int offset = 0;
   int escaped = 0;
   int in_tag = 0;

   switch_count++;
   if (*(text_ptr + 1) == '=' && *(text_ptr + 2) == SWITCH_BREAK)
      gripe ("", "First component of a text switch may not be '='!");
   while (*(++text_ptr) != '\0')
   {
      offset++;
      if (escaped == 0)
      {
         if (*text_ptr == LOGICAL_ESCAPE)
         {
            escaped = 1;
            offset--;
            continue;
         }
         if (*text_ptr == '<')
            in_tag = 1;
         else if (*text_ptr == '>')
            in_tag = 0;
         else if (*text_ptr == NEST_TEXT)
         {
            text_ptr += 3;
            offset += 3;
            continue;
         }
         else if (*text_ptr == SWITCH_BREAK && in_tag == 0)
         {
            *text_ptr = SW_BREAK;
            if (states == MAX_BREAKS - 2)
               gripe ("","Too many switch breaks.");
            if (*(text_ptr + 1) == '=' && 
               (*(text_ptr + 2) == SWITCH_BREAK || 
                *(text_ptr + 2) == SWITCH_END))
            {
               text_ptr++;
               offset++;
               if (states)
                  breaks [states] = breaks [states - 1];
               else
                  breaks [states] = 0;
               states++;
            }
            else
               breaks [states++] = offset;
         }
         else if (*text_ptr == SWITCH_END)
         {
            *text_ptr = SW_BREAK;
            breaks [states++] = offset;
            break;
         }
      }
      escaped = 0;
   }
   if (*text_ptr == '\0')
   {
      *text_ptr = SW_BREAK;
      *(++text_ptr) = '\0';
      breaks [states++] = ++offset;
   }
   
   if (states == 1)
      gripe ("", "Single component text switch!");

   if (cycle && max_states && *max_states && *max_states != states)
   {
      int a = *max_states;
      int b = states;
      while (a != b)
      {
         if (a < b) a += *max_states;
         else       b += states;
      }
      *max_states = a;
   }

   if (*max_states < states) *max_states = states;

   storchar (SW_START);
   storchar (states);
   for (offset = 0; offset < states; offset++)
   {
      storchar (breaks [offset] / 256);
      storchar (breaks [offset] % 256);
   }
   return;
}
