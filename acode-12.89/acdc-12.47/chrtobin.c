/* chrtobin.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include "acdc.h"

int chrtobin (char *cstring)
{
   int sign;
   int base;
   int value;
   char *raw_cstring;

   sign = 1;
   base = 10;
   value = 0;

   raw_cstring = cstring;
   if (*cstring == '\0')
      gripe (cstring,"Null number.");
   if (*cstring == '-')
      sign = -1;
   if (*cstring == '-' || *cstring == '+')
      cstring++;
   if (*cstring == '\0')
      gripe (raw_cstring,"A naked sign is not a number!");
   if (*cstring == '0')
      base = 8;
   while (*cstring != '\0')
   {
      if (*cstring < '0' || *cstring >= '0' + base)
         gripe (raw_cstring,"Not an octal or decimal number.");
      value = base * value + (*cstring++) - '0';
   }
   return (sign * value);
}
