/* source.h (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 11 Jan 10   Stuart Munro  _WIN32_ should be _WIN32.
 *             MLA           Added __MACH__ for OS X.
 * 15 Mar 08   MLA           Version 12 changes.
 * 17 Nov 01   MLA           Added the source_* buffers.
 * 14 Mar 01   MLA           Replaced old_style with style and moved to text.h.
 * 06 Mar 94   MLA           Made INCLUDEs relative to umbrella source.
 * 15 Sep 90   MLA           Initial coding.
 *
 */
 
#ifndef FILE
#include <stdio.h>
#endif

#ifndef MAXLINE
#include "const.h"
#endif

#if defined(unix) || defined(__CYGWIN__) || defined(__MACH__)
#  define SEP '/'
#else
#  if defined(MSDOS) || defined (_WIN32)
#     define SEP '\\'
#  else
#     ifdef __50SERIES
#        define SEP '>'
#     else
#        define SEP '?'
#     endif
#  endif
#endif

extern int file_count;
extern int level;
extern int line_count [];
extern int total_lines;
extern int text_lines;
extern int text_count;
extern int switch_count;
extern char pathname [MAXLEVEL] [MAXLINE + 1];
extern FILE *infile [];
extern char out_stem [];
extern char source_stem [];
extern char source_file [];
extern char xref_path [];
extern int inline_count;
