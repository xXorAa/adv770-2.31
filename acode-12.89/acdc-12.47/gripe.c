/* gripe.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 15 Mar 08   MLA           Version 12 changes.
 * 06 Mar 03   Stuart Munro  Include string.h.
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 22 Nov 90   MLA           Don't print null file name.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include <stdlib.h>
#include <string.h>

#include "acdc.h"
#include "game.h"
#include "const.h"
#include "line.h"
#include "source.h"
#include "output.h"

void gripe(char *error_token, char *error_message)
{
   char *rptr = raw_line;
   while (*rptr == ' ' || *rptr == '\t') rptr++;
   *(rptr + strlen (rptr) - 1) = '\0';
   
 fprintf (stderr, "STYLE %d\n", style);
   fprintf (stderr, "*ERROR* ");
   if (stage != -1)     /* I.e. not called from organise() */
   {
      fprintf (stderr, "in \"%s\"\n", rptr);
      if (*pathname[level] != '\0')
         fprintf (stderr, "%s (%d), line %d: ", pathname[level], level, 
            line_count[level]);
   }
   if (error_token && *error_token != '\0')
      fprintf (stderr, "%s - ", error_token);
   fprintf (stderr, "%s\n\n", error_message);
   fflush (code_file);
   exit (ERROR);
}

/*====================================================================*/

void deprecate( const char *directive, int from, int major)
{
   if (style >= from)
   fprintf (stderr, "%s, line %d: deprecated %s directive %s\n", 
      pathname[level], line_count[level], 
         major ? "major" : "minor", directive);
}
