/* organise.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 *                           
 * 10 Mar 22   MLA           Define DUMP if necessary.
 * 24 Feb 22   MLA           Mandate ENTNAME in debug mode.
 * 13 Aug 21   MLA           Added definition of NOWORD.
 * 03 Aug 21   MLA           Finalised internationalisation changes.
 * 31 Jul 21   MLA           Allowed barred names for internationalisation.
 * 24 Jul 20   MLA           Use new, UTF8-cpabale version of recase().
 * 01 Jul 20   MLA           Allowed for style 2.
 * 22 Jun 20   MLA           Move writing off VOCAB_SIZE to finalise.c
 * 21 Jun 20   MLA           Use mandate() to auto-define various things.
 * 02 Nov 18   MLA           Conditionally added SEEN.
 * 03 Oct 18   MLA           Addded NO_MATCH and NO_AMATCH declarations. 
 * 18 Aug 18   MLA           Ditched some redundant UNDO flags.
 * 22 Apr 16   MLA           bug: in str(n)cpy string args should not overlap.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 * 02 Jan 15   MLA           Rationalised GAME_ID for all styles.
 * 31 Dec 14   MLA           Generate sensible GAME_ID for all styles.
 * 10 Mar 13   MLA           Bug: PERSISTENT_DATA needs _ on DOS.
 * 30 Mar 10   MLA           CGINAME starts with an _ on DOS, Windows.
 * 22 Aug 09   MLA           Spare 3 obj/loc bits restricted to style >= 20. 
 * 31 Jul 09   MLA           Write adv6.h as signed char array, not just char.
 * 22 Jul 09   MLA           Added SWAP definition to adv1.h.
 *                           Also changed check for the quiet mode.
 * 14 Jul 09   MLA           Fixed gcc --pedantic warnings.
 * 13 Jul 09   MLA           Added PERSISTENT_DATA.
 * 31 Mar 09   MLA           Added definition of CGINAME.
 * 30 Apr 08   MLA           Added PROMPT.
 * 22 Mar 08   MLA           BADWORD etc now go from -2 down.
 * 15 Mar 08   MLA           Version 12 changes.
 * 04 May 07   MLA           Change CONTEXT to ADVCONTEXT (bloody MS!!).
 * 03 May 07   MLA           Cosmetic fix to first elements of text arrays
 *                           in adv5.h.
 * 15 Oct 06   MLA           Added PROMPTED.
 * 23 Dec 05   MLA           bug: Need string.h.
 * 13 Jan 04   MLA           Added UNDO/REDO handling.
 * 06 Mar 03   Stuart Munro  Remove unused variable.
 * 04 Mar 03   MLA           VERSION repaced with GAMEID and DBNAME.
 * 21 Feb 03   MLA           Added conditional VERSION definition.
 * 20 Feb 03   MLA           Chage to code file naming conventions.
 * 09 Feb 03   MLA           Added SAY, F/LDIR, F/LMAGIC.
 * 04 Feb 03   MLA           Added EXCEPT and TYPO.
 * 02 Feb 03   MLA           Renamed autod0 to autod5 (advkern.h will be 0).
 * 07 Jan 03   MLA           Use btree instead of tsearch.
 * 02 Jan 03   MLA           bug: text_count already defined in acdc.c.
 * 01 Jan 03   MLA           Added refno dumpnig for xref.
 * 21 Dec 01   MLA           Removed obsolete MAX* definitions.
 * 06 Nov 01   MLA           If style == 1, define QUICKIE etc...
 *                           Also added automatic definition of PLAIN.
 * 04 Nov 01   MLA           Define old-style display flags.
 * 02 Nov 01   MLA           Added BADSYNTAX.
 * 30 Oct 01   MLA           De-wired value of OBJ (objflag!) etc in
 *                           style 1.
 * 17 Oct 01   MLA           Improved compatibility with Platt's A-code.
 * 04 Aug 01   MLA           Added definition of IT.
 * 12 May 01   MLA           Conditionally define F/LSPECIAL.
 * 14 Mar 01   MLA           Replaced old_style with style.
 *                           Added AMBIGTYPO abd SCENEWORD.
 * 10 Jan 01   MLA           Allowed for dynamic text types.
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 14 Mar 94   MLA           MOVED, JUGGLED and SCHIZOID now truly optional.
 *                           PLS.CLARIFY defined automatically if absent.
 * 27 Jun 93   MLA           Make sure ARG3 is defined too.
 * 23 Feb 91   MLA           Allowed variable bit fields.
 * 30 Dec 90   MLA           Dump vocabulary into text file.
 * 29 Dec 90   MLA           Trapped for output file errors.
 * 22 Nov 90   MLA           Own TSEARCH - some systems don't have it.
 * 15 Sep 90   MLA           Initial coding.
 *
 */
 
