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
  YYSYMBOL_COMP_EQ = 27,                   /* COMP_EQ  */
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
  YYSYMBOL_FunctionArgs = 44,              /* FunctionArgs  */
  YYSYMBOL_FunctionHead = 45,              /* FunctionHead  */
  YYSYMBOL_ParamList = 46,                 /* ParamList  */
  YYSYMBOL_Statement = 47,                 /* Statement  */
  YYSYMBOL_CompStatement = 48,             /* CompStatement  */
  YYSYMBOL_StatementExp = 49,              /* StatementExp  */
  YYSYMBOL_SelStatement = 50,              /* SelStatement  */
  YYSYMBOL_IfHead = 51,                    /* IfHead  */
  YYSYMBOL_ElseHead = 52,                  /* ElseHead  */
  YYSYMBOL_ExpStatement = 53,              /* ExpStatement  */
  YYSYMBOL_JmpStatement = 54,              /* JmpStatement  */
  YYSYMBOL_ItStatement = 55,               /* ItStatement  */
  YYSYMBOL_ForHead = 56,                   /* ForHead  */
  YYSYMBOL_ExpAtt = 57,                    /* ExpAtt  */
  YYSYMBOL_Expression = 58,                /* Expression  */
  YYSYMBOL_LogicalOrExpression = 59,       /* LogicalOrExpression  */
  YYSYMBOL_LogicalAndExpression = 60,      /* LogicalAndExpression  */
  YYSYMBOL_EqualityExpression = 61,        /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 62,      /* RelationalExpression  */
  YYSYMBOL_AdditiveExpression = 63,        /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 64,  /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 65,           /* UnaryExpression  */
  YYSYMBOL_PrimaryExpression = 66,         /* PrimaryExpression  */
  YYSYMBOL_Params = 67                     /* Params  */
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
#define YYLAST   6552

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  484

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
       0,    54,    54,    58,    62,    70,    73,    76,    83,    92,
     103,   115,   125,   135,   142,   152,   163,   183,   197,   216,
     220,   228,   244,   245,   246,   247,   248,   249,   253,   259,
     260,   265,   270,   278,   284,   294,   300,   307,   308,   314,
     321,   332,   338,   342,   349,   351,   358,   359,   368,   369,
     377,   378,   387,   388,   393,   398,   403,   408,   416,   417,
     422,   430,   431,   436,   441,   447,   452,   460,   461,   465,
     471,   473,   479,   484,   490,   494,   496,   498
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
  "ATT", "COMP_EQ", "AND", "OR", "RP", "NUM_CONST", "NIL", "IF", "ELSE",
  "FOR", "RET", "$accept", "ROOT_TREE", "GlobalDef", "GlobalDec",
  "Declaration", "Definition", "FunctionDefinition", "FunctionArgs",
  "FunctionHead", "ParamList", "Statement", "CompStatement",
  "StatementExp", "SelStatement", "IfHead", "ElseHead", "ExpStatement",
  "JmpStatement", "ItStatement", "ForHead", "ExpAtt", "Expression",
  "LogicalOrExpression", "LogicalAndExpression", "EqualityExpression",
  "RelationalExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "PrimaryExpression", "Params", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,   431,     4,    13,   478,   548,   608,   707,    -5,    58,
      47,  -142,   717,    23,   758,   106,   128,    45,    28,   819,
      19,    65,  3480,   830,    45,    72,    71,  3493,   220,  4146,
     182,  3529,   845,     8,     8,  4603,  4622,    86,    92,   110,
    3480,  3480,  3480,  3542,   849,  3578,   132,  3591,  3627,  3640,
     145,   114,    54,   115,   140,  1303,  5559,  4641,  4660,  4679,
     853,   150,   155,   157,   158,    11,   187,  1388,   178,  4698,
    4717,  3676,   859,   873,   877,   182,   196,  3689,   229,   229,
     229,   229,   229,   229,   229,   229,   166,   268,   268,   268,
     268,   268,   268,   268,    94,   194,   180,   101,   107,  3725,
    4736,   185,   203,   219,   245,   215,  5688,   169,  5785,  5706,
    5724,  5742,  5760,  5778,   249,  4755,  4774,  4793,  4812,  4831,
    4850,  4869,   237,   255,   292,   366,  4888,   562,   196,   347,
      94,   131,    53,   252,    94,   297,   273,   833,  4065,   416,
     276,    94,  3738,   289,   296,  4065,  3774,  3787,   182,    14,
      14,  5804,  5824,   334,   353,   378,   358,  1420,  5844,  5864,
    5884,  4194,  3823,  4096,   182,    64,    64,  4234,  4257,   233,
     209,    44,  1193,   458,  4280,  4303,  4326,   634,   182,    76,
      76,   901,  1687,  1518,  1332,   721,  1148,  2836,  1745,  1792,
    1828,    11,  4170,  4212,   182,    87,    87,  5270,  5288,  5306,
    5324,  5342,  3836,   229,   229,  3088,  3101,  3872,   153,  3137,
    3150,   326,  3186,  3199,  3235,   332,   350,  1176,   338,   348,
    3885,  3787,  3787,  3787,  3921,   349,  5904,  5924,   432,   432,
     432,   432,   432,   432,   432,   432,   392,   182,   182,   182,
     182,   182,   182,   182,    11,   380,  4349,  4372,   558,   558,
     558,   558,   558,   558,   558,   558,   411,   366,   366,   366,
     366,   366,   366,   366,    11,   388,  1864,  1900,   710,   710,
     710,   710,   710,   710,   710,   710,   415,   187,   187,   187,
     187,   187,   187,   187,   247,   268,    11,   405,  5360,  5378,
     229,   229,   229,   229,   229,  5396,  5414,  3248,  3872,  3872,
    3872,  3284,  3297,   182,   196,  3333,   182,  3934,  3970,  3983,
    5944,  4064,   182,   121,   121,  6123,  6142,   372,  6427,  6161,
    6180,  6199,   396,  1715,  6446,  6465,  6484,  6503,  6522,   407,
    5964,  5984,  6004,  6024,  6044,  6064,  6084,   256,  4395,  4121,
     182,   124,   124,  4906,  4929,   306,  1655,  4952,  4975,  4998,
     281,  1217,  5577,  5600,  5623,  5646,  5669,   258,  4418,  4441,
    4464,  4487,  4510,  4533,  4556,   260,  1936,  1107,   182,   142,
     142,  2260,  2296,  1612,  1563,  2332,  2368,  2404,   992,  3052,
    2872,  2908,  2944,  2980,  3016,  4019,  1972,  2008,  2044,  2080,
    2116,  2152,  2188,  6104,   439,   265,  5432,  5450,  5468,  5486,
    5504,  5522,  3346,  3382,  3395,   409,   445,   423,    11,   442,
    6218,  6237,   432,   432,   432,   432,   432,   432,   432,  4579,
      11,   452,  5021,  5044,   558,   558,   558,   558,   558,   558,
     558,  2224,    11,   453,  2440,  2476,   710,   710,   710,   710,
     710,   710,   710,  5540,   562,   196,   275,  6256,  6275,  6294,
    6313,  6332,  6351,  6370,  6389,   307,  5067,  5090,  5113,  5136,
    5159,  5182,  5205,  5228,   323,  2512,  2548,  2584,  2620,  2656,
    2692,  2728,  2764,  4032,   455,  6408,  5251,  2800,   562,   416,
    3431,   454,   562,  3444
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
       0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,   485,    25,    95,  -142,  -142,  -142,    60,
    -117,   -17,   -18,  -124,  -123,    17,   -33,  -122,  -116,  -111,
     -95,   -28,  1321,  1249,  1234,     1,  1022,   806,   535,   264,
    -141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    40,    41,     7,    18,     8,   123,
      42,    43,    44,    45,    46,   138,    47,    48,    49,    50,
     103,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      98
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    13,    68,   210,   211,   213,    71,    60,     9,    10,
     132,   214,   161,    11,    30,   163,   215,   164,    67,   -75,
     148,   142,    72,    73,    74,     6,    16,    25,   146,     6,
     223,   156,     1,   133,     2,   165,   166,    97,    99,    35,
      36,   -75,   167,   168,   143,   151,   152,   101,   104,   -13,
     284,    15,   -48,    17,   -33,    22,   -33,   -33,    24,   -33,
     -33,   -44,   -33,   -33,   -17,    14,   172,   186,   163,    26,
     164,   250,   -48,   -48,   -48,    61,   156,   -33,   -33,    62,
     177,   108,   178,    78,   -33,   -33,   -33,   137,   -33,   -33,
     300,   193,   -35,   194,   212,   167,   168,   131,   -41,   216,
     104,   -15,   122,   337,   223,   223,   223,   181,   182,   -76,
     209,   219,   -18,    19,   161,   125,    30,    31,   197,   198,
     225,    77,   -46,   365,   -19,   311,   172,   312,   339,   224,
     340,   -76,    20,    21,    33,    34,   245,   126,    75,   -77,
     156,    35,    36,    79,   -46,   395,   367,   -48,   368,   156,
     265,    76,   315,   316,    94,   343,   344,   161,    95,    30,
     206,   -77,    96,    97,   162,   156,   287,    80,   -48,   -48,
     114,   102,   221,   371,   372,   302,   -49,    33,    34,   156,
     216,   300,   300,   300,    35,    36,    67,   202,   148,   301,
     136,   177,   172,   178,   140,   156,    80,   -49,   -49,   124,
     192,   144,    30,   307,   308,   309,   149,   150,   100,   406,
     -43,   179,   180,   151,   152,   127,    97,   -46,   181,   182,
      33,    34,   -47,   102,    63,    64,   128,    35,    36,   156,
     156,   323,   298,   193,   218,   194,    97,   249,   -46,   -46,
     129,   -44,   222,    79,   -47,   172,   221,   221,   221,   172,
     172,   351,   -42,   195,   196,   125,   -45,   394,    97,   139,
     197,   198,   248,   -44,   125,   172,   -45,   446,   125,   186,
     186,   379,   161,   125,    30,   405,   104,   393,   407,   455,
     402,   403,   404,   125,   409,   -14,   419,   172,   -45,   -49,
     431,   464,    33,    34,   160,   443,   130,    69,    70,    35,
      36,   141,   299,   -16,   156,   475,   -20,   156,   250,   -49,
     -49,   -49,   421,   156,   -47,   125,   222,   222,   222,   145,
     210,   211,   213,   298,   298,   298,   -21,   473,   214,   176,
     190,   125,   303,   215,   249,   -47,   -47,   476,   304,   160,
     433,   156,   201,   201,   201,   201,   201,   201,   201,   201,
     474,   134,   135,   477,   210,   211,   213,   305,   210,   211,
     213,   480,   214,   228,   -44,   483,   214,   215,   -43,   156,
     163,   215,   164,   231,   232,   233,   234,   235,   -42,   310,
      97,   229,   -46,   -46,   481,   -50,   -50,   -50,   -50,   176,
     165,   166,    97,   299,   299,   299,   329,   167,   168,   102,
     229,   -47,   -47,   160,    97,   230,   -48,   -48,   -48,   172,
     338,   212,   160,   226,   227,   357,   216,   104,   366,   385,
     217,   172,   148,   230,   -49,   -49,   -49,   209,   160,   246,
     247,    -7,    -7,   172,    -7,   396,   311,   -45,   312,   444,
     149,   150,   160,   266,   267,   212,   -10,   151,   152,   212,
     216,   219,   445,   -10,   216,   176,   313,   314,   160,   288,
     289,   209,   479,   315,   316,   209,   -52,   201,   201,   256,
     257,   258,   447,   -52,   -52,   -52,   -52,   -52,    -2,     1,
     156,     2,   456,   465,   482,   -52,   -52,   -52,   -52,    12,
     478,     0,   321,   321,   321,   321,   321,   321,   321,   321,
       0,   160,   160,   160,   160,   160,   160,   160,   176,     0,
       0,     0,   349,   349,   349,   349,   349,   349,   349,   349,
       0,   176,   176,   176,   176,   176,   176,   176,   176,     0,
       0,     0,   377,   377,   377,   377,   377,   377,   377,   377,
     102,   190,   190,   190,   190,   190,   190,   190,    -3,    -3,
     176,    -3,     0,     0,   201,   201,   201,   201,   201,     0,
       0,     0,   339,   205,   340,   159,   161,   160,    30,   206,
     160,     0,   207,     0,   218,     0,   160,   410,   411,     0,
       0,     0,   341,   342,     0,     0,    33,    34,     0,   343,
     344,     0,     0,    35,    36,    37,     0,    38,   208,     0,
     175,   189,     0,     0,   160,   422,   423,     0,    -5,    -5,
     159,    -5,     0,   200,   200,   200,   200,   200,   200,   200,
     200,     0,     0,     0,   117,   118,   119,   120,   121,     0,
       0,     0,   160,   434,   435,   -70,     0,   -70,   -70,     0,
     264,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     175,   -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,
     -70,     0,   176,     0,   159,     0,   321,   321,   321,   321,
     321,   321,   321,   159,   176,     0,     0,     0,   349,   349,
     349,   349,   349,   349,   349,     0,   176,     0,     0,   159,
     377,   377,   377,   377,   377,   377,   377,    -6,    -6,     0,
      -6,     0,     0,   159,   367,     0,   368,    -4,    -4,     0,
      -4,     0,   -48,     0,   -48,   -48,   175,   -48,   -48,   159,
     -48,   -48,     0,     0,   369,   370,     0,     0,   200,   200,
       0,   371,   372,   160,     0,   -48,   -48,     0,   270,   -48,
     -48,     0,   -48,   -48,   -48,     0,   -48,   -48,    -8,    -8,
       0,    -8,     0,   320,   320,   320,   320,   320,   320,   320,
     320,     0,   159,   159,   332,   333,   334,   335,   336,   175,
       0,     0,     0,   348,   348,   348,   348,   348,   348,   348,
     348,     0,   175,   175,   360,   361,   362,   363,   364,   175,
       0,     0,     0,   376,   376,   376,   376,   376,   376,   376,
     376,     0,   189,   189,   388,   389,   390,   391,   392,    -9,
      -9,   175,    -9,     0,     0,   397,   398,   399,   400,   401,
     -12,   -12,     0,   -12,   -36,     0,   158,   -36,   159,   -36,
     -36,   159,     0,   -36,     0,   -29,   -29,   159,   -29,   -28,
     -28,     0,   -28,   -11,   -11,     0,   -11,   -36,   -36,   -30,
     -30,     0,   -30,     0,   -36,   -36,   -36,     0,   -36,   -36,
       0,   174,   188,   -31,   -31,   159,   -31,   -32,   -32,     0,
     -32,   158,     0,     0,   199,   199,   199,   199,   199,   199,
     199,   199,     0,   115,   116,     0,     0,     0,     0,     0,
       0,     0,   -71,   159,   -71,   -71,     0,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   174,   -71,   -71,   -71,     0,   -71,   -71,     0,     0,
       0,     0,     0,   175,     0,   158,     0,   320,   320,   450,
     451,   452,   453,   454,   158,   175,     0,     0,     0,   348,
     348,   459,   460,   461,   462,   463,     0,   175,     0,     0,
     158,   376,   376,   468,   469,   470,   471,   472,     0,     0,
       0,     0,     0,     0,   158,     0,     0,     0,     0,     0,
       0,     0,     0,   -49,     0,   -49,   -49,   174,   -49,   -49,
     158,   -49,   -49,     0,     0,     0,     0,     0,     0,   295,
     296,     0,     0,     0,   159,     0,   -49,   -49,     0,   270,
     -49,   -49,     0,   -49,   -49,   -49,     0,   -49,   -49,     0,
       0,     0,     0,     0,   319,   319,   319,   319,   319,   319,
     319,   319,     0,   330,   331,     0,     0,     0,     0,     0,
     174,     0,   157,     0,   347,   347,   347,   347,   347,   347,
     347,   347,     0,   358,   359,     0,     0,     0,     0,     0,
     174,     0,     0,     0,   375,   375,   375,   375,   375,   375,
     375,   375,     0,   386,   387,     0,     0,   173,   187,     0,
       0,     0,   174,     0,     0,     0,     0,   157,     0,     0,
     106,   106,   106,   109,   110,   111,   112,   113,   -70,   158,
     -70,   -70,   158,   432,   -70,     0,   -70,   -70,   158,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,   -70,
     -70,     0,   -70,   -70,     0,     0,   158,   173,     0,   -50,
       0,   -50,   -50,     0,   -50,   -50,     0,   -50,   -50,     0,
       0,   157,     0,   271,   272,   273,   274,   275,     0,     0,
     157,     0,   -50,   -50,   158,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   191,   -50,   -50,     0,   157,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     157,   -50,   306,   -70,   -70,   -70,   -70,     0,   251,   252,
     253,   254,   255,   173,   174,     0,   157,     0,   448,   449,
     -50,   -50,   -50,   -50,     0,   -51,   174,     0,     0,     0,
     457,   458,   251,   252,   253,   254,   255,     0,   174,     0,
       0,     0,   466,   467,   -51,   -51,   -51,   -51,     0,     0,
     318,   318,   318,   324,   325,   326,   327,   328,     0,     0,
       0,     0,     0,     0,   155,     0,   173,     0,     0,     0,
     346,   346,   346,   352,   353,   354,   355,   356,     0,   154,
       0,     0,     0,     0,     0,   158,   173,     0,     0,     0,
     374,   374,   374,   380,   381,   382,   383,   384,     0,   171,
     185,     0,     0,     0,     0,     0,     0,     0,   173,   155,
     -50,     0,     0,   107,   170,   184,     0,     0,    81,    82,
      83,    84,    85,     0,   154,   157,     0,   105,   157,     0,
     -50,   -50,   -50,   -46,   157,   -46,   -46,     0,   -46,   -46,
       0,   -46,   -46,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,     0,     0,     0,   -46,   -46,     0,   171,
     269,   -46,   157,   -46,   -46,   -46,     0,   -46,   -46,     0,
       0,     0,     0,   155,   170,     0,     0,     0,     0,     0,
       0,     0,   155,     0,     0,     0,   169,   183,   154,     0,
     157,     0,     0,     0,   191,     0,   153,   154,   155,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   155,   154,     0,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,   171,     0,   154,   155,     0,
     173,   236,   237,   238,     0,   -52,   -52,   -52,   -52,   -52,
     170,     0,   173,   154,     0,     0,   169,   -52,   -52,   -52,
     -52,     0,     0,     0,   173,     0,     0,     0,     0,     0,
     153,     0,   155,   322,     0,     0,     0,     0,     0,   153,
       0,     0,     0,     0,     0,     0,     0,   317,   171,     0,
       0,     0,   171,   350,     0,   153,     0,     0,     0,     0,
       0,     0,     0,   170,     0,     0,     0,   345,   171,   153,
       0,   157,   185,   378,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,     0,   153,     0,   373,     0,   -44,
     171,   -44,   -44,     0,   -44,   -44,     0,   -44,   -44,     0,
       0,     0,     0,     0,     0,   170,     0,   155,     0,     0,
     155,     0,   -44,   -44,     0,     0,   155,   268,     0,   -44,
     -44,   -44,   154,   -44,   -44,   154,     0,     0,     0,     0,
       0,   154,     0,     0,   -52,   169,   -52,   -52,     0,   -52,
     -52,     0,   -52,   -52,   155,   436,   437,     0,   -52,   -52,
     -52,   -52,   -52,     0,     0,   169,     0,   -52,   -52,   154,
     -52,   -52,   -52,     0,   -52,   -52,   -52,     0,   -52,   -52,
       0,     0,   155,     0,     0,     0,     0,   169,     0,     0,
       0,     0,     0,   -47,     0,   -47,   -47,   154,   -47,   -47,
       0,   -47,   -47,     0,   153,     0,     0,   153,     0,     0,
       0,     0,     0,   153,     0,     0,   -47,   -47,     0,     0,
     269,   -47,   171,   -47,   -47,   -47,     0,   -47,   -47,     0,
       0,     0,     0,     0,   171,     0,     0,   170,     0,     0,
       0,   153,     0,   -52,     0,     0,   171,   424,   425,   170,
     -52,   -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,
       0,   170,   -52,   -52,   -52,   -52,     0,     0,   -74,   153,
     -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   155,   -74,   -74,   -74,     0,   -74,   -74,
     -74,     0,   -74,   -74,     0,     0,     0,     0,   154,   169,
     231,   232,   233,   234,   235,     0,     0,     0,     0,     0,
       0,   169,   -51,   -51,   -51,   -51,   -58,     0,   -58,   -58,
       0,   -58,   -58,   169,   -58,   -58,   -58,   -58,   -58,   279,
     -58,   -58,   -58,   -58,   -58,   280,   281,   282,   283,   -58,
     -58,     0,   -58,   -58,   -58,     0,   -58,   -58,   -58,     0,
     -58,   -58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,     0,   -61,   -61,     0,   -61,   -61,
     153,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,
     -61,   -61,     0,   -61,   -61,   -61,     0,   -61,   -61,   -67,
       0,   -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,
     -67,   -67,     0,   -67,   -67,   -68,     0,   -68,   -68,     0,
     -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,
     -68,   -69,     0,   -69,   -69,     0,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,
       0,   -69,   -69,   -69,     0,   -69,   -69,   -72,     0,   -72,
     -72,     0,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,   -72,
       0,   -72,   -72,   -59,     0,   -59,   -59,     0,   -59,   -59,
       0,   -59,   -59,   -59,   -59,   -59,   279,   -59,   -59,   -59,
     -59,   -59,   280,   281,   282,   283,   -59,   -59,     0,   -59,
     -59,   -59,     0,   -59,   -59,   -59,     0,   -59,   -59,   -60,
       0,   -60,   -60,     0,   -60,   -60,     0,   -60,   -60,   -60,
     -60,   -60,   279,   -60,   -60,   -60,   -60,   -60,   280,   281,
     282,   283,   -60,   -60,     0,   -60,   -60,   -60,     0,   -60,
     -60,   -60,     0,   -60,   -60,   -62,     0,   -62,   -62,     0,
     -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,
     -62,   -65,     0,   -65,   -65,     0,   -65,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,
       0,   -65,   -65,   -65,     0,   -65,   -65,   -66,     0,   -66,
     -66,     0,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,   -66,
       0,   -66,   -66,   -63,     0,   -63,   -63,     0,   -63,   -63,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -63,
     -63,   -63,     0,   -63,   -63,   -63,     0,   -63,   -63,   -64,
       0,   -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,
     -64,   -64,     0,   -64,   -64,   -73,     0,   -73,   -73,     0,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,
     -73,   -71,     0,   -71,   -71,     0,   -71,   -71,     0,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
       0,   -71,   -71,   -71,     0,   -71,   -71,   -74,     0,   -74,
     -74,     0,   -74,   -74,     0,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,   -74,
       0,   -74,   -74,   -58,     0,   -58,   -58,     0,   -58,   -58,
       0,   -58,   -58,     0,   -58,   -58,   438,   -58,   -58,   -58,
     -58,   -58,   439,   440,   441,   442,   -58,   -58,     0,   -58,
     -58,   -58,     0,   -58,   -58,   -58,     0,   -58,   -58,   -61,
       0,   -61,   -61,     0,   -61,   -61,     0,   -61,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,     0,   -61,
     -61,   -61,     0,   -61,   -61,   -67,     0,   -67,   -67,     0,
     -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,
     -67,   -68,     0,   -68,   -68,     0,   -68,   -68,     0,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
       0,   -68,   -68,   -68,     0,   -68,   -68,   -69,     0,   -69,
     -69,     0,   -69,   -69,     0,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,     0,   -69,   -69,   -69,
       0,   -69,   -69,   -72,     0,   -72,   -72,     0,   -72,   -72,
       0,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,   -59,
       0,   -59,   -59,     0,   -59,   -59,     0,   -59,   -59,     0,
     -59,   -59,   438,   -59,   -59,   -59,   -59,   -59,   439,   440,
     441,   442,   -59,   -59,     0,   -59,   -59,   -59,     0,   -59,
     -59,   -59,     0,   -59,   -59,   -60,     0,   -60,   -60,     0,
     -60,   -60,     0,   -60,   -60,     0,   -60,   -60,   438,   -60,
     -60,   -60,   -60,   -60,   439,   440,   441,   442,   -60,   -60,
       0,   -60,   -60,   -60,     0,   -60,   -60,   -60,     0,   -60,
     -60,   -62,     0,   -62,   -62,     0,   -62,   -62,     0,   -62,
     -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,
       0,   -62,   -62,   -62,     0,   -62,   -62,   -65,     0,   -65,
     -65,     0,   -65,   -65,     0,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -65,     0,   -65,   -65,   -65,
       0,   -65,   -65,   -66,     0,   -66,   -66,     0,   -66,   -66,
       0,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,   -63,
       0,   -63,   -63,     0,   -63,   -63,     0,   -63,   -63,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,     0,   -63,
     -63,   -63,     0,   -63,   -63,   -64,     0,   -64,   -64,     0,
     -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,
     -64,   -73,     0,   -73,   -73,     0,   -73,   -73,     0,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
       0,   -73,   -73,   -73,     0,   -73,   -73,   -52,     0,   -52,
     -52,     0,   -52,   -52,     0,   -52,   -52,   276,   277,   278,
       0,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,     0,
     -52,   -52,     0,   -52,   -52,   -52,     0,   -52,   -52,   -52,
       0,   -52,   -52,   -55,     0,   -55,   -55,     0,   -55,   -55,
       0,   -55,   -55,     0,   436,   437,     0,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,   -55,   -55,     0,   -55,
     -55,   -55,     0,   -55,   -55,   -55,     0,   -55,   -55,   -56,
       0,   -56,   -56,     0,   -56,   -56,     0,   -56,   -56,     0,
     436,   437,     0,   -56,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,   -56,   -56,     0,   -56,   -56,   -56,     0,   -56,
     -56,   -56,     0,   -56,   -56,   -53,     0,   -53,   -53,     0,
     -53,   -53,     0,   -53,   -53,     0,   436,   437,     0,   -53,
     -53,   -53,   -53,   -53,     0,     0,     0,     0,   -53,   -53,
       0,   -53,   -53,   -53,     0,   -53,   -53,   -53,     0,   -53,
     -53,   -54,     0,   -54,   -54,     0,   -54,   -54,     0,   -54,
     -54,     0,   436,   437,     0,   -54,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,   -54,   -54,     0,   -54,   -54,   -54,
       0,   -54,   -54,   -54,     0,   -54,   -54,   -57,     0,   -57,
     -57,     0,   -57,   -57,     0,   -57,   -57,     0,   436,   437,
       0,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
     -57,   -57,     0,   -57,   -57,   -57,     0,   -57,   -57,   -57,
       0,   -57,   -57,   -51,     0,   -51,   -51,     0,   -51,   -51,
       0,   -51,   -51,     0,     0,     0,     0,   271,   272,   273,
     274,   275,     0,     0,     0,     0,   -51,   -51,     0,   -51,
     -51,   -51,     0,   -51,   -51,   -51,     0,   -51,   -51,   -27,
       0,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,
       0,     0,   -37,     0,   -37,   -37,     0,   -37,   -37,     0,
     -37,   -37,   -27,   -27,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -37,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -22,     0,
     -22,   -22,     0,   -22,   -22,     0,   -22,   -22,     0,     0,
       0,   -24,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,
     -24,   -22,   -22,     0,     0,     0,     0,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -24,   -24,     0,     0,     0,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,   -26,     0,   -26,
     -26,     0,   -26,   -26,     0,   -26,   -26,     0,     0,     0,
     -23,     0,   -23,   -23,     0,   -23,   -23,     0,   -23,   -23,
     -26,   -26,     0,     0,     0,     0,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -23,   -23,     0,     0,     0,     0,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -25,     0,   -25,   -25,
       0,   -25,   -25,     0,   -25,   -25,     0,     0,     0,   -29,
       0,   -29,   -29,     0,   -29,   -29,     0,   -29,   -29,   -25,
     -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -28,     0,   -28,   -28,     0,
     -28,   -28,     0,   -28,   -28,     0,     0,     0,   -39,     0,
     -39,   -39,     0,   -39,   -39,     0,   -39,   -39,   -28,   -28,
       0,     0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -39,   -39,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -38,     0,   -38,   -38,     0,   -38,
     -38,     0,   -38,   -38,     0,     0,     0,   -30,     0,   -30,
     -30,     0,   -30,   -30,     0,   -30,   -30,   -38,   -38,     0,
       0,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -31,     0,   -31,   -31,     0,   -31,   -31,
       0,   -31,   -31,     0,     0,     0,   -32,     0,   -32,   -32,
       0,   -32,   -32,     0,   -32,   -32,   -31,   -31,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -32,
     -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,
     -34,   -34,     0,     0,     0,   -40,     0,   -40,   -40,     0,
     -40,   -40,     0,   -40,   -40,   -34,   -34,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -40,   -40,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,
     -40,    27,     0,    28,    29,     0,    30,    31,     0,    32,
     147,     0,     0,     0,   -27,     0,   -27,   -27,     0,   -27,
     -27,     0,   -27,   -27,    33,    34,     0,     0,     0,     0,
       0,    35,    36,    37,     0,    38,    39,   -27,   -27,     0,
       0,     0,     0,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -37,     0,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,
       0,     0,     0,   -22,     0,   -22,   -22,     0,   -22,   -22,
       0,   -22,   -22,   -37,   -37,     0,     0,     0,     0,     0,
     -37,   -37,   -37,     0,   -37,   -37,   -22,   -22,     0,     0,
       0,     0,     0,   -22,   -22,   -22,     0,   -22,   -22,   -24,
       0,   -24,   -24,     0,   -24,   -24,     0,   -24,   -24,     0,
       0,     0,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,
     -26,   -26,   -24,   -24,     0,     0,     0,     0,     0,   -24,
     -24,   -24,     0,   -24,   -24,   -26,   -26,     0,     0,     0,
       0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -23,     0,
     -23,   -23,     0,   -23,   -23,     0,   -23,   -23,     0,     0,
       0,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,   -25,
     -25,   -23,   -23,     0,     0,     0,     0,     0,   -23,   -23,
     -23,     0,   -23,   -23,   -25,   -25,     0,     0,     0,     0,
       0,   -25,   -25,   -25,     0,   -25,   -25,   -39,     0,   -39,
     -39,     0,   -39,   -39,     0,   -39,   -39,     0,     0,     0,
     -38,     0,   -38,   -38,     0,   -38,   -38,     0,   -38,   -38,
     -39,   -39,     0,     0,     0,     0,     0,   -39,   -39,   -39,
       0,   -39,   -39,   -38,   -38,     0,     0,     0,     0,     0,
     -38,   -38,   -38,     0,   -38,   -38,   -10,     0,   -10,   -10,
       0,   -10,   -10,     0,   -10,   -10,     0,     0,     0,   -34,
       0,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,   -10,
     -10,     0,     0,     0,     0,     0,   -10,   -10,   -10,     0,
     -10,   -10,   -34,   -34,     0,     0,     0,     0,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -40,     0,   -40,   -40,     0,
     -40,   -40,     0,   -40,   -40,     0,     0,     0,    27,     0,
      28,    29,     0,    30,    31,     0,   220,   147,   -40,   -40,
       0,     0,     0,     0,     0,   -40,   -40,   -40,     0,   -40,
     -40,    33,    34,     0,     0,     0,     0,     0,    35,    36,
      37,     0,    38,    39,    -8,     0,    -8,    -8,     0,    -8,
      -8,     0,    -8,    -8,     0,     0,     0,    -9,     0,    -9,
      -9,     0,    -9,    -9,     0,    -9,    -9,    -8,    -8,     0,
       0,     0,     0,     0,    -8,    -8,    -8,     0,    -8,    -8,
      -9,    -9,     0,     0,     0,     0,     0,    -9,    -9,    -9,
       0,    -9,    -9,    27,     0,    28,    29,     0,    30,    31,
       0,   297,   147,     0,     0,     0,   -29,     0,   -29,   -29,
       0,   -29,   -29,     0,   -29,   -29,    33,    34,     0,     0,
       0,     0,     0,    35,    36,    37,     0,    38,    39,   -29,
     -29,     0,     0,     0,     0,     0,   -29,   -29,   -29,     0,
     -29,   -29,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,   -28,     0,     0,     0,   -30,     0,   -30,   -30,     0,
     -30,   -30,     0,   -30,   -30,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -30,   -30,
       0,     0,     0,     0,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,   -31,
     -31,     0,     0,     0,   -32,     0,   -32,   -32,     0,   -32,
     -32,     0,   -32,   -32,   -31,   -31,     0,     0,     0,     0,
       0,   -31,   -31,   -31,     0,   -31,   -31,   -32,   -32,     0,
       0,     0,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,
     -45,     0,   -45,   -45,     0,   -45,   -45,     0,   -45,   -45,
       0,     0,     0,   -33,     0,   -33,   -33,     0,   -33,   -33,
       0,   -33,   -33,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -45,   -45,     0,   -45,   -45,   -33,   -33,     0,     0,
       0,     0,     0,   -33,   -33,   -33,    27,   -33,   -33,   161,
     408,    30,    31,     0,     0,   147,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,    33,
      34,   -70,   -70,   -70,   -70,     0,    35,    36,    37,     0,
      38,    39,   244,     0,   -70,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,   -70,   -70,   -70,   -70,   420,     0,   -70,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,   -70,   -70,
     -70,   -70,    65,   -70,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,    66,   -70,   -70,   -70,    65,   -70,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,   285,   -70,   -70,   -70,
      65,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   286,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,   -70,
     -70,   -70,   -71,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,   -71,   -71,   -71,   -71,   -74,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,   -74,   -74,   -74,   -74,   -58,     0,
       0,   -58,   -58,   -58,   259,   -58,   -58,   -58,   -58,   -58,
     260,   261,   262,   263,     0,     0,     0,   -58,   -58,   -58,
     -58,   -61,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,
     -61,   -61,   -61,   -61,   -67,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,   -67,   -67,   -67,   -68,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,
     -69,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,   -69,
     -69,   -69,   -69,   -72,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,   -72,   -72,   -72,   -72,   -59,     0,     0,   -59,
     -59,   -59,   259,   -59,   -59,   -59,   -59,   -59,   260,   261,
     262,   263,     0,     0,     0,   -59,   -59,   -59,   -59,   -60,
       0,     0,   -60,   -60,   -60,   259,   -60,   -60,   -60,   -60,
     -60,   260,   261,   262,   263,     0,     0,     0,   -60,   -60,
     -60,   -60,   -62,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,   -62,   -62,   -62,   -62,   -65,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -66,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,   -66,   -66,   -66,
     -66,   -63,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
     -63,   -63,   -63,   -63,   -64,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,   -64,   -64,   -64,   -64,   -73,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,
     -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,   -74,
     -71,   -71,   -71,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -58,   -74,
     -74,   -74,   -58,   -58,   -58,    89,   -58,   -58,   -58,   -58,
     -58,    90,    91,    92,    93,     0,     0,   -61,   -58,   -58,
     -58,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,   -67,   -61,   -61,   -61,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -68,   -67,   -67,   -67,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -69,   -68,   -68,   -68,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,   -72,   -69,   -69,   -69,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -59,   -72,   -72,   -72,   -59,   -59,   -59,    89,
     -59,   -59,   -59,   -59,   -59,    90,    91,    92,    93,     0,
       0,   -60,   -59,   -59,   -59,   -60,   -60,   -60,    89,   -60,
     -60,   -60,   -60,   -60,    90,    91,    92,    93,     0,     0,
     -62,   -60,   -60,   -60,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -65,
     -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -66,   -65,
     -65,   -65,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,   -63,   -66,   -66,
     -66,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,   -64,   -63,   -63,   -63,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,   -73,   -64,   -64,   -64,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -71,   -73,   -73,   -73,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,   -71,   -71,   -71,   -71,   -74,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,   -74,   -74,   -74,   -74,
     -58,     0,     0,     0,   -58,   -58,   426,   -58,   -58,   -58,
     -58,   -58,   427,   428,   429,   430,     0,     0,     0,   -58,
     -58,   -58,   -58,   -61,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,   -61,   -61,   -61,   -61,   -67,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -68,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,   -68,   -68,
     -68,   -68,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,   -69,   -69,   -69,   -69,   -72,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -59,     0,
       0,     0,   -59,   -59,   426,   -59,   -59,   -59,   -59,   -59,
     427,   428,   429,   430,     0,     0,     0,   -59,   -59,   -59,
     -59,   -60,     0,     0,     0,   -60,   -60,   426,   -60,   -60,
     -60,   -60,   -60,   427,   428,   429,   430,     0,     0,     0,
     -60,   -60,   -60,   -60,   -62,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,     0,   -62,   -62,   -62,   -62,   -65,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,
     -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,   -66,
     -66,   -66,   -66,   -63,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,   -63,   -63,   -63,   -63,   -64,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -73,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,   -71,   -73,   -73,
     -73,   -73,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -74,     0,   -71,   -71,   -71,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -58,     0,   -74,   -74,   -74,   -58,   -58,
     290,   -58,   -58,   -58,   -58,   -58,   291,   292,   293,   294,
       0,   -61,     0,   -58,   -58,   -58,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -67,
       0,   -61,   -61,   -61,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -68,     0,   -67,
     -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -69,     0,   -68,   -68,   -68,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -59,     0,   -69,   -69,   -69,   -59,   -59,
     290,   -59,   -59,   -59,   -59,   -59,   291,   292,   293,   294,
       0,   -60,     0,   -59,   -59,   -59,   -60,   -60,   290,   -60,
     -60,   -60,   -60,   -60,   291,   292,   293,   294,     0,   -72,
       0,   -60,   -60,   -60,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -62,     0,   -72,
     -72,   -72,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,   -65,     0,   -62,   -62,   -62,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -66,     0,   -65,   -65,   -65,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -63,     0,   -66,   -66,   -66,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -64,
       0,   -63,   -63,   -63,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   -73,     0,   -64,
     -64,   -64,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,   -52,   -73,   -73,   -73,
      86,    87,    88,     0,   -52,   -52,   -52,   -52,   -52,     0,
       0,     0,     0,     0,     0,   -55,   -52,   -52,   -52,   424,
     425,     0,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -56,     0,
       0,     0,   424,   425,     0,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,     0,     0,     0,   -56,   -56,   -56,
     -56,   -53,     0,     0,     0,   424,   425,     0,   -53,   -53,
     -53,   -53,   -53,     0,     0,     0,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -54,     0,     0,     0,   424,   425,
       0,   -54,   -54,   -54,   -54,   -54,     0,     0,     0,     0,
       0,     0,     0,   -54,   -54,   -54,   -54,   -57,     0,     0,
       0,   424,   425,     0,   -57,   -57,   -57,   -57,   -57,     0,
       0,     0,     0,     0,     0,   -52,   -57,   -57,   -57,   -57,
     203,   204,     0,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,     0,     0,   -55,     0,   -52,   -52,   -52,   203,   204,
       0,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,
       0,   -56,     0,   -55,   -55,   -55,   203,   204,     0,   -56,
     -56,   -56,   -56,   -56,     0,     0,     0,     0,     0,   -53,
       0,   -56,   -56,   -56,   203,   204,     0,   -53,   -53,   -53,
     -53,   -53,     0,     0,     0,     0,     0,   -54,     0,   -53,
     -53,   -53,   203,   204,     0,   -54,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,     0,   -57,     0,   -54,   -54,   -54,
     203,   204,   -51,   -57,   -57,   -57,   -57,   -57,     0,     0,
      81,    82,    83,    84,    85,   -57,   -57,   -57,     0,     0,
       0,     0,   -51,   -51,   -51,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,   -71,   -71,   -71,   -71,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,   -74,   -74,   -74,   -74,   -58,   -58,   -58,   239,   -58,
     -58,   -58,   -58,   -58,   240,   241,   242,   243,     0,     0,
       0,   -58,   -58,   -58,   -58,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,   -61,   -61,   -61,   -61,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,   -69,   -69,   -69,   -69,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,   -72,   -72,   -72,   -72,   -59,   -59,   -59,   239,   -59,
     -59,   -59,   -59,   -59,   240,   241,   242,   243,     0,     0,
       0,   -59,   -59,   -59,   -59,   -60,   -60,   -60,   239,   -60,
     -60,   -60,   -60,   -60,   240,   241,   242,   243,     0,     0,
       0,   -60,   -60,   -60,   -60,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,   -62,   -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,   -66,   -66,   -66,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
       0,   -63,   -63,   -63,   -63,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,   -64,   -64,   -64,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,   -73,   -73,   -73,   -73,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
     -71,   -71,   -71,   -71,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,   -74,
     -74,   -74,   -74,   -58,   -58,   414,   -58,   -58,   -58,   -58,
     -58,   415,   416,   417,   418,     0,     0,     0,   -58,   -58,
     -58,   -58,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,     0,   -61,   -61,   -61,
     -61,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,   -72,   -72,   -72,   -72,   -59,   -59,   414,
     -59,   -59,   -59,   -59,   -59,   415,   416,   417,   418,     0,
       0,     0,   -59,   -59,   -59,   -59,   -60,   -60,   414,   -60,
     -60,   -60,   -60,   -60,   415,   416,   417,   418,     0,     0,
       0,   -60,   -60,   -60,   -60,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
     -62,   -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,
     -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,   -66,   -66,
     -66,   -66,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,   -63,   -63,   -63,
     -63,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,   -73,   -73,   -73,   -73,   412,
     413,     0,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   412,   413,
       0,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,
       0,     0,     0,   -55,   -55,   -55,   -55,   412,   413,     0,
     -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   412,   413,     0,   -53,
     -53,   -53,   -53,   -53,     0,     0,     0,     0,     0,     0,
       0,   -53,   -53,   -53,   -53,   412,   413,     0,   -54,   -54,
     -54,   -54,   -54,     0,     0,     0,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   412,   413,     0,   -57,   -57,   -57,
     -57,   -57,     0,     0,     0,     0,     0,     0,     0,   -57,
     -57,   -57,   -57
};

