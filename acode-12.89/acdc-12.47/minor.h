/* minor.h (acdc) - copyright Mike Arnautov 1990-2022.
 * Licensed under GPL, version 3 or later (see the supplied LICENCE file).
 *
 * 03 Mar 22   MLA           Renamed DUMP to DUMPDATA
 * 10 Nov 21   MLA           Added IFTURN.
 * 04 May 21   MLA           Added IFNEEDCMD.
 * 06 Oct 10   MLA           Added RESAY.
 * 15 Mar 08   MLA           Version 12 changes.
 * 10 Nov 07   MLA           Added DUMP.
 * 01 Jan 05   MLA           Added UNDO/REDO.
 * 20 Aug 04   MLA           Added IFCLOUD and IFDOALL
 * 27 Jul 02   MLA           Added CHECKPOINT.
 * 12 Jul 02   MLA           Added IFNE, IFLE, IFGE, DESCRIBE.
 * 01 Jan 02   MLA           Added LOCAL.
 * 17 May 01   MLA           Added FAKECOM.
 * 16 Mar 01   MLA           Added IFANY.
 * 05 Mar 01   MLA           Added FAKEARG.
 * 28 Feb 01   MLA           Added TIE.
 * 08 Aug 00   MLA           Added OTHERWISE.
 * 15 Sep 90   MLA           Initial coding.
 *
 * The below definitions are only used internally by acdc and hence
 * can be re-arranged and re-numbered at will.
 */

# define IFEQ         1
# define IFNE         2
# define IFLT         3
# define IFLE         4
# define IFGT         5
# define IFGE         6
# define IFAT         7
# define IFHAVE       8
# define IFNEAR       9
# define IFHERE      10
# define IFLOC       11
# define IFIS        12
# define IFINRANGE   13
# define IFKEY       14
# define IFANY       15
# define IFFLAG      16
# define IFHTML      17
# define IFCLOUD     18
# define IFTURN      19
# define IFDOALL     20
# define IFTYPED     21
# define IFNEEDCMD   22
# define CHANCE      23
# define QUERY       24

# define NOT         25
# define AND         26
# define OR          27
# define XOR         28

# define ELSE        31
# define FIN         32
# define EOT         33
# define OTHERWISE   34

# define KEYWORD     40
# define HAVE        41
# define NEAR        42
# define HERE        43
# define ATLOC       44
# define ANYOF       45

# define ITOBJ       51
# define ITLOC       52
# define ITERATE     53
# define NEXT        54
# define BREAK       55
# define EOI         56

# define EXEC        57
# define FAKEARG     58
# define FAKECOM     59

# define CALL        61
# define PROCEED     62
# define RETURN      63
# define QUIT        64
# define STOP        65 

# define GOTO        71
# define MOVE        72
# define SMOVE       73

# define SAY         81
# define DESCRIBE    82
# define VALUE       83
# define QUIP        84
# define RESPOND     85
# define DICT        86
# define APPEND      87
# define RESAY       88

# define FLAG        91
# define UNFLAG      92
# define SVAR        93
# define INPUT       94
# define DEFAULT     95
# define SET         96
# define DOALL       97
# define FLUSH       98

# define ADD        101
# define SUBTRACT   102
# define MULTIPLY   103
# define DIVIDE     104
# define NEGATE     105
# define RANDOM     106
# define CHOOSE     107
# define RANDOMISE  108
# define RANDSEL    109
# define LDA        110
# define EVAL       111
# define DEPOSIT    112
# define INTERSECT  113
# define TIE        114

# define GET        121
# define DROP       122
# define APPORT     123
# define LOCATE     124

# define LOCAL      131

# define CHECKPOINT 141
# define DUMPDATA   142

# define SAVE       151
# define RESTORE    152
# define DELETE     153
# define SAVEDLIST  154

# define VERBATIM   161

# define UNDO       171
# define REDO       172

/* And a few minor directive modifiers */

# define MEMORY     180
# define SAVEFILE   181
# define COMMAND    182
