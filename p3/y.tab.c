/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "quack.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <vector>
#include <string.h>
#include "quack.h"
#include "class_tree.h"
#include  <algorithm>

extern vector < string > class_names;
list <tree_node *> *tree_list;

extern FILE *yyin;

program_node *root;

int yylex();
void yyerror(const char *s);


#line 88 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CLASS = 258,
    DEF = 259,
    EXTENDS = 260,
    IF = 261,
    ELIF = 262,
    ELSE = 263,
    WHILE = 264,
    RETURN = 265,
    ATLEAST = 266,
    ATMOST = 267,
    EQUALS = 268,
    AND = 269,
    OR = 270,
    NOT = 271,
    IDENT = 272,
    INT_LIT = 273,
    STRING_LIT = 274,
    TRI_STRING_LIT = 275,
    NEG = 276
  };
#endif
/* Tokens.  */
#define CLASS 258
#define DEF 259
#define EXTENDS 260
#define IF 261
#define ELIF 262
#define ELSE 263
#define WHILE 264
#define RETURN 265
#define ATLEAST 266
#define ATMOST 267
#define EQUALS 268
#define AND 269
#define OR 270
#define NOT 271
#define IDENT 272
#define INT_LIT 273
#define STRING_LIT 274
#define TRI_STRING_LIT 275
#define NEG 276

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "quack.y" /* yacc.c:355  */

  int intval;
  char *strval;

  r_expr_node			*reNode;
  l_expr_node			*leNode;

  program_node						*pNode;

  class_node							*cNode;
  class_sig_node					*csNode;
  class_body_node					*cbNode;
  list<class_node *>			*cNode_list;

  statement_node					*sNode;
 statement_block_node		*sbNode;
	list<statement_node *>	*sNode_list;
	list<method_node *>			*mNode_list;
	method_node							*mNode;
	vector < f_arg_pair * >	*f_arg_vector;

	list<r_expr_node *>			*argNode_list;
  elif_data								*elifNode;  