static const yytype_int16 yycheck[] =
{
      17,     6,    30,   127,   127,   127,    39,    24,     4,     5,
     127,   127,     4,     0,     6,     4,   127,     6,     4,     8,
       6,   138,    40,    41,    42,     0,     3,     8,   145,     4,
     147,    30,     1,   128,     3,    24,    25,    65,    66,    31,
      32,    30,    31,    32,   139,    31,    32,    75,    76,    30,
     191,     4,     8,    30,     1,    10,     3,     4,    30,     6,
       7,     7,     9,    10,     6,     7,    65,    66,     4,     4,
       6,    27,    28,    29,    30,     3,    75,    24,    25,     8,
       4,    80,     6,    29,    31,    32,    33,    34,    35,    36,
     207,     4,     6,     6,   127,    31,    32,   125,     6,   127,
     128,    30,     8,   244,   221,   222,   223,    31,    32,     8,
     127,   139,     6,     7,     4,     8,     6,     7,    31,    32,
     148,     7,     7,   264,    30,     4,   125,     6,     4,   147,
       6,    30,     4,     5,    24,    25,   164,    30,     6,     8,
     139,    31,    32,    28,    29,   286,     4,     7,     6,   148,
     178,     6,    31,    32,     4,    31,    32,     4,     3,     6,
       7,    30,     4,   191,     7,   164,   194,    27,    28,    29,
       4,    76,   147,    31,    32,   208,     7,    24,    25,   178,
     208,   298,   299,   300,    31,    32,     4,     7,     6,   207,
     130,     4,   191,     6,   134,   194,    27,    28,    29,     5,
       4,   141,     6,   221,   222,   223,    24,    25,    30,   304,
       7,    24,    25,    31,    32,    30,   244,     8,    31,    32,
      24,    25,     7,   128,     4,     5,     7,    31,    32,   228,
     229,   230,   207,     4,   139,     6,   264,    28,    29,    30,
       3,     8,   147,    28,    29,   244,   221,   222,   223,   248,
     249,   250,     7,    24,    25,     8,     7,   285,   286,     7,
      31,    32,    29,    30,     8,   264,     8,   408,     8,   268,
     269,   270,     4,     8,     6,   303,   304,    30,   306,   420,
     298,   299,   300,     8,   312,    30,    30,   286,    30,     8,
      30,   432,    24,    25,    30,    30,     4,    33,    34,    31,
      32,     4,   207,    30,   303,    30,    30,   306,    27,    28,
      29,    30,   340,   312,     8,     8,   221,   222,   223,    30,
     444,   444,   444,   298,   299,   300,    30,   444,   444,    65,
      66,     8,     6,   444,    28,    29,    30,    30,     6,    75,
     368,   340,    78,    79,    80,    81,    82,    83,    84,    85,
     445,     4,     5,    30,   478,   478,   478,     7,   482,   482,
     482,   478,   478,    29,    30,   482,   482,   478,    30,   368,
       4,   482,     6,    15,    16,    17,    18,    19,    30,    30,
     408,    28,    29,    30,   479,    27,    28,    29,    30,   125,
      24,    25,   420,   298,   299,   300,     4,    31,    32,   304,
      28,    29,    30,   139,   432,    27,    28,    29,    30,   408,
      30,   444,   148,   149,   150,     4,   444,   445,    30,     4,
       4,   420,     6,    27,    28,    29,    30,   444,   164,   165,
     166,     0,     1,   432,     3,    30,     4,    30,     6,    30,
      24,    25,   178,   179,   180,   478,     7,    31,    32,   482,
     478,   479,     7,    30,   482,   191,    24,    25,   194,   195,
     196,   478,     7,    31,    32,   482,     8,   203,   204,    11,
      12,    13,    30,    15,    16,    17,    18,    19,     0,     1,
     479,     3,    30,    30,    30,    27,    28,    29,    30,     4,
     473,    -1,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,   237,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,   249,   250,   251,   252,   253,   254,   255,
      -1,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
      -1,    -1,   268,   269,   270,   271,   272,   273,   274,   275,
     445,   277,   278,   279,   280,   281,   282,   283,     0,     1,
     286,     3,    -1,    -1,   290,   291,   292,   293,   294,    -1,
      -1,    -1,     4,     1,     6,    30,     4,   303,     6,     7,
     306,    -1,    10,    -1,   479,    -1,   312,   313,   314,    -1,
      -1,    -1,    24,    25,    -1,    -1,    24,    25,    -1,    31,
      32,    -1,    -1,    31,    32,    33,    -1,    35,    36,    -1,
      65,    66,    -1,    -1,   340,   341,   342,    -1,     0,     1,
      75,     3,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    89,    90,    91,    92,    93,    -1,
      -1,    -1,   368,   369,   370,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     125,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    -1,   408,    -1,   139,    -1,   412,   413,   414,   415,
     416,   417,   418,   148,   420,    -1,    -1,    -1,   424,   425,
     426,   427,   428,   429,   430,    -1,   432,    -1,    -1,   164,
     436,   437,   438,   439,   440,   441,   442,     0,     1,    -1,
       3,    -1,    -1,   178,     4,    -1,     6,     0,     1,    -1,
       3,    -1,     1,    -1,     3,     4,   191,     6,     7,   194,
       9,    10,    -1,    -1,    24,    25,    -1,    -1,   203,   204,
      -1,    31,    32,   479,    -1,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,     0,     1,
      -1,     3,    -1,   228,   229,   230,   231,   232,   233,   234,
     235,    -1,   237,   238,   239,   240,   241,   242,   243,   244,
      -1,    -1,    -1,   248,   249,   250,   251,   252,   253,   254,
     255,    -1,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,    -1,    -1,   268,   269,   270,   271,   272,   273,   274,
     275,    -1,   277,   278,   279,   280,   281,   282,   283,     0,
       1,   286,     3,    -1,    -1,   290,   291,   292,   293,   294,
       0,     1,    -1,     3,     1,    -1,    30,     4,   303,     6,
       7,   306,    -1,    10,    -1,     0,     1,   312,     3,     0,
       1,    -1,     3,     0,     1,    -1,     3,    24,    25,     0,
       1,    -1,     3,    -1,    31,    32,    33,    -1,    35,    36,
      -1,    65,    66,     0,     1,   340,     3,     0,     1,    -1,
       3,    75,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   368,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,   125,    31,    32,    33,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,   408,    -1,   139,    -1,   412,   413,   414,
     415,   416,   417,   418,   148,   420,    -1,    -1,    -1,   424,
     425,   426,   427,   428,   429,   430,    -1,   432,    -1,    -1,
     164,   436,   437,   438,   439,   440,   441,   442,    -1,    -1,
      -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,   191,     6,     7,
     194,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,   203,
     204,    -1,    -1,    -1,   479,    -1,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,   228,   229,   230,   231,   232,   233,
     234,   235,    -1,   237,   238,    -1,    -1,    -1,    -1,    -1,
     244,    -1,    30,    -1,   248,   249,   250,   251,   252,   253,
     254,   255,    -1,   257,   258,    -1,    -1,    -1,    -1,    -1,
     264,    -1,    -1,    -1,   268,   269,   270,   271,   272,   273,
     274,   275,    -1,   277,   278,    -1,    -1,    65,    66,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,     1,   303,
       3,     4,   306,     6,     7,    -1,     9,    10,   312,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    -1,    -1,   340,   125,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,   139,    -1,    15,    16,    17,    18,    19,    -1,    -1,
     148,    -1,    24,    25,   368,    27,    28,    29,    -1,    31,
      32,    33,     6,    35,    36,    -1,   164,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     178,     8,    26,    27,    28,    29,    30,    -1,    15,    16,
      17,    18,    19,   191,   408,    -1,   194,    -1,   412,   413,
      27,    28,    29,    30,    -1,     8,   420,    -1,    -1,    -1,
     424,   425,    15,    16,    17,    18,    19,    -1,   432,    -1,
      -1,    -1,   436,   437,    27,    28,    29,    30,    -1,    -1,
     228,   229,   230,   231,   232,   233,   234,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,   244,    -1,    -1,    -1,
     248,   249,   250,   251,   252,   253,   254,   255,    -1,    30,
      -1,    -1,    -1,    -1,    -1,   479,   264,    -1,    -1,    -1,
     268,   269,   270,   271,   272,   273,   274,   275,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,    75,
       7,    -1,    -1,    79,    65,    66,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    75,   303,    -1,    78,   306,    -1,
      27,    28,    29,     1,   312,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    24,    25,    -1,   125,
      28,    29,   340,    31,    32,    33,    -1,    35,    36,    -1,
      -1,    -1,    -1,   139,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    65,    66,   139,    -1,
     368,    -1,    -1,    -1,     6,    -1,    75,   148,   164,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   178,   164,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,   191,    -1,   178,   194,    -1,
     408,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
     191,    -1,   420,   194,    -1,    -1,   125,    27,    28,    29,
      30,    -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,
     139,    -1,   228,   229,    -1,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,   244,    -1,
      -1,    -1,   248,   249,    -1,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,    -1,    -1,    -1,   248,   264,   178,
      -1,   479,   268,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   191,   264,    -1,   194,    -1,   268,    -1,     1,
     286,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,   286,    -1,   303,    -1,    -1,
     306,    -1,    24,    25,    -1,    -1,   312,    29,    -1,    31,
      32,    33,   303,    35,    36,   306,    -1,    -1,    -1,    -1,
      -1,   312,    -1,    -1,     1,   244,     3,     4,    -1,     6,
       7,    -1,     9,    10,   340,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,   264,    -1,    24,    25,   340,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      -1,    -1,   368,    -1,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,   368,     6,     7,
      -1,     9,    10,    -1,   303,    -1,    -1,   306,    -1,    -1,
      -1,    -1,    -1,   312,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,   408,    31,    32,    33,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,   420,    -1,    -1,   408,    -1,    -1,
      -1,   340,    -1,     8,    -1,    -1,   432,    12,    13,   420,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,   432,    27,    28,    29,    30,    -1,    -1,     1,   368,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   479,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    -1,    -1,    -1,    -1,   479,   408,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,   420,    27,    28,    29,    30,     1,    -1,     3,     4,
      -1,     6,     7,   432,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,
     479,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,     1,    -1,     3,     4,    -1,
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
      -1,    -1,    -1,    31,    32,    33,     1,    35,    36,     4,
       6,     6,     7,    -1,    -1,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    33,    -1,
      35,    36,     6,    -1,     8,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,     6,    -1,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,     6,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    26,    27,    28,    29,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    26,    27,    28,    29,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     6,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,     8,    -1,    -1,    11,    12,    13,    14,    15,
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
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
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
      22,    23,    -1,    -1,     8,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,     7,    27,    28,
      29,    30,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,     7,    27,    28,    29,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    27,    28,    29,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    27,    28,    29,    30,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    27,    28,    29,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,     7,    -1,    27,
      28,    29,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,     7,    15,    16,    17,    18,    19,    -1,    -1,
      15,    16,    17,    18,    19,    27,    28,    29,    -1,    -1,
      -1,    -1,    27,    28,    29,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    38,    39,    40,    41,    43,    45,     4,
       5,     0,    40,     6,     7,     4,     3,    30,    44,     7,
       4,     5,    10,    48,    30,     8,     4,     1,     3,     4,
       6,     7,     9,    24,    25,    31,    32,    33,    35,    36,
      41,    42,    47,    48,    49,    50,    51,    53,    54,    55,
      56,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      48,     3,     8,     4,     5,     6,    26,     4,    58,    66,
      66,    53,    49,    49,    49,     6,     6,     7,    29,    28,
      27,    15,    16,    17,    18,    19,    11,    12,    13,    14,
      20,    21,    22,    23,     4,     3,     4,    58,    67,    58,
      30,    58,    42,    57,    58,    60,    63,    61,    62,    63,
      63,    63,    63,    63,     4,    64,    64,    65,    65,    65,
      65,    65,     8,    46,     5,     8,    30,    30,     7,     3,
       4,    58,    47,    57,     4,     5,    46,    34,    52,     7,
      46,     4,    47,    57,    46,    30,    47,    10,     6,    24,
      25,    31,    32,    59,    60,    61,    62,    63,    64,    65,
      66,     4,     7,     4,     6,    24,    25,    31,    32,    59,
      60,    61,    62,    63,    64,    65,    66,     4,     6,    24,
      25,    31,    32,    59,    60,    61,    62,    63,    64,    65,
      66,     6,     4,     4,     6,    24,    25,    31,    32,    64,
      65,    66,     7,    12,    13,     1,     7,    10,    36,    48,
      50,    51,    53,    54,    55,    56,    58,     4,    42,    58,
       9,    41,    42,    47,    49,    58,    66,    66,    29,    28,
      27,    15,    16,    17,    18,    19,    11,    12,    13,    14,
      20,    21,    22,    23,     6,    58,    66,    66,    29,    28,
      27,    15,    16,    17,    18,    19,    11,    12,    13,    14,
      20,    21,    22,    23,     6,    58,    66,    66,    29,    28,
      27,    15,    16,    17,    18,    19,    11,    12,    13,    14,
      20,    21,    22,    23,    67,    26,     6,    58,    66,    66,
      14,    20,    21,    22,    23,    64,    64,     9,    41,    42,
      47,    49,    53,     6,     6,     7,    26,    49,    49,    49,
      30,     4,     6,    24,    25,    31,    32,    60,    63,    64,
      65,    66,    61,    62,    63,    63,    63,    63,    63,     4,
      64,    64,    65,    65,    65,    65,    65,    67,    30,     4,
       6,    24,    25,    31,    32,    60,    63,    64,    65,    66,
      61,    62,    63,    63,    63,    63,    63,     4,    64,    64,
      65,    65,    65,    65,    65,    67,    30,     4,     6,    24,
      25,    31,    32,    60,    63,    64,    65,    66,    61,    62,
      63,    63,    63,    63,    63,     4,    64,    64,    65,    65,
      65,    65,    65,    30,    58,    67,    30,    65,    65,    65,
      65,    65,    49,    49,    49,    58,    57,    58,     6,    58,
      66,    66,    12,    13,    14,    20,    21,    22,    23,    30,
       6,    58,    66,    66,    12,    13,    14,    20,    21,    22,
      23,    30,     6,    58,    66,    66,    12,    13,    14,    20,
      21,    22,    23,    30,    30,     7,    67,    30,    64,    64,
      65,    65,    65,    65,    65,    67,    30,    64,    64,    65,
      65,    65,    65,    65,    67,    30,    64,    64,    65,    65,
      65,    65,    65,    47,    57,    30,    30,    30,    52,     7,
      47,    57,    30,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    41,
      42,    43,    43,    44,    44,    44,    44,    45,    45,    46,
      46,    46,    47,    47,    47,    47,    47,    47,    48,    49,
      49,    49,    49,    50,    50,    51,    52,    53,    53,    54,
      55,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      61,    61,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    65,    65,    65,
      66,    66,    66,    66,    66,    67,    67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     4,
       3,     5,     4,     2,     6,     3,     8,     2,     3,     0,
       4,     5,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     2,     5,     7,     1,     1,     1,     2,     2,
       9,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     2,     2,
       1,     1,     3,     4,     1,     0,     1,     3
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
#line 54 "src/parser.y"
                  {;}
#line 2874 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 58 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2883 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 62 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 2893 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 70 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 2901 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 73 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 2909 "src/parser.c"
    break;

  case 7: /* GlobalDec: error  */
#line 76 "src/parser.y"
                        {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 2918 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 83 "src/parser.y"
                                     {
			char str[256];
			strcpy(str, (yyvsp[-2].string));
			add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true);
			strcat(str, " ");
			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);

		}
