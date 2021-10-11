/* A Bison parser, made by GNU Bison 3.8.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30800

/* Bison version string.  */
#define YYBISON_VERSION "3.8"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TYPE = 3,                       /* TYPE  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_LIST = 5,                       /* LIST  */
  YYSYMBOL_LP = 6,                         /* LP  */
  YYSYMBOL_SEMI = 7,                       /* SEMI  */
  YYSYMBOL_COM = 8,                        /* COM  */
  YYSYMBOL_RCB = 9,                        /* RCB  */
  YYSYMBOL_LCB = 10,                       /* LCB  */
  YYSYMBOL_TWD = 11,                       /* TWD  */
  YYSYMBOL_PLUS = 12,                      /* PLUS  */
  YYSYMBOL_MIN = 13,                       /* MIN  */
  YYSYMBOL_MUL = 14,                       /* MUL  */
  YYSYMBOL_LT = 15,                        /* LT  */
  YYSYMBOL_GT = 16,                        /* GT  */
  YYSYMBOL_LEQ = 17,                       /* LEQ  */
  YYSYMBOL_GEQ = 18,                       /* GEQ  */
  YYSYMBOL_DIF = 19,                       /* DIF  */
  YYSYMBOL_MAP = 20,                       /* MAP  */
  YYSYMBOL_FIL = 21,                       /* FIL  */
  YYSYMBOL_DIV = 22,                       /* DIV  */
  YYSYMBOL_TR = 23,                        /* TR  */
  YYSYMBOL_TNR = 24,                       /* TNR  */
  YYSYMBOL_HD = 25,                        /* HD  */
  YYSYMBOL_ATT = 26,                       /* ATT  */
  YYSYMBOL_EQ = 27,                        /* EQ  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_RP = 30,                        /* RP  */
  YYSYMBOL_NUM_CONST = 31,                 /* NUM_CONST  */
  YYSYMBOL_NIL = 32,                       /* NIL  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_RET = 36,                       /* RET  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_ROOT_TREE = 38,                 /* ROOT_TREE  */
  YYSYMBOL_GlobalDef = 39,                 /* GlobalDef  */
  YYSYMBOL_GlobalDec = 40,                 /* GlobalDec  */
  YYSYMBOL_Declaration = 41,               /* Declaration  */
  YYSYMBOL_Definition = 42,                /* Definition  */
  YYSYMBOL_FunctionDefinition = 43,        /* FunctionDefinition  */
  YYSYMBOL_FunctionRet = 44,               /* FunctionRet  */
  YYSYMBOL_ParamList = 45,                 /* ParamList  */
  YYSYMBOL_Statement = 46,                 /* Statement  */
  YYSYMBOL_CompStatement = 47,             /* CompStatement  */
  YYSYMBOL_StatementExp = 48,              /* StatementExp  */
  YYSYMBOL_SelStatement = 49,              /* SelStatement  */
  YYSYMBOL_ExpStatement = 50,              /* ExpStatement  */
  YYSYMBOL_JmpStatement = 51,              /* JmpStatement  */
  YYSYMBOL_ItStatement = 52,               /* ItStatement  */
  YYSYMBOL_ExpAtt = 53,                    /* ExpAtt  */
  YYSYMBOL_Expression = 54,                /* Expression  */
  YYSYMBOL_LogicalOrExpression = 55,       /* LogicalOrExpression  */
  YYSYMBOL_LogicalAndExpression = 56,      /* LogicalAndExpression  */
  YYSYMBOL_EqualityExpression = 57,        /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 58,      /* RelationalExpression  */
  YYSYMBOL_AdditiveExpression = 59,        /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 60,  /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 61,           /* UnaryExpression  */
  YYSYMBOL_UnaryOperator = 62,             /* UnaryOperator  */
  YYSYMBOL_PrimaryExpression = 63,         /* PrimaryExpression  */
  YYSYMBOL_Params = 64                     /* Params  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4476

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  340

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    56,    60,    68,    72,    76,    83,    91,
     102,   109,   118,   126,   139,   146,   158,   162,   172,   173,
     174,   175,   176,   177,   181,   188,   189,   194,   199,   207,
     212,   221,   222,   229,   236,   245,   249,   256,   260,   261,
     265,   266,   270,   271,   275,   276,   277,   278,   279,   280,
     284,   285,   286,   290,   291,   292,   293,   294,   295,   296,
     300,   301,   305,   307,   312,   313,   318,   319,   320,   324,
     326,   328
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TYPE", "IDENTIFIER",
  "LIST", "LP", "SEMI", "COM", "RCB", "LCB", "TWD", "PLUS", "MIN", "MUL",
  "LT", "GT", "LEQ", "GEQ", "DIF", "MAP", "FIL", "DIV", "TR", "TNR", "HD",
  "ATT", "EQ", "AND", "OR", "RP", "NUM_CONST", "NIL", "IF", "ELSE", "FOR",
  "RET", "$accept", "ROOT_TREE", "GlobalDef", "GlobalDec", "Declaration",
  "Definition", "FunctionDefinition", "FunctionRet", "ParamList",
  "Statement", "CompStatement", "StatementExp", "SelStatement",
  "ExpStatement", "JmpStatement", "ItStatement", "ExpAtt", "Expression",
  "LogicalOrExpression", "LogicalAndExpression", "EqualityExpression",
  "RelationalExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "UnaryOperator", "PrimaryExpression", "Params", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-174)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    76,   139,    12,   195,   266,   297,   313,     3,   152,
      10,  -174,   404,    41,   493,   380,    14,     6,   508,    -4,
    2400,   513,    39,     6,  2436,   475,  3061,   130,  2449,   535,
       9,    15,  3500,  3519,    22,    42,   107,  2400,  2400,  2400,
    2485,   595,  2498,  2534,  2547,  2583,    44,     1,    30,    54,
    1341,  3914,  3538,  3557,    21,  3576,    56,   599,    61,    59,
      25,   246,  1215,    45,   130,   384,  2596,   605,   611,   615,
    2632,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,  3595,    70,    82,
     156,   159,  2645,  3614,    73,    84,    98,   103,    79,   194,
    4011,  3932,  3950,  3968,  3986,  4004,  3633,  3652,  3671,  3690,
    3709,  3728,  3747,  3766,   109,    86,   658,  3785,  2972,   384,
     119,     6,   183,    63,   123,    70,   619,  2985,   662,   105,
    2681,   117,  2985,  2694,  2730,   130,  4030,  4050,   272,   371,
     390,  4430,  1235,  4070,  4090,   168,  4110,  3109,  2743,  3016,
     130,  3131,  3154,   140,   295,   148,   456,   996,  3177,  3200,
     249,  3223,   424,   130,   625,   838,   497,  1074,  1282,  1923,
     701,  1037,  1318,   254,  1380,    25,  3085,  2779,  2044,  2057,
    2792,   127,   145,   121,  2093,  2106,  2142,  2155,  2191,   164,
    3036,   157,   172,  2828,  2730,  2730,  2730,  2841,   176,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,  4130,    25,   180,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,  3246,    25,   208,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,  1416,   203,   457,  2204,  2792,  2792,  2792,
    2240,   130,   384,  2253,  2289,   130,  2877,  2890,  2926,  4150,
     490,   438,  4446,  4349,  4368,  4387,  4406,  4425,  4170,  4190,
    4210,  4230,  4250,  4270,  4290,  4310,   233,  3269,   383,   301,
     860,  3803,  3826,  3849,  3872,  3895,  3292,  3315,  3338,  3361,
    3384,  3407,  3430,  3453,   257,  1455,  2008,  1995,  1959,   908,
    1113,  1815,  1851,  1887,  1491,  1527,  1563,  1599,  1635,  1671,
    1707,  1743,  4330,   218,  2302,  2338,  2351,   221,   241,   224,
    3476,  1779,  2972,   384,  2939,   265,   662,   234,  2972,  2387
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,  -174,   270,    32,   -54,  -174,  -174,    38,   -12,
     -17,   -15,  -108,   -33,  -101,   -98,   -74,   -26,   362,  1145,
      57,  1040,   958,   756,   133,   549,   342,  -173
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    37,    38,     7,     8,   115,    39,
      40,    41,    42,    43,    44,    45,    96,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    91
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    63,   254,    66,    22,     1,    57,     2,   -37,    13,
     185,    95,    11,   -62,    15,   -62,    20,   187,    19,   -63,
     188,   -63,    67,    68,    69,   147,    23,    27,    64,   149,
      71,   150,     6,   -69,    90,    92,     6,   -38,    94,    97,
     -62,   -62,    56,   286,    16,   124,   -63,   -63,    65,    30,
      31,    70,    32,    33,   131,   -69,   151,   152,    72,   -38,
      88,   -41,   304,    89,   -29,    95,   -29,   -29,   148,   -29,
     -29,    17,   -29,   -29,   191,    93,    -7,    -7,   114,    -7,
     195,    73,   -41,   -41,   140,   186,   -39,   -29,   -29,   177,
     122,   -36,   189,    97,   -29,   -29,   -29,   127,   -29,   -29,
     -16,   184,   192,   118,   126,   119,   123,    72,   -39,   198,
     -35,   147,   120,    27,    28,   130,   121,   155,   168,   197,
     133,   140,   196,   125,   217,   147,   258,    27,   179,    99,
     128,    30,    31,   261,    62,   -17,   135,   236,    32,    33,
     195,   195,   195,     9,    10,    30,    31,   132,   -37,    90,
     263,   262,    32,    33,    30,    31,   -41,   189,   -14,    14,
     144,   136,   137,   129,   -70,   260,   194,   116,   259,   218,
     -37,   264,    62,   155,   135,   220,   -41,   -41,   -41,   266,
     267,   268,   196,   196,   196,   140,   -70,   -36,   328,   117,
      90,   -71,   140,   159,   172,    -2,     1,   144,     2,   136,
     137,   -40,   -35,   258,   258,   258,   269,   140,    95,    90,
     287,   116,   257,   -71,   108,   109,   110,   111,   112,   113,
     140,    73,   -40,   -40,   185,   -10,   194,   194,   194,   323,
     185,   187,   155,   322,   188,   327,    97,   187,   305,   329,
     188,   116,   324,   325,   326,   259,   259,   259,   333,   159,
     162,   332,   163,   149,   -10,   150,   140,   271,   162,   335,
     163,   144,   337,   330,   338,   116,    -3,    -3,   144,    -3,
      30,    31,   336,   155,    12,   155,   289,   164,   165,    95,
     151,   152,   191,   144,     0,   164,   165,   331,     0,   257,
     257,   257,   155,     0,   168,   307,   144,    -5,    -5,   186,
      -5,   199,   -37,   -38,     0,   186,   189,    97,   159,   -40,
     192,     0,   189,    -6,    -6,   184,    -6,     0,   140,     0,
     334,   184,   140,   219,   -38,   -38,   339,     0,   220,   -40,
     -40,   -40,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   280,   281,   282,   283,   284,   285,     0,   159,
       0,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   298,   299,   300,   301,   302,   303,     0,   159,   146,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     316,   317,   318,   319,   320,   321,   -15,    18,   176,   138,
      27,   -39,     0,   140,   144,     0,    87,     0,   144,   200,
     -38,   -38,   161,   174,    -4,    -4,   146,    -4,    30,    31,
       0,   219,   -39,   -39,     0,    32,    33,   201,   -41,   -41,
     -41,     0,   153,   166,     0,   -64,   138,   -64,   -64,     0,
     235,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,     0,   -64,   -64,   -64,   161,   -64,
     -64,   147,     0,    27,   -42,   201,   -40,   -40,   -40,   144,
     146,   221,   222,   223,   224,   225,     0,   146,   153,    58,
      59,    30,    31,   -42,   -42,   -42,   -42,   215,    32,    33,
     138,     0,   146,    -8,    -8,     0,    -8,   138,   -37,     0,
     -37,   -37,   234,   -37,   -37,   146,   -37,   -37,    -9,    -9,
       0,    -9,   138,   -12,   -12,   253,   -12,   161,   200,   -39,
     -39,   -37,   -37,     0,     0,   138,   237,     0,   -37,   -37,
     -37,     0,   -37,   -37,     0,   -25,   -25,   153,   -25,     0,
       0,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,     0,   161,     0,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   145,   161,   153,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   -24,   -24,   153,   -24,   -11,
     -11,     0,   -11,   146,     0,   -26,   -26,   146,   -26,   160,
     173,   -27,   -27,   145,   -27,   -28,   -28,     0,   -28,   -13,
     -13,     0,   -13,   138,     0,     0,   -65,   138,   -65,   -65,
       0,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,     0,   -65,   -65,   -65,     0,
     -65,   -65,   149,     0,   150,   160,   190,     0,   135,     0,
       0,     0,     0,     0,     0,     0,     0,   145,   146,     0,
       0,     0,    30,    31,   145,     0,    30,    31,     0,   151,
     152,     0,     0,   136,   137,     0,     0,     0,   138,   145,
       0,     0,   -44,     0,   -44,   -44,     0,   -44,   -44,     0,
     -44,   -44,   145,   245,   246,     0,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,   160,   -44,   -44,     0,   -44,   -44,
     -44,     0,   -44,   -44,   -44,     0,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,     0,   160,     0,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   143,   160,     0,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,     0,     0,     0,     0,     0,     0,     0,     0,
     145,     0,     0,     0,   145,     0,   158,   171,     0,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,     0,     0,   -68,
       0,   -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -43,   -68,
     -68,   -68,   158,   -68,   -68,   221,   222,   223,   224,   225,
       0,     0,     0,     0,   143,   145,     0,   -43,   -43,   -43,
     -43,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,   -47,
       0,   -47,   -47,     0,   -47,   -47,     0,   -47,   -47,   143,
     245,   246,     0,   -47,   -47,   -47,   -47,   -47,     0,     0,
       0,   158,   -47,   -47,     0,   -47,   -47,   -47,     0,   -47,
     -47,   -47,     0,   -47,   -47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   143,   143,   143,   143,
     143,   143,   143,   278,   279,     0,     0,     0,     0,     0,
       0,     0,   158,     0,   158,   158,   158,   158,   158,   158,
     158,   158,   296,   297,     0,   142,     0,     0,     0,     0,
       0,   158,     0,   171,   171,   171,   171,   171,   171,   171,
     171,   314,   315,     0,   -44,     0,     0,     0,   226,   227,
       0,   -44,   -44,   -44,   -44,   -44,     0,   143,   157,   170,
       0,   143,   142,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,     0,   -50,     0,
     -50,   -50,     0,   -50,   -50,     0,   -50,   -50,   247,   -50,
     -50,   248,   -50,   -50,   -50,   -50,   -50,   249,   250,   251,
     252,   -50,   -50,     0,   -50,   -50,   -50,   141,   -50,   -50,
     -50,     0,   -50,   -50,   157,   -38,     0,   -38,   -38,     0,
     -38,   -38,     0,   -38,   -38,     0,   142,     0,     0,     0,
       0,     0,   143,   142,     0,     0,     0,     0,   -38,   -38,
     156,   169,   238,   -38,   141,   -38,   -38,   -38,   142,   -38,
     -38,     0,     0,   100,   -48,     0,   -48,   -48,     0,   -48,
     -48,   142,   -48,   -48,     0,   245,   246,     0,   -48,   -48,
     -48,   -48,   -48,   157,     0,     0,     0,   -48,   -48,     0,
     -48,   -48,   -48,     0,   -48,   -48,   -48,     0,   -48,   -48,
       0,     0,     0,     0,     0,     0,   156,   142,   142,   142,
     273,   274,   275,   276,   277,     0,     0,     0,   141,     0,
       0,     0,   139,     0,   157,   141,   157,   157,   157,   291,
     292,   293,   294,   295,     0,     0,     0,     0,     0,     0,
     141,     0,     0,   157,     0,   170,   170,   170,   309,   310,
     311,   312,   313,   141,     0,   154,   167,     0,     0,   139,
       0,     0,     0,     0,     0,   156,    98,     0,     0,   142,
       0,   175,     0,   142,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   141,
     141,   272,   -64,   -64,   -64,   -64,     0,   207,   208,     0,
     -44,   -44,   -44,   -44,   -44,     0,   156,     0,   156,   156,
     290,   154,   -44,   -44,   -44,   -44,     0,     0,     0,     0,
       0,     0,     0,   139,     0,   156,     0,   169,   169,   308,
     139,     0,     0,   -41,     0,   -41,   -41,     0,   -41,   -41,
       0,   -41,   -41,     0,   142,   139,     0,     0,     0,     0,
       0,   141,     0,     0,     0,   141,   -41,   -41,   139,   239,
     -41,   -41,     0,   -41,   -41,   -41,     0,   -41,   -41,   -53,
     154,   -53,   -53,     0,   -53,   -53,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   270,   -53,   -53,   -53,   -42,   -53,
     -53,   -53,     0,   -53,   -53,     0,    74,    75,    76,    77,
      78,   154,     0,   288,     0,     0,     0,     0,   -42,   -42,
     -42,     0,     0,     0,     0,     0,   141,     0,     0,     0,
     154,   -60,   306,   -60,   -60,     0,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   139,   -60,   -60,   -60,
     139,   -60,   -60,   -60,     0,   -60,   -60,   -61,     0,   -61,
     -61,     0,   -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,   -61,   -61,   -61,     0,   -61,   -61,   -61,
       0,   -61,   -61,     0,     0,     0,   -66,     0,   -66,   -66,
       0,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   139,   -66,   -66,   -66,     0,   -66,   -66,   -66,     0,
     -66,   -66,   -51,     0,   -51,   -51,     0,   -51,   -51,     0,
     -51,   -51,   247,   -51,   -51,   248,   -51,   -51,   -51,   -51,
     -51,   249,   250,   251,   252,   -51,   -51,     0,   -51,   -51,
     -51,     0,   -51,   -51,   -51,     0,   -51,   -51,   -52,     0,
     -52,   -52,     0,   -52,   -52,     0,   -52,   -52,   247,   -52,
     -52,   248,   -52,   -52,   -52,   -52,   -52,   249,   250,   251,
     252,   -52,   -52,     0,   -52,   -52,   -52,     0,   -52,   -52,
     -52,     0,   -52,   -52,   -57,     0,   -57,   -57,     0,   -57,
     -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -57,   -57,   -57,     0,   -57,   -57,   -57,     0,   -57,   -57,
     -54,     0,   -54,   -54,     0,   -54,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,     0,
     -54,   -54,   -54,     0,   -54,   -54,   -58,     0,   -58,   -58,
       0,   -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,     0,   -58,   -58,   -58,     0,   -58,   -58,   -58,     0,
     -58,   -58,   -59,     0,   -59,   -59,     0,   -59,   -59,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,
     -59,     0,   -59,   -59,   -59,     0,   -59,   -59,   -55,     0,
     -55,   -55,     0,   -55,   -55,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,     0,   -55,   -55,   -55,     0,   -55,   -55,
     -55,     0,   -55,   -55,   -56,     0,   -56,   -56,     0,   -56,
     -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
     -56,   -56,   -56,     0,   -56,   -56,   -56,     0,   -56,   -56,
     -67,     0,   -67,   -67,     0,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,     0,
     -67,   -67,   -67,     0,   -67,   -67,   -45,     0,   -45,   -45,
       0,   -45,   -45,     0,   -45,   -45,     0,   245,   246,     0,
     -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,   -45,
     -45,     0,   -45,   -45,   -45,     0,   -45,   -45,   -45,     0,
     -45,   -45,   -46,     0,   -46,   -46,     0,   -46,   -46,     0,
     -46,   -46,     0,   245,   246,     0,   -46,   -46,   -46,   -46,
     -46,     0,     0,     0,     0,   -46,   -46,     0,   -46,   -46,
     -46,     0,   -46,   -46,   -46,     0,   -46,   -46,   -49,     0,
     -49,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,   245,
     246,     0,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,
       0,   -49,   -49,     0,   -49,   -49,   -49,     0,   -49,   -49,
     -49,     0,   -49,   -49,   -42,     0,   -42,   -42,     0,   -42,
     -42,     0,   -42,   -42,     0,     0,     0,     0,   240,   241,
     242,   243,   244,     0,     0,     0,     0,   -42,   -42,     0,
     -42,   -42,   -42,     0,   -42,   -42,   -42,     0,   -42,   -42,
     -43,     0,   -43,   -43,     0,   -43,   -43,     0,   -43,   -43,
       0,     0,     0,     0,   240,   241,   242,   243,   244,     0,
       0,     0,     0,   -43,   -43,     0,   -43,   -43,   -43,     0,
     -43,   -43,   -43,     0,   -43,   -43,   -40,     0,   -40,   -40,
       0,   -40,   -40,     0,   -40,   -40,     0,     0,     0,   -39,
       0,   -39,   -39,     0,   -39,   -39,     0,   -39,   -39,   -40,
     -40,     0,   239,   -40,   -40,     0,   -40,   -40,   -40,     0,
     -40,   -40,   -39,   -39,     0,     0,   238,   -39,     0,   -39,
     -39,   -39,     0,   -39,   -39,   -23,     0,   -23,   -23,     0,
     -23,   -23,     0,   -23,   -23,     0,     0,     0,   -31,     0,
     -31,   -31,     0,   -31,   -31,     0,   -31,   -31,   -23,   -23,
       0,     0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,
     -23,   -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -18,     0,   -18,   -18,     0,   -18,
     -18,     0,   -18,   -18,     0,     0,     0,   -20,     0,   -20,
     -20,     0,   -20,   -20,     0,   -20,   -20,   -18,   -18,     0,
       0,     0,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,
     -20,   -20,     0,     0,     0,     0,     0,   -20,   -20,   -20,
     -20,   -20,   -20,   -22,     0,   -22,   -22,     0,   -22,   -22,
       0,   -22,   -22,     0,     0,     0,   -19,     0,   -19,   -19,
       0,   -19,   -19,     0,   -19,   -19,   -22,   -22,     0,     0,
       0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,   -19,
     -19,     0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,
     -19,   -19,   -21,     0,   -21,   -21,     0,   -21,   -21,     0,
     -21,   -21,     0,     0,     0,   -25,     0,   -25,   -25,     0,
     -25,   -25,     0,   -25,   -25,   -21,   -21,     0,     0,     0,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,   -25,   -25,
       0,     0,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,   -24,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,
     -24,     0,     0,     0,   -33,     0,   -33,   -33,     0,   -33,
     -33,     0,   -33,   -33,   -24,   -24,     0,     0,     0,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,   -33,   -33,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -32,     0,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,
       0,     0,     0,   -26,     0,   -26,   -26,     0,   -26,   -26,
       0,   -26,   -26,   -32,   -32,     0,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -26,   -26,     0,     0,
       0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -27,
       0,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,
       0,     0,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,   -28,   -27,   -27,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -34,     0,
     -34,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,     0,
       0,    24,     0,    25,    26,     0,    27,    28,     0,    29,
     134,   -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,    30,    31,     0,     0,     0,     0,
       0,    32,    33,    34,     0,    35,    36,   -23,     0,   -23,
     -23,     0,   -23,   -23,     0,   -23,   -23,     0,     0,     0,
     -31,     0,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,
     -23,   -23,     0,     0,     0,     0,     0,   -23,   -23,   -23,
       0,   -23,   -23,   -31,   -31,     0,     0,     0,     0,     0,
     -31,   -31,   -31,     0,   -31,   -31,   -18,     0,   -18,   -18,
       0,   -18,   -18,     0,   -18,   -18,     0,     0,     0,   -20,
       0,   -20,   -20,     0,   -20,   -20,     0,   -20,   -20,   -18,
     -18,     0,     0,     0,     0,     0,   -18,   -18,   -18,     0,
     -18,   -18,   -20,   -20,     0,     0,     0,     0,     0,   -20,
     -20,   -20,     0,   -20,   -20,   -22,     0,   -22,   -22,     0,
     -22,   -22,     0,   -22,   -22,     0,     0,     0,   -19,     0,
     -19,   -19,     0,   -19,   -19,     0,   -19,   -19,   -22,   -22,
       0,     0,     0,     0,     0,   -22,   -22,   -22,     0,   -22,
     -22,   -19,   -19,     0,     0,     0,     0,     0,   -19,   -19,
     -19,     0,   -19,   -19,   -21,     0,   -21,   -21,     0,   -21,
     -21,     0,   -21,   -21,     0,     0,     0,   -33,     0,   -33,
     -33,     0,   -33,   -33,     0,   -33,   -33,   -21,   -21,     0,
       0,     0,     0,     0,   -21,   -21,   -21,     0,   -21,   -21,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -32,     0,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,     0,     0,     0,   -10,     0,   -10,   -10,
       0,   -10,   -10,     0,   -10,   -10,   -32,   -32,     0,     0,
       0,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,   -10,
     -10,     0,     0,     0,     0,     0,   -10,   -10,   -10,     0,
     -10,   -10,   -30,     0,   -30,   -30,     0,   -30,   -30,     0,
     -30,   -30,     0,     0,     0,   -34,     0,   -34,   -34,     0,
     -34,   -34,     0,   -34,   -34,   -30,   -30,     0,     0,     0,
       0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -34,   -34,
       0,     0,     0,     0,     0,   -34,   -34,   -34,     0,   -34,
     -34,    24,     0,    25,    26,     0,    27,    28,     0,   193,
     134,     0,     0,     0,    -8,     0,    -8,    -8,     0,    -8,
      -8,     0,    -8,    -8,    30,    31,     0,     0,     0,     0,
       0,    32,    33,    34,     0,    35,    36,    -8,    -8,     0,
       0,     0,     0,     0,    -8,    -8,    -8,     0,    -8,    -8,
      -9,     0,    -9,    -9,     0,    -9,    -9,     0,    -9,    -9,
       0,     0,     0,    24,     0,    25,    26,     0,    27,    28,
       0,   256,   134,    -9,    -9,     0,     0,     0,     0,     0,
      -9,    -9,    -9,     0,    -9,    -9,    30,    31,     0,     0,
       0,     0,     0,    32,    33,    34,     0,    35,    36,   -25,
       0,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,
       0,     0,   -24,     0,   -24,   -24,     0,   -24,   -24,     0,
     -24,   -24,   -25,   -25,     0,     0,     0,     0,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -24,   -24,     0,     0,     0,
       0,     0,   -24,   -24,   -24,     0,   -24,   -24,   -26,     0,
     -26,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,     0,
       0,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,   -27,
     -27,   -26,   -26,     0,     0,     0,     0,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -27,   -27,     0,     0,     0,     0,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -28,     0,   -28,
     -28,     0,   -28,   -28,     0,   -28,   -28,     0,     0,     0,
     -29,     0,   -29,   -29,     0,   -29,   -29,     0,   -29,   -29,
     -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,   -28,
       0,   -28,   -28,   -29,   -29,     0,     0,     0,     0,     0,
     -29,   -29,   -29,   178,   -29,   -29,   147,     0,    27,   179,
       0,     0,   180,     0,     0,     0,    24,     0,     0,   147,
       0,    27,    28,     0,     0,   134,    30,    31,     0,     0,
       0,     0,     0,    32,    33,   181,     0,   182,   183,    30,
      31,     0,     0,     0,     0,     0,    32,    33,    34,     0,
      35,    36,   216,     0,   -64,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,   175,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,   265,   -64,   -64,   -64,   -64,    60,   -64,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,    61,   -64,   -64,
     -64,    60,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,   255,   -64,   -64,   -64,    60,   -64,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   -64,   -64,   -64,   -65,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,   -65,
     -65,   -65,   -68,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,   -68,   -68,   -68,   -68,   -50,     0,     0,   228,   -50,
     -50,   229,   -50,   -50,   -50,   -50,   -50,   230,   231,   232,
     233,     0,     0,     0,   -50,   -50,   -50,   -50,   -53,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,     0,     0,   -53,   -53,   -53,
     -53,   -60,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
     -60,   -60,   -60,   -60,   -61,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,     0,     0,   -61,   -61,   -61,   -61,   -66,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,
     -51,     0,     0,   228,   -51,   -51,   229,   -51,   -51,   -51,
     -51,   -51,   230,   231,   232,   233,     0,     0,     0,   -51,
     -51,   -51,   -51,   -52,     0,     0,   228,   -52,   -52,   229,
     -52,   -52,   -52,   -52,   -52,   230,   231,   232,   233,     0,
       0,     0,   -52,   -52,   -52,   -52,   -57,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,     0,     0,     0,   -57,   -57,   -57,   -57,   -54,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,     0,     0,     0,   -54,   -54,
     -54,   -54,   -58,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
       0,   -58,   -58,   -58,   -58,   -59,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,     0,   -59,   -59,   -59,   -59,   -55,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,     0,     0,     0,   -55,   -55,   -55,
     -55,   -56,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,
     -56,   -56,   -56,   -56,   -67,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,   -67,   -67,   -67,   -65,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -68,   -65,   -65,   -65,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,   -50,   -68,   -68,   -68,    81,
     -50,   -50,    82,   -50,   -50,   -50,   -50,   -50,    83,    84,
      85,    86,     0,     0,   -53,   -50,   -50,   -50,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,   -60,   -53,   -53,   -53,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,   -61,   -60,   -60,   -60,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,   -66,   -61,   -61,   -61,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -51,   -66,   -66,   -66,    81,   -51,   -51,    82,   -51,   -51,
     -51,   -51,   -51,    83,    84,    85,    86,     0,     0,   -52,
     -51,   -51,   -51,    81,   -52,   -52,    82,   -52,   -52,   -52,
     -52,   -52,    83,    84,    85,    86,     0,     0,   -57,   -52,
     -52,   -52,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,     0,     0,   -54,   -57,   -57,
     -57,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,     0,     0,   -58,   -54,   -54,   -54,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,   -59,   -58,   -58,   -58,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,   -55,   -59,   -59,   -59,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,     0,     0,   -56,   -55,   -55,   -55,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,   -67,   -56,   -56,   -56,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -47,   -67,   -67,   -67,   226,   227,     0,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -47,   -48,     0,     0,     0,   226,   227,
       0,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
       0,     0,     0,   -48,   -48,   -48,   -48,   -45,     0,     0,
       0,   226,   227,     0,   -45,   -45,   -45,   -45,   -45,     0,
       0,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,
     -46,     0,     0,     0,   226,   227,     0,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,     0,     0,   -46,
     -46,   -46,   -46,   -49,     0,     0,     0,   226,   227,     0,
     -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,
       0,   -44,   -49,   -49,   -49,   -49,    79,    80,     0,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,   -47,
       0,   -44,   -44,   -44,    79,    80,     0,   -47,   -47,   -47,
     -47,   -47,     0,     0,     0,     0,     0,   -48,     0,   -47,
     -47,   -47,    79,    80,     0,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,   -45,     0,   -48,   -48,   -48,
      79,    80,     0,   -45,   -45,   -45,   -45,   -45,     0,     0,
       0,     0,     0,   -46,     0,   -45,   -45,   -45,    79,    80,
       0,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
       0,   -49,     0,   -46,   -46,   -46,    79,    80,   -43,   -49,
     -49,   -49,   -49,   -49,     0,     0,    74,    75,    76,    77,
      78,   -49,   -49,   -49,     0,     0,     0,     0,   -43,   -43,
     -43,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,
     -65,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,   -68,   -68,   -68,
     -68,   209,   -50,   -50,   210,   -50,   -50,   -50,   -50,   -50,
     211,   212,   213,   214,     0,     0,     0,   -50,   -50,   -50,
     -50,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,     0,     0,   -53,   -53,   -53,
     -53,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,   -60,   -60,   -60,
     -60,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,     0,   -61,   -61,   -61,
     -61,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,   -66,   -66,   -66,
     -66,   209,   -51,   -51,   210,   -51,   -51,   -51,   -51,   -51,
     211,   212,   213,   214,     0,     0,     0,   -51,   -51,   -51,
     -51,   209,   -52,   -52,   210,   -52,   -52,   -52,   -52,   -52,
     211,   212,   213,   214,     0,     0,     0,   -52,   -52,   -52,
     -52,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,     0,     0,     0,   -57,   -57,   -57,
     -57,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,     0,     0,     0,   -54,   -54,   -54,
     -54,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,     0,     0,     0,   -58,   -58,   -58,
     -58,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,     0,     0,   -59,   -59,   -59,
     -59,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,     0,     0,     0,   -55,   -55,   -55,
     -55,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,     0,     0,     0,   -56,   -56,   -56,
     -56,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,   -67,   -67,   -67,
     -67,   207,   208,     0,   -47,   -47,   -47,   -47,   -47,     0,
       0,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,
     207,   208,     0,   -48,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,   -48,   -48,   -48,   -48,   207,
     208,     0,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,     0,     0,   -45,   -45,   -45,   -45,   207,   208,
       0,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
       0,     0,     0,   -46,   -46,   -46,   -46,   207,   208,     0,
     -49,   -49,   -49,   -49,   -49,   202,   203,   204,   205,   206,
       0,     0,   -49,   -49,   -49,   -49,     0,   -42,   -42,   -42,
     -42,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43
};

static const yytype_int16 yycheck[] =
{
      17,    27,   175,    36,     8,     1,    23,     3,     7,     6,
     118,    65,     0,     4,     4,     6,    10,   118,     4,     4,
     118,     6,    37,    38,    39,     4,    30,     6,     6,     4,
      29,     6,     0,     8,    60,    61,     4,     7,    64,    65,
      31,    32,     3,   216,     3,   119,    31,    32,     6,    24,
      25,     7,    31,    32,   128,    30,    31,    32,    28,    29,
       4,     7,   235,     4,     1,   119,     3,     4,     7,     6,
       7,    30,     9,    10,   128,    30,     0,     1,     8,     3,
     134,    27,    28,    29,    27,   118,     7,    24,    25,     7,
     116,     7,   118,   119,    31,    32,    33,    34,    35,    36,
      30,   118,   128,    30,   121,     7,   118,    28,    29,   135,
       7,     4,     3,     6,     7,   127,    30,    60,    61,   134,
     132,    64,   134,     4,   150,     4,   180,     6,     7,    72,
       7,    24,    25,     6,     4,    30,     6,   163,    31,    32,
     194,   195,   196,     4,     5,    24,    25,    30,     8,   175,
     183,     6,    31,    32,    24,    25,     8,   183,     6,     7,
      27,    31,    32,   125,     8,   180,   134,     8,   180,    29,
      30,     7,     4,   116,     6,    27,    28,    29,    30,   194,
     195,   196,   194,   195,   196,   128,    30,    30,   262,    30,
     216,     8,   135,    60,    61,     0,     1,    64,     3,    31,
      32,     7,    30,   257,   258,   259,    30,   150,   262,   235,
      30,     8,   180,    30,    81,    82,    83,    84,    85,    86,
     163,    27,    28,    29,   332,     7,   194,   195,   196,   255,
     338,   332,   175,    30,   332,   261,   262,   338,    30,   265,
     338,     8,   257,   258,   259,   257,   258,   259,     7,   116,
       4,    30,     6,     4,    30,     6,   199,   200,     4,   333,
       6,   128,   336,    30,    30,     8,     0,     1,   135,     3,
      24,    25,     7,   216,     4,   218,   219,    31,    32,   333,
      31,    32,   336,   150,    -1,    31,    32,    30,    -1,   257,
     258,   259,   235,    -1,   237,   238,   163,     0,     1,   332,
       3,    29,    30,     8,    -1,   338,   332,   333,   175,     8,
     336,    -1,   338,     0,     1,   332,     3,    -1,   261,    -1,
     332,   338,   265,    28,    29,    30,   338,    -1,    27,    28,
      29,    30,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,    -1,   216,
      -1,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,   235,    27,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,     6,     7,     4,    27,
       6,     8,    -1,   336,   261,    -1,    54,    -1,   265,    28,
      29,    30,    60,    61,     0,     1,    64,     3,    24,    25,
      -1,    28,    29,    30,    -1,    31,    32,    27,    28,    29,
      30,    -1,    60,    61,    -1,     1,    64,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,   116,    35,
      36,     4,    -1,     6,     8,    27,    28,    29,    30,   336,
     128,    15,    16,    17,    18,    19,    -1,   135,   116,     4,
       5,    24,    25,    27,    28,    29,    30,   145,    31,    32,
     128,    -1,   150,     0,     1,    -1,     3,   135,     1,    -1,
       3,     4,   160,     6,     7,   163,     9,    10,     0,     1,
      -1,     3,   150,     0,     1,   173,     3,   175,    28,    29,
      30,    24,    25,    -1,    -1,   163,    29,    -1,    31,    32,
      33,    -1,    35,    36,    -1,     0,     1,   175,     3,    -1,
      -1,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,    -1,   216,    -1,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    27,   235,   216,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,     0,     1,   235,     3,     0,
       1,    -1,     3,   261,    -1,     0,     1,   265,     3,    60,
      61,     0,     1,    64,     3,     0,     1,    -1,     3,     0,
       1,    -1,     3,   261,    -1,    -1,     1,   265,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,     4,    -1,     6,   116,     4,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   336,    -1,
      -1,    -1,    24,    25,   135,    -1,    24,    25,    -1,    31,
      32,    -1,    -1,    31,    32,    -1,    -1,    -1,   336,   150,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,   163,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,   175,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,    -1,   216,    -1,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    27,   235,    -1,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     261,    -1,    -1,    -1,   265,    -1,    60,    61,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,     8,    31,
      32,    33,   116,    35,    36,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,   128,   336,    -1,    27,    28,    29,
      30,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,   163,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,   175,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    27,    -1,    -1,    -1,    -1,
      -1,   235,    -1,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,     8,    -1,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,   261,    60,    61,
      -1,   265,    64,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    -1,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    27,    31,    32,
      33,    -1,    35,    36,   116,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,   128,    -1,    -1,    -1,
      -1,    -1,   336,   135,    -1,    -1,    -1,    -1,    24,    25,
      60,    61,    28,    29,    64,    31,    32,    33,   150,    35,
      36,    -1,    -1,    73,     1,    -1,     3,     4,    -1,     6,
       7,   163,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,   175,    -1,    -1,    -1,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   199,   200,   201,
     202,   203,   204,   205,   206,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    27,    -1,   216,   135,   218,   219,   220,   221,
     222,   223,   224,   225,    -1,    -1,    -1,    -1,    -1,    -1,
     150,    -1,    -1,   235,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   163,    -1,    60,    61,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,   175,    71,    -1,    -1,   261,
      -1,     6,    -1,   265,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   199,
     200,   201,    27,    28,    29,    30,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,   216,    -1,   218,   219,
     220,   116,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,   235,    -1,   237,   238,   239,
     135,    -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,   336,   150,    -1,    -1,    -1,    -1,
      -1,   261,    -1,    -1,    -1,   265,    24,    25,   163,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
     175,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   199,    27,    28,    29,     7,    31,
      32,    33,    -1,    35,    36,    -1,    15,    16,    17,    18,
      19,   216,    -1,   218,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,    -1,
     235,     1,   237,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   261,    27,    28,    29,
     265,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   336,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    24,    25,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    35,    36,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      35,    36,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,     1,    35,    36,     4,    -1,     6,     7,
      -1,    -1,    10,    -1,    -1,    -1,     1,    -1,    -1,     4,
      -1,     6,     7,    -1,    -1,    10,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      35,    36,     6,    -1,     8,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,     6,    27,    28,    29,    30,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,     6,     7,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,     6,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    26,    27,    28,    29,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,     8,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,     8,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,     7,    27,    28,    29,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,     7,    27,    28,    29,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,     7,    27,    28,    29,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,     7,    27,    28,    29,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,     7,    27,    28,    29,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,     7,    27,    28,    29,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
       7,    27,    28,    29,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,     7,
      27,    28,    29,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,     7,    27,
      28,    29,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,     7,    27,    28,
      29,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,     7,    27,    28,    29,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,     7,    27,    28,    29,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,     7,    27,    28,    29,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,     7,    27,    28,    29,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,     7,    27,    28,    29,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,     8,    27,    28,    29,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    27,    28,    29,    30,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,     7,    -1,    27,
      28,    29,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    27,    28,    29,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,     7,    15,
      16,    17,    18,    19,    -1,    -1,    15,    16,    17,    18,
      19,    27,    28,    29,    -1,    -1,    -1,    -1,    27,    28,
      29,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    12,    13,    -1,
      15,    16,    17,    18,    19,    15,    16,    17,    18,    19,
      -1,    -1,    27,    28,    29,    30,    -1,    27,    28,    29,
      30,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    38,    39,    40,    41,    43,    44,     4,
       5,     0,    40,     6,     7,     4,     3,    30,     7,     4,
      10,    47,     8,    30,     1,     3,     4,     6,     7,     9,
      24,    25,    31,    32,    33,    35,    36,    41,    42,    46,
      47,    48,    49,    50,    51,    52,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     3,    47,     4,     5,
       6,    26,     4,    54,     6,     6,    50,    48,    48,    48,
       7,    29,    28,    27,    15,    16,    17,    18,    19,    12,
      13,    11,    14,    20,    21,    22,    23,    63,     4,     4,
      54,    64,    54,    30,    54,    42,    53,    54,    56,    57,
      58,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    61,     8,    45,     8,    30,    30,     7,
       3,    30,    54,    46,    53,     4,    47,    34,     7,    45,
      46,    53,    30,    46,    10,     6,    31,    32,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     4,     7,     4,
       6,    31,    32,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     4,     6,    31,    32,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     6,     4,     7,     1,     7,
      10,    33,    35,    36,    47,    49,    50,    51,    52,    54,
       4,    42,    54,     9,    41,    42,    46,    48,    54,    29,
      28,    27,    15,    16,    17,    18,    19,    12,    13,    11,
      14,    20,    21,    22,    23,    63,     6,    54,    29,    28,
      27,    15,    16,    17,    18,    19,    12,    13,    11,    14,
      20,    21,    22,    23,    63,     6,    54,    29,    28,    27,
      15,    16,    17,    18,    19,    12,    13,    11,    14,    20,
      21,    22,    23,    63,    64,    26,     9,    41,    42,    46,
      48,     6,     6,    50,     7,    26,    48,    48,    48,    30,
      56,    57,    58,    59,    59,    59,    59,    59,    60,    60,
      61,    61,    61,    61,    61,    61,    64,    30,    56,    57,
      58,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    61,    64,    30,    56,    57,    58,    59,
      59,    59,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    30,    54,    48,    48,    48,    54,    53,    54,
      30,    30,    30,     7,    46,    53,     7,    53,    30,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    41,
      42,    43,    43,    43,    44,    44,    45,    45,    46,    46,
      46,    46,    46,    46,    47,    48,    48,    48,    48,    49,
      49,    50,    50,    51,    52,    53,    53,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      59,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    63,    63,    63,    64,
      64,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     4,
       3,     6,     4,    10,     2,     3,     0,     4,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     2,     5,
       7,     1,     2,     2,     9,     1,     1,     1,     1,     3,
       3,     1,     1,     3,     1,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     2,     1,     1,     1,     1,     3,     4,     1,     0,
       1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* ROOT_TREE: GlobalDef  */