#line 195 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    25,    23,    34,    24,    28,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    33,    35,
      21,    36,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   101,   101,   103,   104,   106,   108,   110,   113,   115,
     116,   118,   119,   121,   122,   123,   125,   127,   128,   130,
     131,   133,   135,   138,   139,   141,   143,   144,   146,   148,
     149,   151,   153,   155,   158,   159,   160,   162,   163,   164,
     165,   166,   167,   168,   169,   172,   173,   174,   175,   176,
     179,   181,   182
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "DEF", "EXTENDS", "IF", "ELIF",
  "ELSE", "WHILE", "RETURN", "ATLEAST", "ATMOST", "EQUALS", "AND", "OR",
  "NOT", "IDENT", "INT_LIT", "STRING_LIT", "TRI_STRING_LIT", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "NEG", "'.'", "'('", "')'", "'{'", "'}'",
  "':'", "','", "';'", "'='", "$accept", "Program", "Classes", "Class",
  "Class_Signature", "Class_Body", "Methods", "Method", "Formal_Args",
  "Statement_Block", "Statements", "Statement", "Elseif", "L_Expr",
  "R_Expr", "Actual_Args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    60,    62,    43,    45,    42,    47,   276,    46,    40,
      41,   123,   125,    58,    44,    59,    61
};
# endif

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -46,     3,    48,   -46,    41,   -46,    33,   173,    45,   -46,
     -46,   219,   219,    43,   219,    52,   -46,   -46,   -46,   219,
     -46,    12,    73,    72,   173,   -46,   183,   183,   -46,    91,
      -2,   219,   204,    74,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,    75,   -46,    57,    63,
       9,   -46,   -46,   -46,   -46,   152,    70,   -46,    71,   109,
     133,   133,   133,    -2,    -2,   133,   133,    51,    51,    81,
      81,    82,    93,   113,   108,   -46,   -46,    37,    60,   219,
     -46,   -46,   219,   -46,   219,     8,   110,    99,   -46,   219,
      98,   -46,   127,   106,    72,   -46,   -46,    72,   183,   -46,
     -46,   -46,   -46,   115,   -46,   -17,   126,   -46,    98,   -46
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,    17,     1,     0,     4,     0,     2,     0,    17,
       5,     0,     0,     0,     0,    29,    50,    51,    52,     0,
      18,    31,     0,    13,     9,    31,     0,     0,    20,     0,
      44,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,    17,    23,    25,    19,    34,     0,    45,     0,     0,
      40,    41,    39,    42,    43,    38,    37,    46,    47,    48,
      49,    30,     0,     6,     0,     8,    10,     0,    21,    34,
      35,    33,     0,    26,    34,    13,     0,     0,    16,     0,
       0,    36,     0,     0,    13,    14,     7,    13,     0,    22,
      27,    32,    15,     0,    24,     0,     0,    11,     0,    12
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -45,   -25,
      -1,   -46,   -46,    -6,    -7,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,     6,    10,    50,    76,    49,    52,
       7,    20,    78,    25,    55,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    21,    53,     3,    26,    27,    29,    30,    24,    35,
      36,    37,    32,    74,    51,    80,   106,    22,    21,    40,
      41,    42,    43,    44,    45,    48,    46,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    91,
      95,    75,    94,    11,    93,    33,    12,    13,    34,   102,
      77,     4,   103,    14,    15,    16,    17,    18,     8,    14,
      15,    16,    17,    18,     9,    99,    19,    89,    90,    88,
      22,    21,    19,   104,    23,    92,    44,    45,    28,    46,
     107,    31,    98,   109,    35,    36,    37,    38,    39,    48,
      72,    58,    71,    73,    40,    41,    42,    43,    44,    45,
      81,    46,    35,    36,    37,    38,    39,    82,    47,    46,
      85,    84,    40,    41,    42,    43,    44,    45,    86,    46,
      35,    36,    37,    38,    39,    87,    54,    96,    97,    51,
      40,    41,    42,    43,    44,    45,   101,    46,    35,    36,
      37,    38,    39,   108,    83,   105,     0,     0,    40,    41,
      42,    43,    44,    45,     0,    46,    42,    43,    44,    45,
       0,    46,   100,    35,    36,    37,    38,    39,    14,    15,
      16,    17,    18,    40,    41,    42,    43,    44,    45,    11,
      46,    19,    12,    13,     0,     0,    79,     0,     0,    14,
      15,    16,    17,    18,    35,    36,    37,    38,    39,     0,
       0,     0,    19,     0,    40,    41,    42,    43,    44,    45,
       0,    46,     0,     0,    51,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,     0,    46,     0,    57,    14,    15,    16,    17,    18,
       0,     0,     0,     0,     0,     0,     0,     0,    19
};

