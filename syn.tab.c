
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syn.y"

#include <stdio.h>
#define YYERROR_VERBOSE 1

int nbLigne=1;
int column=1;
char type[10];
char TypeAffecte[10]; 
char sauvIdf[10];
char sauvTypeEXP[10];
char sauvIdf_EXP[10];
char sauv_comp[10];
char sauv_log[10];
char typeExp1[10];
char typeExp2[10];
char loc[10];
int borne1, borne2;
int pos = 0;
int posBR = 0;
int posEV = 0;
char snum[10];
char temp[10];
char temp2[10];
char tempCpt[10];
char var[10];
int erreur = 1;
int cpt = 1;
float valNum;
int valInt;


/* Line 189 of yacc.c  */
#line 105 "syn.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_integer = 258,
     mc_numeric = 259,
     mc_car = 260,
     mc_logical = 261,
     id_integer = 262,
     id_numeric = 263,
     id = 264,
     car = 265,
     logical = 266,
     mc_for = 267,
     mc_while = 268,
     mc_if = 269,
     mc_elseif = 270,
     mc_else = 271,
     mc_ifelse = 272,
     in = 273,
     mc_comp = 274,
     aff = 275,
     mc_plus = 276,
     mc_moins = 277,
     mc_mul = 278,
     mc_div = 279,
     mc_rest = 280,
     and = 281,
     or = 282,
     parO = 283,
     parF = 284,
     croO = 285,
     croF = 286,
     accO = 287,
     accF = 288,
     space = 289,
     vrg = 290,
     gui = 291,
     pt = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 33 "syn.y"


	int integer;
	float numeric;
	char* string;

   


/* Line 214 of yacc.c  */
#line 188 "syn.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "syn.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    13,    15,    20,    25,    26,
      28,    30,    32,    34,    40,    45,    48,    50,    52,    54,
      56,    60,    61,    64,    67,    70,    73,    76,    79,    80,
      81,    87,    88,    94,    95,   104,   106,   111,   113,   115,
     117,   119,   121,   123,   125,   126,   131,   132,   137,   138,
     143,   144,   152,   153,   160,   161,   168,   169,   179,   180,
     185,   190,   198,   206,   207,   217,   218,   228,   233,   234,
     247,   248,   257,   258,   273,   274,   281,   283,   288,   290,
     292,   294
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    42,    47,    -1,     8,    -1,    28,    22,
       8,    29,    -1,     7,    -1,    28,    22,     7,    29,    -1,
      43,    34,    44,    42,    -1,    -1,     3,    -1,     4,    -1,
       5,    -1,     6,    -1,     9,    34,    20,    34,    45,    -1,
       9,    30,     7,    31,    -1,     9,    46,    -1,    41,    -1,
      40,    -1,    10,    -1,    11,    -1,    35,     9,    46,    -1,
      -1,    48,    47,    -1,    63,    47,    -1,    64,    47,    -1,
      68,    47,    -1,    69,    47,    -1,    71,    47,    -1,    -1,
      -1,    52,    20,    45,    49,    55,    -1,    -1,    52,    20,
       9,    50,    55,    -1,    -1,    52,    20,     9,    30,     7,
      31,    51,    55,    -1,     9,    -1,     9,    30,     7,    31,
      -1,    21,    -1,    22,    -1,    24,    -1,    23,    -1,    25,
      -1,    26,    -1,    27,    -1,    -1,    53,    41,    56,    55,
      -1,    -1,    53,    40,    57,    55,    -1,    -1,    53,     9,
      58,    55,    -1,    -1,    53,     9,    30,     7,    31,    59,
      55,    -1,    -1,    34,    54,    34,    11,    60,    55,    -1,
      -1,    34,    54,    34,     9,    61,    55,    -1,    -1,    34,
      54,    34,     9,    30,     7,    31,    62,    55,    -1,    -1,
       9,    21,    20,     7,    -1,     9,    22,    20,     7,    -1,
       9,    30,     7,    31,    21,    20,     7,    -1,     9,    30,
       7,    31,    22,    20,     7,    -1,    -1,    14,    28,    73,
      29,    32,    47,    65,    33,    66,    -1,    -1,    15,    28,
      73,    29,    32,    47,    67,    33,    66,    -1,    16,    32,
      47,    33,    -1,    -1,    52,    20,    17,    28,    73,    35,
      75,    55,    35,    75,    55,    29,    -1,    -1,    13,    28,
      70,    73,    29,    32,    47,    33,    -1,    -1,    12,    28,
       9,    34,    18,    34,     7,    37,     7,    72,    29,    32,
      47,    33,    -1,    -1,    75,    55,    19,    74,    75,    55,
      -1,     9,    -1,     9,    30,     7,    31,    -1,    41,    -1,
      40,    -1,    10,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    82,    85,    89,    92,    96,    97,   100,
     102,   104,   106,   110,   129,   145,   152,   157,   161,   167,
     173,   178,   181,   182,   183,   184,   185,   186,   187,   190,
     190,   212,   212,   251,   251,   292,   310,   335,   336,   337,
     338,   339,   342,   343,   346,   346,   367,   366,   387,   386,
     413,   413,   439,   439,   453,   453,   479,   479,   505,   508,
     536,   561,   589,   620,   620,   627,   627,   632,   633,   636,
     645,   645,   656,   655,   700,   700,   714,   728,   745,   750,
     755,   760
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_integer", "mc_numeric", "mc_car",
  "mc_logical", "id_integer", "id_numeric", "id", "car", "logical",
  "mc_for", "mc_while", "mc_if", "mc_elseif", "mc_else", "mc_ifelse", "in",
  "mc_comp", "aff", "mc_plus", "mc_moins", "mc_mul", "mc_div", "mc_rest",
  "and", "or", "parO", "parF", "croO", "croF", "accO", "accF", "space",
  "vrg", "gui", "pt", "$accept", "Start", "REEL", "ENTIER", "VAR", "TYPE",
  "VARS", "VAL", "LISTE", "INST", "INST_AFF", "$@1", "$@2", "$@3",
  "VAR_AFF", "COMP", "LOG", "EXP", "$@4", "$@5", "$@6", "$@7", "$@8",
  "$@9", "$@10", "INST_INCRM", "INST_IF", "$@11", "SUITE", "$@12",
  "INST_IFELSE", "INST_WHILE", "$@13", "INST_FOR", "$@14", "CONDIT",
  "$@15", "Membre", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    42,    42,    43,
      43,    43,    43,    44,    44,    44,    45,    45,    45,    45,
      46,    46,    47,    47,    47,    47,    47,    47,    47,    49,
      48,    50,    48,    51,    48,    52,    52,    53,    53,    53,
      53,    53,    54,    54,    56,    55,    57,    55,    58,    55,
      59,    55,    60,    55,    61,    55,    62,    55,    55,    63,
      63,    63,    63,    65,    64,    67,    66,    66,    66,    68,
      70,    69,    72,    71,    74,    73,    75,    75,    75,    75,
      75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     4,     1,     4,     4,     0,     1,
       1,     1,     1,     5,     4,     2,     1,     1,     1,     1,
       3,     0,     2,     2,     2,     2,     2,     2,     0,     0,
       5,     0,     5,     0,     8,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     4,     0,     4,
       0,     7,     0,     6,     0,     6,     0,     9,     0,     4,
       4,     7,     7,     0,     9,     0,     9,     4,     0,    12,
       0,     8,     0,    14,     0,     6,     1,     4,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     9,    10,    11,    12,     0,    28,     0,     1,    35,
       0,     0,     0,     2,    28,     0,    28,    28,    28,    28,
      28,     0,     0,     0,     0,     0,    70,     0,    22,     0,
      23,    24,    25,    26,    27,    21,     8,     0,     0,     0,
       0,     0,     5,     3,    76,    80,    81,     0,    79,    78,
       0,    58,    31,    18,    19,     0,    17,    16,    29,     0,
       0,     0,    15,     7,    59,    60,    36,     0,     0,     0,
       0,     0,    37,    38,    40,    39,    41,     0,     0,     0,
       0,    58,     0,    58,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,    42,    43,     0,    48,    46,
      44,    74,     0,    32,     0,    30,    14,     0,    20,     0,
       0,     0,    28,    77,     6,     4,    63,     0,     0,    58,
      58,    58,     0,    33,     0,    13,    61,    62,     0,     0,
       0,    54,    52,     0,    49,    47,    45,    58,    58,    58,
       0,    71,    68,     0,    58,    58,    50,    75,    34,     0,
      72,     0,     0,    64,     0,    55,    53,    58,     0,     0,
       0,    28,    56,    51,    58,     0,     0,     0,    58,     0,
      28,     0,    67,    57,    69,     0,    28,    73,    65,     0,
      68,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    48,    49,     6,     7,    36,    58,    62,    13,
      14,    83,    81,   138,    15,    78,    97,    79,   121,   120,
     119,   157,   145,   144,   168,    16,    17,   130,   153,   179,
      18,    19,    41,    20,   159,    50,   122,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -111