#line 52 "src/parser.y"
                  {;}
#line 2407 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 56 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDef", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2416 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 60 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDef", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 2426 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 68 "src/parser.y"
                    {
			(yyval.state) = new_node("GlobalDec", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2435 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 72 "src/parser.y"
                               {
			(yyval.state) = new_node("GlobalDec", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2444 "src/parser.c"
    break;

  case 7: /* GlobalDec: error  */
#line 76 "src/parser.y"
                        {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 2453 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 83 "src/parser.y"
                                     {
			char str[128];
			strcpy(str, (yyvsp[-2].string));
			add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope->stack[0], true);
			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);

		}
#line 2465 "src/parser.c"
    break;

  case 9: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 91 "src/parser.y"
                                          {
			char str[128];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");
			add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope->stack[0], true);
			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);

		}
#line 2478 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT Expression  */
#line 102 "src/parser.y"
                                          {
			(yyval.state) = new_node("Definition", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2487 "src/parser.c"
    break;

  case 11: /* FunctionDefinition: FunctionRet LP TYPE IDENTIFIER RP CompStatement  */
#line 109 "src/parser.y"
                                                   {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-5].state));
		add_child((yyval.state), (yyvsp[0].state));
		add_row_symbol_table(s_table, (yyvsp[-2].string), (yyvsp[-3].string), scope->stack[0], true);
		decrease_depth_scope(scope);

	}
