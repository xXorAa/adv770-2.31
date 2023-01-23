/* acdc.h (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 */

extern char author [40];
extern char datbuf [];
extern int quiet;
extern int stage;
extern int swap;
extern char *acdc_version;
extern int query_used;
#ifndef __MACH__
#include <malloc.h>
#endif /* __MACH__ */
#include <stdlib.h>
extern int nextline (int key);
extern int gettxt (int description, int *max_states, int *text_type);
extern void gripe (char *error_token, char *error_message);
extern void deprecate (const char *directive, int from, int major);
extern void storchar (int ch);
extern void doswitch (char *text_ptr, int *max_states, int cycle);
extern void write_ref (char *tag, char *token);
#ifdef EOF
   extern FILE *openout(char *name);
   extern void openfrst (char *file_spec);
#endif /* EOF */