static const yytype_int8 yypact[] =
{
      34,  -111,  -111,  -111,  -111,    30,    83,    19,  -111,    22,
      40,    41,    49,  -111,    83,    38,    83,    83,    83,    83,
      83,    69,    59,    61,    75,    78,  -111,    13,  -111,     8,
    -111,  -111,  -111,  -111,  -111,    32,    34,    77,    82,    60,
      65,    13,  -111,  -111,    63,  -111,  -111,    79,  -111,  -111,
      71,    51,    72,  -111,  -111,    76,  -111,  -111,  -111,    96,
      85,    97,  -111,  -111,  -111,  -111,     5,    89,    80,   101,
      43,    81,  -111,  -111,  -111,  -111,  -111,    29,    26,    91,
     104,    51,    13,    51,    84,    87,    88,    92,    94,    90,
      86,    95,    93,    98,    83,  -111,  -111,    99,   100,  -111,
    -111,  -111,   103,  -111,   102,  -111,  -111,    21,  -111,   109,
     110,   112,    83,  -111,  -111,  -111,  -111,     2,   118,    51,
      51,    51,    13,  -111,    13,  -111,  -111,  -111,   105,   106,
     107,   108,  -111,   113,  -111,  -111,  -111,    51,    51,    51,
     121,  -111,    45,   122,    51,    51,  -111,  -111,  -111,   111,
    -111,   115,   116,  -111,   114,  -111,  -111,    51,    13,   120,
      13,    83,  -111,  -111,    51,   119,   123,   117,    51,   124,
      83,   125,  -111,  -111,  -111,   126,    83,  -111,  -111,   127,
      45,  -111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   -21,   -19,   128,  -111,  -111,    24,    46,   -14,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,   -74,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,   -45,  -111,
    -111,  -111,  -111,  -111,  -111,   -40,  -111,  -110
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      28,    68,    30,    31,    32,    33,    34,   103,    56,   105,
      57,   131,   137,   132,   139,    42,    43,    52,    53,    54,
      42,    43,    44,    45,    46,    55,    87,    88,    42,    43,
       8,    53,    54,    42,    43,    98,    47,     1,     2,     3,
       4,    47,   104,    22,    23,   134,   135,   136,   164,    47,
      92,    93,    24,    21,    47,    95,    96,    99,    29,   100,
     151,   152,    59,   147,   148,   149,    60,    61,    25,    26,
     155,   156,    72,    73,    74,    75,    76,    27,    35,    37,
     116,    38,    39,   163,    64,    77,    56,    40,    57,    65,
     169,    66,     9,    69,   173,    10,    11,    12,   129,    67,
      71,    70,    80,    84,    82,    85,    86,    89,    91,    90,
     101,   102,   109,    94,   110,   106,   126,   127,   112,   128,
     166,   107,   114,    61,   111,   133,   113,   115,   150,   154,
     118,   125,   108,   117,   123,   181,     0,   124,   143,   141,
     142,     0,   140,   160,   146,   162,   158,   167,   161,   165,
     172,   170,   171,   174,     0,     0,   175,   176,     0,   177,
     180,     0,   178,     0,    63
};

