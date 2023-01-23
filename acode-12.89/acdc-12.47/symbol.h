/* symbol.h (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 15 Mar 08   MLA           Version 12 changes.
 * 03 Sep 06   MLA           Bug: longs should be ints.
 * 23 Dec 05   MLA           Bug: roots[] should be long, not int!
 * 15 Jan 05   MLA           Added the 'auto' flag.
 * 09 Jan 01   MLA           Allowed for active text types.
 * 13 Mar 94   MLA           Made conditional.
 * 15 Sep 90   MLA           Initial coding 
 *
 */

#ifndef SYMBOL_DONE

#  define SYMBOL_DONE


/* Symbol searching stuff. */

#define NONE                -1
#define MAJOR                0
#define MINOR                1
#define SYMBOL               2
#define VOCAB                3
#define ROOT_MASK            3
#define TESTMINOR            1 + 32
#define TESTSYMBOL           2 + 32
#define AUTOSYMBOL           2 + 64

#  ifndef NULL
#     include <stdio.h>
#  endif

   extern int got_comma;
   extern int got_semicolon;
   extern int vocab_count;
   extern int type_counts[];
   extern int type_base[];
      
   struct node 
   {

/* General stuff */

      char *name;            /* Symbol name */
      int type;              /* Type of node */
      int refno;             /* Type-independent node id */
      int state_count;       /* Number of states for objects, places and texts */
      int used_count;        /* Number of uses of this symbol */
      int auto_flag;         /* An automatically defined symbol */

/* Text-related stuff */

      int text_addr[3];      /* Text address */
      int name_addr;         /* OBJECT/PLACE/VERB name or TEXT name */
      int text_type;         /* Types like plain, auto-increment, random... */
      int inline_text;       /* True iff text is in-line */

/* Vocabulary related stuff */

      int voc_addr;         /* Vocabulary word address */
      int word_addr;        /* Vocabulary full word address */
      int word_type;        /* Type mask (noun, verb, adjective...) */
      struct node *symbol;  /* Pointer to a SYMBOL node */

/* Procedure related stuff */

      int proc_base;        /* Base for counting off instances */
      int proc_count;       /* Number of separate procedure instances */
      int proc_done;        /* Number of instances already written off */
      int arg_count;        /* Number of procedure arguments */

/* Directive related stuff */

      int min_args;          /* Minimal number of arguments */
      int max_args;          /* Maximal number of arguments */

   } ;
      
   extern int *roots[];
   extern int flag_field_size[];

   extern struct node *entname;
   extern struct node *fndsymb(int, char *);
   extern struct node *addsymb(int, char *, int, int);

#endif /* SYMBOL_DONE */