#line 2500 "src/parser.c"
    break;

  case 12: /* FunctionDefinition: FunctionRet LP RP CompStatement  */
#line 118 "src/parser.y"
                                       {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

	}
#line 2512 "src/parser.c"
    break;

  case 13: /* FunctionDefinition: FunctionRet LP TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList RP CompStatement  */
#line 126 "src/parser.y"
                                                                                     {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-9].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));
		add_row_symbol_table(s_table, (yyvsp[-6].string), (yyvsp[-7].string), scope->stack[0], true);
		add_row_symbol_table(s_table, (yyvsp[-3].string), (yyvsp[-4].string), scope->stack[0], true);
		decrease_depth_scope(scope);

	}
#line 2527 "src/parser.c"
    break;

  case 14: /* FunctionRet: TYPE IDENTIFIER  */
#line 139 "src/parser.y"
                        {
		(yyval.state) = new_node("FunctionRet", root);
		add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope->stack[0], false);
		increase_depth_scope(scope);

	}
#line 2538 "src/parser.c"
    break;

  case 15: /* FunctionRet: TYPE LIST IDENTIFIER  */
#line 146 "src/parser.y"
                             {
		(yyval.state) = new_node("FunctionRet", root);
		char str[128];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");
		add_row_symbol_table(s_table, (yyvsp[0].string), str, scope->stack[0], false);
		increase_depth_scope(scope);

	}
