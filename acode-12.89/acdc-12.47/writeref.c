/* writeref.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 03 Mar 03   MLA           Removed non-ANSI C support.
 * 06 Mar 03   Stuart Munro  Include stdlib.h.
 * 10 Mar 02   MLA           Initial coding.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "source.h"
#include "output.h"

char xref_path [MAXLINE + 1];

void write_ref (char *tag, char *token)
{
   if (xref_file == NULL)
   {
      if ((xref_file = fopen (xref_path, "w")) == NULL)
      {
         fprintf (stderr, "Sorry, cannot open cross-reference file %s.\n", 
            xref_path);
         exit (1);
      }
   }
   fprintf (xref_file, "%24s   %s   %6d %s\n",
      token, tag, line_count [level], pathname [level]);
}
