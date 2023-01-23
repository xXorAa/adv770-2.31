/* text.h (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 06 Feb 10   MLA           Added QUOTE_START.
 * 15 Mar 08   MLA           Version 12 changes.
 * 15 Oct 06   MLA           Eliminated redundand NEST_VAR.
 * 03 Mar 03   MLA           Adedd memory.
 * 26 Dec 01   MLA           Added text_lines.
 * 25 Nov 01   MLA           Added IGNORE_EOL.
 * 06 Oct 01   MLA           Added text_count and switch_count.
 * 14 Mar 01   MLA           Moved style definition to here frmo source.h.
 * 28 Feb 01   MLA           Added in-text Dwarvish. Added text types.
 * 06 Jan 01   MLA           Added CENTER_START.
 * 11 Dec 99   MLA           Added block and tag delimiters, and hard-space.
 * 31 Dec 98   MLA           Doubled VOC_INIT_LEN.
 * 30 Dec 90   MLA           Added voc_buf necesseries.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#ifndef FILE
#include <stdio.h>
#endif

extern struct node *storword (char *, int, int);
extern void clsfile (FILE *outfile, char *text);

#define TEXT_INIT_LEN  8192
#define LOGICAL_ESCAPE '\\'
#define SWITCH_START   '['
#define SWITCH_BREAK   '/'
#define SWITCH_END     ']'
#define NEST_START     '{'
#define NEST_END       '}'
#define DWARVISH_TAG   '%'
#define MAX_BREAKS     100
#define SW_START     '\037' // \037
#define SW_BREAK     '\036' // \036
#define HOLDER       '\035' // \035
#define SILENCE      '\034' // \034
#define IGNORE_EOL   '\032' // \032
#define NEST_TEXT    '\031' // \031
#define QUOTE_START  '\030' // \030
#define TAG_START    '\027' // \027
#define TAG_END      '\026' // \026
#define NBSP         '\025' // \025
#define BLOCK_START  '\024' // \024
#define BLOCK_END    '\023' // \023
#define CENTRE_START '\022' // \022
#define DWARVISH     '\021' // \021
#define VHOLDER      '\020' // \020

#define RANDOM_TEXT        1
#define INCREMENTING_TEXT  2
#define CYCLIC_TEXT        4
#define ASSIGNED_TEXT      8
#define TIED_TEXT         16
#define FRAGMENT_TEXT     32
#define INLINE_TEXT       64
#define MORPHING_TEXT     31

#define QUALIFIER_ALLOWED     512
#define QUALIFIER_MANDATORY (1024 + QUALIFIER_ALLOWED)

#define MAX_WORD_SIZE    128

extern int next_addr;
extern char *text_buf_ptr;
extern int text_buf_len;
extern FILE *text_file;
extern int plain_text;
extern int memory;
extern int text_count;
extern int switch_count;
extern int text_lines;
extern int key_mask;

#define VOC_INIT_LEN 8192
extern int next_vocaddr;
extern char *voc_buf_ptr;
extern int voc_buf_len;
extern char *voc_ptr;
extern char *voc_top;
