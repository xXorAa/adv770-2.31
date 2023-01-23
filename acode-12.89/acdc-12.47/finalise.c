/* finalise.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 26 Feb 22   MLA           Don't complain about unised barred words.
 * 10 Nov 21   MLA           REPEAT_PROC no longer ADVLIB sensitive. The
 *                           PROMPTED flag of CONTEXT used instead for
 *                           all single-turn builds (CGI and library)
 * 23 Jun 20   MLA           Moved here writing of VOCAB_SIZE from organise.c.
 * 23 Aug 16   MLA           REPEAT_PROC is now ADVLIB sensitive.
 * 03 Apr 16   MLA           Eliminated setjmp/lomgjmp calls in generated code.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 09 Apr 13   MLA           Ditched 2nd arg of openout().
 * 22 Jul 09   MLA           Optionally suppressed unused symbol warnings.
 * 21 Jul 09   MLA           Added the VERSION comment to adv1.h.
 * 14 Jul 09   MLA           Fixed gcc --pedantic warnings.
 * 04 Jul 09   MLA           Bug: fixed sizes of allocated memory chunks.
 * 29 Jan 09   MLA           Bug: unfixed dcount for style < 11.
 * 23 May 08   MLA           bug: fixed dcount value.
 * 15 Mar 08   MLA           Version 12 changes.
 * 15 Jan 05   MLA           Use the auto flag for checking lack of use.
 * 06 Mar 03   Stuart Munro  Fix non-ANSI process_proc args declaration.
 * 20 Feb 03   MLA           Chage to code file naming conventions.
 * 07 Jan 03   MLA           Use btree instead of tsearch.
 * 02 Jan 03   MLA           bug: removed a redundant arg to fprintf.
 * 13 Jan 02   MLA           Pass "hidden" type parameters.
 * 30 Dec 01   MLA           Added proc arguments code.
 * 18 Nov 01   MLA           Autop* files now tagged with 2 digits.
 * 17 May 01   MLA           Defined fake() in autod3.h.
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 20 Mar 94   MLA           Declare umbrella functions as ints.
 * 29 Dec 90   MLA           Trapped for output file errors.
 * 22 Nov 90   MLA           Own tsearch () - some systems don't have it.
 * 15 Sep 90   MLA           Initial coding.
 *
 */
 
#include <stdio.h>
#include <string.h>

#include "acdc.h"
#include "game.h"
#include "text.h"
#include "btree.h"
#include "symbol.h"
#include "output.h"
#include "major.h"
#include "const.h"

int *proc_array;
int *proc_args;
int *proc_arr_ptr;

int node_count;
int tcount;
int dcount;
int *text_info;
int *text_base;
int *brief_base;
int *int_base;
int *detail_base;
int base_voc_addr;
int key_mask;
int *ent_addr;

/*====================================================================*/

void show_node (struct node *np)
{
   printf ("Node name %s\n", np -> name);
   printf ("   type %d\n", np -> type);
   printf ("   refno %d\n", np -> refno);
   printf ("   state_count %d\n", np -> state_count);
   printf ("   used_count %d\n", np -> used_count);
   printf ("   auto_flag %d\n", np -> auto_flag);
   printf ("   text_addr[0] %d\n", np -> text_addr[0]);
   printf ("   text_addr[1] %d\n", np -> text_addr[1]);
   printf ("   text_addr[2] %d\n", np -> text_addr[2]);
   printf ("   name_addr %d\n", np -> name_addr);
   printf ("   text_type %d\n", np -> text_type);
   printf ("   voc_addr %d\n", np -> voc_addr);
   printf ("   word_addr %d\n", np -> word_addr);
   printf ("   word_type %d\n", np -> word_type);
   printf ("   symbol %s\n", (np -> symbol) ? (np -> symbol) -> name : "");
   printf ("   proc_base %d\n", np -> proc_base);
   printf ("   proc_count %d\n", np -> proc_count);
   printf ("   proc_done %d\n", np -> proc_done);
   printf ("   arg_count %d\n", np -> arg_count);
   printf ("   min_args %d\n", np -> min_args);
   printf ("   max_args %d\n", np -> max_args);
   printf ("........................................\n");
}