#line 2931 "src/parser.c"
    break;

  case 9: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 92 "src/parser.y"
                                          {
			char str[256];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");
			add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true);
			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);

		}
#line 2944 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT Expression  */
#line 103 "src/parser.y"
                                          {
			(yyval.state) = new_node("=", root);

			char str[256];
			strcpy(str, (yyvsp[-2].string));

			add_child((yyval.state), new_node(str, root));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2958 "src/parser.c"
    break;

  case 11: /* FunctionDefinition: FunctionHead LP FunctionArgs RP CompStatement  */
#line 115 "src/parser.y"
                                                 {
		(yyval.state) = new_node("FunctionDefinition", root);

		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));

		decrease_depth_scope(scope);
	}
#line 2972 "src/parser.c"
    break;

  case 12: /* FunctionDefinition: FunctionHead LP RP CompStatement  */
#line 125 "src/parser.y"
                                        {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

	}
#line 2984 "src/parser.c"
    break;

  case 13: /* FunctionArgs: TYPE IDENTIFIER  */
#line 135 "src/parser.y"
                        {
		(yyval.state) = new_node("FunctionParameters", root);

		add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, true);
		push_arg_to_arglist(s_table, (yyvsp[-1].string), last_f);
	}
#line 2995 "src/parser.c"
    break;

  case 14: /* FunctionArgs: TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 142 "src/parser.y"
                                                      {
		(yyval.state) = new_node("FunctionParameters", root);

		add_row_symbol_table(s_table, (yyvsp[-4].string), (yyvsp[-5].string), scope, true);
		push_arg_to_arglist(s_table, (yyvsp[-5].string), last_f);

		add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true);
		push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f);
	}
#line 3009 "src/parser.c"
    break;

  case 15: /* FunctionArgs: TYPE LIST IDENTIFIER  */
