/* acdc.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 */
#define ACDC_VERSION "12.47, 23 Mar 2022"
/*
 * 23 Mar 22   MLA           Reverted UTF8 to being conditional.
 * 26 Feb 22   MLA           -d echoes at runtime A-code lines being executed.
 * 10 Nov 21   MLA           Added IFTURN.
 *                           REPEAT_PROC no longer special in ADVLIB mode.
 * 30 Jul 21   MLA           Made UTF8 support unconditional.
 * 24 Jul 21   MLA           Allowed text fragments for object synonyms.
 * 08 Jul 21   MLA           Bug fix end of line immediately after nested text.
 * 15 Oct 20   MLA           Default style now set to currect DEFAULT_STYLE.
 * 24 Jul 20   MLA           Added UTF8 support to A-code games.
 * 01 Jul 20   MLA           Added style 2 for Adv580.
 * 06 Dec 18   MLA           Added USEQUERY to adv1.h
 * 11 Jun 18   MLA           Added the -outdir option.
 * 03 Mar 16   MLA           Added SELECT.
 *                           Removed non-ANSI C support.
 * 25 Feb 16   MLA           bug: Clear out redundant adv<n>.c files, if any.
 * 02 Jan 15   MLA           bug: Don't use <malloc.h> on Mac OSX.
 * 11 May 13   MLA           Bug: Fixed in-line name count initialisation.
 *                           Bug: Fixed line counting for main source file.
 * 11 Jan 10   MLA           Renamed getline() to nextline() to avoid a
 *                           new gcc header clash.
 * 22 Jul 09   MLA           New command line processing.
 * 22 Oct 08   MLA           Bug: Re-initialise line counts after 1st pass!
 * 12 May 08   MLA           Call btinit() using the new calling sequence.
 * 12 Mar 08   MLA           Version 12 (two-pass).
 * 19 May 07   MLA           Added "quiet".
 * 09 May 07   MLA           Code parts now start from 2!
 * 03 Sep 06   MLA           Bug: All longs should be ints!
 * 23 Dec 05   MLA           Bug: roots[] should be long, not int!
 * 15 Jan 05   MLA           Added auto_flag to symbol structure.
 * 11 Jan 05   MLA           Added pre-declarations for UNDO handling.
 * 01 Jan 05   MLA           Added UNDO/REDO.
 * 12 Sep 04   MLA           CALL is optional.
 * 20 Aug 04   MLA           Added IFCLOUD.
 * 19 Aug 04   MLA           Added FREE_ARG notation.
 * 14 Aug 04   MLA           Added SAVE/RESTORE.
 * 08 Aug 04   MLA           Added APPEND.
 * 14 Feb 04   MLA           Converted longs to ints.
 * 09 Feb 04   MLA           Added ADJECTIVE and PREPOSITION types.
 * 03 Feb 04   MLA           Added NOUN type.
 * 09 Mar 03   MLA           Replaced trace with debug.
 * 03 Mar 03   MLA           Added AUTHOR.
 * 23 Feb 03   MLA           Initialise random number generator.
 * 02 Feb 03   MLA           Count autop chunks form 1 (kernel will be 0).
 * 07 Jan 03   MLA           Use btree instead of tsearch.
 * 01 Oct 02   MLA           Added dynamic copyleft notice.
 * 11 Jul 02   MLA           BUG: Fixed ITOBJ initalisation.
 * 23 Jun 02   MLA           Use "real" randomisation for texts.
 * 10 Mar 02   MLA           bug: Fixed source file display.
 * 03 Mar 02   MLA           Improved call argument passing.
 * 31 Dec 01   MLA           Allowed call argument passing; also added
 *                           cross-referencing code.
 * 26 Dec 01   MLA           Added text_lines.
 * 22 Dec 01   MLA           Allowed tying texts to texts.
 * 06 Nov 01   MLA           Added check for PLAIN and DEBUG.
 * 04 Nov 01   MLA           Made source_path a global buffer.
 * 06 Oct 01   MLA           Added switch and text counts for final report.
 * 14 Mar 01   MLA           Replaced old_style with style.
 * 12 Dec 99   MLA           Version 11.03 (HTML tag handling)
 * 24 Jul 99   MLA           Fixed complier warnings.
 * 20 Mar 94   MLA           Parse comline to allow dynamic tracing.
 * 06 Mar 94   MLA           Made INCLUDEs relative to umbrella source.
 * 23 Feb 91   MLA           Allowed variable bit fields.
 * 30 Dec 90   MLA           Declared voc_buf necessaries.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <locale.h>

#include "acdc.h"
char author [40];
char datbuf [16];
int memory = -1;
time_t now;
int quiet = 0;
int stage = 0;
int swap = 0;
char *acdc_version = ACDC_VERSION;

#include "const.h"

#include "line.h"
int line_status;
char line [MAXLINE + 1];
char raw_line [MAXLINE + 1];
char *line_ptr;
char *tp [ANY_NUMBER + 1];

#include "source.h"
int level = -1;
int file_count;
int total_lines;
int text_lines;
int inline_count;
int line_count [MAXLEVEL];
char out_stem [MAXLINE + 3];
char pathname [MAXLEVEL] [MAXLINE + 1];
FILE *infile [MAXLEVEL];

/* Default to style 1 is for Platt's Adv550 and for Goetz's Adv580, except 
 * that the latter is upped to style 2 by parse() on the basis of 
 * different comment styles. All other A-code games shoulspecify their
 * style explicitly.
 */
