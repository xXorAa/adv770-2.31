`12/* btree.c - balanced tree handling on a linear stack.
 *           Copyright Mike Arnautov 2001-2008.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 14 Jul 09   MLA           Fixed gcc --pedantic warnings.
 * 12 May 08   MLA           Removed 32-bit dependency.
 * 07 May 07   Stuart Munro  bug: fix declaration and casting of btact args.
 * 03 Sep 06   MLA           Bug: All longs should be ints!
 * 23 Dec 05   MLA           roots[] must be long, not int!
 * 06 Mar 03   Stuart Munro  bug: fix non-ASCII btfind args declaration;
 *                           include stdlib.h; remove unused variables.
 * 07 Jan 03   MLA           Adapted for use by acdc.
 * 24 Mar 01   MLA           Initial coding.
 */
 
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "text.h"
#include "const.h"
#include "symbol.h"
#include "btree.h"

#define BT_LSIB   -1
#define BT_UP      1
#define BT_RSIB    1
#define BT_BAL     3
#define BT_PTR     4
#define BT_STP  4096

#define PTRLEN sizeof(int *)/sizeof(int);

/*====================================================================*/

static void sing_rot (int *root, int parent, int child, int dir)
{
   int gparent = *(root + parent + BT_UP);
   int gchild = *(root + child + BT_UP - dir);
   
   *(root + parent + BT_UP + dir) = *(root + child + BT_UP - dir);
   *(root + child + BT_UP - dir) = parent;
   *(root + parent + BT_BAL) -= *(root + child + BT_BAL);
   *(root + child + BT_BAL) = -(*(root + parent + BT_BAL));
   if (gparent > 0)
      *(root + gparent + BT_UP +
         (*(root + gparent + BT_UP + BT_LSIB) == parent ? BT_LSIB : BT_RSIB)) =
            child;
   else
      *(root + 1) = child;
   *(root + child + BT_UP) = gparent;
   *(root + parent + BT_UP) = child;
   if (gchild)
      *(root + gchild + BT_UP) = parent;
}

/*--------------------------------------------------------------------*/

static void dub_rot (int *root, int parent, int child, int dir)
{
   int gparent = *(root + parent + BT_UP);
   int gchild = *(root + child + BT_UP - dir);

   *(root + child  + BT_UP - dir) = *(root + gchild + BT_UP + dir);
   if (*(root + gchild + BT_UP + dir))
      *(root + *(root + gchild + BT_UP + dir) + BT_UP) = child;
   *(root + parent + BT_UP + dir) = *(root + gchild + BT_UP - dir);
   if (*(root + gchild + BT_UP - dir))
      *(root + *(root + gchild + BT_UP - dir) + BT_UP) = parent;
   *(root + gchild + BT_UP + dir) = child;
   *(root + gchild + BT_UP - dir) = parent;

   if (*(root + gchild + BT_BAL) == *(root + child + BT_BAL))
      *(root + child + BT_BAL) *= -1;
   else
      *(root + child + BT_BAL) = 0;
   if (*(root + gchild + BT_BAL) == *(root + parent + BT_BAL))
      *(root + parent + BT_BAL) *= -1;
   else
      *(root + parent + BT_BAL) = 0;
   *(root + gchild + BT_BAL) = 0;

   *(root + child + BT_UP) = gchild;
   *(root + parent + BT_UP) = gchild;
   *(root + gchild + BT_UP) = gparent;
   if (gparent > 0)
      *(root + gparent + BT_UP +
         (*(root + gparent + BT_UP + BT_LSIB) == parent ? BT_LSIB : BT_RSIB)) =
            gchild;
   else
      *(root + 1) = gchild;
}

/*====================================================================*/

int btcmpa (struct node *itemptr, struct node *nodeptr)
{
   char *n1;
   char *n2;
   int result;

   if (*(n1 = itemptr -> name) == '!')
      n1++;
   if (*(n2 = nodeptr -> name) == '!')
      n2++;

   result = strcmp (n1, n2);
   if (result)
      return (result > 0 ? 1 : -1);
   else
      return (0); // Change to 1 to enable adjectives!
}

/*--------------------------------------------------------------------*/

int btcmpf (char *word, struct node *nodeptr)
{
   char *name;
   int result;

   if (*(name = nodeptr -> name) == '!')
      name++;
   result = strcmp (word, name);
   if (result)
      return (result > 0 ? 1 : -1);
   else
      return (0);
}

/*====================================================================*/

void btinit (int type)
{
   int *root = *(roots + type);
   if (root == NULL)
   {
      if ((root = (int *)malloc(BT_STP * sizeof(int))) == NULL)
      {
         fprintf (stderr, "*ERROR* Unable to allocate dictionary root %d!\n", type);
         exit (1);
      }
      *root = 3;
      *(root + 1) = 0;
      *(root + 2) = BT_STP;
   }
   else
   {
      if ((root = (int *)realloc 
         (root, (*(root + 2) + BT_STP) * sizeof(int))) == NULL)
      {
         fprintf (stderr, "*ERROR* Unable to re-allocate dictionary root %d!\n", type);
         exit (1);
      }
      *(root + 2) += BT_STP;
   }
   *(roots + type) = root;
}

/*--------------------------------------------------------------------*/

#ifdef BT_DEBUG

void btshow (int *root, struct node *nodeptr)
{
   int *iptr;

   printf ("Show: %s, free: %hd, root: %hd\n", text, *root, *(root + 1));
   iptr = root + 3;
   while (iptr < root + *root)
   {
      fprintf (stderr, "Offset %d: Up %hd, L %hd, R %hd, B %hd, T: %s\n",
         iptr - root, *(iptr + BT_UP), *(iptr + BT_UP + BT_LSIB), 
            *(iptr + BT_UP + BT_RSIB), *(iptr + BT_BAL), 
               nodeptr -> name);
      iptr += BT_PTR + PTRLEN;
   }
}

#endif /* BT_DEBUG */

/*--------------------------------------------------------------------*/

int btadd (int type, void *record)
{
   int *root = roots [type];
   int parent = 0;
   int child = *(root + 1);
   int dir;
   int *newrec;
   int reclen = BT_PTR  + PTRLEN;

   if (*(root + 1) > 0)
   {
      while (child > 0)
      {
         struct node *np;
         memcpy (&np, root + child + BT_PTR, sizeof (np));
         if ((dir = btcmpa (record, np)) == 0 && type != MAJOR)
            return (0);
         parent = child;
         child = *(root + child + BT_UP + dir);
      }
   }
   if (*root + reclen > *(root + 2))
   {
      btinit (type);
      if ((root = roots [type]) == NULL)
         return (-1);
   }
   newrec = root + (child = *root);
   *(newrec + BT_UP) = parent;
   *(newrec + BT_UP + BT_LSIB) = *(newrec + BT_UP + BT_RSIB) = 0;
   *(newrec + BT_BAL) = 0;
   memcpy ((struct node *)(newrec + BT_PTR), &record, sizeof (record));
   *root += reclen;
   if (parent)
   {
      *(root + parent + BT_UP + dir) = child;
      while (1)
      {
         dir = *(root + parent + BT_UP + BT_LSIB) == child ? BT_LSIB : BT_RSIB;
         if (*(root + parent + BT_BAL) == dir)
         {
            if (*(root + child + BT_BAL) == -dir)
               dub_rot (root, parent, child, dir);
            else 
               sing_rot (root, parent, child, dir);
            break;
         }
         if ((*(root + parent + BT_BAL) += dir) == 0)
            break;
         child = parent;
         parent = *(root + parent + BT_UP);
         if (parent == 0) break;
      }
   }
   else
      *(root + 1) = child;
   return (1);
}

/*--------------------------------------------------------------------*/

struct node *btfind (int type, char *word)
{
   int node;
   int dir;
   int *root = roots [type];
   
   if ((node = *(root + 1)) == 0)
      return (NULL);
   while (node)
   {
      struct node *np;
      memcpy (&np, root + node + BT_PTR, sizeof (np));
      if ((dir = btcmpf (word, np)) == 0)
         return (np);
      node = *(root + node + BT_UP + dir);
   }
   return (NULL);
}

/*====================================================================*/

void btspan (int type, void (*btact)(struct node *))
{
   struct node *np;
   int state = 0;
   int *root = roots [type];
   int node = *(root + 1);
   int next;
   
   if (node == 0)
      return;
      
   while (node)
   {
      switch (state)
      {
         case 0:
            if ((next = *(root + node + BT_UP + BT_LSIB)) != 0)
               node = next;
            else 
               state = (*(root + node + BT_UP + BT_RSIB)) ? 1 : 2;
            break;
            
         case 1:
            memcpy (&np, root + node + BT_PTR, sizeof (np));
            btact (np);
            state = (next = *(root + node + BT_UP + BT_RSIB)) ? 0 : 3;
            if (state == 0)
               node = next;
            break;

         case 2:
            memcpy (&np, root + node + BT_PTR, sizeof (np));
            btact (np);
               /* And just fall through! */
            
         case 3:
            if ((next = *(root + node + BT_UP)) != 0)
               state = (*(root + next + BT_UP + BT_LSIB) == node) ? 1 : 3;
            node = next;
            break;
      }
   }
}

/*====================================================================*/