#include <stdio.h>
// #include <ctype.h>
#include <string.h>
#include <stdarg.h>

#include "acdc.h"
#include "btree.h"
#include "const.h"
#include "symbol.h"
#include "major.h"
#include "text.h"
#include "output.h"
#include "source.h"
#include "game.h"

/*====================================================================*/

static void process_voc_proc (struct node *np)
{
   if (np -> proc_count && np -> symbol)
      (np -> symbol) -> proc_count += np -> proc_count;
}

/*======================================================================*/

void define_constant(char *name, char *upname, char *type)
{
   struct node *np;
   char temp[60];

   if ((np = fndsymb(TESTSYMBOL, name)) != NULL)
   {
      if (np -> type != FLAGS && (style >= 10 || np -> type != SYNONYM))
      {
         sprintf
            (temp, "Declared as other than a %s.", type);
         gripe (upname, temp);
      }
      else fprintf (defs_file, "#define %s %d\n", upname, np -> refno);
   }
   return;
}

/*======================================================================*/

void declare_constant(char *name, char *upname, int value)
{
   struct node *np;

   if ((np = fndsymb(TESTSYMBOL, name)) != NULL)
   {
      if (np -> type != CONSTANT && (style >= 10 || np -> type != SYNONYM))
         gripe (upname, "Declared as other than a constant.");
      else
         value = np -> refno;
   }
   else
      np = addsymb (AUTOSYMBOL, name, CONSTANT, value);
   
   fprintf (defs_file, "#define %s %d\n", upname, value);

   return;
}

/*======================================================================*/

void declare_flag(char *name, char *upname, int value)
{
   struct node *np;

   if ((np = fndsymb(TESTSYMBOL, name)) != NULL)
   {
      if (np -> type != FLAGS && (style >= 10 || np -> type != SYNONYM))
         gripe (upname, "Declared as other than a flag.");
      else
         value = np -> refno;
   }
   else
      np = addsymb (AUTOSYMBOL, name, FLAGS, value);
   
   fprintf (defs_file, "#define %s %d\n", upname, value);
   return;
}

/*======================================================================*/

void process_procnos (struct node *np)
{
   if (np -> proc_count)
   {
      np -> proc_base = next_procno++;
      if (np -> proc_count > 1)
         next_procno += np -> proc_count;
   }      
}

/*======================================================================*/

void process_inline (struct node *np)
{
   if (np -> type == TEXT && np -> inline_text == 1)
      np -> refno += type_counts [TEXT] + type_base [TEXT] - 1;
}

/*======================================================================*/

void mandate (char *item, int type, ...)
{
   struct node *np, *ap;

   if ((np = fndsymb(TESTSYMBOL, item)) == NULL)
   {
      ap = addsymb (AUTOSYMBOL, item, type, type_counts[type]++);
      if (type == OBJ || type == WORD)
      {
        if (!(np = fndsymb(VOCAB, item))) // Might be declared as NOISE!
           np = storword (item, type, next_vocaddr);
/* The ++ in the following line is an error, effectively wasting a refno.
 * However, fixing it would break upward compatibility of saved games!
 * Should fix it in version 13!!
 */ 
        np -> refno = type_counts[type]++;
        np -> symbol = ap;
      }
      else if (type == TEXT) /* Store the optional string argument */
      {
        char *cptr;
        va_list aptr;
        va_start (aptr, type);
        ap -> name_addr = next_addr;
        cptr = va_arg (aptr, char *);
        do storchar(*cptr); while (*cptr++);
        va_end (aptr);
      }
   }
   else if (np -> type != type)
   {
      const char *names[] = {"object", "place", "word", "variable",
                             "text", "procedure", "constant", "",
                             "", "", "flag"};
      char error [128];
      char upitem [128];
      recase ('U', item, upitem, 128);
      sprintf (error, "Declared as a non-%s!", names[type]);
      gripe (upitem, error);   
   }
}

