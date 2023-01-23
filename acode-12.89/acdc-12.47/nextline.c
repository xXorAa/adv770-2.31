/* getline.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 11 Oct 18   MLA           Bug: Allow for Windows style line endings.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 10 Jan 15   MLA           Bug: Make sure all lines are terminated by \n.
 * 04 Jan 15   MLA           Bug: fixed checking for blank lines.
 * 11 Jan 10   MLA           Renamed getline() to nextline() to avoid a
 *                           new gcc header clash.
 * 15 Mar 08   MLA           Version 12 changes.
 * 09 Mar 03   MLA           Replaced trace with debug.
 * 25 Feb 01   MLA           Don't count comment or blank lines towards total.
 * 03 Dec 00   MLA           Allowed '#' as a comment delimiter.                
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 20 Mar 94   MLA           Added source tracing.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include <string.h>
#include <ctype.h>

#include "const.h"
#include "line.h"
#include "source.h"
#include "output.h"

int nextline (int key)
{
   int len;
   line_ptr = line;

next_line:
   if (line_status == EOL)
   {
      while (level >= 0)
      {
         if (fgets (line, MAXLINE, infile [level]) != NULL) break;
         fclose (infile [level]);
         infile [level] = NULL;
         if (--level < 0)
         {
            line_status = EOF;
            return (EOF);
         }
      }
      line_count [level]++;
      len = strlen (line) - 1;
      if (*(line + len -1) == '\r')
         *(line + len - 1) = ' ';
      if (*(line + len) != '\n')
      {
         *(line + (len++)) = '\n';
         *(line + len) = '\0';
      }
//      if (debug > 1)
//      {
//         len = strlen (line) - 1;
//         *(line + len) = '\0';
//         fprintf (code_file, "/* %s */\n", line);
//         *(line + len) = '\n';
//      }
      if (*line_ptr == '*' || *line_ptr == '#')
         goto next_line;   /* Ignore comment lines */
      if (key == IGNORE_BLANK)
      {
        char *lptr = line;
        while (isspace(*lptr))
           lptr++;
        if (!*lptr)
          goto next_line;
      }
      total_lines++;
   }
   line_status = BOL;
   return (OK);
}