#line 2552 "src/parser.c"
    break;

  case 16: /* ParamList: %empty  */
#line 158 "src/parser.y"
             {
			(yyval.state) = new_node("ParamList", root);
		}
#line 2560 "src/parser.c"
    break;

  case 17: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 162 "src/parser.y"
                                              {
			(yyval.state) = new_node("ParamList", root);
			add_child((yyval.state), (yyvsp[0].state));
			add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope->stack[0], true);
		}
#line 2570 "src/parser.c"
    break;

  case 18: /* Statement: CompStatement  */
#line 172 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 2576 "src/parser.c"
    break;

  case 19: /* Statement: JmpStatement  */
#line 173 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 2582 "src/parser.c"
    break;

  case 20: /* Statement: SelStatement  */
#line 174 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 2588 "src/parser.c"
    break;

  case 21: /* Statement: ItStatement  */
#line 175 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 2594 "src/parser.c"
    break;

  case 22: /* Statement: ExpStatement  */
#line 176 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 2600 "src/parser.c"
    break;

  case 23: /* Statement: error  */
#line 177 "src/parser.y"
                      {yyerrok; (yyval.state) = NULL;}
#line 2606 "src/parser.c"
    break;

  case 24: /* CompStatement: LCB StatementExp  */
#line 181 "src/parser.y"
                                 {
			(yyval.state) = new_node("CompStatement", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2615 "src/parser.c"
    break;

  case 25: /* StatementExp: RCB  */
#line 188 "src/parser.y"
                    { (yyval.state) = new_node("StatementExp", root); }
#line 2621 "src/parser.c"
    break;

  case 26: /* StatementExp: Declaration StatementExp  */
#line 189 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2631 "src/parser.c"
    break;

  case 27: /* StatementExp: Definition StatementExp  */
#line 194 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2641 "src/parser.c"
    break;

  case 28: /* StatementExp: Statement StatementExp  */
#line 199 "src/parser.y"
                                 {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2651 "src/parser.c"
    break;

  case 29: /* SelStatement: IF LP Expression RP Statement  */
#line 207 "src/parser.y"
                                              {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2661 "src/parser.c"
    break;

  case 30: /* SelStatement: IF LP Expression RP Statement ELSE Statement  */
#line 212 "src/parser.y"
                                                             {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2672 "src/parser.c"
    break;

  case 31: /* ExpStatement: SEMI  */
#line 221 "src/parser.y"
                     { (yyval.state) = new_node("ExpStatement", root); }
#line 2678 "src/parser.c"
    break;

  case 32: /* ExpStatement: Expression SEMI  */
#line 222 "src/parser.y"
                                {
			(yyval.state) = new_node("ExpStatement", root);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 2687 "src/parser.c"
    break;

  case 33: /* JmpStatement: RET ExpStatement  */
#line 229 "src/parser.y"
                                 {
			(yyval.state) = new_node("JmpStatement", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2696 "src/parser.c"
    break;

  case 34: /* ItStatement: FOR LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 236 "src/parser.y"
                                                                   {
			(yyval.state) = new_node("For", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2708 "src/parser.c"
    break;

  case 35: /* ExpAtt: Expression  */
#line 245 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 2716 "src/parser.c"
    break;

  case 36: /* ExpAtt: Definition  */
#line 249 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 2724 "src/parser.c"
    break;

  case 37: /* Expression: LogicalOrExpression  */
#line 256 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 2730 "src/parser.c"
    break;

  case 38: /* LogicalOrExpression: LogicalAndExpression  */
#line 260 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 2736 "src/parser.c"
    break;

  case 39: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 261 "src/parser.y"
                                                            { (yyval.state) = (yyvsp[0].state); }
#line 2742 "src/parser.c"
    break;

  case 40: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 265 "src/parser.y"
                                                    { (yyval.state) = (yyvsp[0].state); }
#line 2748 "src/parser.c"
    break;

  case 41: /* LogicalAndExpression: EqualityExpression  */
#line 266 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 2754 "src/parser.c"
    break;

  case 42: /* EqualityExpression: RelationalExpression  */
#line 270 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 2760 "src/parser.c"
    break;

  case 43: /* EqualityExpression: EqualityExpression EQ RelationalExpression  */
#line 271 "src/parser.y"
                                                           { (yyval.state) = (yyvsp[0].state); }
#line 2766 "src/parser.c"
    break;

  case 44: /* RelationalExpression: AdditiveExpression  */
#line 275 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 2772 "src/parser.c"
    break;

  case 45: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 276 "src/parser.y"
                                                            { (yyval.state) = (yyvsp[0].state); }
#line 2778 "src/parser.c"
    break;

  case 46: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 277 "src/parser.y"
                                                        { (yyval.state) = (yyvsp[0].state); }
#line 2784 "src/parser.c"
    break;

  case 47: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 278 "src/parser.y"
                                                           { (yyval.state) = (yyvsp[0].state); }
#line 2790 "src/parser.c"
    break;

  case 48: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 279 "src/parser.y"
                                                           { (yyval.state) = (yyvsp[0].state); }
#line 2796 "src/parser.c"
    break;

  case 49: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 280 "src/parser.y"
                                                                    { (yyval.state) = (yyvsp[0].state); }
#line 2802 "src/parser.c"
    break;

  case 50: /* AdditiveExpression: MultiplicativeExpression  */
#line 284 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 2808 "src/parser.c"
    break;

  case 51: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 285 "src/parser.y"
                                                                 { (yyval.state) = (yyvsp[0].state); }
#line 2814 "src/parser.c"
    break;

  case 52: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 286 "src/parser.y"
                                                        { (yyval.state) = (yyvsp[0].state); }
#line 2820 "src/parser.c"
    break;

  case 53: /* MultiplicativeExpression: UnaryExpression  */
#line 290 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 2826 "src/parser.c"
    break;

  case 54: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 291 "src/parser.y"
                                                             { (yyval.state) = (yyvsp[0].state); }
#line 2832 "src/parser.c"
    break;

  case 55: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 292 "src/parser.y"
                                                             { (yyval.state) = (yyvsp[0].state); }
#line 2838 "src/parser.c"
    break;

  case 56: /* MultiplicativeExpression: MultiplicativeExpression TR UnaryExpression  */
#line 293 "src/parser.y"
                                                            { (yyval.state) = (yyvsp[0].state); }
#line 2844 "src/parser.c"
    break;

  case 57: /* MultiplicativeExpression: MultiplicativeExpression TWD UnaryExpression  */
#line 294 "src/parser.y"
                                                         {(yyval.state) = (yyvsp[0].state);}
#line 2850 "src/parser.c"
    break;

  case 58: /* MultiplicativeExpression: MultiplicativeExpression MAP UnaryExpression  */
#line 295 "src/parser.y"
                                                         {(yyval.state) = (yyvsp[0].state);}
#line 2856 "src/parser.c"
    break;

  case 59: /* MultiplicativeExpression: MultiplicativeExpression FIL UnaryExpression  */
#line 296 "src/parser.y"
                                                         {(yyval.state) = (yyvsp[0].state);}
#line 2862 "src/parser.c"
    break;

  case 60: /* UnaryExpression: PrimaryExpression  */
#line 300 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 2868 "src/parser.c"
    break;

  case 61: /* UnaryExpression: UnaryOperator PrimaryExpression  */
#line 301 "src/parser.y"
                                                { (yyval.state) = (yyvsp[0].state); }
#line 2874 "src/parser.c"
    break;

  case 62: /* UnaryOperator: TNR  */
#line 305 "src/parser.y"
                { (yyval.state) = new_node("UnaryOperator", root); }
#line 2880 "src/parser.c"
    break;

  case 63: /* UnaryOperator: HD  */
#line 307 "src/parser.y"
                   { (yyval.state) = new_node("UnaryOperator", root); }
#line 2886 "src/parser.c"
    break;

  case 64: /* PrimaryExpression: IDENTIFIER  */
#line 312 "src/parser.y"
                           {(yyval.state) = new_node((yyvsp[0].string), root);}
#line 2892 "src/parser.c"
    break;

  case 65: /* PrimaryExpression: NUM_CONST  */
#line 313 "src/parser.y"
                      {
			char str[128];
			sprintf(str, "%lf", (yyvsp[0].num));
			(yyval.state) = new_node(str, root);
		}
#line 2902 "src/parser.c"
    break;

  case 66: /* PrimaryExpression: LP Expression RP  */
#line 318 "src/parser.y"
                                 {(yyval.state) = new_node("PrimaryExpression", root);  add_child((yyval.state), (yyvsp[-1].state));}
#line 2908 "src/parser.c"
    break;

  case 67: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 319 "src/parser.y"
                                        {(yyval.state) = new_node("FunctionCall", root);  add_child((yyval.state), (yyvsp[-1].state));}
#line 2914 "src/parser.c"
    break;

  case 68: /* PrimaryExpression: NIL  */
#line 320 "src/parser.y"
                    {(yyval.state) = new_node("PrimaryExpression", root);}
#line 2920 "src/parser.c"
    break;

  case 69: /* Params: %empty  */
#line 324 "src/parser.y"
               {(yyval.state) = new_node("Params", root);}
#line 2926 "src/parser.c"
    break;

  case 70: /* Params: Expression  */
#line 326 "src/parser.y"
                   {(yyval.state) = new_node("Params", root);}
#line 2932 "src/parser.c"
    break;

  case 71: /* Params: Params COM Expression  */
#line 328 "src/parser.y"
                              {(yyval.state) = new_node("Params", root); add_child((yyval.state), (yyvsp[-2].state));}
#line 2938 "src/parser.c"
    break;


#line 2942 "src/parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 332 "src/parser.y"

int yydebug = 1;
syntax_tree* root;

syntax_tree* parse() {
    root = new_syntax_tree();
	s_table = new_symbol_table();
	scope = new_scope_stack();

    yyparse();

	show_table(s_table);
	show_tree(root);
	free_table(s_table);
	yylex_destroy();
	free_tree(root);
	free_scope(scope);

    return root;
}

 void yyerror (char const *s) {
   fprintf (stderr, "\x1b[31m%s, at ln %lu col %lu\x1b[0m\n", s, n_line, n_column);
 }