static const yytype_int8 yycheck[] =
{
       7,     7,    27,     0,    11,    12,    13,    14,     9,    11,
      12,    13,    19,     4,    31,    55,    33,    24,    24,    21,
      22,    23,    24,    25,    26,    17,    28,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    79,
      85,    32,    34,     6,    84,    33,     9,    10,    36,    94,
      51,     3,    97,    16,    17,    18,    19,    20,    17,    16,
      17,    18,    19,    20,    31,    90,    29,     7,     8,    32,
      77,    77,    29,    98,    29,    82,    25,    26,    35,    28,
     105,    29,    89,   108,    11,    12,    13,    14,    15,    17,
      33,    17,    17,    30,    21,    22,    23,    24,    25,    26,
      30,    28,    11,    12,    13,    14,    15,    36,    35,    28,
      17,    29,    21,    22,    23,    24,    25,    26,     5,    28,
      11,    12,    13,    14,    15,    17,    35,    17,    29,    31,
      21,    22,    23,    24,    25,    26,    30,    28,    11,    12,
      13,    14,    15,    17,    35,    30,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    28,    23,    24,    25,    26,
      -1,    28,    35,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     6,
      28,    29,     9,    10,    -1,    -1,    34,    -1,    -1,    16,
      17,    18,    19,    20,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    29,    -1,    21,    22,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    28,    -1,    30,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,     0,     3,    40,    41,    47,    17,    31,
      42,     6,     9,    10,    16,    17,    18,    19,    20,    29,
      48,    50,    51,    29,    47,    50,    51,    51,    35,    51,
      51,    29,    51,    33,    36,    11,    12,    13,    14,    15,
      21,    22,    23,    24,    25,    26,    28,    35,    17,    45,
      43,    31,    46,    46,    35,    51,    52,    30,    17,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    17,    33,    30,     4,    32,    44,    47,    49,    34,
      52,    30,    36,    35,    29,    17,     5,    17,    32,     7,
       8,    52,    51,    52,    34,    45,    17,    29,    51,    46,
      35,    30,    45,    45,    46,    30,    33,    46,    17,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    41,    41,    42,    43,
      43,    44,    44,    45,    45,    45,    46,    47,    47,    48,
      48,    48,    48,    49,    49,    48,    48,    48,    48,    50,
      50,    51,    51,    51,    52,    52,    52,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     5,     7,     4,     0,
       2,     6,     8,     0,     4,     5,     3,     0,     2,     3,
       2,     4,     6,     0,     4,     3,     4,     6,     2,     1,
       3,     1,     6,     4,     0,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 101 "quack.y" /* yacc.c:1646  */
    { (yyval.pNode) = new program_node((yyvsp[-1].cNode_list), (yyvsp[0].sNode_list)); root = (yyval.pNode); }
#line 1383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 103 "quack.y" /* yacc.c:1646  */
    { (yyval.cNode_list) = new list<class_node *>(); }
#line 1389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 104 "quack.y" /* yacc.c:1646  */
    { (yyval.cNode_list) = (yyvsp[-1].cNode_list); (yyvsp[-1].cNode_list)->push_back((yyvsp[0].cNode)); }
#line 1395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 106 "quack.y" /* yacc.c:1646  */
    {(yyval.cNode) = new class_node((yyvsp[-1].csNode), (yyvsp[0].cbNode)); }
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 108 "quack.y" /* yacc.c:1646  */
    { (yyval.csNode) = new class_sig_node((yyvsp[-3].strval), (yyvsp[-1].f_arg_vector), "Obj");
																									class_names.push_back( (yyvsp[-3].strval) ); }
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 110 "quack.y" /* yacc.c:1646  */
    { (yyval.csNode) = new class_sig_node((yyvsp[-5].strval), (yyvsp[-3].f_arg_vector), (yyvsp[0].strval));  
																									class_names.push_back( (yyvsp[-5].strval) ); }
#line 1415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 113 "quack.y" /* yacc.c:1646  */
    { (yyval.cbNode) = new class_body_node( (yyvsp[-2].sNode_list), (yyvsp[-1].mNode_list) ); }
#line 1421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 115 "quack.y" /* yacc.c:1646  */
    { (yyval.mNode_list) = new list<method_node *>(); }
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 116 "quack.y" /* yacc.c:1646  */
    { (yyval.mNode_list) = (yyvsp[-1].mNode_list); (yyvsp[-1].mNode_list) -> push_back((yyvsp[0].mNode)); }
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 118 "quack.y" /* yacc.c:1646  */
    { (yyval.mNode) = new method_node((yyvsp[-4].strval), (yyvsp[-2].f_arg_vector), NULL, (yyvsp[0].sbNode)); }
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 119 "quack.y" /* yacc.c:1646  */
    { (yyval.mNode) = new method_node((yyvsp[-6].strval), (yyvsp[-4].f_arg_vector), (yyvsp[-1].strval), (yyvsp[0].sbNode)); }
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "quack.y" /* yacc.c:1646  */
    {(yyval.f_arg_vector) = new vector< f_arg_pair * >(); }
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 122 "quack.y" /* yacc.c:1646  */
    { (yyval.f_arg_vector) = (yyvsp[0].f_arg_vector); (yyvsp[0].f_arg_vector) -> push_back( new f_arg_pair((yyvsp[-3].strval), (yyvsp[-1].strval)) ); }
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 123 "quack.y" /* yacc.c:1646  */
    { (yyval.f_arg_vector) = (yyvsp[0].f_arg_vector); (yyvsp[0].f_arg_vector) -> push_back( new f_arg_pair((yyvsp[-4].strval), (yyvsp[-2].strval)) ); }
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 125 "quack.y" /* yacc.c:1646  */
    { (yyval.sbNode) = new statement_block_node((yyvsp[-1].sNode_list)); }
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 127 "quack.y" /* yacc.c:1646  */
    { (yyval.sNode_list) = new list<statement_node *>(); }
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 128 "quack.y" /* yacc.c:1646  */
    {(yyval.sNode_list) = (yyvsp[-1].sNode_list); (yyvsp[-1].sNode_list) -> push_back((yyvsp[0].sNode)); }
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 130 "quack.y" /* yacc.c:1646  */
    { (yyval.sNode) = new return_node((yyvsp[-1].reNode)); }
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 131 "quack.y" /* yacc.c:1646  */
    { (yyval.sNode) = new return_node( NULL ); }
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 134 "quack.y" /* yacc.c:1646  */
    { (yyval.sNode) = new if_node((yyvsp[-2].reNode), (yyvsp[-1].sbNode), (yyvsp[0].elifNode)); }
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 136 "quack.y" /* yacc.c:1646  */
    { (yyval.sNode) = new if_node((yyvsp[-4].reNode), (yyvsp[-3].sbNode), (yyvsp[-2].elifNode), (yyvsp[0].sbNode)); }
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 138 "quack.y" /* yacc.c:1646  */
    { (yyval.elifNode) = new elif_data(); }
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 139 "quack.y" /* yacc.c:1646  */
    { (yyval.elifNode) = (yyvsp[-3].elifNode); (yyvsp[-3].elifNode) -> add((yyvsp[-1].reNode), (yyvsp[0].sbNode)); }
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 141 "quack.y" /* yacc.c:1646  */
    { (yyval.sNode) = new while_node((yyvsp[-1].reNode), (yyvsp[0].sbNode)); }
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 143 "quack.y" /* yacc.c:1646  */
    {(yyval.sNode) = new asgn_node((yyvsp[-3].leNode),(yyvsp[-1].reNode)); }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "quack.y" /* yacc.c:1646  */
    { (yyval.sNode) = new asgn_node((yyvsp[-5].leNode), (yyvsp[-3].strval), (yyvsp[-1].reNode)); }
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "quack.y" /* yacc.c:1646  */
    { (yyval.sNode) = (yyvsp[-1].reNode); }
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 148 "quack.y" /* yacc.c:1646  */
    { (yyval.leNode) = new l_expr_node((yyvsp[0].strval)); }
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 149 "quack.y" /* yacc.c:1646  */
    { (yyval.leNode) = new l_expr_node((yyvsp[-2].reNode), (yyvsp[0].strval)); }
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 151 "quack.y" /* yacc.c:1646  */
    {(yyval.reNode) = (yyvsp[0].leNode);}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 153 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new method_call_node((yyvsp[-5].reNode), (yyvsp[-3].strval), (yyvsp[-1].argNode_list)); }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 155 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new constructor_call_node((yyvsp[-3].strval), (yyvsp[-1].argNode_list)); }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 158 "quack.y" /* yacc.c:1646  */
    { (yyval.argNode_list) = new list<r_expr_node *>(); }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 159 "quack.y" /* yacc.c:1646  */
    { (yyval.argNode_list) = (yyvsp[0].argNode_list); (yyvsp[0].argNode_list) -> push_back((yyvsp[-1].reNode)); }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 160 "quack.y" /* yacc.c:1646  */
    { (yyval.argNode_list) = (yyvsp[0].argNode_list); (yyvsp[0].argNode_list) -> push_back((yyvsp[-2].reNode)); }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 162 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new compare_node((yyvsp[-2].reNode), ">", (yyvsp[0].reNode)) ;}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 163 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new compare_node((yyvsp[-2].reNode), "<" , (yyvsp[0].reNode)); }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 164 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new compare_node((yyvsp[-2].reNode), "==", (yyvsp[0].reNode)); }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 165 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new compare_node((yyvsp[-2].reNode), ">=" , (yyvsp[0].reNode)); }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 166 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new compare_node((yyvsp[-2].reNode), "<=" , (yyvsp[0].reNode)); }
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 167 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new compare_node((yyvsp[-2].reNode),"AND" , (yyvsp[0].reNode)); }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 168 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new compare_node((yyvsp[-2].reNode), "OR" , (yyvsp[0].reNode)); }
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 169 "quack.y" /* yacc.c:1646  */
    {(yyval.reNode) = new unary_node( "NOT", (yyvsp[0].reNode)) ; }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 172 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = (yyvsp[-1].reNode); }
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 173 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new plus_node((yyvsp[-2].reNode), (yyvsp[0].reNode)); }
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 174 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new minus_node((yyvsp[-2].reNode), (yyvsp[0].reNode)); }
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 175 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new times_node((yyvsp[-2].reNode), (yyvsp[0].reNode)); }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 176 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new divide_node((yyvsp[-2].reNode), (yyvsp[0].reNode)); }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 179 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new int_node((yyvsp[0].intval)); }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 181 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new str_node((yyvsp[0].strval)); }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 182 "quack.y" /* yacc.c:1646  */
    { (yyval.reNode) = new str_node((yyvsp[0].strval)); }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1689 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 184 "quack.y" /* yacc.c:1906  */


