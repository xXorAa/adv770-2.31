/* adv1.h: Adv770 - copyright Mike Arnautov 2022. Licensed under
 * GPL (version 3 or later) or the Modified BSD Licence, whichever
 * is asserted by the supplied LICENCE file.*/

#ifndef ADV1_H
#define ADV1_H
#define GAME_NAME "Adv770"
#define GAME_VERSION "2.31"
#define GAME_ID "Adv770 version 2.31, 12 May 2022"
#define STYLE 12
#ifndef ADV01
#define GAME_DATE "12 May 2022"
#define ACDC_VERSION "12.47, 23 Mar 2022"
#if defined(MSDOS) || defined(_WIN32)
#  define PERSISTENT_DATA "_adv770.adp"
#  define CGINAME "_adv770"
#else
#  define PERSISTENT_DATA ".adv770.adp"
#  define CGINAME ".adv770"
#endif
#define DBNAME "adv770.dat"
#define OBJSIZE 2
#define LOCSIZE 2
#define VARSIZE 1
#define FOBJ 3
#define LOBJ 194
#define FLOC 195
#define LLOC 703
#define FVERB 704
#define LVERB 1143
#define FVAR 1144
#define LVAR 1264
#define FTEXT 1264
#define LTEXT 3501
#define NOISE 19
#define KNOT 122
#define COMMA -1140
#define SEMICOLON -1142
#define INHAND 703
#define HERE 1146
#define THERE 1147
#define STATUS 1178
#define ARG1 1144
#define ARG2 1145
#define ARG3 1263
#define UNDO 738
#define REDO 739
#define UNDO_STAT 1192
#define UNDO_INFO 4
#define UNDO_TRIM 5
#define UNDO_INV 6
#define UNDO_BAD 7
#define SCHIZOID 6
#define JUGGLED 6
#define MOVED 0
#define PLSCLARIFY 5
#define SEEN 4
#define AGAIN 724
#define ALL 3
#define EXCEPT 1139
#define TYPO 2557
#define IT 166
#define ADVCONTEXT 1180
#define DWARVEN 1262
#define DWARVISH     021
#define PROMPTED 4
#define FSPECIAL 723
#define LSPECIAL 743
#define FACT 704
#define LACT 722
#define FDIR 744
#define LDIR 756
#define SAY 730
#define NOWORD -1
#define BADWORD -2
#define AMBIGWORD -3
#define AMBIGTYPO -4
#define SCENEWORD -5
#define BADSYNTAX -6
#define NO_MATCH 98
#define NO_AMATCH 99
#define OBJ 0
#define LOC 1
#define VERB 2
#define FULL 3
#define TERSE 2
#define BRIEF 1
#define BEENHERE 4
#define PLAIN 0
#define DBSTATUS 0
#define LPROC 1144
#define KEY(X) (value[1144]==X || value[1145]==X)
#define INIT_PROC p1
#define REPEAT_PROC p2
#endif
#define SW_START     037
#define SW_BREAK     036
#define HOLDER       035
#define IGNORE_EOL   032
#define NEST_TEXT    031
#define QUOTE_START  030
#define TAG_START    027
#define TAG_END      026
#define NBSP         025
#define BLOCK_START  024
#define BLOCK_END    023
#define CENTRE_START 022
#define VHOLDER      020
#define UTF8         0
#define VOCAB_SIZE 1313
#define TEXT_BYTES 516238
#define USEQUERY 0
#endif
