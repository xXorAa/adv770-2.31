/* openout.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 26 Dec 16   MLA           Modified licence header.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 25 Feb 16   MLA           Don't re-compute output stem: use out_stem.
 * 09 Apr 13   MLA           Ditched 2nd argument of openout().
 * 03 Aug 09   MLA           Extended copyleft notice to all non-adv550 games.
 * 06 Mar 03   Stuart Munro  Remove unused variables.
 * 04 Mar 03   MLA           Changed copyleft code to be unconditional.
 * 18 Nov 01   MLA           Added the copyleft code for adv660, adv770.
 * 30 Sep 00   MLA           Simplified directory serach.
 * 07 Aug 99   MLA           Initial coding.
 *
 */

#include <stdio.h>
#include <string.h>

#include "acdc.h"
#include "source.h"
#include "game.h"

FILE *openout (char *file)
{
   char *brk;
   char full_name [128];
   FILE *outfile;
   
   if (*out_stem == '\0')
   {
      sprintf(out_stem, "%sC%c", source_stem, SEP);
      if (*source_stem == '\0')
         sprintf (full_name, "C%c%s", SEP, file);
      else
         sprintf (full_name, "%sC%c%s", source_stem, SEP, file);
   
      if ((outfile = fopen (full_name, "wb")) == NULL)
      {      
         strcpy(out_stem, source_stem);
         if (*source_stem == '\0')
         {
            strcpy (full_name, file);
            *out_stem = '\0';
         }
         else
            sprintf (full_name, "%s%s", source_stem, file);

         outfile = fopen (full_name, "wb");   
      }
   }
   else
   {
      sprintf(full_name, "%s%s", out_stem, file);
      outfile = fopen (full_name, "wb");
   }

   if (outfile == NULL)
   {
      fprintf (stderr, "%s -- unable to open file!\n", full_name);
      exit (1);
   }

   if (*title && *author)
   {
      brk = file + strlen (file) - 2;
      if (*brk == '.' && (*(brk + 1) == 'c' || *(brk + 1) == 'h'))
      {
         fprintf (outfile, "/* %s: %s - copyright %s %s. Licensed under\n", file,
            title, author, datbuf);
         fprintf (outfile, " * GPL (version 3 or later) or the Modified BSD Licence, whichever\n");
         fprintf (outfile, " * is asserted by the supplied LICENCE file.*/\n\n");
      }
   }

   return (outfile);
}