/* main program here */
int main (int argc, char **argv) 
{
	if (argc < 2) {
		printf("usage: scanner inputfile\n");
		exit(0);
	}
	yyin = fopen(argv[1], "r");

	if (yyin == NULL) {
		printf("Bad file name: %s\n", argv[1]);
		exit(0);
	}

	//yyrestart(f);

	int condition = yyparse();

	printf("Finished parse with result %d\n", condition);

        if (condition) exit(0);

	// check class names for Obj, ...

	class_names.push_back("Obj");
	class_names.push_back("Int");
	class_names.push_back("String");
	class_names.push_back("Nothing");
	class_names.push_back("Boolean");

        	
	printf("--- Evaluate ---\n");
	//sorting vector to check for duplicates
	sort( class_names.begin(), class_names.end() );
  	
	for( int i=1; i < class_names.size(); i++ )
	{
		if ( class_names[i].compare(class_names[i-1] ) == 0) 
		{
			fprintf(stderr,"error: duplicate class name %s\n",class_names[i].c_str());
		} 
	}  


	//adding default tree nodes to tree list

	tree_node *Obj = new tree_node("Obj");
	tree_node *Int = new tree_node("Int");
	tree_node *String = new tree_node("String");
	tree_node *Nothing = new tree_node("Nothing");
	tree_node *Boolean = new tree_node("Boolean");

	tree_list = new list <tree_node*>(); 

	tree_list->push_back(Obj);
	tree_list->push_back(Int);
	tree_list->push_back(String);
	tree_list->push_back(Boolean);
	tree_list->push_back(Nothing);

	Obj->children.push_back(Int);
	Obj->children.push_back(String);
	Obj->children.push_back(Nothing);
	Obj->children.push_back(Boolean);

	Int->parent = Obj;
	String->parent = Obj;
	Nothing->parent = Obj;
	Boolean->parent = Obj;
	
	if (root != NULL) root->evaluate();
	printf("\n");

	printf("--- Class Tree ---\n");
	print_tree(Obj, 0);
	printf("\n");

	printf("--- Syntax Tree ---\n");
	if (root != NULL) root->print(0);



}
