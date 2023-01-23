/* param.h (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 30 Dec 01   MLA          Initial coding.
 *
 */
 
#ifndef PARAM_DONE
#  define PARAM_DONE

   struct param_list
   {
      int in_use;
      int arg;
      char name [32];
      struct param_list *next;
   };
   
   extern void zapparam (void);
   extern void addparam (int, char *name);
   extern int iniparam (int);
   extern int  fndparam (char *name);
   
#endif /* PARAM_DONE */
