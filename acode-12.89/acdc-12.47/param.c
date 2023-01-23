/* param.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 06 Mar 03   Stuart Munro  Include stdlib.h; declare gripe().
 * 13 Jan 02   MLA           Give up -- pass "hidden" type args.
 * 12 Jan 02   MLA           bug: construct own parameter names.
 * 10 Jan 02   MLA           BUG: sundry fixes.
 * 30 Dec 01   MLA           Initial coding.
 *
 */
 
#include <string.h>
#include <stdlib.h>

#include "output.h"
#include "param.h"

struct param_list *param_root = NULL;

void gripe (char *token, char *message);

void addparam (int arg, char *name)
{
   struct param_list *ppl = param_root;
   struct param_list *lppl = NULL;

   while (ppl && ppl -> in_use)
   {
      if (strcmp (name, ppl -> name) == 0)
         gripe (name, "Duplicate call parameter.");
      lppl = ppl;
      ppl = ppl -> next;
   }
   if (ppl == NULL)
   {
      if ((ppl = (struct param_list *)malloc 
         (sizeof (struct param_list))) == NULL)
            gripe (name, "Unable to allocate parameter node.");
      if (lppl)
         lppl -> next = ppl;
      else
         param_root = ppl;
      ppl -> next = NULL;
   }
   ppl -> in_use = 1;
   strncpy (ppl -> name, name, 32);
   ppl -> arg = arg;
   (ppl -> name)[31] = '\0';

   return;
}

int fndparam (char *name)
{
   int lrefno = 0;
   struct param_list *ppl = param_root;

   while (ppl && ppl -> in_use)
   {
      if (strcmp (ppl -> name, name) == 0)
         return (lrefno);
      ppl = ppl -> next;
      lrefno++;
   }
   return (-1);
}

int iniparam (int varsize)
{
   int locals = 0;
   struct param_list *ppl = param_root;
   
   while (ppl && ppl -> in_use)
   {
      locals++;
      ppl = ppl -> next;
   }
   if (locals)
   {
      fprintf (code_file, "   int lval [%d];\n", locals);
      fprintf (code_file, "   short lbts [%d];\n", locals * varsize);
   }

   ppl = param_root;
   locals = 0;
   while (ppl && ppl -> in_use)
   {
      fprintf (code_file, "   lval[%d] = ", locals);
      if (ppl -> arg)
         fprintf (code_file, "par%d;\n", locals);
      else
         fprintf (code_file, "0;\n");
      fprintf (code_file, "   lbts [%d] = ", locals * varsize);
      if (ppl -> arg)
         fprintf (code_file, "typ%d;\n", locals);
      else
         fprintf (code_file, "0;\n");
      ppl = ppl -> next;
      locals++;
   }
   return (locals);
}   

void zapparam (void)
{
   struct param_list *ppl = param_root;
   
   while (ppl && ppl -> in_use)
   {
      ppl -> in_use = 0;
      ppl = ppl -> next;
   }
}