#line 152 "src/parser.y"
                             {
		(yyval.state) = new_node("FunctionParameters", root);

		char str[256];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");

		add_row_symbol_table(s_table, (yyvsp[0].string), str, scope, true);
		push_arg_to_arglist(s_table, str, last_f);	
	}
#line 3024 "src/parser.c"
    break;

  case 16: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 163 "src/parser.y"
                                                                {
		(yyval.state) = new_node("FunctionParameters", root);

		char arg_1[256];
		strcpy(arg_1, (yyvsp[-7].string));
		strcat(arg_1," LIST ");

		add_row_symbol_table(s_table, (yyvsp[-5].string), arg_1, scope, true);
		push_arg_to_arglist(s_table, arg_1, last_f);

		char arg_2[256];
		strcpy(arg_2, (yyvsp[-3].string));
		strcat(arg_2," LIST ");

		add_row_symbol_table(s_table, (yyvsp[-1].string), arg_2, scope, true);
		push_arg_to_arglist(s_table, arg_2, last_f);
	}
#line 3046 "src/parser.c"
    break;

  case 17: /* FunctionHead: TYPE IDENTIFIER  */
#line 183 "src/parser.y"
                        {
		char str[256];
		strcpy(str, (yyvsp[0].string));
		strcat(str, "()");

		(yyval.state) = new_node(str, root);
		add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, false);

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);

	}