/*====================================================================*/

void process_text(struct node *np)
{
   int refno;
   int *array_ptr;
   int type = np -> type;

   if (type < PROCEDURE)
   {
      refno = np -> refno;
      if (type == TEXT)
      {
         int trefno = refno - type_base [TEXT];
         *(text_info + 2 * trefno)     = np -> text_type & MORPHING_TEXT;
         *(text_info + 2 * trefno + 1) = np -> state_count;
      }
      if (xref_file)
         fprintf (xref_file, "+ %d %s\n", refno, np -> name);
      *(text_base + refno) = np -> name_addr;
      if (type != TEXT)
         *(text_base + refno) += base_voc_addr;
      if (type <= LOC)
      {
         array_ptr = np -> text_addr;
         *(brief_base + refno) = *array_ptr++;
         if ((*(int_base + refno) = *array_ptr++) == -1L)
            *(int_base + refno) = *(brief_base + refno);
         if ((*(detail_base + refno) = *array_ptr) == -1L)
            *(detail_base + refno) = *(int_base + refno);
      }
   }
}

/*====================================================================*/

void process_voc_refno (struct node *np)
{
   int refno;

   if (np -> type <= VERB)
      refno = np -> refno = (np -> symbol) -> refno;
   else
      refno = 0;

   fprintf (defs_file, "%4d, ", refno);
   if (++node_count == 11)
   {
      node_count = 0;
      fputc ('\n', defs_file);
   }
   return;
}

/*====================================================================*/

void process_voc_type(struct node *np)
{
   fprintf (defs_file, "%4d, ", np -> type);
   if (++node_count == 11)
   {
      node_count = 0;
      fputc ('\n', defs_file);
   }
   return;
}

/*====================================================================*/

void process_voc_addr(struct node *np)
{
   fprintf (defs_file, "%8dL, ", 
      base_voc_addr + np -> voc_addr);
   if (++node_count == 7)
   {
      node_count = 0;
      fputc ('\n', defs_file);
   }
   return;
}

/*====================================================================*/

void process_voc_word(struct node *np)
{
   fprintf (defs_file, "%8dL, ", 
      base_voc_addr + np -> word_addr);
   if (++node_count == 7)
   {
      node_count = 0;
      fputc ('\n', defs_file);
   }
   return;
}

/*====================================================================*/

void process_ent_name(struct node *np)
{
   static int node_count = 0;
   char *nptr = np -> name;
   int refno = np -> refno;
   int type = np -> type;
   if (type < 5)
   {
// fprintf(stderr, "%d (%d): %s\n", refno, type, nptr);
      *(ent_addr + refno) = next_addr;
      while (1)
      {
         storchar (*nptr);
         if (!*nptr) break;
         nptr++;
      }
   }
}

/*====================================================================*/

void dump_array (int *addr, int count, char *pattern, int group)
{
    int *base;
    int tokens;

    tokens = 0;
    base = addr;
    while(count-- > 0)
    {
       fprintf (defs_file, pattern, *addr++);
       tokens++;
       if (tokens == group)
       {
          tokens=0;
          fputc ('\n', defs_file);
       }
    }
    free(base);
    return;
}

/*====================================================================*/

