/* btree.c - balanced tree handling on a linear stack.
 * Copyright Mike Arnautov 2001-2016.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * Balanced tree handling on a linear stack.
 *
 * 12 May 08   MLA               Removed 32-bit dependency.
 * 07 May 07   Stuart Munro      bug: give *full* STDC template for btspan!
 * 03 Sep 06   MLA               Bug: longs should be ints.
 * 23 Dec 05   MLA               Bug: btinit() should be long, not int!
 * 07 Mar 03   Stuart Munro      Fixed btfind() type for non-ANSI compilers.
 * 07 Jan 03   MLA               Adapted for use by acdc.
 * 24 Mar 01   MLA               Initial coding.
 */

#ifndef __BTREE__
#  define __BTREE__
      void btinit (int type);
      int btadd (int type, void *record);
      struct node *btfind (int type, char *word);
      void btspan (int type, void (*btact)(struct node *));
#endif /* __BTREE__ */