#line 3064 "src/parser.c"
    break;

  case 18: /* FunctionHead: TYPE LIST IDENTIFIER  */
#line 197 "src/parser.y"
                             {
		char f_name[256];
		strcpy(f_name, (yyvsp[0].string));
		strcat(f_name, "()");

		(yyval.state) = new_node(f_name, root);

		char str[256];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");
		add_row_symbol_table(s_table, (yyvsp[0].string), str, scope, false);

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);
	}
#line 3085 "src/parser.c"
    break;

  case 19: /* ParamList: %empty  */
#line 216 "src/parser.y"
             {
			(yyval.state) = new_node("ParamList", root);
		}
#line 3093 "src/parser.c"
    break;

  case 20: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 220 "src/parser.y"
                                              {
			(yyval.state) = new_node("ParamList", root);
			add_child((yyval.state), (yyvsp[0].state));

			add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true);
			push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f);
		}
#line 3105 "src/parser.c"
    break;

  case 21: /* ParamList: COM TYPE LIST IDENTIFIER ParamList  */
#line 228 "src/parser.y"
                                                   {
			(yyval.state) = new_node("ParamList", root);
			add_child((yyval.state), (yyvsp[0].state));

			char str[256];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");

			add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true);
			push_arg_to_arglist(s_table, str, last_f);
		}
