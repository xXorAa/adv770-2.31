/* clsfile.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 29 Dec 90   MLA           Initial coding.
 *
 */

#include <stdio.h>
#include "acdc.h"

void clsfile (FILE *outfile, char *text)
{
   if (ferror (outfile))
   {
      perror ("Fatal!");
      gripe (text, "Unable to complete file.");
   }
   fclose (outfile);
   return;
}