#include "game.h"
int style = DEFAULT_STYLE;
int style_set = 0;

char dbname [80];
char title [80];
char date [80];
char version [80];
char gameid [250];
char *gameid_ptr;
int utf8 = 0;

#include "major.h"           /* Pick up the MAXTYPES value! */
#include "symbol.h"
#include "btree.h"
int got_comma = 0;
int got_semicolon = 0;
int vocab_count;
int type_counts [MAXTYPES];
int type_base [MAXTYPES];
int flag_field_size [VARFLAG + 1];
int *used_counts;
int *roots [] = {NULL, NULL, NULL, NULL};
int ref_redo = 0;
struct node *entname = NULL;

#include "text.h"
int next_addr;
char *text_buf_ptr;
int text_buf_len = TEXT_INIT_LEN;
int switch_count;
int text_count;
int next_vocaddr;
char *voc_buf_ptr;
char *voc_ptr;
char *voc_top;
int voc_buf_len = VOC_INIT_LEN;
FILE *text_file;
char gameid [250];
char *gameid_ptr = &gameid [1];
int plain_text = 0;

#include "output.h"
FILE *defs_file;
FILE *code_file;
FILE *xref_file = NULL;

int query_used = 0;
int code_part = 2;
int minor_count = 0;
int debug = 0;
int xref = 0;
int next_procno;

/*====================================================================*/

int check_it (int val, char *arg1, char **arg2)
{
   if (val >= 0)
   {
      if (*arg2 == NULL)
      {
         *arg2 = arg1;
         return (val);
      }
      else
         fprintf (stderr,
            "*ERROR* Conflicting command line keywords '%s' and '%s'!\n", *arg2, arg1);
   }
   else if (val == -2)
      fprintf (stderr, "*ERROR* Bad command line argument '%s'!\n", arg1);

   fprintf (stderr, "\nUsage: acdc [options] [(path)name]\n");
   fprintf (stderr, "\nWhere allowed options are:\n");
   fprintf (stderr, "   -plain (abbreviable to -p)\n");
   fprintf (stderr, "       Do not encrypt game text.\n");
   fprintf (stderr, "   -outdir <dir> (abbreviable to -o)\n");
   fprintf (stderr, "       Place derived C sources in <dir>.\n");
   fprintf (stderr, "   -preload (abbreviable to -pr; default keyword)\n");
   fprintf (stderr, "       Do not create a separate text file.\n");
   fprintf (stderr, "   -file-page [<npage>] (abbrviable to -fp)\n");
   fprintf (stderr, "       Create a separate .dat file of text messages and\n");
   fprintf (stderr, "       use an internal paging mechanism. The optional\n");
   fprintf (stderr, "       <npage> argument defaults to 32 and specifies the\n");
   fprintf (stderr, "       number of 1KB buffers to use for paging.\n");
   fprintf (stderr, "   -file-memory (abbreviable to -fm)\n");
   fprintf (stderr, "       Read all of the text file into memory on startup.\n");
   fprintf (stderr, "   -file-read (abbreviable to -fr)\n");
   fprintf (stderr, "       Read all text as required from the text file.\n");
   fprintf (stderr, "   -xref (abbreviable to -x)\n");
   fprintf (stderr, "       Generate the .xrf cross-reference listing.\n");
   fprintf (stderr, "   -no-warnings (abbreviable to -nw)\n");
   fprintf (stderr, "       Suppress warnings about unused symbols.\n");
   fprintf (stderr, "   -quiet (abbreviable to -q)\n");
   fprintf (stderr, "       Suppress most of the standard info messages.\n");
   fprintf (stderr, "   -debug (abbreviable to -d)\n");
   fprintf (stderr, "       Makes game echo to stderr A-code lines being executed\n");
   fprintf (stderr, "   -help (abbreviable to -h)\n");
   fprintf (stderr, "       Print this message.\n\n");
   fprintf (stderr, "   -version (abbreviable to -v)\n");
   fprintf (stderr, "       Show version number and exit\n");
   exit (val >= 0 ? ERROR : OK);
}

/*====================================================================*/
#ifdef DEBUG
void symlist (struct node *np)
{
  printf("   %s\n", np->name);
}
#endif /* DEBUG */