#line 3121 "src/parser.c"
    break;

  case 22: /* Statement: CompStatement  */
#line 244 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 3127 "src/parser.c"
    break;

  case 23: /* Statement: JmpStatement  */
#line 245 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 3133 "src/parser.c"
    break;

  case 24: /* Statement: SelStatement  */
#line 246 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 3139 "src/parser.c"
    break;

  case 25: /* Statement: ItStatement  */
#line 247 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 3145 "src/parser.c"
    break;

  case 26: /* Statement: ExpStatement  */
#line 248 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 3151 "src/parser.c"
    break;

  case 27: /* Statement: error  */
#line 249 "src/parser.y"
                      {yyerrok; (yyval.state) = NULL;}
#line 3157 "src/parser.c"
    break;

  case 28: /* CompStatement: LCB StatementExp  */
#line 253 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 3165 "src/parser.c"
    break;

  case 29: /* StatementExp: RCB  */
#line 259 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 3171 "src/parser.c"
    break;

  case 30: /* StatementExp: Declaration StatementExp  */
#line 260 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3181 "src/parser.c"
    break;

  case 31: /* StatementExp: Definition StatementExp  */
#line 265 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3191 "src/parser.c"
    break;

  case 32: /* StatementExp: Statement StatementExp  */
#line 270 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3201 "src/parser.c"
    break;

  case 33: /* SelStatement: IfHead LP Expression RP Statement  */
