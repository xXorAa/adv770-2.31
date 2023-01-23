/* dominor.c (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 03 Mar 22   MLA           Renamed DUMP to DUMPDATA.
 * 28 Feb 22   MLA           -d now prints A-code lines being executed.
 * 04 Jan 22   MLA           -d now adds fputs calls instead of puts ones.
 * 10 Nov 21   MLA           Added IFTURN.
 * 04 May 21   MLA           Added IFNEEDCMD.
 * 01 Jul 20   MLA           Allowed for style 2.
 * 21 Jun 20   MLA           Bug: must check for hanging OTHERWISE.
 * 29 Oct 18   MLA           STOP: now just falls through to QUIT:
 * 11 Oct 18   MLA           BUG: STOP should also QUIT!
 * 02 Jul 18   MLA           Simplified DICT parsing.
 * 24 Jun 18   MLA           Note input_store() split from special() in kernel.
 * 22 Jun 18   MLA           Deprecated HAVE, HERE and NEAR.
 * 08 Nov 17   MLA           Bug: APPEND should not act as QUIT!
 * 28 Dec 16   MLA           BUG: adding a pointer to a value must give pointer!
 * 27 Aug 16   MLA           BUG: IFAT always returned false!
 * 23 Apr 16   MLA           Changed handling of all conditionals.
 *                           BUG: CHOOSE must also set pointer status correctly!
 * 09 Apr 16   MLA           BUG: EVAL must set pointer status correctly.
 * 04 Apr 16   MLA           Eliminated setjmp/lomgjmp calls in generated code.
 *                           Hence CALL directive reverted to being mandatory.
 *                           Bug: In ITERATE use pointers for pointers.
 * 30 Mar 16   MLA           Bug: never indirect 2nd DEPOSIT argument.
 * 03 Mar 16   MLA           Removed non-ANSI C support.
 *                           Added SELECT.
 * 09 Jan 15   MLA           Added multiple-pending sanity check.
 * 06 Oct 10   MLA           Added RESAY.
 * 29 Jan 10   MLA           Added IFHTML.
 * 11 Jan 10   MLA           Renamed getline() to nextline() to avoid a
 *                           new gcc header clash.
 * 14 Jul 09   MLA           Fixed gcc --pedantic warnings.
 * 23 May 08   MLA           Added IFTYPED.
 * 01 May 08   MLA           Bug: Must check proc offset to be >= 0!
 * 15 Mar 08   MLA           Version 12 changes.
 * 10 Mar 08   MLA           Added redundant qualifier check.
 * 10 Nov 07   MLA           Added DUMP.
 * 07 May 07   Stuart Munro  bug: need to include string.h (for strcmp).
 * 06 May 07   MLA           Added deprecated warnings.
 * 15 Oct 05   MLA           BUG: fixed the NOT IFIS logic.
 * 08 Sep 05   MLA           IFIS now takes multiple args.
 * 27 Aug 05   MLA           bug: Allow SAY <place>.
 * 02 Jan 05   MLA           Added UNDO/REDO.
 * 22 Aug 04   MLA           Made CALL directive optional.
 * 20 Aug 04   MLA           Added IFCLOUD and IFDOALL.
 * 19 Aug 04   MLA           Added SAVE/RESTORE and VERBATIM.
 * 08 Aug 04   MLA           Added APPEND.
 * 28 Mar 03   MLA           Added NEXT and BREAK.
 * 19 Mar 03   MLA           Check QUIP argument.
 * 09 Mar 03   MLA           Replaced trace with debug.
 * 06 Mar 03   Stuart Munro  Fix non-ASCII dominor() args declaration;
 *                           declare addparam(), fndparam() and iniparam().
 * 01 Mar 03   MLA           Bug: Fake argtyp[2] if faking argval[2] in SAY.
 * 02 Jan 03   MLA           bug: Don't try for CALL args unless PROCEDURE.
 * 21 Dec 02   MLA           Bug: Make itobj...place cater for schizoids!
 * 30 Sep 02   MLA           bug: Fixed gripe argument in RESPOND code.
 * 27 Jul 02   MLA           Added CHECKPOINT.
 * 14 Jul 02   MLA           Fake second arg for EXEC. Also pass on address
 *                           of the second argument, not its refno.
 *                           Also, report non-declarative types in xref.
 * 13 Jul 02   MLA           Complete re-write of SET.
 *                           ITOBJ now takes state/flag as args.
 * 12 Jul 02   MLA           Added IFNE, IFGE, IFLE, DESCRIBE.
 *                           Also removed usage of +1024 in IFHAVE etc...
 * 11 Jul 02   MLA           BUG: fixed ITOBJ initalisation fo local pointer.
 * 22 Jun 02   MLA           RANDOMISE texts for real.
 * 10 Mar 02   MLA           bug: fixed xref for local variables and params.
 * 03 Mar 02   MLA           BUG: fixed passing of local var parameters.
 * 13 Jan 02   MLA           Allow constants as call parameters.
 *                           Pass "hidden" type parameters.
 *                           Added RESPOND.
 * 10 Jan 02   MLA           bug: sundry fixes of LOCAL code.
 * 01 Jan 02   MLA           Added local variable declarations.
 * 31 Dec 01   MLA           Allowed for argument passing; also added
 *                           cross-referencing code.
 * 17 Oct 01   MLA           Improved compatibility with Platt's A-code.
 * 01 Jul 01   MLA           bug: Make VALUE dereference text qualifiers.
 *                           IFAT now allows multiple arguments.
 * 23 May 01   MLA           BUG: FAKEARG/COM - set ARG2 if that's the match!
 * 17 Mar 01   MLA           Added FAKECOM.
 * 16 Mar 01   MLA           Added IFANY. Allowed multiple args with IFKEY.
 * 05 Mar 01   MLA           Added FAKEARG.
 * 28 Feb 01   MLA           Added TIE.
 * 08 Aug 00   MLA           Added code for OTHERWISE.
 * 24 Jul 99   MLA           Fixed compiler warnings.
 * 24 Mar 99   MLA           Allowed IFFLAG's second arg to be a variable.
 * 01 Apr 94   MLA           Allowed range specification with ITOBJ/ITLOC.
 * 12 Dec 91   MLA           Allowed optional argument to INPUT.
 * 10 Mar 91   MLA           Changed STOPALL to FLUSH - flushes command
 *                           line as well as aborting ALL processing.
 * 27 Dec 90   MLA           Separated FLAGS type from CONSTANT and
 *                           allowed flags or states with IFNEAR/HERE/HAVE.
 * 15 Dec 90   MLA           Compacted automatic code braces.
 * 14 Dec 90   MLA           Allowed no keyword matching in (S)MOVE.
 * 12 Dec 90   MLA           New minor directive QUIP.
 * 11 Dec 90   MLA           Allowed variable args to MOVE and SMOVE.
 * 17 Nov 90   MLA           Introduced SPRINTF compilation symbol.
 *                           to cope with the deviant Ultrix library.
 * 15 Sep 90   MLA           Initial coding.
 *
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "acdc.h"
#include "game.h"
#include "line.h"
#include "const.h"
#include "symbol.h"
#include "minor.h"
#include "major.h"
#include "output.h"
#include "text.h"
#include "source.h"

void addparam (int arg, char *name);
int fndparam (char *name);
int iniparam (int varsize);

char cond_buf [256];

int entvalt (char *buf, int type, int what)
{
  int len;
  if (type <= TEXT) len = sprintf (buf, "value[%d]", what);
  else if (type == LOCAL) len = sprintf (buf, "lval[%d]", what);
  else len = sprintf (buf, "%d", what);
  return len;
}

int entvalv (char *buf, int type, int what)
{
  int len;
  if (type == VAR) len = sprintf (buf, "value[%d]", what);
  else if (type == LOCAL) len = sprintf (buf, "lval[%d]", what);
  else len = sprintf (buf, "%d", what);
  return len;
}

void show_line (char *tag)
{
   char *cptr = raw_line + strcspn(raw_line, "#\r\n") - 1;
   while (*cptr == ' ' && *cptr == '\t' && cptr >= raw_line)
      cptr--;
   *(cptr + 1) = '\0';
   
   fprintf (code_file, "fputs(\"%s%s:%d \", stderr);\n",
      tag, pathname[level], line_count [level]);
   cptr = raw_line;
   if (!(cptr = strchr (cptr, '"')))
      fprintf (code_file, "fputs(\"%s\\n\", stderr);\n", raw_line);
   else
   {
      char tbuf[256];
      char *tptr;
      strncpy (tbuf, raw_line, cptr - raw_line);
      tptr = tbuf + (cptr-- - raw_line);
      while (*(++cptr))
      {
        if (*cptr == '\\' || *cptr == '"')
          *tptr++ = '\\';
        *tptr++ = *cptr;
      }
      *tptr = '\0';
      fprintf (code_file, "fputs(\"%s\\n\", stderr);\n", tbuf);
   } 
}

void dominor (char *prochead, char *proccond)
{
   int minor_type;
   int type;
   char ctype;
   int index;
   int end_index;
   int proc_index;
   int pending_if = 0;
   int pending_conj = 0;
   int pending_not = 0;
   int pending_otherwise = 0;
   int multiple_pending = 0;
   int nesting = 0;
   int nestplus [80];
   int brace_pending = 0;
   int loop_count = 0;
   int args_count;
   int got_code = 0;
   int locals = 0;
   int cnt;
   char *chr;
   struct node *np;
   int argtyp [ANY_NUMBER + 1];
   int argval [ANY_NUMBER + 1];
   struct node *ap [ANY_NUMBER + 1];

   char *cond_ptr = cond_buf;

   if (debug)
      show_line ("*** ");

   memset (nestplus, '\0', sizeof (nestplus));
   while (1)
   {
      line_status = EOL;
      if (nextline (IGNORE_BLANK) == EOF)
         goto terminate;
      line_ptr = line;
      if (*line_ptr != ' ' && *line_ptr != '\t')
          break;
      if ((np = parse (MINOR)) == NULL)
      {
         if (style < 11)
            gripe (tp [0], "Not a known minor directive.");
         else
            gripe (tp [0], "Not a minor directive or callable symbol.");
      }
      minor_count++;
      ap[0] = np;

      minor_type = np -> refno;

      if (multiple_pending)
      {
         if (minor_type == multiple_pending)
            fprintf (code_file, "\n   ");
         else
         {
            fprintf (code_file, "-1)) return 0;\n");
            multiple_pending = 0;
         }
      }

      if (minor_type == LOCAL)
      {
         if (got_code)
            gripe ("",
               "Local declarations must precede all local code!");
         for (index = 1; tp [index]; index++)
         {
            addparam (0, tp [index]);
            if (xref)
               write_ref ("LOCAL", tp [index]);
         }
         continue;
      }

      if (got_code == 0)
      {
         locals = iniparam (flag_field_size[VARFLAG]/16 + 1);
         got_code = 1;
         if (proccond && *proccond)
            fprintf (code_file, "%s", proccond);
      }
      
      if (minor_type >= ELSE || minor_type < NOT)
      {
         if (minor_type >= ELSE && (pending_not || pending_conj))
            gripe ("", "Another conditional expected.");
         if (pending_if && !pending_conj)
         {
            if (*cond_buf)
              fprintf (code_file, "%s);\n", cond_buf);
            fprintf (code_file, "if(");
            if (minor_type == ELSE)
               fputc ('!', code_file);
            fprintf (code_file, "value[0])");
            *cond_buf = '\0';
            cond_ptr = cond_buf;
            fprintf (code_file, "{\n");
            nesting ++;
            nestplus[nesting] = 0;
            if (minor_type >= ELSE)
              pending_conj = pending_not = pending_if = 0;
            if (minor_type == OTHERWISE)
               minor_type = ELSE;
            if (minor_type == ELSE)
               continue;
         }
         if (minor_type > NOT && pending_otherwise)
           gripe ("", "Another conditional expected.");
         else
           pending_otherwise = 0;

         if (minor_type < NOT)  /* It's an IF of sorts */
         {
           if (pending_conj && *cond_buf)
              fprintf (code_file, "%s);\n", cond_buf);
           strcpy (cond_buf, "value[0]");
           cond_ptr = cond_buf + strlen(cond_buf);
           if (pending_conj) *cond_ptr++ = pending_conj;
           *cond_ptr++ = '=';
           if (pending_not) *cond_ptr++ = '!';
           *cond_ptr++ = '(';
	   pending_if = 1;
           *cond_ptr = '\0';
         }
         else
           pending_if = pending_conj = pending_not = 0;
      }
      else if (pending_conj && minor_type != NOT) /* AND, OR or XOR */
            gripe ("", "Misplaced conjunction.");

      if (minor_type != NOT)
         pending_conj = 0;

      if (brace_pending && minor_type != FIN && minor_type != EOI)
      {
         fputc ('\n', code_file);
         brace_pending = 0;
      }
      if (debug)
         show_line ("");

      index = 0;
      switch (minor_type)
      {
        case SAVE:
        case DELETE:
        case RESTORE:
          index = 1;            
          if ((ap[1] = fndsymb (TESTMINOR, tp [1])) == NULL)
            gripe (tp[1], "Invalid minor directive modifier.");
          break;
        default:
          break;
      }

      while (tp [++index] != NULL)
      {
         chr = tp [index];
         argtyp [index] = -1;
         if (isdigit (*chr) || *chr == '+' || *chr == '-')
            ap [index] = NULL;
         else
         {
            if (index == 1 && np -> min_args >= FREE_ARG)
            {
               argtyp [index] = FREE_ARG;
               argval [index] = 0;
               continue;
            }
            if ((argval [index] = fndparam (tp [index])) != -1)
            {
               argtyp [index] = LOCAL;
               ap [index] = NULL;
            }
            else if ((ap [index] = fndsymb (TESTSYMBOL, tp [index])) != NULL)
            {
               (ap [index] -> used_count)++;
               argtyp [index] = ap [index] -> type;
               if (argtyp [index] == PROCEDURE)
                  argval [index] = ap [index] -> proc_base;
               else
                  argval [index] = ap [index] -> refno;
            }
            if (xref)
            {
               char *tname;
               switch (argtyp [index])
               {
                  case OBJ:       tname = " obj "; break;
                  case LOC:       tname = "place"; break;
                  case VERB:      tname = " vrb "; break;
                  case VAR:       tname = " var "; break;
                  case TEXT:      tname = " txt "; break;
                  case PROCEDURE: tname = " prc "; break;
                  case CONSTANT:  tname = " cns "; break;
                  case STATE:     tname = "state"; break;
                  case FLAGS:     tname = " flg "; break;
                  case LOCAL:     tname = "local"; break;
                  default:        tname = " cns "; break;
               }
               write_ref (tname, tp [index]);
            }
         }
         if (ap [index] == NULL && argtyp [index] != LOCAL)
         {
            argtyp [index] = CONSTANT;
            argval [index] = getconst (tp [index]);
         }
      }

      index = 0;
      switch (minor_type)
      {
         case KEYWORD:
           deprecate ("KEYWORD", 11, 0);
         case ANYOF:
           if (minor_type == ANYOF) deprecate ("ANYOF", 11, 0);
            if (multiple_pending != minor_type)
               fprintf (code_file, "if (!%s(",
                  (minor_type == KEYWORD) ? "keyword" : "anyof");
            multiple_pending = minor_type;
            while (tp [++index] != NULL)
            {
               type = argtyp [index];
               if (type != OBJ && type != LOC && type != VERB)
                  gripe (tp [index], "Bad multiple choice argument!");
               fprintf (code_file, "%d,", argval [index]);
            }
            break;

         case HAVE:
           deprecate ("HAVE", 11, 0);
         case NEAR:
           if (minor_type == NEAR) deprecate ("NEAR", 11, 0);
         case HERE:
           if (minor_type == HERE) deprecate ("HERE", 11, 0);
            fprintf (code_file, "if (");
            index = 1;
            while (tp [index])
            {
               if (argtyp [index] != OBJ &&
                   argtyp [index] != VAR &&
                   argtyp [index] != LOCAL)
                     gripe (tp [index], "not reducible to an object.");
               if (minor_type == HAVE)
               {
                  deprecate ("HAVE", 11, 0);
                  fprintf (code_file, "!have");
               }
               else if (minor_type == NEAR)
               {
                  deprecate ("NEAR", 11, 0);
                  fprintf (code_file, "!isnear");
               }
               else
               {
                  deprecate ("HERE", 11, 0);
                  fprintf (code_file, "!ishere");
               }
               if (argtyp [index] == VAR)
                  fprintf (code_file, "(value[%d],-1,-1)",
                     argval [index]);
               else if (argtyp [index] == LOCAL)
                  fprintf (code_file, "(lval[%d],-1,-1)",
                     argval [index]);
               else
                  fprintf (code_file, "(%d,-1,-1)", argval [index]);
               if (tp [++index])
                  fprintf (code_file, " || ");
            }
            fprintf (code_file, ") return 0;\n");
            break;

         case ATLOC:
            deprecate ("ATLOC", 11, 0);
            fprintf (code_file, "if (");
            index = 1;
            while (tp [index])
            {
               if ((argtyp [index] > VAR && argtyp [index] != LOCAL)
                  || argtyp [index] == VERB)
               {
                  if (style < 10)
                  {
                     index++;
                     continue;
                  }
                  gripe (tp [index], "not reducible to a place or object.");
               }
               fprintf (code_file, "value[HERE]!=");
               if (argtyp [index] == VAR)
                  fprintf (code_file, "value[%d]",
                     argval [index]);
               else if (argtyp [index] == LOCAL)
                  fprintf (code_file, "lval[%d]",
                     argval [index]);
               else
                  fprintf (code_file, "%d", argval [index]);
               if (tp [++index])
                  fprintf (code_file, " && ");
            }
            fprintf (code_file, ") return 0;\n");
            break;

         case IFEQ:
         case IFNE:
         case IFLT:
         case IFLE:
         case IFGT:
         case IFGE:
            cond_ptr += entvalt (cond_ptr, argtyp [1], argval[1]);
            if (minor_type == IFEQ)
              { strcpy (cond_ptr, "=="); cond_ptr += 2; }
            if (minor_type == IFNE)
              { strcpy (cond_ptr, "!="); cond_ptr += 2; }
            if (minor_type == IFGT)
              *cond_ptr++ = '>';
            if (minor_type == IFLT)
              *cond_ptr++ = '<';
            if (minor_type == IFGE)
              { strcpy (cond_ptr, ">="); cond_ptr += 2; }
            if (minor_type == IFLE)
              { strcpy (cond_ptr, "<="); cond_ptr += 2; }
            cond_ptr += entvalt (cond_ptr, argtyp [2], argval[2]);
            break;

         case IFAT:
            while (tp [++index] != NULL)
            {
               if (argtyp [index] != OBJ && argtyp [index] != LOC &&
                   argtyp [index] != VAR && argtyp [index] != LOCAL)
                      gripe (tp [index], "not reducible to a location.");
               if (index > 1)
                  { strcpy (cond_ptr, "||"); cond_ptr += 2; }
/*               cond_ptr += entvalv (cond_ptr, LOC, HERE); */
               strcpy (cond_ptr, "value[HERE]=="); cond_ptr += 13;
/*               strcpy (cond_ptr, "=="); cond_ptr += 2; */
               cond_ptr += entvalv (cond_ptr, argtyp [index], argval [index]);
            }
            break;

         case CHANCE:
            strcpy (cond_ptr, "irand(100)<"); cond_ptr += 11;
            entvalt (cond_ptr, argtyp [1], argval [1]);
            break;

         case IFFLAG:
            if (argtyp [1] > VERB && argtyp [1] != VAR &&
               argtyp [1] != LOCAL)
                  gripe (tp [1],"Wrong type for bit operation.");
            if ((argtyp [2] < CONSTANT && argtyp [2] != VAR &&
               argtyp [2] != LOCAL) || argtyp [2] == STATE)
                  gripe (tp [2],
                     "Not reducible to a flag.");
            if (argtyp [1] == VAR)
               cond_ptr += sprintf (cond_ptr, "bitest(evar(%d),", argval [1]);
            else if (argtyp [1] == LOCAL)
               cond_ptr += sprintf (cond_ptr, "lbitest(%d,", argval [1]);
            else
               cond_ptr += sprintf (cond_ptr, "bitest(%d,", argval [1]);
            cond_ptr += entvalv (cond_ptr, argtyp [2], argval [2]);
            cond_ptr += sprintf (cond_ptr, "%s)",
               argtyp [1] == LOCAL ? ",lval,lbts" : "");
            break;

         case IFKEY:
         case IFANY:
            if (argtyp [1] != OBJ && argtyp [1] != LOC &&
                argtyp [1] != VERB && argtyp [1] != VAR &&
                argtyp [1] != LOCAL)
                  gripe (tp [index],
                     "Unsuitable IFKEY/IFANY argument type!");
            if (tp [2] == NULL)
            {
               cond_ptr += sprintf (cond_ptr, "KEY(");
               cond_ptr += entvalv (cond_ptr, argtyp [1], argval [1]);
               cond_ptr += sprintf (cond_ptr, ")");
	    }
            else
            {
               cond_ptr += sprintf (cond_ptr, "%s(",
                  (minor_type == IFKEY) ? "keyword" : "anyof");
               index = 0;
               while (tp [++index] != NULL)
               {
                  cond_ptr += entvalv (cond_ptr, argtyp [index], argval [index]);
                  *cond_ptr++ = ',';
               }
               strcpy (cond_ptr, "-1)");
            }
            break;

         case QUERY:
            query_used = 1;
            if (argtyp [1] != TEXT && argtyp [1] != VAR &&
               argtyp [1] != LOCAL)
                  gripe (tp [1], "Not reducible to text.");
            cond_ptr += sprintf (cond_ptr, "query(");
            cond_ptr += entvalv (cond_ptr, argtyp [1], argval [1]);
            strcpy (cond_ptr, ")); if (loop>1) return (0");
            break;

         case IFINRANGE:
            cond_ptr += entvalv (cond_ptr, argtyp [2], argval [2]);
            if (argtyp [1] == VAR)
               cond_ptr += sprintf (cond_ptr, "<=value[%d] && value[%d]<=",
                  argval [1], argval [1]);
            else if (argtyp [1] == LOCAL)
               cond_ptr += sprintf (cond_ptr, "<=lval[%d] && lval[%d]<=",
                  argval [1], argval [1]);
            else
               cond_ptr += sprintf (cond_ptr,
                  "<=%d && %d<=", argval [1], argval [1]);
            cond_ptr += entvalv (cond_ptr, argtyp [3], argval [3]);
            break;

         case IFIS:
            if (argtyp [1] != VAR && argtyp [1] != LOCAL)
               gripe (tp[1], "not a variable.");
            index = 1;
            while (tp [++index] != NULL)
            {
               if (argtyp [index] > TEXT)
                  gripe (tp [index], "Not a referrable entity.");
               cond_ptr += sprintf
                  (cond_ptr, "%s", index > 2 ? "||" : "");
               if (argtyp [1] == VAR)
                  cond_ptr += sprintf (cond_ptr, "value[%d]==%d", argval [1],
                     argval [index]);
               else if (argtyp [1] == LOCAL)
                  cond_ptr += sprintf (cond_ptr, "lval[%d]==%d", argval [1],
                     argval [index]);
            }
            break;

         case IFHTML:
         case IFCLOUD:
         case IFTURN:
         case IFDOALL:
         case IFNEEDCMD:
            cond_ptr += sprintf (cond_ptr, "test(\"%s\")", tp [0] + 2);
            break;

         case IFTYPED:
            cond_ptr += sprintf (cond_ptr, "typed(\"%s\")", tp [1]);
            break;
 
         case IFLOC:
            if (argtyp [1] != OBJ && argtyp [1] != VAR &&
               argtyp [1] != LOCAL)
                  gripe (tp [1], "Not reducible to an object.");
            index = 1;
            while (tp [++index] != NULL)
            {
               if (argtyp [index] != OBJ && argtyp [index] != LOC &&
                   argtyp [index] != VAR && argtyp [index] != LOCAL)
                      gripe (tp [index], "not reducible to a location.");
               cond_ptr += sprintf (cond_ptr, "%sgetloc(",
                  index > 2 ? "||" : "");
               if (argtyp [1] == VAR)
                  cond_ptr += sprintf (cond_ptr, "value[%d])==", argval [1]);
               else if (argtyp [1] == LOCAL)
                  cond_ptr += sprintf (cond_ptr, "lval[%d])==", argval [1]);
               else
                  cond_ptr += sprintf (cond_ptr, "%d)==", argval [1]);
               cond_ptr += entvalv (cond_ptr, argtyp [index], argval [index]);
            }
            break;

         case AND:
         case OR:
         case XOR:
            if (pending_not)
              gripe (tp [0], "A condition expected after NOT.");
            if (pending_conj)
              gripe (tp [0],
                 "A condition expected before another conjunction.");
            if (minor_type == AND) pending_conj = '&';
            else if (minor_type == OR) pending_conj = '|';
            else pending_conj = '^';
            break;

         case NOT:
            pending_not = 1;
            break;

         case ELSE:
            fprintf (code_file, "}else{\n");
            break;

         case OTHERWISE:
            fprintf (code_file, "}else{");
            nesting--;
            nestplus[nesting]++;
            pending_otherwise = 1;
            break;

         case EOI:
            deprecate ("EOI", 11, 0);
         case EOT:
            if (minor_type == EOT) deprecate ("EOT", 11, 0);
         case FIN:
            fflush (code_file);
            if (!nesting)
            {
              if (style < 10) break;
              gripe (tp [0], "Too many code closures.");
            }
            if (minor_type == EOT)
            {
               loop_count = 0;
               brace_pending = 0;
               while (nesting--)
                  fputc ('}', code_file);
               nesting = 0;
               fputc ('\n', code_file);
            }
            else
            {
               nesting--;
               int cnt = nestplus [nesting];
               while (cnt--)
                 fputc ('}', code_file);
               nestplus [nesting] = 0;
               fputc ('}', code_file);
               brace_pending = 1;
               if (minor_type == EOI)
                  loop_count--;
            }
            break;

         case ITOBJ:
            if (argtyp [1] != VAR && argtyp [1] != LOCAL)
               gripe (tp [1], "Not a variable.");
            loop_count++;
            if (argtyp [1] == VAR)
               fprintf (code_file, "*bitword(%d)= -1; value[%d]=",
                  argval [1], argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "lbts[%d*VARSIZE]= -1; lval[%d]=",
                  argval [1], argval [1]);
            fprintf (code_file, "FOBJ-1; while (++");
            if (argtyp [1] == VAR)
               fprintf (code_file, "value[%d]", argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "lval[%d]", argval [1]);
            fprintf (code_file, "<=LOBJ) {\n");
            nesting++;
            nestplus[nesting] = 0;
            index = 1;
            while (tp [++index] != NULL)
            {
               if (argtyp [index] != LOC && argtyp [index] != FLAGS &&
                   argtyp [index] != VAR && argtyp [index] != LOCAL)
                     gripe (tp [index], "Not reducible to a place or a flag!");
               fprintf (code_file, "if (");
               if (argtyp [index] == FLAGS)
               {
                  if (argtyp [1] == VAR)
                     fprintf (code_file, "!bitest(value[%d],%d)",
                        argval [1], argval [index]);
                  else if (argtyp [1] == LOCAL)
                     fprintf (code_file, "!lbitest(%d,%d,lval,lbts)",
                        argval [1], argval [index]);
                  else
                     fprintf (code_file, "!bitest(%d,%d)",
                        argval [1], argval [index]);
               }
               else
               {
                  fprintf (code_file, "!isat(");
                  if (argtyp [1] == VAR)
                     fprintf (code_file, "value[%d]",
                        argval [1]);
                  else if (argtyp [1] == LOCAL)
                     fprintf (code_file, "lval[%d]",
                        argval [1]);
                  else
                     fprintf (code_file, "%d", argval [1]);
                  fprintf (code_file, ",-1,-1,");
                  if (argtyp [index] == VAR)
                     fprintf (code_file, "value[%d])",
                        argval [index]);
                  else if (argtyp [index] == LOCAL)
                     fprintf (code_file, "lval[%d])",
                        argval [index]);
                  else
                     fprintf (code_file, "%d)", argval [index]);
              }
               fprintf (code_file, ") continue;\n");
            }
            break;

         case ITLOC:
            if (argtyp [1] != VAR && argtyp [1] != LOCAL)
               gripe (tp [1], "Not a variable.");
            if (tp [2] && !tp [3])
               gripe (tp [0],
                  "Wrong parameter count - should be 1 or 3.");
            if (tp [2] && argtyp [2] != LOC)
               gripe (tp [2], "Not a place!");
            if (tp[2] && tp [3] && argtyp [3] != LOC)
               gripe (tp [3], "Not a place!");
            loop_count++;
            if (argtyp [1] == VAR)
               fprintf (code_file, "*bitword(%d)= -1; value[%d]=",
                  argval [1], argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "lbts[%d*VARSIZE]= -1; lval[%d]=",
                  argval [1], argval [1]);
            if (tp [2])
               fprintf (code_file, "%d", argval [2] - 1);
            else
               fprintf (code_file, "FLOC-1");
            if (argtyp [1] == VAR)
               fprintf (code_file, "; while (++value[%d]<=", argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "; while (++lval[%d]<=", argval [1]);
            if (tp [2] && tp [3])
               fprintf (code_file, "%d) {\n", argval [3]);
            else
               fprintf (code_file, "LLOC) {\n");
            nesting++;
            nestplus[nesting] = 0;
            break;

         case ITERATE:
            if (argtyp [1] != VAR && argtyp [1] != LOCAL)
               gripe (tp [1], "Not a variable.");
            if (argtyp[2] == VAR || argtyp[2] == LOCAL)
            {
               if (argtyp [2] == VAR)
                  fprintf (code_file, "if (*bitword(%d) == -1) ",
                     argval[2]);
               else
                  fprintf (code_file, "if (lbts[%d*VARSIZE] == -1) ",
                     argval[2]);
            }
            if (argtyp [1] == VAR)
               fprintf (code_file, "*bitword(%d)= -1;value[%d]=",
                  argval [1], argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "lbts[%d*VARSIZE]= -1;lval[%d]=",
                  argval [1], argval [1]);
            if (argtyp [2] == VAR)
               fprintf (code_file, "value[%d]", argval [2]);
            else if (argtyp [2] == LOCAL)
               fprintf (code_file, "lval[%d]", argval [2]);
            else
               fprintf (code_file, "%d", argval [2]);
            if (argtyp [1] == VAR)
               fprintf (code_file, "-1; while(++value[%d]<=",
                  argval [1]);
            else
               fprintf (code_file, "-1; while(++lval[%d]<=",
                  argval [1]);
            if (argtyp [3] == VAR)
               fprintf (code_file, "value[%d]", argval [3]);
            else if (argtyp [3] == LOCAL)
               fprintf (code_file, "lval[%d]", argval [3]);
            else
               fprintf (code_file, "%d", argval [3]);
            fprintf (code_file, ") {\n");
            loop_count++;
            nesting++;
            nestplus[nesting] = 0;
            break;

         case NEXT:
         case BREAK:
            if (loop_count <= 0)
               gripe (tp [0], "Directive not inside a loop!");
            if (minor_type == NEXT)
               fprintf (code_file, "continue;\n");
            else
               fprintf (code_file, "break;\n");
            break;

         case PROCEED:
         case RETURN:
            fprintf (code_file, "return %d;\n",
               minor_type == PROCEED ? 0 : 1);
            break;

         case STOP:
            fprintf (code_file, "finita();\n");  /* And fall through */
         case QUIT:
            fprintf (code_file, "loop=1; return(0);\n");
            break;

         case GET:
         case DROP:
         case APPORT:
            if (argtyp [1] != OBJ && argtyp [1] != VAR &&
               argtyp [1] != LOCAL)
                  gripe (tp [1], "Not reducible to an object.");
            if (minor_type == APPORT && argtyp [2] != LOC &&
               argtyp [2] != VAR && argtyp [2] != LOCAL)
                  gripe (tp [2], "Not reducible to a place.");
            fprintf (code_file, "apport(");
            if (argtyp [1] == VAR)
               fprintf (code_file, "value[%d]", argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "lval[%d]", argval [1]);
            else
               fprintf (code_file, "%d", argval [1]);
            fputc (',', code_file);
            if (minor_type != APPORT)
               fprintf (code_file, "%s",
                  (minor_type == GET) ? "INHAND" : "HERE");
            else if (argtyp [2] == VAR)
               fprintf (code_file, "value[%d]", argval [2]);
            else if (argtyp [2] == LOCAL)
               fprintf (code_file, "lval[%d]", argval [2]);
            else
               fprintf (code_file, "%d", argval [2]);
            fprintf (code_file, ");\n");
            break;

         case GOTO:
            if (argtyp [1] == VAR)
               fprintf (code_file, "move(value[%d],-1);\n",
                  argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "move(lval[%d],-1);\n",
                  argval [1]);
            else if (argtyp [1] == LOC)
               fprintf (code_file, "move(%d,-1);\n", argval [1]);
            else
               gripe (tp [1], "Not reducible to a place.");
            break;

/* Note that it is safe to negate the second argument to signal the lack of */
/* keyword arguments, since no text can have the value of 0, 1 or 2 - these */
/* being reserved by the translator, the first possible refno for anything  */
/* is 3! */

         case MOVE:
         case SMOVE:
            end_index = 1;
            while (tp [++end_index] != NULL);
            end_index -= (minor_type == MOVE) ? 1 : 2;
            if (argtyp [end_index] == LOC)
               fprintf (code_file, "move(%d", argval [end_index]);
            else if (argtyp [end_index] == VAR)
               fprintf (code_file,
                  "move(value[%d]", argval [end_index]);
            else if (argtyp [end_index] == LOCAL)
               fprintf (code_file,
                  "move(lval[%d]", argval [end_index]);
            else
               gripe (tp [end_index], "Not reducible to a place.");
            if (minor_type == SMOVE)
            {
               index = end_index + 1;
               if (argtyp [index] == TEXT)
                  fprintf (code_file, ",%s%d",
                     (index == 2) ? "-" : "", argval [index]);
               else if (argtyp [index] == VAR)
                  fprintf (code_file, ",%svalue[%d]",
                     (index == 2) ? "-" : "", argval [index]);
               else if (argtyp [index] == LOCAL)
                  fprintf (code_file, ",%slval[%d]",
                     (index == 2) ? "-" : "", argval [index]);
               else
                  gripe (tp [index], "Not reducible to text.");
            }
            else
               fprintf (code_file, ",%d", (end_index == 1) ? -2: 0);
            end_index--;
            index = 0;
            while (++index <= end_index)
               fprintf (code_file, ",%s%d",
                  (index == end_index) ? "-" : "", argval [index]);
            fprintf (code_file, "); if (loop) return(0);\n");
            break;

         case DICT:
            {
               int word = 0;
               int  what= 0;
               int flag = 0;
               int text = 0;
               index = 1;
               if (tp [1])
               {
                  if (argtyp [1] <= VERB || argval [index] == 0)
                     word = argval [index++];
               }
               if (tp [index])
               {
                  if (argtyp [index] < VERB || argval [index] == 0)
                     what = argval [index++];
               }
               if (tp [index] != NULL)
               {
                  if (argtyp [index] == FLAGS || argval [index] == 0)
                     flag = argval [index++];
               }
               if (tp [index])
               {
                  if (argtyp [index] == TEXT || argval [index] == 0)
                     text = argval [index];
               }
               if (word == 0 && (what || flag))
                 gripe (tp [1], "Not a word, place or object.");
               fprintf (code_file, "voc (%d, %d, %d, %d);\n",
                  word, what, flag, text);
            }
            break;

//            if (argtyp [1] > VERB &&
//               (argtyp [1] != CONSTANT || argval [1] != 0))
//                  gripe (tp [1], "Not verb, place or object.");
//            if (argtyp [2] > LOC &&
//               (argtyp [2] != CONSTANT || argval [2] != 0))
//                  gripe (tp [2], "Not a place, object or zero.");
//            if (argtyp [3] != FLAGS &&
//               (argtyp [3] != CONSTANT || argval [3] != 0))
//                  gripe (tp [3], "Not a flag name or zero.");
//            if (tp [4] != NULL)
//            {
//               if (argtyp [4] != TEXT &&
//                  (argtyp [4] != CONSTANT || argval [4] != 0))
//                     gripe (tp [4], "Not a text or zero.");
//               index = argval [4];
//            }
//            else
//               index = 0;
//            fprintf (code_file, "voc (%d, %d, %d, %d);\n",
//               argval [1], argval [2], argval [3], index);
            break;

         case RESPOND:
            if (argtyp [1] != OBJ && argtyp [1] != LOC &&
               argtyp [1] != VERB)
                  gripe (tp [1],
                     "Not an object, place or verb!");
            fprintf (code_file, "if (anyof(%d,", argval[1]);
            index = 2;
            while (tp [index] && argtyp [index] < TEXT &&
               argtyp [index] != VAR)
            {
               fprintf (code_file, "%d,", argval [index]);
               index++;
            }
            if (tp [index] == NULL)
               gripe ("", "Missing text argument!");
            fprintf (code_file, "-1))");
            ap [1]     = ap [index];     ap [2]     = ap [index + 1];
            tp [1]     = tp [index];     tp [2]     = tp [index + 1];
            argtyp [1] = argtyp [index]; argtyp [2] = argtyp [index + 1];
            argval [1] = argval [index]; argval [2] = argval [index + 1];
            minor_type = QUIP;
         case RESAY:
            if (minor_type == RESAY) /* I.e. we didn't fall through to here */
               fprintf (code_file, "zap_text();\n");
         case APPEND:
            if (minor_type == APPEND) /* I.e. we didn't fall through to here */
               fprintf (code_file, "glue_text();\n");
         case QUIP:
         case SAY:
         case DESCRIBE:
#if STYLE < 12
         case VALUE:
            if (minor_type == VALUE)
            {
               deprecate ("VALUE", 11, 0);
               type = 1;
            }
            else 
#endif /* STYLE */
            if (minor_type == DESCRIBE)
            {
               if (style >= 11)
                  type = 32;
               else
                  gripe (tp [0], "Only valid for STYLE >= 11!");
            }
            else if (minor_type == QUIP)
               type = 64;
            else
               type = 0;

            if (argtyp [1] != TEXT && argtyp [1] != VAR &&
                argtyp [1] != LOCAL && argtyp [1] != OBJ &&
                argtyp [1] != LOC)
                   gripe (tp[1], "Argument not reducible to a text!");
            if (argtyp [1] == TEXT && style >= 11)
            {
               if ((ap[1] -> text_type & QUALIFIER_ALLOWED) == 0 &&
                    ap[1] -> state_count < 2 && tp[2])
                  gripe (tp[1], "Redundant word qualifier.");
               else if (
                  (ap[1] -> text_type & QUALIFIER_MANDATORY) == QUALIFIER_MANDATORY
                     && tp[2] == NULL)
                  gripe (tp[1], "Missing required word qualifier.");
	    }
            if (minor_type == DESCRIBE &&
               (argtyp [1] == VERB || argtyp [1] == TEXT ||
                argtyp [1] == LOC))
                  gripe (tp [1], "Not reducible to a detailed description!");
            if (argtyp [1] == VAR)
               type += 2;

            if (tp [2] != NULL)
            {
                type += 8;
                if (argtyp [2] <= LOC || argtyp [2] == VAR ||
                   (argtyp [2] == TEXT && minor_type == VALUE))
                   type +=4;
            }
            else
            {
               argtyp [2] = CONSTANT;
               argval [2] = 0;
            }

            fprintf (code_file, "say(%d,", type);

/* Indirections through global variables will be sorted out by
 * the say() routine at run time.
 */
            if (argtyp [1] == LOCAL)
               fprintf (code_file, "lval[%d],", argval [1]);
            else
               fprintf (code_file, "%d,", argval [1]);
            if (argtyp [2] == LOCAL)
              fprintf (code_file, "lval[%d]);\n", argval [2]);
            else
              fprintf (code_file, "%d);\n", argval [2]);
            if (minor_type == QUIP || minor_type == RESPOND)
              fprintf(code_file, " if (loop) return(0);");
            break;

         case SET:
            if      (argtyp [1] == VAR) ctype = 'V';
            else if (argtyp [1] == LOCAL)    ctype = 'L';
            else if (argtyp [1] == TEXT)     ctype = 'T';
            else if (argtyp [1] == OBJ ||
                     argtyp [1] == LOC)    ctype = 'E'; /* All else */
            else gripe (tp [1], "Not a value holder.");

            fprintf (code_file, "set('%c',%d,", ctype, argval [1]);
            if      (argtyp [2] == CONSTANT ||
                     argtyp [2] == SYNONYM ||
                     argtyp [2] == STATE)    ctype = 'c';
            else if (argtyp [2] == VAR) ctype = 'v';
            else if (argtyp [2] == LOCAL)    ctype = 'l';
            else if (argtyp [2] == OBJ ||
                     argtyp [2] == LOC ||
                     argtyp [2] == TEXT)     ctype = 'e'; /* All else */
            else gripe (tp [2], "Not reducible to a value!");

            fprintf (code_file, "'%c',%d,", ctype, argval [2]);
            fprintf (code_file, "%s);\n",
               (argtyp [1] == LOCAL || argtyp [2] == LOCAL) ?
                  "lval, lbts" : "NULL,NULL");
            break;

         case ADD:
         case SUBTRACT:
         case MULTIPLY:
         case DIVIDE:
         case INTERSECT:
            if (argtyp [1] > TEXT && argtyp [1] != LOCAL)
               gripe (tp [1], "Not a value holder.");
            if (argtyp [1] != LOCAL)
               fprintf (code_file, "value[%d] ", argval [1]);
            else
               fprintf (code_file, "lval[%d] ", argval [1]);
            if (minor_type == ADD) fputc ('+', code_file);
            if (minor_type == SUBTRACT) fputc ('-', code_file);
            if (minor_type == DIVIDE) fputc ('/', code_file);
            if (minor_type == MULTIPLY) fputc ('*', code_file);
            if (minor_type == INTERSECT) fputc ('&', code_file);
            if (argtyp [2] <= TEXT)
               fprintf (code_file, "= value[%d];\n",argval [2]);
            else if (argtyp [2] == LOCAL)
               fprintf (code_file, "= lval[%d];\n",argval [2]);
            else
               fprintf (code_file, "= %d;\n", argval [2]);
            if (minor_type == ADD)
            {
              if (argtyp[2] == VAR)
              {
                fprintf (code_file,
                  "if (*bitword(%d*VARSIZE)==-1) ", argval[2]);
                if (argtyp[1] == VAR)
                  fprintf (code_file, "*bitword(%d*VARSIZE)= -1;\n", argval[1]);
                else if (argtyp[1] == LOCAL)
                  fprintf (code_file, "lbts[%d*VARSIZE]= -1;\n", argval[1]);
              }
              else if (argtyp[2] == LOCAL)
              {
                if (argtyp [1] == VAR || (argtyp [1] == LOCAL))
                {
                  fprintf (code_file,
                    "if (lbts[%d*VARSIZE]==-1) ", argval[2]);
                  if (argtyp[1] == VAR)
                    fprintf (code_file,
                      "*bitword(%d*VARSIZE)= -1;\n", argval[1]);
                  else if (argtyp[1] == LOCAL)
                    fprintf (code_file, "lbts[%d*VARSIZE]= -1;\n", argval[1]);
		}
              }
            }
            break;

         case NEGATE:
            if (argtyp [1] > TEXT && argtyp [1] != LOCAL)
               gripe (tp [1], "Has no value to be negated.");
            if (argtyp [1] == LOCAL)
               fprintf (code_file, "lval[%d] *= -1;\n",
                  argval [1]);
            else if (argtyp [1] < TEXT)
               fprintf (code_file, "value[%d] *= -1;\n",
                  argval [1]);
            else if (argtyp [1] == TEXT)
               gripe (tp [1], "Texts cannot be negative.");
            else
               gripe (tp [1], "Bad negation.");
            break;

         case RANDOM:
            if (argtyp [1] > VAR && argtyp [1] != LOCAL)
               gripe (tp [1], "Not a randomisable holder.");
            if (argtyp [1] != LOCAL)
               fprintf (code_file, "value[%d] = irand(", argval [1]);
            else
               fprintf (code_file, "lval[%d] = irand(", argval [1]);
            if (argtyp [2] <= VAR)
               fprintf (code_file, "value[%d]", argval [2]);
            else if (argtyp [2] == LOCAL)
               fprintf (code_file, "lval[%d]", argval [2]);
            else
               fprintf (code_file, "%d", argval [2]);
            fprintf (code_file, ");\n");
            break;

         case CHOOSE:
            if (argtyp [1] > VAR && argtyp [1] != LOCAL)
               gripe (tp [1], "Not a value holder.");
            if (argtyp [1] != LOCAL)
               fprintf (code_file, "value[%d] = irand(", argval [1]);
            else
               fprintf (code_file, "lval[%d] = irand(", argval [1]);
            if (argtyp [3] == VAR)
               fprintf (code_file, "value[%d]-", argval [3]);
            else if (argtyp [3] == LOCAL)
               fprintf (code_file, "lval[%d]-", argval [3]);
            else
               fprintf (code_file, "%d-", argval [3]);
            if (argtyp [2] == VAR)
               fprintf (code_file, "value[%d]+1)+value[%d];\n",
                  argval [2], argval [2]);
            else if (argtyp [2] == LOCAL)
               fprintf (code_file, "lval[%d]+1)+lval[%d];\n",
                  argval [2], argval [2]);
            else
               fprintf (code_file, "%d+1)+%d;\n", argval [2], argval [2]);
            if (argtyp [2] != CONSTANT)
            {
                if (argtyp [1] == VAR)
                   fprintf (code_file, "*bitword(%d)= -1;\n", argval [1]);
                else if ( argtyp [1] == LOCAL)
                   fprintf (code_file, "lbts[%d*VARSIZE]= -1;\n", argval [1]);
            }
            break;

         case RANDSEL:
            if (argtyp [1] > VAR && argtyp [1] != LOCAL)
               gripe (tp [1], "Not a value holder.");
            cnt = 0;
            type = argtyp [2];
            if (type == LOCAL)
               gripe (tp [index], "Cannot indirect to local variables.");
            for (index = 2; tp[index] != NULL; index++)
            {
               if (argtyp [index] != type)
                  gripe (tp [index], "Changed option type!");
               cnt++;
            }
            if (cnt < 2)
               gripe (tp [1], "Not enough options to select from.");
            if (argtyp [1] == VAR)
               fprintf (code_file, "value[%d]=randsel(%d,%d",
                  argval [1], cnt, argval [2]);
            else
               fprintf (code_file, "lval[%d]=randsel(%d,%d",
                  argval [1], type, argval [2]);
            for (index = 3; tp[index] != NULL; index++)
               fprintf (code_file, ",%d", argval[index]);
            if (type != CONSTANT)
               fprintf (code_file, ");*bitword(%d) = -1;\n", argval [1]);
            break;

         case DEPOSIT:       /* DEPOSIT variable {objptr|placeptr} */
            if (argtyp [1] != VAR && argtyp [1] != LOCAL)
               gripe (tp [1], "Not a variable.");
            if (argtyp [1] == VAR)
               fprintf (code_file, "value[value[%d]]=", argval [1]);
            else
               fprintf (code_file, "value[lval[%d]]=", argval [1]);
            if (argtyp [2] <= TEXT)
               fprintf (code_file, "value[%d];\n", argval[2]);
            else if (argtyp [2] == LOCAL)
               fprintf (code_file, "lval[%d];\n", argval[2]);
            else
               fprintf (code_file, "%d;\n", argval[2]);
            break;

         case LDA:           /* LDA variable refno */
         case EVAL:          /* EVAL variable refno */
         case LOCATE:        /* LOCATE variable {objptr} */
            if (argtyp [1] == VAR)
               fprintf (code_file, "value[%d]=", argval[1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "lval[%d]=", argval[1]);
            else
               gripe (tp [1], "Not a variable.");

            if (minor_type == LDA)
            {
               if (argtyp [2] == LOCAL)
                  gripe (tp [2], "Cannot idirect to a local variable!");
               if (argtyp [2] > TEXT && argtyp [2] != CONSTANT)
                  gripe (tp [2], "Not an indirectable entity.");
               fprintf (code_file, "%d;", argval [2]);
               type = -1;
            }
            else if (minor_type == EVAL)
            {
               if (argtyp [2] != VAR && argtyp [2] != LOCAL)
                  gripe (tp [2], "Not a variable.");
               if (argtyp [2] == VAR)
                  fprintf (code_file, "value[value[%d]];", argval [2]);
               else
                  fprintf (code_file, "value[lval[%d]];", argval [2]);
               if (argtyp [1] == VAR)
                  fprintf (code_file, "*bitword(%d)=", argval [1]);
               else
                  fprintf (code_file, "lbts[%d*VARSIZE]=", argval [1]);
       	       if (argtyp [2] == VAR)
                  fprintf (code_file, " *bitword(%d);", argval [2]);
       	       else
                  fprintf (code_file, "lbts[%d*VARSIZE];", argval [2]);
            }
            else if (minor_type == LOCATE)
            {
               if (argtyp [2] != VAR && argtyp [2] != LOCAL &&
                  argtyp [2] != OBJ)
                     gripe (tp [2], "Not reducible to an object.");
               if (argtyp [2] == VAR)
                  fprintf (code_file, "getloc(value[%d]);",
                     argval [2]);
               else if (argtyp [2] == LOCAL)
                  fprintf (code_file, "getloc(lval[%d]);",
                     argval [2]);
               else
                  fprintf (code_file, "getloc(%d);",
                     argval [2]);
               type = -1;
            }
            if (minor_type != EVAL)
            {
               if (argtyp [1] == VAR)
                  fprintf (code_file, "*bitword(%d)= -1;\n", argval [1]);
               else
                  fprintf (code_file, "lbts[%d*VARSIZE]= -1;\n", argval [1]);
            }
            break;

         case FLAG:      /* FLAG/UNFLAG {variable|place|obj} {flag} */
         case UNFLAG:
            if (argtyp [1] > VAR && argtyp [1] != LOCAL)
               gripe (tp [1], "Not a bit mask holder.");
            index = 1;
            while (tp[++index])
            {
               if ((argtyp [index] < CONSTANT && argtyp [index] != VAR) ||
                  argtyp [index] == STATE)
                     gripe (tp [index],"Bit mask not a flag or constant.");
               if (argtyp [1] == LOCAL)
                  fprintf (code_file, "lbitmod(%d,'%c',", locals,
                     (minor_type == FLAG) ? 's' : 'c');
               else
                  fprintf (code_file, "bitmod('%c',",
                     (minor_type == FLAG) ? 's' : 'c');
               if (argtyp [1] == VAR)
                  fprintf (code_file, "evar(%d)", argval [1]);
               else
                  fprintf (code_file, "%d", argval [1]);
               if (argtyp [index] == VAR)
                  fprintf (code_file, ",value[%d]", argval [index]);
               else if (argtyp [index] == LOCAL)
                  fprintf (code_file, ",lval[%d]", argval [index]);
               else
                  fprintf (code_file, ",%d", argval [index]);
               fprintf (code_file, "%s);\n",
                  argtyp [1] == LOCAL ? ",lval,lbts" : "");
            }
            break;

         case SVAR:  /* EXEC/SVAR {constant | variable} variable */
         case EXEC:
            if (argtyp [1] != VAR && argtyp [1] != CONSTANT &&
               argtyp [1] != LOCAL)
               gripe (tp [1], "Not a constant or variable.");
            if (tp [2] == NULL)
            {
               argval [2] = 0;         /* value[0] not actually in use! */
               argtyp [2] = VAR;
            }
            else if (argtyp [2] != VAR && argtyp [2] != LOCAL)
               gripe (tp [2], "Not a variable.");
            fprintf (code_file, "%s(",
               (minor_type == SVAR) ? "svar" : "special");
            if (argtyp [1] == VAR)
               fprintf (code_file, "value[%d]", argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "lval[%d]", argval [1]);
            else
               fprintf (code_file, "%d", argval [1]);
            fprintf (code_file, ",&%s[%d]);\n",
               argtyp [2] == VAR ? "value" : "lval", argval [2]);
            break;

         case INPUT:
            if (tp [1] != NULL)
            {
               if (argtyp [1] != TEXT && argtyp [1] != VAR &&
                  argtyp [1] != LOCAL)
                  gripe (tp [1], "Not a text or variable.");
               fprintf (code_file, "get_command(");
               if (argtyp [1] == VAR)
                  fprintf (code_file, "value[%d]);\n", argval [1]);
               else if (argtyp [1] == LOCAL)
                  fprintf (code_file, "lval[%d]);\n", argval [1]);
               else
                  fprintf (code_file, "%d);\n", argval [1]);
            }
            else
               fprintf (code_file, "get_command(0);\n");
            fprintf (code_file, "if (loop) return(0);\n");
            break;

         case DEFAULT:      /* DEFAULT/DOALL {place | placeptr} [flag] */
         case DOALL:        /* DEFAULT/DOALL flag */
            if (argtyp [1] != LOC && argtyp [1] != VAR &&
               argtyp [1] != LOCAL && argtyp [1] != FLAGS &&
                  (style >= 10 || argtyp [1] != SYNONYM))
                  gripe (tp [1], "Not a place, bit flag or variable.");
            if (tp [2] != NULL)
            {
               if (argtyp [1] == FLAGS)
                  gripe (tp [1],
                     "Only second of two arguments may be a flag!");
               if (argtyp [2] != FLAGS)
                  gripe (tp [2], "Not a bit flag.");
            }
            fprintf (code_file, "default_to(%d,",
               (minor_type == DEFAULT) ? 0 : 1);
            if (argtyp [1] == LOC)
               fprintf (code_file, "%d,", argval [1]);
            else if (argtyp [1] == VAR)
               fprintf (code_file, "value[%d],", argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "lval[%d],", argval [1]);
            else
               fprintf (code_file, "value[HERE],");
            index = (tp [2] == NULL) ? 1 : 2;
            fprintf (code_file, "%d);\n",
               (argtyp [index] == FLAGS) || argtyp [index] == SYNONYM ?
                  argval [index] : -1);
            break;

         case FLUSH:
            fprintf (code_file, "flush_command();\n");
            break;

         case IFHAVE:   /* IFHAVE/IFHERE/IFNEAR {obj|objptr} [{flag|state}] */
         case IFNEAR:
         case IFHERE:
            if (argtyp [1] != OBJ && argtyp [1] != VAR &&
               argtyp [1] != LOCAL)
                  gripe (tp [1], "Not reducible to an object.");
            if (minor_type == IFHAVE)
               cond_ptr += sprintf (cond_ptr, "have");
            else if (minor_type == IFNEAR)
               cond_ptr += sprintf (cond_ptr, "isnear");
            else
               cond_ptr += sprintf (cond_ptr, "ishere");
            if (argtyp [1] == VAR)
               cond_ptr += sprintf (cond_ptr, "(value[%d],",
                  argval [1]);
            else if (argtyp [1] == LOCAL)
               cond_ptr += sprintf (cond_ptr, "(lval[%d],",
                  argval [1]);
            else
               cond_ptr += sprintf (cond_ptr, "(%d,", argval [1]);
            if (tp [2] == NULL)
               cond_ptr += sprintf (cond_ptr, "-1,-1)");
            else if (argtyp [2] == LOCAL)
               cond_ptr += sprintf (cond_ptr, "0,lval[%d]",
                  argval [2]);
            else if (argtyp [2] < CONSTANT)
               cond_ptr += sprintf (cond_ptr, "0,value[%d])",
                  argval [2]);
            else
               cond_ptr += sprintf (cond_ptr, "%d,%d)",
                  (argtyp [2] == FLAGS) ? 1 : 0, argval [2]);
            break;

         case RANDOMISE:
            if (argtyp [1] != OBJ && argtyp [1] != LOC &&
                argtyp [1] != TEXT)
                  gripe (tp [1], "Not a place, object or text.");
            if (argtyp [2] != CONSTANT)
               gripe (tp [2], "Not a constant.");
            if (argval [2] + 1 >= ap [1] -> state_count)
               gripe (tp [2], "Randomisation offset too high.");
            if (argval [2] < 0)
               gripe (tp [2], "Negative offset not legal.");
            fprintf (code_file, "value[%d] = %crand(%d - %d) + %d;\n",
               argval [1], argtyp [1] == TEXT ? 'j' : 'i',
                  ap [1] -> state_count, argval [2], argval [2]);
            break;

         case TIE:
            if (argtyp [1] == VERB || argtyp [1] > TEXT)
               gripe (tp[1],  "Not a global value holder!");
            index = 1;
            while (tp [++index] != NULL)
            {
               if (argtyp [index] != TEXT)
                  gripe (tp [index], "Not a text.");
               fprintf (code_file, "tie (%d, %d);\n",
                  argval[index], argval [1]);
            }
            break;

         case FAKEARG:
         case FAKECOM:
            for (index = 1; index <= 2; index++)
               if (argtyp [index] > TEXT && argtyp [index] != LOCAL)
                  gripe (tp [index],
                     "Not reducible to a place, object or verb");
            if (argtyp [1] == VAR)
               fprintf (code_file, "if (value[ARG1] == value[%d])",
                  argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "if (value[ARG1] == lval[%d])",
                  argval [1]);
            else
               fprintf (code_file, "if (value[ARG1] == %d)", argval [1]);
            if (minor_type == FAKECOM)
            {
               fprintf (code_file, " {value[ARG1]=");
               if (argtyp [2] == VAR)
                  fprintf (code_file, "value[%d]", argval [2]);
               else if (argtyp [2] == LOCAL)
                  fprintf (code_file, "lval[%d]", argval [2]);
               else
                  fprintf (code_file, "%d", argval [2]);
               fprintf (code_file, "; (void)fake(1,");
               if (argtyp [2] == VAR)
                  fprintf (code_file, "value[%d]);}\n", argval [2]);
               else if (argtyp [2] == LOCAL)
                  fprintf (code_file, "lval[%d]);}\n", argval [2]);
               else
                  fprintf (code_file, "%d);}\n", argval [2]);
            }
            else
            {
               fprintf (code_file, " value[ARG1]=");
               if (argtyp [2] == VAR)
                  fprintf (code_file, "value[%d];\n", argval [2]);
               else if (argtyp [2] == LOCAL)
                  fprintf (code_file, "lval[%d];\n", argval [2]);
               else
                  fprintf (code_file, "%d;\n", argval [2]);
	    }
            if (argtyp [1] == VAR)
               fprintf (code_file, "if (value[ARG2] == value[%d])",
                  argval [1]);
            else if (argtyp [1] == LOCAL)
               fprintf (code_file, "if (value[ARG2] == lval[%d])",
                  argval [1]);
            else
               fprintf (code_file, "if (value[ARG2] == %d)", argval [1]);
            if (minor_type == FAKECOM)
            {
               fprintf (code_file, " {value[ARG2]=");
               if (argtyp [2] == VAR)
                  fprintf (code_file, "value[%d]", argval [2]);
               else if (argtyp [2] == LOCAL)
                  fprintf (code_file, "lval[%d]", argval [2]);
               else
                  fprintf (code_file, "%d", argval [2]);
               fprintf (code_file, "; (void)fake(2,");
               if (argtyp [2] == VAR)
                  fprintf (code_file, "value[%d]);}\n", argval [2]);
               else if (argtyp [2] == LOCAL)
                  fprintf (code_file, "lval[%d]);}\n", argval [2]);
               else
                  fprintf (code_file, "%d);}\n", argval [2]);
            }
            else
            {
               fprintf (code_file, " value[ARG2]=");
               if (argtyp [2] == VAR)
                  fprintf (code_file, "value[%d];\n", argval [2]);
               else if (argtyp [2] == LOCAL)
                  fprintf (code_file, "lval[%d];\n", argval [2]);
               else
                  fprintf (code_file, "%d;\n", argval [2]);
	    }
            break;

         case CHECKPOINT:
            fprintf (code_file,
               "puts (\"=== Checkpoint: %s, line %d ===\");",
                  pathname[level], line_count[level]);
            break;

         case SAVE:
         case RESTORE:
         case DELETE:
            if (tp[1] == NULL)
            {
               gripe (tp[0], "Missing operation type indicator");
            }
            if (tp[2] == NULL)
            {
               tp[3] = NULL;
               argval[2] = 0;
            }
            else if (argtyp[2] != VAR && argtyp[2] != LOCAL)
            {
               gripe (tp [2], "Not a variable.");
            }

            if (ap[1]->refno == MEMORY)
            {
               if (minor_type == DELETE) type = 3;
               else if (minor_type == SAVE) type = 1;
               else type = 2;     /* Must be RESTORE */
               fprintf (code_file, "%s[%d] = memstore (%d);\n",
                  (argtyp[2] == LOCAL) ? "lval" : "value", argval[2], type);
               break;
            }
            else if (ap[1]->refno == COMMAND)
            {
               fprintf (code_file, "input_store('%c', &%s[%d]);\n",
                 minor_type == SAVE ? 'S' : 'R',
                   argtyp [2] == LOCAL ? "lval" : "value", argval [2]);
               break;
            }
            else if (ap[1]->refno == SAVEFILE)
            {
               if (minor_type == SAVE) type = 1;
               else if (minor_type == RESTORE) type = 2;
               else type = 3;   /* Must be DELETE! */
            }
#if STYLE >= 12
            else if (ap[1]->refno == VALUE)
            {
               if (minor_type == DELETE)
                  gripe ("VALUE", "Not a valid subtype of DELETE");
               deprecate("SAVE/RESTORE VALUE", 12, 0);
               type = (minor_type == SAVE) ? 6 : 7;
            }
#endif /* STYLE */
            else
            {
               gripe (tp[1], "Unknown save/restore/delete operation type");
            }
            fprintf (code_file, "special(%d, &%s[%d]);\n",
               type, argtyp [2] == LOCAL ? "lval" : "value", argval [2]);
            break;

           case VERBATIM:
              fprintf (code_file, "verbatim(%d);\n", argval [1]);
              break;

           case UNDO:
           case REDO:
              fprintf (code_file, "%s();\n",
                 minor_type == UNDO ? "undo" : "redo");
              break;

/*         case DELETE:
 *            if (tp[1])
 *            {
 *               if (strcmp (tp[1], "value")
 *               {
 *               }
 *               else
 *               {
 *               }
 *            }
 *            else
 *            {
 *            }
 *            break;
 */

/*         case SAVEDLIST:
 *            if (tp[1] == NULL)
 *            {
 *            }
 *            if (strcmp (tp[1], "count")
 *            {
 *            }
 *            else if (strcmp (tp[1], "show")
 *            {
 *            }
 *            else
 *            {
 *            }
 *            break;
 */

         case DUMPDATA:
            fprintf (code_file, " show_data();");
            break;

         case CALL:
            index = 1;        /* Point at proc name and fall through. */
            if (index == 0)
            {
               argtyp[0] = ap[0] -> type;
               argval[0] = ap[0] -> refno;
               write_ref (" prc ", tp [index]);
            }
            proc_index = index;
            if (argtyp [index] != PROCEDURE && argtyp [index] > VERB &&
               argtyp [index] != VAR && argtyp [index] != LOCAL)
                  gripe (tp [index],
                     "Not a minor directive or a callable symbol.");
            if (argtyp [index] == PROCEDURE)
               fprintf (code_file, "p%d(", argval [index]);
            else if (argtyp [index] == VAR)
               fprintf (code_file,
                  "if (value[%d]<LPROC && value[%d]>= 0) (*procs[value[%d]])(",
                     argval [index], argval [index], argval[index]);
            else if (argtyp [index] == LOCAL)
               fprintf (code_file,
                  "if (lval[%d]<LPROC && lval[%d] >= 0) (*procs[lval[%d]])(",
                     argval [index], argval [index], argval[index]);
            else
               fprintf (code_file, "(*procs[%d])(", argval [index]);
            if (argtyp [index] == PROCEDURE)
            {
               args_count = (ap [index] -> arg_count);
               for (++index; tp [index]; index++)
               {
                  if (args_count == 0)
                     gripe (tp [proc_index], "too many arguments!");
                  if (argtyp [index] > TEXT && argtyp [index] != CONSTANT &&
                      argtyp [index] != LOCAL && argtyp [index] != SYNONYM)
                        gripe (tp [index], "illegal argument type!");
                  fprintf (code_file, "%s", index == 2 ? "" : ",");
                  if (argtyp [index] != VAR)
                     fprintf (code_file, "%d,",
                        argtyp [index] == CONSTANT ? 0 : -1);
                  else
                     fprintf (code_file, "*bitword(%d),",
                        argval [index]);
                  if (argtyp [index] == VAR)
                     fprintf (code_file, "value[%d]", argval [index]);
                  else if (argtyp [index] == LOCAL)
                     fprintf (code_file, "lval[%d]", argval [index]);
                  else
                     fprintf (code_file, "%d", argval [index]);
                  args_count--;
               }
               if (args_count)
                  gripe (tp [proc_index], "too few arguments!");
	    }
            if (argtyp [proc_index] == VAR)
               fprintf (code_file, "); else pcall(value[%d]);\n", argval [proc_index]);
            else if (argtyp [proc_index] == LOCAL)
               fprintf (code_file, "); else pcall(lval[%d]);\n", argval [proc_index]);
	    else
               fprintf (code_file, ");\n");
            fprintf (code_file, "if (loop) return (0);\n");
            break;
         
         case MEMORY:
         case SAVEFILE:
         case COMMAND:
            gripe (tp[0], "Naked minor directive modifier!");
            break;

         default:
            gripe (tp [0], "not a known minor directive.");
      }
      if (minor_type < NOT) pending_not = 0;
#ifdef MLATEST
 fflush (code_file);
 fprintf (stderr, "+++ NEST %d, PLUS %d %d %d %d ",
    nesting, nestplus[0], nestplus[1], nestplus[2], nestplus[3]);
 {
    int l = nesting;
    while (l--)
    {
      fputc (' ', stderr); fputc (' ', stderr);
    }
 }
 fprintf (stderr, "%s", tp[0]);
 if (tp[1])
 {
   fprintf (stderr, " %s", tp[1]);
   if (tp[2])
   {
     fprintf (stderr, " %s", tp[2]);
   }
 }
 fputc ('\n', stderr);
#endif /* MLATEST */
   }

terminate:
   if (multiple_pending)
      gripe("", "Null code block?");

   if (nesting > 0)
   {
      if (style < 10)
         while (nesting--)
            fputc('}', code_file);
      else
         gripe ("", "Not enough code closures.");
   }
   if (brace_pending)
      fputc ('\n', code_file);
   return;
}

/*********************************************************************/
