/* output.h (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 09 Mar 03   MLA           Replaced trace with debug.
 * 31 Dec 01   MLA           Added xref.
 * 11 Dec 99   MLA           Upped initial condition buffer to 1K.
 * 20 Mar 94   MLA           Tracing now done dynamically.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#ifndef FILE
#include <stdio.h>
#endif

extern FILE *defs_file;
extern FILE *code_file;
extern FILE *xref_file;

extern int code_part;
extern int minor_count;
extern int debug;
extern int next_procno;
extern int xref;