int main (int argc, char **argv)
{
   int offset;
   int len;
   int i;
   int obs_first;
   int obs_last = 0;
   char *arg;
   char source_path [MAXLINE + 1];

   extern void opebfrst ();
   extern void domajor ();
   extern void initial ();
   extern void finalise ();

   printf ("[A-code to C translator, version %s]\n", ACDC_VERSION);
   srand ((unsigned int)(now = time (NULL)));
   strftime (datbuf, sizeof (datbuf), "%Y", localtime (&now));

/* Initialise the search stacks.
 */
   for (i = 0; i < sizeof (roots) / sizeof (roots [0]); i++)
      btinit (i);
   setlocale(LC_ALL, "C");

/* Obtain the name of the program to process. This may be present on
 * the command line or prompted for.
 */
   *source_path = '\0';
   if (argc > 1)
   {
      char *larg = NULL;
      while (--argc)
      {
         argv++;
         len = strlen(*argv);
         arg = *argv;
         if (*arg == '-' && *(arg + 1) == '-')  /* Cater for GNU-style keywords */
            arg++;
         if (strncmp (arg, "-version", len) == 0 || strcmp(arg, "-v") == 0)
            exit (0);
         if (strncmp (arg, "-debug", len) == 0)
            debug++;
         else if (strncmp (arg, "-outdir", len) == 0 || strcmp(arg, "-o") == 0)
         {
            argv++; argc--;
            sprintf(out_stem, "%s%c", *argv, SEP);
         }
         else if (strncmp (arg, "-plain", len) == 0)
            plain_text = 1;
         else if (strncmp (arg, "-xref", len) == 0)
            xref = 2;         /* "Super TRUE" -- noxref doesn't override */
         else if (strncmp (arg, "-file-read", len) == 0 || strcmp (arg, "-fr") == 0)
            memory = check_it (0, arg, &larg);
         else if (strncmp (arg, "-file-memory", len) == 0 || strcmp (arg, "-fm") == 0)
            memory = check_it (2, arg, &larg);
         else if (strncmp (arg, "-file-page", len) == 0 || strcmp (arg, "-fp") == 0)
         {
            memory = check_it (1, arg, &larg);
            if (*(argv + 1) != NULL)
            {
               if ((swap = atoi (*(argv + 1))) > 0)
               {
                  if (swap < 16)
                     swap = 16;
                  else if (swap > 128)
                     swap = 128;
                  argv++; argc--;
               }
            }
            else
               swap = 32;
         }
         else if (strncmp (arg, "-preload", len) == 0)
            memory = check_it (3, arg, &larg);
         else if (strncmp (arg, "-quiet", len) == 0)
            quiet |= 1;
         else if (strncmp (arg, "-no-warnings", len) == 0 || strcmp (arg, "-nw") == 0)
            quiet |= 2;
         else if (strncmp (arg, "-help", len) == 0)
            check_it (-1, NULL, NULL);
         else if (*arg == '-')
            check_it (-2, arg, NULL);
         else
            strcpy (source_path, arg);
      }
   }
   if (memory == -1)
      memory = 3;

   if (getenv ("PLAIN"))
      plain_text = 1;
   if (getenv ("DEBUG"))
      debug = 1;

   if (*source_path == '\0')
   {
      printf ("Adventure name: ");
      fgets (source_path, 99, stdin);
      if ((offset = strlen (source_path)) <= 1)
      {
         printf ("No input file specified.\n");
         return (ERROR);
      }
      source_path [offset - 1] = '\0';
   }

/* Open the source file. Note that openfirst maps the name to lower
 * case and appends .acd, if not present.
 */
   openfrst (source_path);

/* Initialise search trees and other things */

   initial ();
   if (!quiet) printf ("Parsing...\n")   ;
   while (line_status != EOF || stage == 0)
   {
      if (line_status == EOF)
      {
#ifdef DEBUG
         btspan(SYMBOL, symlist);
#endif /* DEBUG */
         stage++;
         openfrst (source_path);
         if (!quiet) printf ("Translating...\n")   ;
      }
      if ((line_status = nextline (IGNORE_BLANK)) == EOF)
      {
         if (stage)
            break;
      }
      domajor ();    /* line_status changes here! */
   }

   finalise ();

   free(text_buf_ptr);
   free(voc_buf_ptr);

   if (xref_file) fclose (xref_file);

/* Clear any junk left by a previous run of acdc */

   obs_first = code_part;
   while (1)
   {
      sprintf (line, "%sadv%02d.c", out_stem, ++code_part);
      if ((code_file = fopen(line, "r")) != NULL)
      {
         (void) unlink(line);
         obs_last = code_part;
      }
      else
         break;
   }

/* Report results */
   
   if ((quiet & 1) == 0)
   {
      printf (
         "Finished translating \"%s\":\n", source_file);
      printf (
         "   ... Program files: %d\n", file_count);
      if (obs_last)
      {
         int cnt = obs_last - obs_first;
         obs_first++;
         printf ("   ... (Cleared %d obsolete file", cnt);
         if (cnt == 1)
            printf (" adv%02d.c)\n", obs_first);
         else
            printf ("s -- adv%02d through to adv%02d)\n", obs_first, obs_last);
      }
      printf (
         "   ... Program lines: %d - code %d, text %d\n",
            total_lines, total_lines - text_lines, text_lines);
      printf (
         "   ... Vocabulary size: %d vocabulary words\n", vocab_count);
      printf (
         "   ... Separate texts: %d, embedding %d text switches\n", 
            text_count, switch_count);
      printf (
         "   ... Overall data file size: %d bytes\n", next_addr);
   }
   else if (!quiet)
      puts ("done.");
   return (OK);
}