/*======================================================================*/

void auto_define (char *name)
{
   char upname [128];
   recase ('U', name, upname, 128);
   fprintf (defs_file,
     "#define %s %d\n", upname, fndsymb(SYMBOL, name) -> refno);
}

/*======================================================================*/

void process_refnos (struct node *np)
{
   int type = np -> type;
   switch (type)
   {
      case VERB:
      case OBJ:
      case LOC:
      case VAR:
         np -> refno += type_base [type];
         break;

      case TEXT:
         if (! (np -> inline_text))
            np -> refno += type_base [type];
         break;

      case AT:
      case ACTION:
         gripe (np -> name, "Symbol used, but not defined.");
   }
}

/*======================================================================*/

void organise(void)
{
   int index;
   int next_constant;
   int mask;
   int len;
   int refno;
   char *tptr;
   char *cptr;
   struct node *np;
   char dbname [80];
   struct node *undo_stat = NULL;
   struct node *undo = NULL;
   
   stage = -1;         /* Tell gripe we are not reading source file at present */
/* Deal with the game header info */

   btspan (VOCAB, process_voc_proc);

   if (style < 10 && *title)
      style = 10;
   if (style != 10 && *gameid)
      gripe ("", "The GAMEID directive only valid in A-code style 10!");

   if ((code_file = openout("adv02.c")) == NULL)
      gripe ("adv01.c", "Unable to open code file.");
   fprintf (code_file, "#include \"adv0.h\"\n");
   fprintf (code_file, "#include \"adv3.h\"\n");

   next_addr = 0;
//   if (debug)     /* Declarations over - if source output */
//      debug = 2;  /* is required, turn it on! */

   if (*title)
      strcpy (dbname, title);
   else
      strcpy (dbname, source_file);
   if ((tptr = strpbrk (dbname, " \t")) != NULL)
      *tptr = 0;
   if ((tptr = strrchr (dbname, '.')) != NULL)
      *tptr = 0;
   if (*title == '\0')
   {
      strcpy (title, dbname);
      if (*title >= 'a' && *title <= 'z')
         *title += 'A' - 'a';
   }
   recase('L', dbname, dbname, 80);
   strcat (dbname, ".dat");

/* Assemble the game ID */

   if (style == 1)
   {
      if (strstr(title, "550"))
      {
        strcpy (title, "Adv550");
        strcpy (date, "September 18 1984");
      }
   }
   else if (style == 2)
   {
      strcpy (title, "Adv580");
      strcpy (date, "1987");
   }
   if (!*gameid)
   {
      if (!*date)
         strcpy (date, datbuf);
      if (*version)
         sprintf (gameid, "%s version %s, %s", title, version, date);
      else
         sprintf (gameid, "%s version %s", title, date);
   }
      
   if (memory < 3)
      tptr =  dbname;
   else
      tptr = "adv6.h";
   
   if ((text_file = openout (tptr)) == NULL)
      gripe (tptr, "Unable to open data file.");

   if (!*gameid)
   {
     tptr = source_file;
     len = strlen (tptr);
     if (len > 79) len = 79;
     strncpy (gameid, tptr, len);
     *(gameid + len) = '\0';
     gameid [79] = '\0';
     tptr = gameid;
   }
   tptr = gameid;

   if (memory == 3)
   {
      fprintf (text_file, "char text [TEXT_BYTES] = {\n");
      fputc ('0', text_file); 
   }
   else
      fputc ('\0', text_file);
   next_addr++;

/* Write off the game ID. Can't use the standard encryption, because that
 * requires the knowledge of the game ID! I.e. there would be no way of 
 * decrypting it!
 */
 
   if (plain_text == 0)
   {
      key_mask = (rand() & 127) ^ 'x';
      if (key_mask == 0 || key_mask == 127) key_mask = 'y';
   }
   else
      key_mask = 0;
   mask = key_mask;

   while (*tptr && *tptr != '\n')
   {
      if (memory == 3)
         fprintf (text_file, ",%d", *tptr ^ mask);
      else
         fputc (*tptr ^ mask, text_file);
      if (plain_text == 0)
         mask ^= *tptr;
      tptr++;
      next_addr++;
   }

   if (memory == 3)
      fprintf (text_file, ",%d", mask);
   else
      fputc (mask, text_file);
   next_addr++;

/* Write off the game ID again, this time using the standard encryption.
 * This is necessary in order to give the game access to the string as
 * a standard text.
 */
 
   np = addsymb (AUTOSYMBOL, "game.id", TEXT, type_counts[TEXT]++);
   np -> name_addr = next_addr;
   tptr = gameid;
   while (*tptr)
      storchar(*tptr++);
   storchar ('\0');
   
   if ((quiet & 1) == 0)
   {
      printf ("GameID: %s\n", gameid);
      printf ("Style:  ");
      if (style <= 1)
         puts ("Dave Platt's original A-code");
      else if (style == 2)
         puts ("Mike Goetz's A-code");
      else
         printf ("A-code %d\n", style);
      if (*author)
         printf ("Author: %s\n", author);
   }   
/*   else
      printf ("Translating: %s%s", gameid, quiet ? "\n" : ""); */

/* Check for mandatory symbols and add them if missing */

   if (!fndsymb (TESTSYMBOL, "|and") && !fndsymb (TESTSYMBOL, "and"))
      mandate ("and", WORD);
   if (!fndsymb (TESTSYMBOL, "|then") && !fndsymb (TESTSYMBOL, "then")) 
      mandate ("then", WORD);
   if (style > 11)
     mandate ("blank", TEXT, " \n");
   mandate ("inhand", LOC);
   mandate ("here", VAR);
   mandate ("there", VAR);
   mandate ("status", VAR);
   mandate ("arg1", VAR);
   mandate ("arg2", VAR);
   mandate ("arg3", VAR);
   if (debug)
     mandate("entname", VAR);

/* 
 * Variable ENTNAME is very special! It causes symbolic names of all
 * game entities to be available at runtime to the kernel.
 */
 
   if ((np = fndsymb(TESTSYMBOL, "entname")) != NULL && np -> type == VAR)
      entname = np;
/*
 * If the verb UNDO is defined, ensure that UNDO.STATUS variable exists.
 */
       
   if (((np = fndsymb(TESTSYMBOL, "|undo")) != NULL ||
       (np = fndsymb(TESTSYMBOL, "undo")) != NULL) && np -> type == VERB)
   {
      undo = np;
      if ((np = fndsymb(TESTSYMBOL, "undo.status")) == NULL)
      {
         np = addsymb (AUTOSYMBOL, "undo.status", VAR, type_counts[VAR]++);
      }
      else if (np -> type != VAR)
         gripe ("UNDO.STATUS", "Declared as a non-variable!");
      undo_stat = np;
   }

/*  Calculate individual type bases, and adjust refnos to their non-relative values.
 */
   next_procno = 1;
   btspan (SYMBOL, process_procnos);
   type_base[0] = 3;
   for (index = 0; index <= TEXT; index++)
      type_base[index + 1] = type_base[index] + type_counts[index];
/*
 * Convert relative refnos to absolute ones, ignoring in-line texts in the
 * first btspan() pass. Then append in-line texts to other texts. All this
 * helps with preserving upward compatibility of saved games in the
 * presence of (non-morphed) in-line texts.
 */
   btspan (SYMBOL, process_refnos);
   if (inline_count)
   {
      btspan (SYMBOL, process_inline);
      type_counts [TEXT] += inline_count;
      type_base [TEXT + 1] += inline_count;
      inline_count = 0;
   }
/*  Now create the include file which will define various symbolic
 *  constants required by the kernel routines.
 */
   if ((defs_file = openout("adv1.h")) == NULL)
      gripe ("","Unable to open adv1.h (defs.h).");
   fprintf (defs_file, "#ifndef ADV1_H\n#define ADV1_H\n");
   fprintf (defs_file, "#define GAME_NAME \"%s\"\n", title);
   fprintf (defs_file, "#define GAME_VERSION \"%s\"\n", 
      *version ? version : "99.99");
   fprintf (defs_file, "#define GAME_ID \"%s\"\n", gameid);
   fprintf (defs_file, "#define STYLE %d\n", style);
   fprintf (defs_file, "#ifndef ADV01\n");
   if (*date)
      fprintf (defs_file, "#define GAME_DATE \"%s\"\n", date);
   fprintf (defs_file, "#define ACDC_VERSION \"%s\"\n", acdc_version);
   if (swap)
      fprintf (defs_file, "#define SWAP %d\n", swap);
   strcpy (dbname, title);
   recase ('L', dbname, dbname, 80);
   fprintf (defs_file, "#if defined(MSDOS) || defined(_WIN32)\n");
   if (style >= 11)
      fprintf (defs_file, "#  define PERSISTENT_DATA \"_%s.adp\"\n", dbname);
   fprintf (defs_file, "#  define CGINAME \"_%s\"\n#else\n", dbname);
   if (style >= 11)
      fprintf (defs_file, "#  define PERSISTENT_DATA \".%s.adp\"\n", dbname);
   fprintf (defs_file, "#  define CGINAME \".%s\"\n#endif\n", dbname);
   strcat (dbname, ".dat");
   fprintf (defs_file, 
      "#define DBNAME \"%s\"\n", dbname);
   {
      int offset = style >= 20 ? 3 : 0;
      fprintf (defs_file, "#define OBJSIZE %d\n", 
         (flag_field_size[OBJFLAG] - offset)/16 + 1);
      fprintf (defs_file, "#define LOCSIZE %d\n", 
         (flag_field_size[LOCFLAG] - offset)/16 + 1);
      fprintf (defs_file, "#define VARSIZE %d\n", 
         (flag_field_size[VARFLAG] - offset)/16 + 1);
   }
   fprintf (defs_file, "#define FOBJ %d\n", type_base[OBJ]);
   fprintf
      (defs_file, "#define LOBJ %d\n", type_base[OBJ + 1] - 1);
   fprintf (defs_file, "#define FLOC %d\n", type_base[LOC]);
   fprintf
      (defs_file, "#define LLOC %d\n", type_base[LOC + 1] - 1);
   fprintf (defs_file, "#define FVERB %d\n", type_base[VERB]);
   fprintf
      (defs_file, "#define LVERB %d\n", type_base[VERB + 1] - 1);
   fprintf
      (defs_file, "#define FVAR %d\n", type_base[VAR]);
/* The definition of LVAR is one too high, but fixing this breaks
 * saved game compatibility. Should fix in version 13!
 */
   fprintf
      (defs_file, "#define LVAR %d\n", type_base[VAR + 1]);
   fprintf (defs_file, "#define FTEXT %d\n", type_base[TEXT]);
   fprintf (defs_file, "#define LTEXT %d\n", type_base[TEXT + 1]);
   fprintf (defs_file, "#define NOISE %d\n", NOISE);
   fprintf (defs_file, "#define KNOT %d\n", key_mask);
   if (!(np = fndsymb (TESTSYMBOL, "|and")))
      np = fndsymb (TESTSYMBOL, "and");
   refno = -(np -> refno);
   fprintf (defs_file, "#define COMMA %d\n", refno);
   if (!(np = fndsymb (TESTSYMBOL, "|then")))
      np = fndsymb (TESTSYMBOL, "then");
   refno = -(np -> refno);
   fprintf (defs_file, "#define SEMICOLON %d\n", refno);

   auto_define("inhand");
   auto_define("here");
   auto_define("there");
   auto_define("status");
   auto_define("arg1");
   auto_define("arg2");
   auto_define("arg3");

   if (undo_stat)
   {
      fprintf (defs_file, "#define UNDO %d\n", undo -> refno);
      if ((np = fndsymb(TESTSYMBOL, "redo")) != NULL)
      {
         if (np -> type == VERB)
            fprintf (defs_file, "#define REDO %d\n", np -> refno);
         if (undo == NULL)
            gripe ("REDO", "Verb declared without UNDO!");
         else if (np -> type != VERB)
            gripe ("UNDO", "Declared as a non-verb!");
      }
      fprintf (defs_file, "#define UNDO_STAT %d\n", undo_stat -> refno);
      declare_flag ("undo.info", "UNDO_INFO" , 4);  /* NB: flag 3 is spare! */
      declare_flag ("undo.trim", "UNDO_TRIM" , 5);
      declare_flag ("undo.inv",  "UNDO_INV"  , 6);
      declare_flag ("undo.bad",  "UNDO_BAD"  , 7);
   }
   
   define_constant ("schizoid",   "SCHIZOID",   "object flag");
   define_constant ("juggled",    "JUGGLED",    "variable flag");
   define_constant ("moved",      "MOVED",      "variable flag");

   if ((np = fndsymb(TESTSYMBOL, "pls.clarify")) != NULL)
   {
      if (np -> type != FLAGS && (style >= 10 || np -> type != SYNONYM))
         gripe ("PLS.CLARIFY", "Declared as other than a bit constant.");
      else fprintf (defs_file, "#define PLSCLARIFY %d\n", np -> refno);
   }
   
   if ((np = fndsymb(TESTSYMBOL, "seen")) != NULL)
   {
      if (np -> type != FLAGS && (style >= 10 || np -> type != SYNONYM))
         gripe ("SEEN", "Declared as other than a bit constant.");
      else fprintf (defs_file, "#define SEEN %d\n", np -> refno);
   }
   
   if ((np = fndsymb(TESTSYMBOL, "|again")) != NULL ||
            (np = fndsymb(TESTSYMBOL, "again")) != NULL)
   {
      if (np -> type != VERB)
         gripe ("AGAIN", "Declared as other than a verb.");
      else
      {
         np -> auto_flag = 1;
         fprintf (defs_file, "#define AGAIN %d\n", np -> refno);
      }
   }

   if ((np = fndsymb(TESTSYMBOL, "|all")) != NULL ||
       (np = fndsymb(TESTSYMBOL, "|everything")) != NULL ||
       (np = fndsymb(TESTSYMBOL, "all")) != NULL ||
       (np = fndsymb(TESTSYMBOL, "everything")) != NULL)
      if (np -> type == OBJ)
         fprintf (defs_file, "#define ALL %d\n", np -> refno);

   if ((np = fndsymb(TESTSYMBOL, "|except")) != NULL ||
       (np = fndsymb(TESTSYMBOL, "|but")) != NULL ||
       (np = fndsymb(TESTSYMBOL, "except")) != NULL ||
       (np = fndsymb(TESTSYMBOL, "but")) != NULL)
   {
      if (np -> type == VERB || np -> type == OBJ)
      {
         fprintf (defs_file, "#define EXCEPT %d\n", np -> refno);
         np -> auto_flag = 1;
      }
   }
   if ((np = fndsymb(TESTSYMBOL, "typo")) != NULL &&
      np -> type == TEXT)
         fprintf (defs_file, "#define TYPO %d\n", np -> refno);

   if ((np = fndsymb(TESTSYMBOL, "define")) != NULL &&
      np -> type == VERB)
         fprintf (defs_file, "#define DEFINE %d\n", np -> refno);

   if ((np = fndsymb(TESTSYMBOL, "undefine")) != NULL &&
      np -> type == VERB)
         fprintf (defs_file, "#define UNDEFINE %d\n", np -> refno);

   if ((np = fndsymb(TESTSYMBOL, "|it")) != NULL ||
       (np = fndsymb(TESTSYMBOL, "it")) != NULL)
      if (np -> type == OBJ)
         fprintf (defs_file, "#define IT %d\n", np -> refno);
         
   if ((np = fndsymb(TESTSYMBOL, "context")) != NULL)
      if (np -> type == VAR)
         fprintf (defs_file, "#define ADVCONTEXT %d\n", np -> refno);

   if ((np = fndsymb(TESTSYMBOL, "prompt")) != NULL)
      if (np -> type == VAR)
         fprintf (defs_file, "#define PROMPT %d\n", np -> refno);

   if ((np = fndsymb(TESTSYMBOL, "dwarven")) != NULL)
      if (np -> type == VAR)
         {
           fprintf (defs_file, "#define DWARVEN %d\n", np -> refno);
           fprintf (defs_file, "#define DWARVISH     0%o\n", DWARVISH);
         }
   if (entname)
     fprintf (defs_file, "#define ENTNAME %d\n", entname->refno);
     
#ifdef OBSOLETE
   if ((np = fndsymb(TESTSYMBOL, "fulldisplay")) != NULL)
   {
      if (np -> type != FLAGS && (style >= 10 || np -> type != SYNONYM))
         gripe ("FULLDISPLAY", "Declared as other than a bit constant.");
      else
         fprintf (defs_file, "#define FULL %d\n", np -> refno);
   }
#endif /* OBSOLETE */

   if ((np = fndsymb(TESTSYMBOL, "detaildisplay")) != NULL)
   {
      if (np -> type != FLAGS && (style >= 10 || np -> type != SYNONYM))
         gripe ("DETAILDISPLAY", "Declared as other than a bit constant.");
      else if (style == 10)
         fprintf (defs_file, "#define DETAIL %d\n", np -> refno);
   }

   if ((np = fndsymb(TESTSYMBOL, "prompted")) != NULL)
   {
      if (np -> type != FLAGS && (style >= 10 || np -> type != SYNONYM))
         gripe ("PROMPTED", "Declared as other than a bit constant.");
      else
         fprintf (defs_file, "#define PROMPTED %d\n", np -> refno);
   }

   if ((np = fndsymb(TESTSYMBOL, "first.special")) != NULL)
   {
      if (np -> type != VERB)
         gripe ("first.special", "Declared as other than a verb.");
      else
         fprintf (defs_file, "#define FSPECIAL %d\n", np -> refno);
   }

   if ((np = fndsymb(TESTSYMBOL, "last.special")) != NULL)
   {
      if (np -> type != VERB)
         gripe ("last.special", "Declared as other than a verb.");
      else
         fprintf (defs_file, "#define LSPECIAL %d\n", np -> refno);
   }
   
   if ((np = fndsymb(TESTSYMBOL, "first.magic")) != NULL)
   {
      if (np -> type != VERB)
         gripe ("first.magic", "Declared as other than a verb.");
      else
         fprintf (defs_file, "#define FACT %d\n", np -> refno);
   }

   if ((np = fndsymb(TESTSYMBOL, "last.magic")) != NULL)
   {
      if (np -> type != VERB)
         gripe ("last.magic", "Declared as other than a verb.");
      else
         fprintf (defs_file, "#define LACT %d\n", np -> refno);
   }
   
   if ((np = fndsymb(TESTSYMBOL, "first.direction")) != NULL)
   {
      if (np -> type != VERB)
         gripe ("first.direction", "Declared as other than a verb.");
      else
         fprintf (defs_file, "#define FDIR %d\n", np -> refno);
   }

   if ((np = fndsymb(TESTSYMBOL, "last.direction")) != NULL)
   {
      if (np -> type != VERB)
         gripe ("last.direction", "Declared as other than a verb.");
      else
         fprintf (defs_file, "#define LDIR %d\n", np -> refno);
   }
   
   if ((np = fndsymb(TESTSYMBOL, "|say")) != NULL ||
       (np = fndsymb(TESTSYMBOL, "say")) != NULL)
   {
      if (np -> type != VERB)
         gripe ("say", "Declared as other than a verb.");
      else
         fprintf (defs_file, "#define SAY %d\n", np -> refno);
   }
   
   if ((np = fndsymb(TESTSYMBOL, "dumpdata")) != NULL)
   {
      if (np -> type != VERB)
         gripe ("dumpdata", "Declared as other than a verb.");
      else
         fprintf (defs_file, "#define DUMP %d\n", np -> refno);
   }
   
   next_constant = -1;
   declare_constant ("noword",  "NOWORD",  next_constant--);
   declare_constant ("badword", "BADWORD", next_constant--);
   if (style >= 10)
      declare_constant ("ambigword", "AMBIGWORD", next_constant--);
   if (style >= 11)
   {
      declare_constant ("ambigtypo", "AMBIGTYPO", next_constant--);
      declare_constant ("sceneword", "SCENEWORD", next_constant--);
      declare_constant ("badsyntax", "BADSYNTAX", next_constant--);
   }
   if (style >= 10)
   {
      declare_constant ("no.match",  "NO_MATCH",   98);
      declare_constant ("no.amatch", "NO_AMATCH",  99);
   }
   if (style < 10)
   {
      if ((np = fndsymb(TESTSYMBOL, "objflag")) != NULL)
         fprintf (defs_file, "#define OBJ %d\n", np -> refno);
      else
         fprintf (defs_file, "#define OBJ %d\n", OBJFLAG);
      if ((np = fndsymb(TESTSYMBOL, "placeflag")) != NULL)
         fprintf (defs_file, "#define LOC %d\n", np -> refno);
      else
         fprintf (defs_file, "#define LOC %d\n", LOCFLAG);
      if ((np = fndsymb(TESTSYMBOL, "verbflag")) != NULL)
         fprintf (defs_file, "#define VERB %d\n", np -> refno);
      else
         fprintf (defs_file, "#define VERB %d\n", VERBFLAG);
   }
   else
   {
      fprintf (defs_file, "#define OBJ %d\n", OBJFLAG);
      fprintf (defs_file, "#define LOC %d\n", LOCFLAG);
      fprintf (defs_file, "#define VERB %d\n", VERBFLAG);
   }

   define_constant ("full.display",  "FULL",     "flag or synonym");
   define_constant ("fulldisplay",   "FULL",     "flag or synonym");
   define_constant ("fulldisp",      "FULL",     "flag or synonym");
   define_constant ("terse.display", "TERSE",    "flag or synonym");
   define_constant ("tersedisplay",  "TERSE",    "flag or synonym");
   define_constant ("fastmode",      "TERSE",    "flag or synonym");
   define_constant ("brief.display", "BRIEF",    "flag or synonym");
   define_constant ("briefdisplay",  "BRIEF",    "flag or synonym");
   define_constant ("quickie",       "BRIEF",    "flag or synonym");
   define_constant ("been.here",     "BEENHERE", "flag or synonym");
   define_constant ("beenhere",      "BEENHERE", "flag or synonym");

   fprintf (defs_file, "#define PLAIN %d\n", plain_text ? 1 : 0);

   fprintf (defs_file, "#define DBSTATUS %d\n", 3 - memory);
   fprintf (defs_file, "#define LPROC %d\n", type_base [VERB + 1]);
   fprintf (defs_file,
      "#define KEY(X) (value[%d]==X || value[%d]==X)\n",
      fndsymb(SYMBOL, "arg1") -> refno, fndsymb(SYMBOL, "arg2") -> refno);

   {
      int procno = 0;
      if ((np = fndsymb (SYMBOL, "INIT_PROC")) != NULL)
         procno = np -> proc_base;
      fprintf (defs_file, "#define INIT_PROC p%d\n", procno);
      if ((np = fndsymb (SYMBOL, "REPEAT_PROC")) == NULL)
         gripe ("", "No REPEAT sections found in the source code.");
      procno = np -> proc_base;
      fprintf (defs_file, "#define REPEAT_PROC p%d\n", procno);
   }
   fprintf (defs_file, "#endif\n");
   fprintf (defs_file, "#define SW_START     0%o\n", SW_START);
   fprintf (defs_file, "#define SW_BREAK     0%o\n", SW_BREAK);
   fprintf (defs_file, "#define HOLDER       0%o\n", HOLDER);
   fprintf (defs_file, "#define IGNORE_EOL   0%o\n", IGNORE_EOL);
   fprintf (defs_file, "#define NEST_TEXT    0%o\n", NEST_TEXT);
   fprintf (defs_file, "#define QUOTE_START  0%o\n", QUOTE_START);
   fprintf (defs_file, "#define TAG_START    0%o\n", TAG_START);
   fprintf (defs_file, "#define TAG_END      0%o\n", TAG_END);
   fprintf (defs_file, "#define NBSP         0%o\n", NBSP);
   fprintf (defs_file, "#define BLOCK_START  0%o\n", BLOCK_START);
   fprintf (defs_file, "#define BLOCK_END    0%o\n", BLOCK_END);
   fprintf (defs_file, "#define CENTRE_START 0%o\n", CENTRE_START);
   if (style > 10)
     fprintf (defs_file, "#define VHOLDER      0%o\n", VHOLDER);
     fprintf (defs_file, "#define UTF8         %d\n",  utf8);
   stage = 1;        /* Restore stage value */
   return;
}