static void process_proc (struct node *np)
{
   int i, j;
   int procno = np -> proc_base;
   int refno  = np -> refno;
   int type   = np -> type;
   int count  = np -> proc_count;

   if ((quiet & 2) == 0 && style > 0 && np -> used_count == 0 && 
      *(np -> name) != '.' && (np -> auto_flag) == '\0' && 
      *(np -> name) != '|' && strncmp (np -> name, "spare..", 7))
         printf ("   %-22s symbol defined but not used.\n", np -> name);

   if (count == 0) return;

   if (type == PROCEDURE)
      *(proc_args + procno) = np -> arg_count;
   if (type < PROCEDURE)
      *(proc_array + refno) = procno;
   if (count == 1) return;

   fprintf (code_file, "int p%d(", procno);
   if ((np -> arg_count) > 0)
      for (i = 0; i < (np -> arg_count); i++)
         fprintf (code_file, "%sint typ%d,int par%d", i ? "," : "", i, i);
   fprintf (code_file, ")\n{\n");      
   if (strcmp (np -> name , "REPEAT_PROC") == 0)
   {
//      fprintf (code_file, "#if ADVLIB\n   rep = 0;\n");
//      for (j = 1; j <= (np -> proc_count); j++)
//      {
//         fprintf (code_file, 
//            "   if (nrep < %d) { if (p%d() || loop) return 0; rep = %d; }\n",
//               j, procno + j, j);
//      }
//      fprintf (code_file, "#else\n");
      for (j = 1; j <= (np -> proc_count); j++)
         fprintf (code_file, "   if (p%d() || loop) return 0;\n", procno + j);
//      fprintf (code_file, "#endif /* ADVLIB */\n");
   }
   else
   {
      for (j = 1; j <= (np -> proc_count); j++)
      {
         fprintf (code_file, "   if (p%d(", procno + j);
         if (np -> arg_count > 0)
            for (i = 0; i < (np -> arg_count); i++)
               fprintf (code_file, "%styp%d,par%d", i ? "," : "", i, i);
         fprintf (code_file, ") || loop) return 0;\n");         
      }
   }
   fprintf (code_file, "   return 1;\n}\n");
   return;
}

/*====================================================================*/

