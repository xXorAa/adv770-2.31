/* symbol.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 24 Jul 20   MLA           Allow obj/loc pseudo-names.
 * 01 Jul 20   MLA           Allowed for style 2.
 * 22 Jun 20   MLA           Set text_type and inline_text for texts.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 29 Dec 14   MLA           Fixed symbol arithmetic in STYLE 1.
 * 06 Apr 10   MLA           Resticted identifier names.
 * 15 Mar 08   MLA           Version 12 changes.
 * 07 May 07   Stuart Munro  bug: declare chksymb before fndsymb.
 * 15 Jan 05   MLA           Added AUTOSYMBOL handling.
 * 07 Jan 03   MLA           Use btree instead of tsearch.
 * 17 Oct 01   MLA           Improved compatibility with Platt's A-code.
 * 24 Jul 01   MLA           Added ANSI C declaration.
 * 28 Jul 99   MLA           Removed superfluous setjmp declaration.
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 16 Mar 91   MLA           Unified symbol and vocab searches.
 * 22 Nov 90   MLA           Own TSEARCH -some systems don't have it.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include <string.h>
#include <ctype.h>
#include <setjmp.h>

#include "acdc.h"
#include "game.h"
#include "symbol.h"
#include "const.h"
#include "btree.h"
#include "major.h"

struct node *addsymb (int btroot, char *name, int type, int refno)
{
   struct node *np;
   int len;
   int auto_flag = btroot & 64;
   int pseudo_name = 0;

   btroot &= ROOT_MASK;

   if (*name == '"')  // Check for a string pseudo-name
   {
      pseudo_name = 1;
      *name = '!';      // Make it non-abbreviable!
   }
   else if (style >= 10)
   {
      int bad_char = 1;
      if (isalpha (*name) || strchr (".?!|", *name) || *name < 0)
      {
         char *c = name + 1;
         bad_char = 0;
         while (*c)
         {
            if (isalnum (*c) || strchr (".?!-_'/&", *c) || *c < 0)
               c++;
            else
            {
               bad_char = 1;
               break;
            }
         }
      }
      if (bad_char)
         gripe (name, "Not a legal name.");
   }
   
   if ((np = (struct node *) malloc (sizeof (struct node))) == NULL)
      gripe (name, "Unable to allocate memory.");

   len = strlen (name);
   if (style < 10 && len > 12 && strpbrk (name, "+-") == NULL)
   {
      len = 12;
      *(name + 12) = '\0';
   }
   if ((np -> name = (char *) malloc (len + 1)) == NULL)
      gripe (name, "Unable to allocate symbol name storage.");
   
   strcpy (np -> name, name);
   np -> type = type;
   np -> state_count = (type == VAR) ? 1 : 0;
   np -> used_count = 0;
   np -> auto_flag = auto_flag;
   np -> text_addr[0] = -1;
   np -> text_addr[1] = -1;
   np -> text_addr[2] = -1;
   if (type == TEXT) 
   {
      np -> inline_text = 0;
      np -> text_type = 0;
   }
   np -> name_addr = -1;
   np -> proc_count = 0;
   np -> proc_done = 0;
   np -> arg_count = -1;
   np -> symbol = NULL;
   np -> refno = refno;

   if (btadd (btroot, np) == 0 && (style != 2 || len < 12))
      gripe (name, "Symbol already defined.");
   if (pseudo_name)
      *name = '"';    // Restore the " pseudo-name marker
   return (np);
}

/*======================================================================*/

struct node *fndsymb (int btroot, char *fname)
{
   struct node *np;
   char nbuf [160];
   char *name = nbuf;
   int maxlen = sizeof (nbuf) - 1;
   int testing = (btroot & 32);
   
   if (style < 10 && strlen (fname) > 12 && strpbrk (fname, "+-") == NULL)
      maxlen = 12;
   strncpy (nbuf, fname, maxlen);
   *(name + maxlen) = '\0';

   btroot &= ROOT_MASK;

   if (*name == '-' || *name == '+' || *name == '!' || *name == '=')
      name++;
   np = btfind (btroot, name);
   if (np == NULL && btroot == SYMBOL)
   {
      np = btfind (VOCAB, name);
      if (np == NULL)
      {
         if (testing) return (NULL);
         gripe (name, "Symbol not found.");
      }
      np = np -> symbol;
   }

/*   if (np && stage && btroot == SYMBOL)
         (np -> used_count)++;
*/
   return (np);
}

/************************************************************************/