static const yytype_int16 yycheck[] =
{
      14,    41,    16,    17,    18,    19,    20,    81,    29,    83,
      29,     9,   122,    11,   124,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,    17,    21,    22,     7,     8,
       0,    10,    11,     7,     8,     9,    28,     3,     4,     5,
       6,    28,    82,    21,    22,   119,   120,   121,   158,    28,
       7,     8,    30,    34,    28,    26,    27,    78,    20,    78,
      15,    16,    30,   137,   138,   139,    34,    35,    28,    28,
     144,   145,    21,    22,    23,    24,    25,    28,     9,    20,
      94,    20,     7,   157,     7,    34,   107,     9,   107,     7,
     164,    31,     9,    30,   168,    12,    13,    14,   112,    34,
      29,    22,    30,     7,    28,    20,     9,    18,     7,    29,
      19,     7,    20,    32,    20,    31,     7,     7,    32,     7,
     160,    34,    29,    35,    34,     7,    31,    29,     7,     7,
      30,   107,    86,    34,    31,   180,    -1,    35,    30,    33,
      33,    -1,    37,    28,    31,    31,    35,   161,    32,    29,
      33,    32,    29,    29,    -1,    -1,   170,    32,    -1,    33,
      33,    -1,   176,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    39,    42,    43,     0,     9,
      12,    13,    14,    47,    48,    52,    63,    64,    68,    69,
      71,    34,    21,    22,    30,    28,    28,    28,    47,    20,
      47,    47,    47,    47,    47,     9,    44,    20,    20,     7,
       9,    70,     7,     8,     9,    10,    11,    28,    40,    41,
      73,    75,     9,    10,    11,    17,    40,    41,    45,    30,
      34,    35,    46,    42,     7,     7,    31,    34,    73,    30,
      22,    29,    21,    22,    23,    24,    25,    34,    53,    55,
      30,    50,    28,    49,     7,    20,     9,    21,    22,    18,
      29,     7,     7,     8,    32,    26,    27,    54,     9,    40,
      41,    19,     7,    55,    73,    55,    31,    34,    46,    20,
      20,    34,    32,    31,    29,    29,    47,    34,    30,    58,
      57,    56,    74,    31,    35,    45,     7,     7,     7,    47,
      65,     9,    11,     7,    55,    55,    55,    75,    51,    75,
      37,    33,    33,    30,    61,    60,    31,    55,    55,    55,
       7,    15,    16,    66,     7,    55,    55,    59,    35,    72,
      28,    32,    31,    55,    75,    29,    73,    47,    62,    55,
      32,    29,    33,    55,    29,    47,    32,    33,    47,    67,
      33,    66
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 79 "syn.y"
    {printf("\n\n\nProgramme Syntaxiquement Correct.\n");YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 82 "syn.y"
    {
						valNum = (yyvsp[(1) - (1)].numeric);
					;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 85 "syn.y"
    {
											valNum = -(yyvsp[(3) - (4)].numeric);
										;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 89 "syn.y"
    {
								valInt = (yyvsp[(1) - (1)].integer);
							;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 92 "syn.y"
    {
											valInt = -(yyvsp[(3) - (4)].integer);
										;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 100 "syn.y"
    {strcpy(type,"INTEGER");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 102 "syn.y"
    {strcpy(type,"NUMERIC"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 104 "syn.y"
    {strcpy(type,"CHARACTER");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 106 "syn.y"
    {strcpy(type,"LOGICAL");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 111 "syn.y"
    {	erreur = 1; //init
							if (doubleDeclaration((yyvsp[(1) - (5)].string))==1 ) 
								inserer((yyvsp[(1) - (5)].string),"IDF",type,1);
							else {
								printf("\nErreur Sementique: Double declaration de %s a la ligne %d.",(yyvsp[(1) - (5)].string),nbLigne);
								erreur = 0;
							}
							
							if (permit((yyvsp[(1) - (5)].string),TypeAffecte)==1) {
								printf("\nErreur Sementique: non compatibilite  de type entre %s et %s a Ligne %d.",(yyvsp[(1) - (5)].string),TypeAffecte,nbLigne);
								erreur = 0;
							}
							/* QUADS */
							if(erreur==1){ //false
								GEN("<-",snum,"",(yyvsp[(1) - (5)].string)); //get snum fromVAL	
							}
						;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 129 "syn.y"
    {		erreur = 1;//init
										if (doubleDeclaration((yyvsp[(1) - (4)].string))==1 ) 
											inserer((yyvsp[(1) - (4)].string),"TAB",type,(yyvsp[(3) - (4)].integer));
										else {
											printf("\nErreur Sementique: Double declaration de %s a la ligne %d.",(yyvsp[(1) - (4)].string),nbLigne);
											erreur = 0;
										}
										/* QUADS */
										if(erreur==1){
											itoa((yyvsp[(3) - (4)].integer), snum, 10);
											GEN("BOUNDS","0",snum,"");
											GEN("ADEC",(yyvsp[(1) - (4)].string),"","");
										}

								;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 145 "syn.y"
    {	
										if (doubleDeclaration((yyvsp[(1) - (2)].string))==1 ) 
											inserer((yyvsp[(1) - (2)].string),"IDF",type,1);
										else printf("\nErreur Sementique: Double declaration de %s a la ligne %d.",(yyvsp[(1) - (2)].string),nbLigne);
									;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 152 "syn.y"
    {
						strcpy(TypeAffecte,"INTEGER");
					 	sprintf(snum, "%d", valInt); 
					;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 157 "syn.y"
    {	strcpy(TypeAffecte,"NUMERIC");
						sprintf(snum, "%f", valNum); 
					;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 161 "syn.y"
    {
						strcpy(TypeAffecte,"CHARACTER");
						sprintf(snum, "%s", (yyvsp[(1) - (1)].string)); 

					;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 167 "syn.y"
    {	strcpy(TypeAffecte,"LOGICAL");
						sprintf(snum, "%s", (yyvsp[(1) - (1)].string));
					;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 173 "syn.y"
    {
							if (doubleDeclaration((yyvsp[(2) - (3)].string))==1 ) 
								inserer((yyvsp[(2) - (3)].string),"IDF",type,1);
							else printf("\nErreur Sementique: Double declaration de %s a la ligne %d.",(yyvsp[(2) - (3)].string),nbLigne);
						;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 190 "syn.y"
    {		
								erreur = 1;
								if(strcmp(type,"")==0)//var non declared donc je l'ajoute
									{
										inserer(sauvIdf,"IDF",TypeAffecte,1);
										strcpy(sauvTypeEXP,(char*)TypeAffecte); 
									}
								else if(strcmp(type,"TabNONDEC")!=0)  //si le tab ou la var sont decalre
									{
										if(permit(sauvIdf,TypeAffecte)==1) //type mismatch
											{
												printf("\nErreur semantique : non compatibilite  de type entre %s et %s a la ligne %d.",sauvIdf,TypeAffecte,nbLigne);	
												erreur=0;
											}
										strcpy(sauvTypeEXP,(char*)get_TypeEntite(sauvIdf));
									}
								 /* QUADS */
								strcpy(temp,snum);
							;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 208 "syn.y"
    {
								if(erreur==1 && strcmp(var,"_")==-1)
									GEN("<-",temp,"",var);
								;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 212 "syn.y"
    {		
								erreur = 1;
								if (doubleDeclaration((yyvsp[(3) - (3)].string))==1 ){ //non dec
									printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(3) - (3)].string),nbLigne);
									erreur = 0;
								}else 
								{
									if(strcmp((char*)get_CodeEntite((yyvsp[(3) - (3)].string)),(char*)"TAB")==0)
									{
										printf("\nErreur Sementique: %s est un tableau, specifiez l'element..ligne %d.",(yyvsp[(3) - (3)].string),nbLigne);
										erreur = 0;
									}
									if(strcmp(type,"")==0)//var non declared donc je l'ajoute
										{
											inserer(sauvIdf,"IDF",(char*)get_TypeEntite((yyvsp[(3) - (3)].string)),1);
											strcpy(sauvTypeEXP,(char*)get_TypeEntite((yyvsp[(3) - (3)].string))); //je copie le type de la prem val
										}
									else 
									{
									if(strcmp(type,"TabNONDEC")!=0) //tab declare
										{
											if (permitParEntite(sauvIdf,(yyvsp[(3) - (3)].string))==1){
												printf("\nErreur semantique: non compatibilite de type entre %s et %s a la ligne %d.",sauvIdf,(yyvsp[(3) - (3)].string),nbLigne);
												erreur = 0;
											}
											strcpy(sauvTypeEXP,(char*)get_TypeEntite(sauvIdf));
										}
									}
								}

								/* QUADS */
								sprintf(temp, "%s", (yyvsp[(3) - (3)].string));
								/* QUADS */

							;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 246 "syn.y"
    {/* QUADS */
									if(erreur==1 && strcmp(var,"_")==-1)
										GEN("<-",temp,"",var);
								   /* QUADS */
								;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 251 "syn.y"
    {
								erreur =1;
        						//TABLEAU DROIT
        						if (doubleDeclaration((yyvsp[(3) - (6)].string))==1 ) //non dec
									{
										printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(3) - (6)].string),nbLigne);
										erreur=0;
									}
								else if(verifierDepassement_Taille_Tab((yyvsp[(3) - (6)].string),(yyvsp[(5) - (6)].integer))==1) 
									{
										printf("\nErreur Semantique: Depassement de la taille du tableau %s, a la ligne %d.",(yyvsp[(3) - (6)].string),nbLigne);
										erreur=0;
									}
								//TABLEAU GAUCHE
								else {

									if(strcmp(type,"")==0)
									{
											inserer(sauvIdf,"IDF",(char*)get_TypeEntite((yyvsp[(3) - (6)].string)),1);
											strcpy(sauvTypeEXP,(char*)get_TypeEntite((yyvsp[(3) - (6)].string))); //je copie le type de la prem val
									}
									else if(strcmp(type,"TabNONDEC")!=0) //tab ou var declare 
										{	if(permitParEntite(sauvIdf,(yyvsp[(3) - (6)].string))==1)
												{
													printf("\nErreur semantique: non compatibilite  de type entre %s et %s a la ligne %d.",sauvIdf,(yyvsp[(3) - (6)].string),nbLigne);
													erreur=0;
												}
											strcpy(sauvTypeEXP,(char*)get_TypeEntite(sauvIdf));
										}
								}

								/* QUADS */
								sprintf(temp, "%s%s%d%s", (yyvsp[(3) - (6)].string) ,"[",(yyvsp[(5) - (6)].integer),"]");
								
        					;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 285 "syn.y"
    {
								if(erreur==1 && strcmp(var,"_")==-1) //Aucune erreur
									GEN("<-",temp,"",var);
								;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 292 "syn.y"
    {
					if (doubleDeclaration((yyvsp[(1) - (1)].string))==1 ) 
					{
						strcpy(sauvIdf,(yyvsp[(1) - (1)].string)); //VARIABLE non declare devine type
						strcpy(type,"");
					}
					else {
						if(strcmp((char*)get_CodeEntite((yyvsp[(1) - (1)].string)),(char*)"TAB")==0)
						{
							printf("\nErreur Sementique: %s est un tableau, specifiez l'element..ligne %d.",(yyvsp[(1) - (1)].string),nbLigne);
						}
						strcpy(type,(char*)get_TypeEntite((yyvsp[(1) - (1)].string)));	//VARIABLE DECLARED 	
						strcpy(sauvIdf,(yyvsp[(1) - (1)].string));
					}
					
					sprintf(var, "%s", (yyvsp[(1) - (1)].string));
					 
				;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 311 "syn.y"
    {	erreur = 1; //init
					if (doubleDeclaration((yyvsp[(1) - (4)].string))==1 ) //TABLEAU NON DECLARED
						{
							printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(1) - (4)].string),nbLigne);
							strcpy(type,"TabNONDEC"); //pour faire la diff avec une variable non decalree
							erreur = 0;
						}
					else 
						{	//TAB DECLARED  
							if(verifierDepassement_Taille_Tab((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].integer))==1) 
							{
								printf("\nErreur Semantique: Depassement de la taille du tableau %s, a la ligne %d.",(yyvsp[(1) - (4)].string),nbLigne);
								erreur = 0;
							}
							strcpy(type,(char*)get_TypeEntite((yyvsp[(1) - (4)].string))); 
							strcpy(sauvIdf,(yyvsp[(1) - (4)].string));
						}
						if(erreur==1){
							sprintf(var, "%s%s%d%s", (yyvsp[(1) - (4)].string) ,"[",(yyvsp[(3) - (4)].integer),"]");
						}else sprintf(var, "%s","_"); //pour signaler une erreur en haut
				;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 335 "syn.y"
    {strcpy(sauv_comp,"+");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 336 "syn.y"
    {strcpy(sauv_comp,"-");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 337 "syn.y"
    {strcpy(sauv_comp,"/");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 338 "syn.y"
    {strcpy(sauv_comp,"*");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 339 "syn.y"
    {strcpy(sauv_comp,"%");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 342 "syn.y"
    {strcpy(sauv_log,"and");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 343 "syn.y"
    {strcpy(sauv_log,"or");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 346 "syn.y"
    {	erreur =1 ;
													if((strcmp(sauv_comp,"/")==0 || strcmp(sauv_comp,"%")==0) && valInt==0 ) //DIV PAR ZERO
													{
														printf("\nErreur Semantique: Division par 0 a la ligne %d.",nbLigne);
														erreur = 0;
													}
													if(permit_cond((char*)sauvTypeEXP,"INTEGER")==1)
													{
														printf("\nErreur Semantique: non compatibilite %s avec %d, a la ligne %d.",sauvTypeEXP,valInt,nbLigne);
														erreur = 0;
													}
													/* QUADS */
													if(erreur==1 && strcmp(var,"_")==-1){ //Aucune erreur
														CreerTemp(tempCpt);
														sprintf(snum, "%d", valInt);
														GEN(sauv_comp,temp,snum, tempCpt);
														strcpy(temp, tempCpt);
													}

										;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 367 "syn.y"
    {	erreur =1 ;
													if((strcmp(sauv_comp,"/")==0 || strcmp(sauv_comp,"%")==0) && valNum==0 ) //DIV PAR ZERO
													{
														printf("\nErreur Semantique: Division par 0 a la ligne %d.",nbLigne);
														erreur = 0;
													}
													
													if(strcmp((char*)sauvTypeEXP,"NUMERIC")==-1)
													{	
														printf("\nErreur Semantique: non compatibilite %s avec %f a la ligne %d.",sauvTypeEXP,valNum,nbLigne);
														erreur = 0;
													}
													if(erreur==1 && strcmp(var,"_")==-1){ //Aucune erreur
														CreerTemp(tempCpt);
														sprintf(snum, "%f", valNum);
														GEN(sauv_comp,temp,snum, tempCpt);
														strcpy(temp, tempCpt);
													}
												;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 387 "syn.y"
    {erreur =1 ;
													if (doubleDeclaration((yyvsp[(2) - (2)].string))==1 ) //non dec
														{
															printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(2) - (2)].string),nbLigne);
															erreur = 0;
														}
													else 
													{	
														if(strcmp((char*)get_CodeEntite((yyvsp[(2) - (2)].string)),(char*)"TAB")==0)
														{
															printf("\nErreur Sementique: %s est un tableau, specifiez l'element..ligne %d.",(yyvsp[(2) - (2)].string),nbLigne);
															erreur = 0;
														}
														if(permit_cond((char*)sauvTypeEXP,(char*)get_TypeEntite((yyvsp[(2) - (2)].string)))!=0)
														{
															printf("\nErreur Semantique: non compatibilite entre %s et %s a la ligne %d.",sauvTypeEXP,(yyvsp[(2) - (2)].string),nbLigne);
															erreur = 0;
														}
													}
													if(erreur==1 && strcmp(var,"_")==-1){ //Aucune erreur
														CreerTemp(tempCpt);
														GEN(sauv_comp,temp,(yyvsp[(2) - (2)].string), tempCpt);
														strcpy(temp, tempCpt);
													}

										;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 413 "syn.y"
    {	erreur =1 ;
													if (doubleDeclaration((yyvsp[(2) - (5)].string))==1 ) //non dec
													{	
														printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(2) - (5)].string),nbLigne);
														erreur = 0;
													}	
													else 
														{
															if(verifierDepassement_Taille_Tab((yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].integer))==1) {
																printf("\nErreur Semantique: Depassement de la taille du tableau %s a la ligne %d.",(yyvsp[(2) - (5)].string),nbLigne);
																erreur = 0;
															}
														
															if(permit_cond((char*)sauvTypeEXP,(char*)get_TypeEntite((yyvsp[(2) - (5)].string)))!=0)
															{
																printf("\nErreur Semantique: non compatibilite de %s avec %s a la ligne %d.",sauvTypeEXP,(yyvsp[(2) - (5)].string),nbLigne);
																erreur = 0;
															}
														}
													if(erreur==1 && strcmp(var,"_")==-1){ //Aucune erreur
														CreerTemp(tempCpt);
														sprintf(temp2, "%s%s%d%s", (yyvsp[(2) - (5)].string) ,"[",(yyvsp[(4) - (5)].integer),"]");
														GEN(sauv_comp,temp,temp2, tempCpt);
														strcpy(temp, tempCpt);
													}
												;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 439 "syn.y"
    {			
													erreur =1 ;
													if(permit_cond((char*)sauvTypeEXP,"LOGICAL")==1)
													{
														printf("\nErreur Semantique: non compatibilite %s avec %s a la ligne %d.",sauvTypeEXP,(yyvsp[(4) - (4)].string),nbLigne);
														erreur = 0;
													}
													if(erreur==1 && strcmp(var,"_")==-1){ //Aucune erreur
														CreerTemp(tempCpt);
														GEN(sauv_log,temp,(yyvsp[(4) - (4)].string), tempCpt);
														strcpy(temp, tempCpt);
													}
												;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 453 "syn.y"
    {
												erreur =1;
												if (doubleDeclaration((yyvsp[(4) - (4)].string))==1) {
														printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(4) - (4)].string),nbLigne);
														erreur = 0;
												}else
												{

													 if(strcmp((char*)get_CodeEntite((yyvsp[(4) - (4)].string)),(char*)"TAB")==0)
													{
														printf("\nErreur Sementique: %s est un tableau, specifiez l'element..ligne %d.",(yyvsp[(4) - (4)].string),nbLigne);
														erreur = 0;
													}
													if(permit_cond((char*)sauvTypeEXP,(char*)get_TypeEntite((yyvsp[(4) - (4)].string)))==1)
													{
														printf("\nErreur Semantique: non compatibilite %s avec %s a la ligne %d.",sauvTypeEXP,(yyvsp[(4) - (4)].string),nbLigne);
														erreur = 0;
													}
												}
												if(erreur==1 && strcmp(var,"_")==-1){ //Aucune erreur
														CreerTemp(tempCpt);
														GEN(sauv_log,temp,(yyvsp[(4) - (4)].string), tempCpt);
														strcpy(temp, tempCpt);
													}
												;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 479 "syn.y"
    {	
												erreur = 1;
												if (doubleDeclaration((yyvsp[(4) - (7)].string))==1 ) //non dec 
												{
														printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(4) - (7)].string),nbLigne);
														erreur = 0;
												}
												else { 
													if(verifierDepassement_Taille_Tab((yyvsp[(4) - (7)].string),(yyvsp[(6) - (7)].integer))==1) {
														printf("\nErreur Semantique: Depassement de la taille du tableau %s, a la ligne %d.",(yyvsp[(4) - (7)].string),nbLigne);
														erreur = 0;
													}

													if(permit_cond((char*)sauvTypeEXP,(char*)get_TypeEntite((yyvsp[(4) - (7)].string)))==1)
													{
														printf("\nErreur Semantique: non compatibilite %s avec %s, a la ligne %d.",sauvTypeEXP,(yyvsp[(4) - (7)].string),nbLigne);
														erreur = 0;
													}
												}
												if (erreur==1 && strcmp(var,"_")==-1){ //Aucune erreur
														CreerTemp(tempCpt);
														sprintf(temp2, "%s%s%d%s", (yyvsp[(4) - (7)].string) ,"[",(yyvsp[(4) - (7)].string),"]");
														GEN(sauv_log,temp,temp2, tempCpt);
														strcpy(temp, tempCpt);
												}
											;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 508 "syn.y"
    {	//id int ici doit etre positif
												erreur = 1; //init
												if (doubleDeclaration((yyvsp[(1) - (4)].string))==1 ) //non dec
												{
													printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(1) - (4)].string),nbLigne);
													erreur=0;
												}else if(strcmp((char*)get_CodeEntite((yyvsp[(1) - (4)].string)),(char*)"TAB")==0)
												{
													printf("\nErreur Sementique: %s est un tableau, specifiez l'element..ligne %d.",(yyvsp[(1) - (4)].string),nbLigne);
													erreur = 0;
												}	
													
												if((yyvsp[(4) - (4)].integer)<=0){
													printf("\nErreur Semantique: %d est = 0 a la ligne %d.",(yyvsp[(4) - (4)].integer),nbLigne);
													erreur=0;
												}
												
												/* QUADS */
												if(erreur==1)
												{
													itoa((yyvsp[(4) - (4)].integer), snum, 10);
													CreerTemp(temp);
													GEN("+",(yyvsp[(1) - (4)].string),snum,temp);
													GEN("<-",temp,"",(yyvsp[(1) - (4)].string));
												}
												/* QUADS */

											;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 536 "syn.y"
    {	erreur = 1; //init
												if (doubleDeclaration((yyvsp[(1) - (4)].string))==1 ) //non dec
													{
														printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(1) - (4)].string),nbLigne);
														erreur=0;
													}else if(strcmp((char*)get_CodeEntite((yyvsp[(1) - (4)].string)),(char*)"TAB")==0)
												{
													printf("\nErreur Sementique: %s est un tableau, specifiez l'element..ligne %d.",(yyvsp[(1) - (4)].string),nbLigne);
													erreur = 0;
												}
												if((yyvsp[(4) - (4)].integer)<=0)
													{
														printf("\nErreur Semantique: %d est = 0 a la ligne %d.",(yyvsp[(4) - (4)].integer),nbLigne);
														erreur=0;
													}
												/* QUADS */
													if(erreur==1)
													{	itoa((yyvsp[(4) - (4)].integer), snum, 10);
														CreerTemp(temp);
														GEN("-",(yyvsp[(1) - (4)].string),snum,temp);
														GEN("<-",temp, "",(yyvsp[(1) - (4)].string));
													}
												/* QUADS */

											;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 561 "syn.y"
    {	
												erreur = 1; //init
												if (doubleDeclaration((yyvsp[(1) - (7)].string))==1 ) //non dec
													{
														printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(1) - (7)].string),nbLigne);
														erreur=0;
													}
												else if(verifierDepassement_Taille_Tab((yyvsp[(1) - (7)].string),(yyvsp[(3) - (7)].integer))==1) 
												{
													printf("\nErreur Semantique: Depassement de la taille du tableau %s a la ligne %d.",(yyvsp[(1) - (7)].string),nbLigne);
													erreur=0;	
												}
												if((yyvsp[(7) - (7)].integer)<=0)
												{
													printf("\nErreur Semantique: %d est <=0 a la ligne %d.",(yyvsp[(7) - (7)].integer),nbLigne);
													erreur=0;
												}
												/* QUADS */
												if(erreur==1)
													{
														itoa((yyvsp[(7) - (7)].integer), snum, 10);
														CreerTemp(temp);
														GEN("+",(yyvsp[(1) - (7)].string),snum,temp);
														GEN("<-",temp,"",(yyvsp[(1) - (7)].string));
													}
												/* QUADS */

											;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 589 "syn.y"
    {	
												erreur = 1; //init
												if (doubleDeclaration((yyvsp[(1) - (7)].string))==1 ) //non dec
												{
													printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(1) - (7)].string),nbLigne);
													erreur=0;	
												}	
												else if(verifierDepassement_Taille_Tab((yyvsp[(1) - (7)].string),(yyvsp[(3) - (7)].integer))==1) 
												{
													printf("\nErreur Semantique: Depassement de la taille du tableau %s a la ligne %d.",(yyvsp[(1) - (7)].string),nbLigne);
													erreur=0;
												}
												if((yyvsp[(7) - (7)].integer)<=0)
												{
													printf("\nErreur Semantique: %d est <=0 a la ligne %d.",(yyvsp[(7) - (7)].integer),nbLigne);
													erreur=0;
												}
												/* QUADS */
												if(erreur==1)
												{
													itoa((yyvsp[(7) - (7)].integer), snum, 10);
													CreerTemp(temp);
													GEN("-",(yyvsp[(1) - (7)].string),snum,temp);
													GEN("<-",temp,"",(yyvsp[(1) - (7)].string));
												}
												/* QUADS */
											;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 620 "syn.y"
    {
											pos = getNumQuads();
											addPos(pos, posBR); 
											;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 627 "syn.y"
    {
											pos = getNumQuads();
											addPos(pos, posBR);
											;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 636 "syn.y"
    {
																			if(erreur==1 && strcmp(var,"_")==-1){
																				pos = getNumQuads();
																				addPos(pos-1, posBR); 
																				GEN("<-",temp,"",var); 
																			}
																		  ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 645 "syn.y"
    {posEV = getNumQuads();;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 645 "syn.y"
    {
														 if(erreur==1 && strcmp(var,"_")==-1){
															pos = getNumQuads();
															addPos(pos+1, posBR); //add pos du br
															sprintf(snum,"%d",posEV);
															GEN("BR",snum,"","");
														}
													 ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 656 "syn.y"
    {	//int ici doit etre positif
						      				erreur = 1;
						      				if (doubleDeclaration((yyvsp[(3) - (9)].string))==1 ) //non dec meme si elle est pas dec je l'insere
												{
													inserer((yyvsp[(3) - (9)].string),"TEMP","INTEGER",1);

												}else 
												{
													if(strcmp((char*)get_CodeEntite((yyvsp[(3) - (9)].string)),(char*)"TAB")==0)
													{
														printf("\nErreur Sementique: %s est un tableau, specifiez l'element..ligne %d.",(yyvsp[(3) - (9)].string),nbLigne);
														erreur = 0;
													}
													if (strcmp((char*)get_TypeEntite((yyvsp[(3) - (9)].string)),"INTEGER")==-1 && strcmp((char*)get_TypeEntite((yyvsp[(3) - (9)].string)),"NUMERIC")==-1)	{

								      					printf("\nErreur Semantique: non compatibilite de %s avec les entiers a la ligne %d.",(yyvsp[(3) - (9)].string),nbLigne);
								      					erreur=0;
								      				}
								      			}
						      				borne1 = (yyvsp[(7) - (9)].integer);
											borne2 = (yyvsp[(9) - (9)].integer);
												if (borne2 <= borne1 || borne1<0 || borne2 <=0){
												printf("\nErreur S%cmantique: bornes fausses,%c la ligne %d.",130,133,nbLigne);
												erreur = 0;
											}
											if(erreur==1 && strcmp(var,"_")==-1){
												sprintf(temp, "%s", (yyvsp[(3) - (9)].string));
												sprintf(temp2, "%d", (yyvsp[(9) - (9)].integer));
												sprintf(snum, "%d", borne1);
												GEN("<-",snum,"",temp);
												posBR = getNumQuads();
												GEN("BGE","",temp,temp2);//generer sans la pos du  br
												
											}
										;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 690 "syn.y"
    {
																pos = getNumQuads();
																addPos(pos+2, posBR); 
																sprintf(snum,"%d",posBR);
																sprintf(temp, "%s", (yyvsp[(3) - (14)].string));
																GEN("+",temp,"1",temp);
																GEN("BR",snum,"","");
									     					  ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 700 "syn.y"
    {strcpy(loc, temp);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 700 "syn.y"
    {	
																if(strcmp((yyvsp[(3) - (6)].string), "==")==0) strcpy(temp2, "BNE"); 
																else if(strcmp((yyvsp[(3) - (6)].string), "!=")==0) strcpy(temp2, "BE");
																else if(strcmp((yyvsp[(3) - (6)].string), ">=")==0) strcpy(temp2, "BL");
																else if(strcmp((yyvsp[(3) - (6)].string), "<=")==0) strcpy(temp2, "BG");
																else if(strcmp((yyvsp[(3) - (6)].string), ">")==0)  strcpy(temp2, "BLE"); 
																else if(strcmp((yyvsp[(3) - (6)].string), "<")==0)  strcpy(temp2, "BGE"); 

																posBR = getNumQuads();
																sprintf(snum, "%d", posBR);
																GEN(temp2,"",loc,temp);//generer sans la pos du  br
															;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 715 "syn.y"
    {	erreur=1;
										if (doubleDeclaration((yyvsp[(1) - (1)].string))==1 ) //NON DECLARED
										{
											printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(1) - (1)].string),nbLigne);
											erreur=0;
										}else if(strcmp((char*)get_CodeEntite((yyvsp[(1) - (1)].string)),(char*)"TAB")==0)
												{
													printf("\nErreur Sementique: %s est un tableau, specifiez l'element..ligne %d.",(yyvsp[(1) - (1)].string),nbLigne);
													erreur = 0;
												}		
										sprintf(temp, "%s", (yyvsp[(1) - (1)].string));
										strcpy(sauvTypeEXP,(char*)get_TypeEntite((yyvsp[(1) - (1)].string)));
									;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 728 "syn.y"
    {	erreur=1;
										if (doubleDeclaration((yyvsp[(1) - (4)].string))==1 ) //NON DECLARED
										{
											printf("\nErreur Sementique: Entite %s non declaree a la ligne %d.",(yyvsp[(1) - (4)].string),nbLigne);
											erreur=0;
										}
										else 
											{	//DECLARED  
												if(verifierDepassement_Taille_Tab((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].integer))==1) 
												{
													printf("\nErreur Semantique: Depassement de la taille du tableau %s, a la ligne %d.",(yyvsp[(1) - (4)].string),nbLigne);
													erreur=0;
												}
											}
										sprintf(temp, "%s%s%d%s", (yyvsp[(1) - (4)].string), "[", (yyvsp[(3) - (4)].integer), "]");
										strcpy(sauvTypeEXP,(char*)get_TypeEntite((yyvsp[(1) - (4)].string)));
									;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 745 "syn.y"
    {
							strcpy(sauvTypeEXP,"INTEGER"); 
							sprintf(temp, "%d", valInt);
						;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 750 "syn.y"
    {
							strcpy(sauvTypeEXP,"NUMERIC"); 
							sprintf(temp, "%f", valNum);
						;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 755 "syn.y"
    {
							strcpy(sauvTypeEXP,"CHARACTER"); 
							sprintf(temp, "%c", (yyvsp[(1) - (1)].string));
						;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 760 "syn.y"
    {
							strcpy(sauvTypeEXP,"LOGICAL"); 
							sprintf(temp, "%s", (yyvsp[(1) - (1)].string));
						;}
    break;



/* Line 1455 of yacc.c  */
#line 2505 "syn.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 767 "syn.y"


main()
{
yyparse();
afficher();
afficher_qdr();
afficher_code_machine();
}
yywrap()
{}
int yyerror(char *s) 
{
    printf("\nErreur Syntaxique << %s >> a la ligne %d, colonne %d.\n",s,nbLigne,column);
}