void finalise (void)
{
   char proc_name [20];
   int proc_count;
   int count;
   int index;

#ifdef DEBUG
{ printf ("+++ SYMBOL +++\n", index); btspan (SYMBOL, show_node); }
{ printf ("+++ VOCAB +++\n",  index); btspan (VOCAB,  show_node); }
fflush (stdout);
#endif

   base_voc_addr = next_addr;
   voc_top = voc_ptr;
   voc_ptr = voc_buf_ptr;
   while (voc_ptr < voc_top)
      storchar(*voc_ptr++);

   if (entname)
   {
      ent_addr = (int *) calloc(type_base[TEXT + 1], sizeof(int));
      btspan(SYMBOL, process_ent_name);
   }
   
   if (memory == 3)
      fprintf (text_file, "};\n");
   clsfile (text_file, "Text");

   fprintf (defs_file, "#define VOCAB_SIZE %d\n", vocab_count);
   fprintf (defs_file, "#define TEXT_BYTES %d\n", next_addr);
   fprintf (defs_file, "#define USEQUERY %d\n", query_used);
   fprintf (defs_file, "#endif\n");
   clsfile (defs_file, "adv1.h");     /* Ahhh.... done at last! */

/* Write the vocabulary include file */

   if ((defs_file = openout("adv2.h")) == NULL)
      gripe ("adv2.h","Unable to open (adv2.h).");

   fprintf (defs_file, "short voc_refno[] = {\n");
   node_count = 0;
   btspan(VOCAB, process_voc_refno);
   fprintf (defs_file, "   0};\nshort voc_type[] = {\n");
   node_count = 0;
   btspan(VOCAB, process_voc_type);
   fprintf (defs_file, "   0};\nint voc_addr[] = {\n");
   node_count = 0;
   btspan(VOCAB, process_voc_addr);
   fprintf (defs_file, "   0};\nint voc_word[] = {\n");
   node_count = 0;
   btspan(VOCAB, process_voc_word);
   fprintf (defs_file, "   0};\n");

   clsfile (defs_file, "adv2.h");      /* Vocabulary done */

/*  Allocate the space for message addresses and types  */

   tcount = type_base[TEXT + 1];
   if ((text_base = (int *) calloc (tcount, sizeof(int))) == NULL)
      gripe ("", "Unable to allocate text address memory.");
   if ((text_info = (int *) calloc (2 * (tcount - type_base[TEXT]), 
      sizeof(int))) == NULL)
         gripe ("", "Unable to allocate text type memory.");

/*  Allocate space for description addresses - brief, int and detailed.  */

   dcount = type_base[LOC + 1] - (style >= 11 ? 1 : 0);
   if ((brief_base = (int *) calloc (dcount + 1, sizeof(int))) == NULL)
      gripe ("", "Unable to allocate brief description address memory.");
   if ((int_base = (int *) calloc (dcount + 1, sizeof(int))) == NULL)
      gripe ("", "Unable to allocate int description address memory.");
   if ((detail_base = (int *) calloc (dcount + 1, sizeof(int))) == NULL)
      gripe ("", "Unable to allocate detailed description address memory.");

   if ((defs_file = openout("adv5.h")) == NULL)
      gripe ("","Unable to open adv5.h (words.h).");

/* A cosmetic fix to avoid worrying nosey parkers. The relevant array elements
 * don't get actually referenced by the game. They shouldn't have been
 * there in the first place, but they do no harm and it is much easier
 * to leave them there.
 */
   *text_base = 0;
   *text_info = 0;
   *(text_info + 1) = 0;
   *brief_base = 0;
   *int_base = 0;
   *detail_base = 0;
   
   btspan (SYMBOL, process_text);

   fprintf (defs_file, "int textadr[] = {\n");
   dump_array(text_base, tcount,  " %8dL,", 7);
   fprintf (defs_file, "        0L};\n char text_info[] = {\n");
   dump_array(text_info, 2 * (tcount - type_base[TEXT]),  " %4d,", 12);
   fprintf (defs_file, "    0};\nint brief_desc[] = {\n");
   dump_array (brief_base, dcount,  " %8dL,", 7);
   fprintf (defs_file, "        0L};\nint long_desc[] = {\n");
   dump_array (int_base, dcount,  " %8dL,", 7);
   fprintf (defs_file, "        0L};\nint detail_desc[] = {\n");
   dump_array (detail_base, dcount,  " %8dL,", 7);
   fprintf (defs_file, "        0L};\n");
   if (entname)
   {
      fprintf (defs_file, "int ent_name[] = {\n");
      dump_array (ent_addr, type_base[TEXT + 1], " %8dL,", 7);
      fprintf (defs_file, "        0L};\n");
   }
   clsfile (defs_file, "adv5.h");      /* Done with this file */

   proc_count = type_base [VERB + 1];
   if ((proc_array = (int *) calloc (proc_count, sizeof (int))) == NULL)
      gripe ("", "Unable to allocate procedure array space.");

   if ((proc_args = (int *) calloc (next_procno, sizeof (int))) == NULL)
      gripe ("", "Unable to allocate argument array space.");

   clsfile (code_file, "Automatic code");
   sprintf (proc_name, "adv%02d.c", ++code_part);
   if ((code_file = openout (proc_name)) == NULL)
      gripe (proc_name, "Unable to open final code chunk.");
   fprintf (code_file, "#include \"adv0.h\"\n");
   fprintf (code_file, "#include \"adv3.h\"\n");

   btspan (SYMBOL, process_proc);
   fprintf (code_file, 
      "int p0(void)\n{return 0;}\n");

   clsfile (code_file, "Final automatic code");
   if ((code_file = openout ("adv3.h")) == NULL)
      gripe ("finalise", "Unable to open adv3.h.");

   fprintf (code_file, 
      "extern void fake(int x, int y);\n");
   for (index = 0; index < next_procno; index++)
   {
      fprintf (code_file, "extern int p%d(", index);
      if ((count = *(proc_args + index)) > 0)
         while (count--)
            fprintf (code_file, "int,int%s", count ? "," : "");
      else
         fprintf (code_file, "void");
      fprintf (code_file, ");\n");
   }

   clsfile (code_file, "adv3.h");
   
   if ((code_file = openout ("adv4.h")) == NULL)
      gripe ("finalise", "Unable to open adv4.h.");

   proc_arr_ptr = proc_array;
   fprintf (code_file, "int (*procs[])() = {\n");
   count = 0;
   for (index = 0; index < proc_count; index++)
   {
      fprintf (code_file, "p%d,", *proc_arr_ptr++);
      if (count++ == 10)
      {
         count = 0;
         fputc ('\n', code_file);
      }
   }
   fprintf (code_file, "p0 };\n");
   clsfile (code_file, "adv4.h");

   return;
}

/**********************************************************************/