#line 278 "src/parser.y"
                                                  {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3212 "src/parser.c"
    break;

  case 34: /* SelStatement: IfHead LP Expression RP Statement ElseHead Statement  */
#line 284 "src/parser.y"
                                                                     {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3224 "src/parser.c"
    break;

  case 35: /* IfHead: IF  */
#line 294 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 3232 "src/parser.c"
    break;

  case 36: /* ElseHead: ELSE  */
#line 300 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 3241 "src/parser.c"
    break;

  case 37: /* ExpStatement: SEMI  */
#line 307 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 3247 "src/parser.c"
    break;

  case 38: /* ExpStatement: Expression SEMI  */
#line 308 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 3255 "src/parser.c"
    break;

  case 39: /* JmpStatement: RET ExpStatement  */
#line 314 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3264 "src/parser.c"
    break;

  case 40: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 321 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3277 "src/parser.c"
    break;

  case 41: /* ForHead: FOR  */
#line 332 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 3285 "src/parser.c"
    break;

  case 42: /* ExpAtt: Expression  */
#line 338 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 3293 "src/parser.c"
    break;

  case 43: /* ExpAtt: Definition  */
#line 342 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 3301 "src/parser.c"
    break;

  case 44: /* Expression: LogicalOrExpression  */
#line 349 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 3307 "src/parser.c"
    break;

  case 45: /* Expression: AdditiveExpression TWD IDENTIFIER  */
#line 351 "src/parser.y"
                                                    {
			(yyval.state) = new_node(":", root);
			add_child((yyval.state), (yyvsp[-2].state));
		}
#line 3316 "src/parser.c"
    break;

  case 46: /* LogicalOrExpression: LogicalAndExpression  */
#line 358 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 3322 "src/parser.c"
    break;

  case 47: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 359 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 3333 "src/parser.c"
    break;

  case 48: /* LogicalAndExpression: EqualityExpression  */
#line 368 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 3339 "src/parser.c"
    break;

  case 49: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 369 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3349 "src/parser.c"
    break;

  case 50: /* EqualityExpression: RelationalExpression  */
#line 377 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 3355 "src/parser.c"
    break;

  case 51: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 378 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3365 "src/parser.c"
    break;

  case 52: /* RelationalExpression: AdditiveExpression  */
#line 387 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 3371 "src/parser.c"
    break;

  case 53: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 388 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 3381 "src/parser.c"
    break;

  case 54: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 393 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3391 "src/parser.c"
    break;

  case 55: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 398 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3401 "src/parser.c"
    break;

  case 56: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 403 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3411 "src/parser.c"
    break;

  case 57: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 408 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3421 "src/parser.c"
    break;

  case 58: /* AdditiveExpression: MultiplicativeExpression  */
#line 416 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 3427 "src/parser.c"
    break;

  case 59: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 417 "src/parser.y"
                                                                 {
			(yyval.state) = new_node("+", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3437 "src/parser.c"
    break;

  case 60: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 422 "src/parser.y"
                                                        {
			(yyval.state) = new_node("-", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3447 "src/parser.c"
    break;

  case 61: /* MultiplicativeExpression: UnaryExpression  */
#line 430 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 3453 "src/parser.c"
    break;

  case 62: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 431 "src/parser.y"
                                                             {
			(yyval.state) = new_node("*", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3463 "src/parser.c"
    break;

  case 63: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 436 "src/parser.y"
                                                             {
			(yyval.state) = new_node("/", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3473 "src/parser.c"
    break;

  case 64: /* MultiplicativeExpression: MultiplicativeExpression TR UnaryExpression  */
#line 441 "src/parser.y"
                                                            {
			(yyval.state) = new_node("%", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3483 "src/parser.c"
    break;

  case 65: /* MultiplicativeExpression: MultiplicativeExpression MAP UnaryExpression  */
#line 447 "src/parser.y"
                                                         {
			(yyval.state) = new_node(">>", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3493 "src/parser.c"
    break;

  case 66: /* MultiplicativeExpression: MultiplicativeExpression FIL UnaryExpression  */
#line 452 "src/parser.y"
                                                         {
			(yyval.state) = new_node("<<", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3503 "src/parser.c"
    break;

  case 67: /* UnaryExpression: PrimaryExpression  */
#line 460 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 3509 "src/parser.c"
    break;

  case 68: /* UnaryExpression: TNR PrimaryExpression  */
#line 461 "src/parser.y"
                                      {
			(yyval.state) = new_node("!", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3518 "src/parser.c"
    break;

  case 69: /* UnaryExpression: HD PrimaryExpression  */
#line 465 "src/parser.y"
                                     {
			(yyval.state) = new_node("?", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3527 "src/parser.c"
    break;

  case 70: /* PrimaryExpression: IDENTIFIER  */
#line 471 "src/parser.y"
                           {(yyval.state) = new_node((yyvsp[0].string), root);}
#line 3533 "src/parser.c"
    break;

  case 71: /* PrimaryExpression: NUM_CONST  */
#line 473 "src/parser.y"
                      {
			char str[256];
			sprintf(str, "%lf", (yyvsp[0].num));
			(yyval.state) = new_node(str, root);
		}
#line 3543 "src/parser.c"
    break;

  case 72: /* PrimaryExpression: LP Expression RP  */
#line 479 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 3552 "src/parser.c"
    break;

  case 73: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 484 "src/parser.y"
                                        {
			(yyval.state) = new_node("FunctionCall", root);
			add_child((yyval.state), new_node((yyvsp[-3].string), root));
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 3562 "src/parser.c"
    break;

  case 74: /* PrimaryExpression: NIL  */
#line 490 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root);}
#line 3568 "src/parser.c"
    break;

  case 75: /* Params: %empty  */
#line 494 "src/parser.y"
               {(yyval.state) = new_node("Args", root);}
#line 3574 "src/parser.c"
    break;

  case 76: /* Params: Expression  */
#line 496 "src/parser.y"
                   {(yyval.state) = new_node("Args", root);}
#line 3580 "src/parser.c"
    break;

  case 77: /* Params: Params COM Expression  */
#line 498 "src/parser.y"
                              {(yyval.state) = new_node("Args", root); add_child((yyval.state), (yyvsp[-2].state));}
#line 3586 "src/parser.c"
    break;


#line 3590 "src/parser.c"

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

#line 501 "src/parser.y"

int yydebug = 1;

syntax_tree* parse() {
    root = new_syntax_tree();
	s_table = new_symbol_table();
	scope = new_scope_stack();
	last_f = 0;

    yyparse();

	if(!analyze_semantics(s_table, root)) {
		printf("\nNo semantic errors were found.\n");
	}

	show_table(s_table);

	char* line = (char*) malloc(1024);
	line[0] = (char) 0;
	show_tree(root->element_list[root->tree_size-1], line, true);

	free_table(s_table);
	yylex_destroy();
	free_tree(root);
	free_scope(scope);

	free(line);

    return root;
}

 void yyerror (char const *s) {
   fprintf (stderr, "\033[91m%s, at ln %lu col %lu\033[0m\n", s, n_line, n_column);
 }
