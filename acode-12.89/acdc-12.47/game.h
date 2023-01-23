/* game.h (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 30 Jul 21   MLA               Removed utf8 (now supported unconditionally).
 * 05 Aug 20   MLA               Added parser_word.
 * 17 Jul 20   MLA               Added utf8 for future use.
 * 15 Mar 08   MLA               Initial coding.
 *
 */
 
#ifndef GAME_DONE

#  define GAME_DONE

#  define DEFAULT_STYLE 12
   extern int style;
   extern int style_set;
   extern int utf8;
   extern char dbname [80];
   extern char title [80];
   extern char date [80];
   extern char version [80];
   extern char gameid [250];
   extern char *gameid_ptr;
   extern struct node *repeater;
#endif /* GAME_DONE */      
