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
  YYSYMBOL_STR = 33,                       /* STR  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_RET = 37,                       /* RET  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_ROOT_TREE = 39,                 /* ROOT_TREE  */
  YYSYMBOL_GlobalDef = 40,                 /* GlobalDef  */
  YYSYMBOL_GlobalDec = 41,                 /* GlobalDec  */
  YYSYMBOL_Declaration = 42,               /* Declaration  */
  YYSYMBOL_Definition = 43,                /* Definition  */
  YYSYMBOL_FunctionDefinition = 44,        /* FunctionDefinition  */
  YYSYMBOL_FunctionArgs = 45,              /* FunctionArgs  */
  YYSYMBOL_FunctionHead = 46,              /* FunctionHead  */
  YYSYMBOL_ParamList = 47,                 /* ParamList  */
  YYSYMBOL_Statement = 48,                 /* Statement  */
  YYSYMBOL_CompStatement = 49,             /* CompStatement  */
  YYSYMBOL_StatementExp = 50,              /* StatementExp  */
  YYSYMBOL_SelStatement = 51,              /* SelStatement  */
  YYSYMBOL_IfHead = 52,                    /* IfHead  */
  YYSYMBOL_ElseHead = 53,                  /* ElseHead  */
  YYSYMBOL_ExpStatement = 54,              /* ExpStatement  */
  YYSYMBOL_JmpStatement = 55,              /* JmpStatement  */
  YYSYMBOL_ItStatement = 56,               /* ItStatement  */
  YYSYMBOL_ForHead = 57,                   /* ForHead  */
  YYSYMBOL_ExpAtt = 58,                    /* ExpAtt  */
  YYSYMBOL_Expression = 59,                /* Expression  */
  YYSYMBOL_LogicalOrExpression = 60,       /* LogicalOrExpression  */
  YYSYMBOL_LogicalAndExpression = 61,      /* LogicalAndExpression  */
  YYSYMBOL_EqualityExpression = 62,        /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 63,      /* RelationalExpression  */
  YYSYMBOL_AdditiveExpression = 64,        /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 65,  /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 66,           /* UnaryExpression  */
  YYSYMBOL_PrimaryExpression = 67,         /* PrimaryExpression  */
  YYSYMBOL_Params = 68                     /* Params  */
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
#define YYLAST   6531

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  485

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    59,    63,    71,    74,    77,    84,    93,
     104,   135,   145,   155,   162,   172,   183,   203,   217,   236,
     240,   248,   264,   265,   266,   267,   268,   269,   273,   279,
     280,   285,   290,   298,   304,   314,   320,   327,   328,   334,
     341,   352,   358,   362,   369,   371,   380,   381,   390,   391,
     399,   400,   409,   410,   415,   420,   425,   430,   438,   439,
     444,   452,   453,   458,   463,   468,   476,   477,   481,   485,
     491,   504,   510,   515,   532,   536,   538,   540,   542
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
  "ATT", "COMP_EQ", "AND", "OR", "RP", "NUM_CONST", "NIL", "STR", "IF",
  "ELSE", "FOR", "RET", "$accept", "ROOT_TREE", "GlobalDef", "GlobalDec",
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

#define YYPACT_NINF (-165)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-79)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      87,   347,    20,     4,   390,   394,   447,   464,     2,   138,
      12,  -165,   468,     0,   499,   156,   195,    43,    -2,   525,
      -3,    57,  3701,   545,    43,    48,    47,  3738,   315,  4674,
     133,  3775,   564,     5,     5,     5,  5131,  5150,    66,    78,
      72,  3701,  3701,  3701,  3812,   587,  3849,   101,  3886,  3923,
    3960,   113,    86,   111,    41,    14,   707,  1495,  5169,  5188,
    5207,   600,    60,   139,   121,   127,    50,   234,  4624,   106,
    5226,  5245,  5264,  3997,   700,   728,   748,   133,   269,  4034,
     457,   457,   457,   457,   457,   457,   457,   457,   150,   473,
     473,   473,   473,   473,   473,   122,   120,   165,   125,   173,
     175,  4071,  5283,   152,   201,   203,   206,    58,  3221,    95,
     981,  3258,  3295,  3332,  3369,  3406,   215,  5302,  5321,  5340,
    5359,  5378,  5397,   228,   213,   229,   621,  5416,   170,   269,
     322,   122,   212,   861,   243,   122,   263,   239,   375,   574,
     850,   244,   122,  4108,   257,   273,   574,  4145,  4182,   133,
      13,    13,    13,  6181,  6201,   309,   159,   359,  4255,  6501,
    6221,  6241,  6261,  4722,  4219,  4579,   133,    28,    28,    28,
    4762,  4785,   118,   189,   405,  1280,  1421,  4808,  4831,  4854,
     914,   133,   128,   128,   128,  1166,  1726,  1118,  1376,   736,
    1635,   654,  1807,  1851,  1888,    50,  4698,  4740,   133,   137,
     137,   137,  5798,  5816,  5834,  5852,  5870,  4256,   457,   457,
    1531,  1679,  4293,    85,  3183,  3220,   293,  3257,  3294,  3331,
     300,   324,  4599,   283,   286,  4330,  4182,  4182,  4182,  4367,
     314,  6281,  6301,  6321,  1200,  1200,  1200,  1200,  1200,  1200,
    1200,  1200,   342,   133,   133,   133,   133,   133,   133,    50,
     321,  4877,  4900,  4923,  1238,  1238,  1238,  1238,  1238,  1238,
    1238,  1238,   350,   621,   621,   621,   621,   621,   621,    50,
     343,  1925,  1962,  1999,  1262,  1262,  1262,  1262,  1262,  1262,
    1262,  1262,   373,   234,   234,   234,   234,   234,   234,   217,
     473,    50,   353,  5888,  5906,  5924,   457,   457,   457,   457,
    5942,  5960,  3368,  4293,  4293,  4293,  3405,  3442,   133,   269,
    3479,   133,  4404,  4441,  4478,  6341,  3182,   133,   180,   180,
     180,  3441,  3478,   249,  4033,  3515,  3552,  3589,   463,  4292,
    4070,  4107,  4144,  4181,  4218,   372,  6361,  6381,  6401,  6421,
    6441,  6461,   231,  4946,  4649,   133,   192,   192,   192,  5434,
    5457,   256,  1454,  5480,  5503,  5526,   409,  6161,  1563,  6086,
    6109,  6132,  6155,   268,  4969,  4992,  5015,  5038,  5061,  5084,
     274,  2036,  2332,   133,   264,   264,   264,  2369,  2406,  3146,
    1598,  2443,  2480,  2517,  1010,  3109,  1770,  2961,  2998,  3035,
    3072,  4515,  2073,  2110,  2147,  2184,  2221,  2258,  6481,   398,
     282,  5978,  5996,  6014,  6032,  6050,  3516,  3553,  3590,   380,
     411,   389,    50,   392,  3626,  3663,  3700,  1200,  1200,  1200,
    1200,  1200,  1200,  5107,    50,   393,  5549,  5572,  5595,  1238,
    1238,  1238,  1238,  1238,  1238,  2295,    50,   399,  2554,  2591,
    2628,  1262,  1262,  1262,  1262,  1262,  1262,  6068,   170,   269,
     294,  3737,  3774,  3811,  3848,  3885,  3922,  3959,   306,  5618,
    5641,  5664,  5687,  5710,  5733,  5756,   307,  2665,  2702,  2739,
    2776,  2813,  2850,  2887,  4552,   421,  3996,  5779,  2924,   170,
     850,  3627,   400,   170,  3664
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
       0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,   436,    18,   -77,  -165,  -165,  -165,   176,
    -113,   -17,    25,  -116,  -115,   -21,   -34,  -114,  -108,  -105,
    -100,   -28,  1379,  1295,  1225,   -20,  1079,   823,   549,   275,
    -164
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    41,    42,     7,    18,     8,   124,
      43,    44,    45,    46,    47,   139,    48,    49,    50,    51,
     105,    52,    53,    54,    55,    56,    57,    58,    59,    60,
     100
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   104,    69,    16,    11,    25,    73,    61,    13,   163,
     158,    30,   215,   216,   218,   133,    15,    68,     6,   149,
     219,   -48,     6,   220,     9,    10,   143,   -13,    24,   134,
      17,   289,   165,   147,   166,   228,    36,    37,    99,   101,
     144,    82,   -48,   -48,   153,   154,   175,   190,   -46,   103,
     106,    62,   104,    22,   165,    63,   166,   158,   -75,   170,
     171,    26,   110,   223,    95,   -47,    74,    75,    76,    81,
     -46,   227,   -35,   167,   168,   169,   163,   -15,    30,    31,
     -75,   170,   171,    98,   -41,   342,    81,   -47,     1,   163,
       2,    30,   211,    79,   217,    33,    34,    35,   132,   305,
     221,   106,   -49,    36,    37,   370,   175,    77,    33,    34,
      35,   214,   224,   228,   228,   228,    36,    37,   -44,    78,
     158,   230,    82,   -49,   -49,   125,   -44,   400,   164,   158,
     123,    97,   180,   -78,   181,   304,   102,    68,   250,   149,
      80,   197,    96,   198,   -17,    14,   158,   254,   -44,   227,
     227,   227,   -19,   270,   116,   -78,   150,   151,   152,   185,
     186,   158,   -18,    19,   153,   154,   226,    99,   202,   203,
     292,   210,   207,   229,   163,   175,    30,   211,   158,   307,
     212,   -76,   128,   126,   316,   221,   317,   235,   -46,   -46,
     305,   305,   305,    33,    34,    35,   344,   -46,   345,    20,
      21,    36,    37,   -76,    38,   127,    39,   213,   -43,   410,
     129,   321,   322,   -42,   158,   158,   329,   255,   -46,   -46,
     -77,    99,   -45,   349,   350,   126,   304,   304,   304,   175,
     303,   130,   104,   131,   175,   175,   357,   306,   180,   126,
     181,    99,   -77,   -14,   226,   226,   226,   398,   450,   175,
     140,   312,   313,   314,   190,   190,   385,   182,   183,   184,
     458,   423,   399,    99,   -47,   185,   186,   142,   372,   -16,
     373,   175,   466,   196,   -20,    30,   -45,   235,   -47,   -47,
     409,   106,   126,   411,   255,   -47,   -47,   146,   158,   413,
     126,   158,    33,    34,    35,   377,   378,   158,   -45,   308,
      36,    37,   126,   -21,   435,   162,   309,   137,    70,    71,
      72,   141,   447,   -43,   126,   126,   -42,   425,   145,    64,
      65,   303,   303,   303,   476,   158,   135,   136,   406,   407,
     408,   310,   215,   216,   218,   474,   477,   478,   234,   -44,
     219,   179,   194,   220,   315,   437,   335,    -7,    -7,   475,
      -7,   343,   162,   158,   363,   206,   206,   206,   206,   206,
     206,   206,   206,   215,   216,   218,   481,   215,   216,   218,
     484,   219,   104,   371,   220,   219,   -36,   391,   220,   -36,
     482,   -36,   -36,   401,    99,   -36,   236,   -48,   -48,   -48,
      -2,     1,   175,     2,    -3,    -3,    99,    -3,   -36,   -36,
     -36,   179,   -45,   223,   175,   -10,   -36,   -36,    99,   -36,
     448,   -36,   -36,   -48,   217,   162,   175,   -49,   449,   -10,
     221,   106,   451,   459,   162,   231,   232,   233,   480,   467,
     483,   214,   256,   -48,   -48,   -48,   256,   -49,   -49,   -49,
      12,   162,   251,   252,   253,   217,     0,    -5,    -5,   217,
      -5,   221,   224,   479,     0,   221,   162,   271,   272,   273,
     158,   197,   214,   198,    -6,    -6,   214,    -6,    -4,    -4,
     179,    -4,     0,   162,   293,   294,   295,   163,     0,    30,
     199,   200,   201,   206,   206,     0,     0,     0,   202,   203,
     236,   -49,   -49,   -49,     0,     0,    33,    34,    35,    -8,
      -8,     0,    -8,     0,    36,    37,     0,     0,     0,   327,
     327,   327,   327,   327,   327,   327,   327,     0,   162,   162,
     162,   162,   162,   162,   179,    -9,    -9,     0,    -9,   355,
     355,   355,   355,   355,   355,   355,   355,     0,   179,   179,
     179,   179,   179,   179,   179,   -12,   -12,     0,   -12,   383,
     383,   383,   383,   383,   383,   383,   383,     0,   194,   194,
     194,   194,   194,   194,   -29,   -29,   179,   -29,     0,     0,
       0,   206,   206,   206,   206,    27,     0,     0,   163,   161,
      30,    31,     0,   162,   148,     0,   162,   -28,   -28,     0,
     -28,     0,   162,   414,   415,   416,     0,    33,    34,    35,
     -11,   -11,     0,   -11,     0,    36,    37,     0,    38,     0,
      39,    40,     0,     0,     0,   178,   193,     0,     0,     0,
     162,   426,   427,   428,     0,   165,   161,   166,     0,   205,
     205,   205,   205,   205,   205,   205,   205,     0,     0,     0,
     119,   120,   121,   122,   167,   168,   169,     0,   162,   438,
     439,   440,   170,   171,     0,   -52,     0,   -52,   -52,     0,
     -52,   -52,     0,   -52,   -52,   282,   283,   284,     0,   -52,
     -52,   -52,   -52,   -52,     0,   178,     0,   -52,   -52,   -52,
       0,   -52,   -52,   -52,     0,   -52,   -52,   179,   -52,   161,
     -52,   -52,   327,   327,   327,   327,   327,   327,   161,   179,
     -30,   -30,     0,   -30,   355,   355,   355,   355,   355,   355,
       0,   179,     0,     0,   -50,   161,   383,   383,   383,   383,
     383,   383,    83,    84,    85,    86,    87,     0,   -31,   -31,
     161,   -31,     0,     0,   -50,   -50,   -50,   -48,     0,   -48,
     -48,     0,   -48,   -48,   178,   -48,   -48,   161,   -32,   -32,
       0,   -32,     0,     0,     0,   162,     0,   205,   205,   -48,
     -48,   -48,     0,   276,   -48,   -48,     0,   -48,   -48,     0,
     -48,     0,   -48,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   326,   326,   326,   326,   326,   326,   326,
     326,     0,   161,   161,   338,   339,   340,   341,   178,     0,
       0,     0,     0,   354,   354,   354,   354,   354,   354,   354,
     354,     0,   178,   178,   366,   367,   368,   369,   178,     0,
       0,     0,     0,   382,   382,   382,   382,   382,   382,   382,
     382,     0,   193,   193,   394,   395,   396,   397,     0,     0,
     178,     0,     0,     0,     0,   402,   403,   404,   405,     0,
       0,     0,     0,   160,   222,     0,   149,   161,     0,     0,
     161,     0,   -33,     0,   -33,   -33,   161,   -33,   -33,     0,
     -33,   -33,     0,   150,   151,   152,     0,     0,     0,     0,
       0,   153,   154,     0,   -33,   -33,   -33,     0,     0,   177,
     192,     0,   -33,   -33,   161,   -33,   138,   -33,   -33,     0,
     160,     0,     0,   204,   204,   204,   204,   204,   204,   204,
     204,     0,   117,   118,     0,   -70,     0,   -70,   -70,     0,
     269,   -70,   161,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   -70,   -70,   -70,     0,   -70,   -70,     0,   -70,   177,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,     0,   160,     0,     0,   326,   326,   454,   455,
     456,   457,   160,   178,     0,     0,     0,     0,   354,   354,
     462,   463,   464,   465,     0,   178,     0,     0,   -51,   160,
     382,   382,   470,   471,   472,   473,    83,    84,    85,    86,
      87,     0,     0,     0,   160,     0,     0,     0,   -51,   -51,
     -51,   -49,     0,   -49,   -49,     0,   -49,   -49,   177,   -49,
     -49,   160,     0,     0,     0,     0,     0,     0,     0,   161,
       0,   300,   301,   -49,   -49,   -49,     0,   276,   -49,   -49,
       0,   -49,   -49,     0,   -49,     0,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   325,   325,   325,
     325,   325,   325,   325,   325,     0,   336,   337,     0,     0,
       0,     0,   177,     0,     0,     0,     0,   353,   353,   353,
     353,   353,   353,   353,   353,     0,   364,   365,     0,     0,
       0,     0,   177,     0,     0,     0,     0,   381,   381,   381,
     381,   381,   381,   381,   381,     0,   392,   393,     0,   159,
       0,     0,     0,     0,   177,     0,     0,     0,     0,   -44,
       0,   -44,   -44,     0,   -44,   -44,     0,   -44,   -44,     0,
       0,   160,     0,     0,   160,     0,     0,     0,     0,     0,
     160,   -44,   -44,   -44,     0,   176,   191,   274,     0,   -44,
     -44,     0,   -44,     0,   -44,   -44,   159,     0,     0,   108,
     108,   108,   111,   112,   113,   114,   115,   -71,   160,   -71,
     -71,     0,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   160,   -71,   -71,     0,
     -71,     0,   -71,   -71,   316,   176,   317,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   159,
       0,     0,     0,   318,   319,   320,     0,     0,   159,     0,
       0,   321,   322,     0,     0,   177,     0,     0,     0,     0,
     452,   453,   344,     0,   345,   159,     0,   177,     0,     0,
       0,     0,   460,   461,     0,   157,     0,     0,     0,   177,
     159,   346,   347,   348,   468,   469,   372,     0,   373,   349,
     350,     0,     0,     0,   176,     0,     0,   159,     0,     0,
       0,     0,     0,     0,     0,   374,   375,   376,   -50,     0,
       0,   174,   189,   377,   378,   257,   258,   259,   260,   261,
       0,     0,   157,   160,     0,     0,   109,   -50,   -50,   -50,
     -50,     0,     0,   324,   324,   324,   330,   331,   332,   333,
     334,     0,     0,     0,     0,   156,     0,     0,   176,     0,
       0,     0,     0,   352,   352,   352,   358,   359,   360,   361,
     362,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,   174,     0,   380,   380,   380,   386,   387,   388,   389,
     390,   173,   188,     0,     0,   157,     0,     0,     0,     0,
     176,     0,   156,     0,   157,   107,     0,   -46,     0,   -46,
     -46,     0,   -46,   -46,     0,   -46,   -46,   159,     0,     0,
     159,   157,     0,     0,     0,     0,   159,     0,     0,   -46,
     -46,   -46,     0,     0,   275,   -46,   157,   -46,   -46,   155,
     -46,     0,   -46,   -46,     0,     0,     0,     0,     0,     0,
     174,   173,     0,   157,   159,     0,     0,     0,     0,   -52,
       0,     0,   262,   263,   264,   156,   -52,   -52,   -52,   -52,
     -52,     0,     0,     0,   156,   172,   187,     0,   -52,   -52,
     -52,   -52,   159,     0,     0,     0,   155,     0,     0,   157,
     328,   156,   -52,     0,     0,     0,   429,   430,     0,   -52,
     -52,   -52,   -52,   -52,   174,     0,   156,     0,     0,   174,
     356,   -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,
     173,   176,     0,   156,   174,     0,     0,     0,     0,   189,
     384,     0,   -52,   176,     0,   172,    88,    89,    90,     0,
     -52,   -52,   -52,   -52,   -52,   176,   174,     0,     0,   155,
       0,     0,   -52,   -52,   -52,     0,     0,     0,   155,   323,
       0,     0,   -27,   157,   -27,   -27,   157,   -27,   -27,     0,
     -27,   -27,   157,     0,   173,   155,     0,     0,     0,   351,
       0,     0,     0,     0,   -27,   -27,   -27,     0,     0,   159,
     155,     0,   -27,   -27,   173,   -27,   -27,   -27,   -27,   379,
     157,   -55,     0,     0,   172,   429,   430,   155,   -55,   -55,
     -55,   -55,   -55,     0,     0,     0,   173,     0,     0,     0,
     -55,   -55,   -55,   -55,     0,     0,     0,     0,   157,   -52,
       0,   -52,   -52,   156,   -52,   -52,   156,   -52,   -52,     0,
     441,   442,   156,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,   -52,   -52,   -52,     0,   -52,   -52,   -52,   172,   -52,
     -52,     0,   -52,     0,   -52,   -52,   -50,   174,   -50,   -50,
     156,   -50,   -50,     0,   -50,   -50,     0,     0,   172,   174,
     277,   278,   279,   280,   281,     0,     0,     0,   -50,   -50,
     -50,   174,   -50,   -50,   -50,     0,   -50,   -50,   156,   -50,
     172,   -50,   -50,     0,     0,     0,     0,     0,     0,     0,
     -37,     0,   -37,   -37,     0,   -37,   -37,   155,   -37,   -37,
     155,     0,     0,     0,     0,     0,   155,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   157,     0,   173,     0,     0,
     -37,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,   173,
       0,     0,     0,     0,   155,     0,     0,   -74,     0,   -74,
     -74,   173,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   155,   -74,   -74,   -74,     0,   -74,   -74,     0,
     -74,     0,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,   -55,     0,   -55,   -55,   156,   -55,   -55,     0,   -55,
     -55,     0,   441,   442,     0,   -55,   -55,   -55,   -55,   -55,
       0,   172,     0,   -55,   -55,   -55,     0,   -55,   -55,   -55,
       0,   -55,   -55,   172,   -55,     0,   -55,   -55,   -58,     0,
     -58,   -58,     0,   -58,   -58,   172,   -58,   -58,   -58,   -58,
     -58,   285,   -58,   -58,   -58,   -58,   -58,   286,   287,   288,
     -58,   -58,   -58,     0,   -58,   -58,   -58,     0,   -58,   -58,
       0,   -58,     0,   -58,   -58,     0,     0,     0,     0,     0,
       0,     0,   -61,     0,   -61,   -61,     0,   -61,   -61,   155,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,
     -61,     0,   -61,   -61,     0,   -61,     0,   -61,   -61,   -66,
       0,   -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,     0,   -66,
     -66,     0,   -66,     0,   -66,   -66,   -69,     0,   -69,   -69,
       0,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,     0,   -69,   -69,     0,   -69,
       0,   -69,   -69,   -67,     0,   -67,   -67,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -67,     0,   -67,   -67,     0,   -67,     0,   -67,   -67,
     -68,     0,   -68,   -68,     0,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,     0,
     -68,   -68,     0,   -68,     0,   -68,   -68,   -72,     0,   -72,
     -72,     0,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,     0,
     -72,     0,   -72,   -72,   -59,     0,   -59,   -59,     0,   -59,
     -59,     0,   -59,   -59,   -59,   -59,   -59,   285,   -59,   -59,
     -59,   -59,   -59,   286,   287,   288,   -59,   -59,   -59,     0,
     -59,   -59,   -59,     0,   -59,   -59,     0,   -59,     0,   -59,
     -59,   -60,     0,   -60,   -60,     0,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   285,   -60,   -60,   -60,   -60,   -60,
     286,   287,   288,   -60,   -60,   -60,     0,   -60,   -60,   -60,
       0,   -60,   -60,     0,   -60,     0,   -60,   -60,   -62,     0,
     -62,   -62,     0,   -62,   -62,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,   -62,
       0,   -62,     0,   -62,   -62,   -64,     0,   -64,   -64,     0,
     -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,     0,   -64,   -64,     0,   -64,     0,
     -64,   -64,   -65,     0,   -65,   -65,     0,   -65,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,
     -65,     0,   -65,   -65,     0,   -65,     0,   -65,   -65,   -63,
       0,   -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,     0,   -63,
     -63,     0,   -63,     0,   -63,   -63,   -73,     0,   -73,   -73,
       0,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,     0,   -73,   -73,     0,   -73,
       0,   -73,   -73,   -70,     0,   -70,   -70,     0,   436,   -70,
       0,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,     0,   -70,   -70,     0,   -70,     0,   -70,   -70,
     -71,     0,   -71,   -71,     0,   -71,   -71,     0,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,     0,
     -71,   -71,     0,   -71,     0,   -71,   -71,   -74,     0,   -74,
     -74,     0,   -74,   -74,     0,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,     0,
     -74,     0,   -74,   -74,   -58,     0,   -58,   -58,     0,   -58,
     -58,     0,   -58,   -58,     0,   -58,   -58,   443,   -58,   -58,
     -58,   -58,   -58,   444,   445,   446,   -58,   -58,   -58,     0,
     -58,   -58,   -58,     0,   -58,   -58,     0,   -58,     0,   -58,
     -58,   -61,     0,   -61,   -61,     0,   -61,   -61,     0,   -61,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,
       0,   -61,   -61,     0,   -61,     0,   -61,   -61,   -66,     0,
     -66,   -66,     0,   -66,   -66,     0,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,
       0,   -66,     0,   -66,   -66,   -69,     0,   -69,   -69,     0,
     -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,     0,   -69,   -69,     0,   -69,     0,
     -69,   -69,   -67,     0,   -67,   -67,     0,   -67,   -67,     0,
     -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,     0,   -67,   -67,     0,   -67,     0,   -67,   -67,   -68,
       0,   -68,   -68,     0,   -68,   -68,     0,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,
     -68,     0,   -68,     0,   -68,   -68,   -72,     0,   -72,   -72,
       0,   -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,     0,   -72,   -72,     0,   -72,
       0,   -72,   -72,   -59,     0,   -59,   -59,     0,   -59,   -59,
       0,   -59,   -59,     0,   -59,   -59,   443,   -59,   -59,   -59,
     -59,   -59,   444,   445,   446,   -59,   -59,   -59,     0,   -59,
     -59,   -59,     0,   -59,   -59,     0,   -59,     0,   -59,   -59,
     -60,     0,   -60,   -60,     0,   -60,   -60,     0,   -60,   -60,
       0,   -60,   -60,   443,   -60,   -60,   -60,   -60,   -60,   444,
     445,   446,   -60,   -60,   -60,     0,   -60,   -60,   -60,     0,
     -60,   -60,     0,   -60,     0,   -60,   -60,   -62,     0,   -62,
     -62,     0,   -62,   -62,     0,   -62,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,     0,   -62,   -62,   -62,     0,   -62,   -62,     0,
     -62,     0,   -62,   -62,   -64,     0,   -64,   -64,     0,   -64,
     -64,     0,   -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,     0,   -64,   -64,     0,   -64,     0,   -64,
     -64,   -65,     0,   -65,   -65,     0,   -65,   -65,     0,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,
       0,   -65,   -65,     0,   -65,     0,   -65,   -65,   -63,     0,
     -63,   -63,     0,   -63,   -63,     0,   -63,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   -63,   -63,   -63,     0,   -63,   -63,
       0,   -63,     0,   -63,   -63,   -73,     0,   -73,   -73,     0,
     -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -73,     0,   -73,   -73,     0,   -73,     0,
     -73,   -73,   -56,     0,   -56,   -56,     0,   -56,   -56,     0,
     -56,   -56,     0,   441,   442,     0,   -56,   -56,   -56,   -56,
     -56,     0,     0,     0,   -56,   -56,   -56,     0,   -56,   -56,
     -56,     0,   -56,   -56,     0,   -56,     0,   -56,   -56,   -53,
       0,   -53,   -53,     0,   -53,   -53,     0,   -53,   -53,     0,
     441,   442,     0,   -53,   -53,   -53,   -53,   -53,     0,     0,
       0,   -53,   -53,   -53,     0,   -53,   -53,   -53,     0,   -53,
     -53,     0,   -53,     0,   -53,   -53,   -54,     0,   -54,   -54,
       0,   -54,   -54,     0,   -54,   -54,     0,   441,   442,     0,
     -54,   -54,   -54,   -54,   -54,     0,     0,     0,   -54,   -54,
     -54,     0,   -54,   -54,   -54,     0,   -54,   -54,     0,   -54,
       0,   -54,   -54,   -57,     0,   -57,   -57,     0,   -57,   -57,
       0,   -57,   -57,     0,   441,   442,     0,   -57,   -57,   -57,
     -57,   -57,     0,     0,     0,   -57,   -57,   -57,     0,   -57,
     -57,   -57,     0,   -57,   -57,     0,   -57,     0,   -57,   -57,
     -51,     0,   -51,   -51,     0,   -51,   -51,     0,   -51,   -51,
       0,     0,     0,     0,   277,   278,   279,   280,   281,     0,
       0,     0,   -51,   -51,   -51,     0,   -51,   -51,   -51,     0,
     -51,   -51,     0,   -51,     0,   -51,   -51,   -47,     0,   -47,
     -47,     0,   -47,   -47,     0,   -47,   -47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -47,
     -47,   -47,     0,     0,   275,   -47,     0,   -47,   -47,     0,
     -47,     0,   -47,   -47,   -22,     0,   -22,   -22,   412,   -22,
     -22,     0,   -22,   -22,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -22,   -22,   -22,   -70,
     -70,   -70,   -70,     0,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -24,     0,   -24,   -24,     0,   -24,   -24,   -52,   -24,
     -24,     0,     0,   208,   209,     0,   -52,   -52,   -52,   -52,
     -52,     0,     0,   -24,   -24,   -24,     0,     0,   -52,   -52,
     -52,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -26,     0,
     -26,   -26,     0,   -26,   -26,   -55,   -26,   -26,     0,     0,
     208,   209,     0,   -55,   -55,   -55,   -55,   -55,     0,     0,
     -26,   -26,   -26,     0,     0,   -55,   -55,   -55,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -23,     0,   -23,   -23,     0,
     -23,   -23,   -56,   -23,   -23,     0,     0,   208,   209,     0,
     -56,   -56,   -56,   -56,   -56,     0,     0,   -23,   -23,   -23,
       0,     0,   -56,   -56,   -56,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -25,     0,   -25,   -25,     0,   -25,   -25,   -53,
     -25,   -25,     0,     0,   208,   209,     0,   -53,   -53,   -53,
     -53,   -53,     0,     0,   -25,   -25,   -25,     0,     0,   -53,
     -53,   -53,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -29,
       0,   -29,   -29,     0,   -29,   -29,   -54,   -29,   -29,     0,
       0,   208,   209,     0,   -54,   -54,   -54,   -54,   -54,     0,
       0,   -29,   -29,   -29,     0,     0,   -54,   -54,   -54,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -28,     0,   -28,   -28,
       0,   -28,   -28,   -57,   -28,   -28,     0,     0,   208,   209,
       0,   -57,   -57,   -57,   -57,   -57,     0,     0,   -28,   -28,
     -28,     0,     0,   -57,   -57,   -57,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -39,     0,   -39,   -39,     0,   -39,   -39,
       0,   -39,   -39,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -39,   -39,   -39,   -71,   -71,
     -71,   -71,     0,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -38,     0,   -38,   -38,     0,   -38,   -38,     0,   -38,   -38,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -38,   -38,   -38,   -74,   -74,   -74,   -74,     0,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -30,     0,   -30,
     -30,     0,   -30,   -30,     0,   -30,   -30,   -58,   -58,   419,
     -58,   -58,   -58,   -58,   -58,   420,   421,   422,     0,   -30,
     -30,   -30,   -58,   -58,   -58,   -58,     0,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -31,     0,   -31,   -31,     0,   -31,
     -31,     0,   -31,   -31,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   -31,   -31,   -31,   -61,
     -61,   -61,   -61,     0,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,   -32,
     -32,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -32,   -32,   -32,   -66,   -66,   -66,   -66,
       0,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -34,     0,
     -34,   -34,     0,   -34,   -34,     0,   -34,   -34,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -34,   -34,   -34,   -69,   -69,   -69,   -69,     0,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -40,     0,   -40,   -40,     0,
     -40,   -40,     0,   -40,   -40,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -40,   -40,   -40,
     -67,   -67,   -67,   -67,     0,   -40,   -40,     0,   -40,   -40,
     -40,   -40,    27,     0,    28,    29,     0,    30,    31,     0,
      32,   148,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,    33,    34,    35,   -68,   -68,   -68,
     -68,     0,    36,    37,     0,    38,     0,    39,    40,   -27,
       0,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -27,   -27,   -27,   -72,   -72,   -72,   -72,     0,   -27,
     -27,     0,   -27,     0,   -27,   -27,   -37,     0,   -37,   -37,
       0,   -37,   -37,     0,   -37,   -37,   -59,   -59,   419,   -59,
     -59,   -59,   -59,   -59,   420,   421,   422,     0,   -37,   -37,
     -37,   -59,   -59,   -59,   -59,     0,   -37,   -37,     0,   -37,
       0,   -37,   -37,   -22,     0,   -22,   -22,     0,   -22,   -22,
       0,   -22,   -22,   -60,   -60,   419,   -60,   -60,   -60,   -60,
     -60,   420,   421,   422,     0,   -22,   -22,   -22,   -60,   -60,
     -60,   -60,     0,   -22,   -22,     0,   -22,     0,   -22,   -22,
     -24,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,   -24,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,     0,   -24,   -24,   -24,   -62,   -62,   -62,   -62,     0,
     -24,   -24,     0,   -24,     0,   -24,   -24,   -26,     0,   -26,
     -26,     0,   -26,   -26,     0,   -26,   -26,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -26,
     -26,   -26,   -64,   -64,   -64,   -64,     0,   -26,   -26,     0,
     -26,     0,   -26,   -26,   -23,     0,   -23,   -23,     0,   -23,
     -23,     0,   -23,   -23,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,   -23,   -23,   -23,   -65,
     -65,   -65,   -65,     0,   -23,   -23,     0,   -23,     0,   -23,
     -23,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,   -25,
     -25,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -25,   -25,   -25,   -63,   -63,   -63,   -63,
       0,   -25,   -25,     0,   -25,     0,   -25,   -25,   -39,     0,
     -39,   -39,     0,   -39,   -39,     0,   -39,   -39,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
     -39,   -39,   -39,   -73,   -73,   -73,   -73,     0,   -39,   -39,
       0,   -39,     0,   -39,   -39,   -38,     0,   -38,   -38,     0,
     -38,   -38,     0,   -38,   -38,   417,   418,     0,   -52,   -52,
     -52,   -52,   -52,     0,     0,     0,     0,   -38,   -38,   -38,
     -52,   -52,   -52,   -52,     0,   -38,   -38,     0,   -38,     0,
     -38,   -38,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,
     -10,   -10,   417,   418,     0,   -55,   -55,   -55,   -55,   -55,
       0,     0,     0,     0,   -10,   -10,   -10,   -55,   -55,   -55,
     -55,     0,   -10,   -10,     0,   -10,     0,   -10,   -10,   -34,
       0,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,   417,
     418,     0,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,
       0,   -34,   -34,   -34,   -56,   -56,   -56,   -56,     0,   -34,
     -34,     0,   -34,     0,   -34,   -34,   -40,     0,   -40,   -40,
       0,   -40,   -40,     0,   -40,   -40,   417,   418,     0,   -53,
     -53,   -53,   -53,   -53,     0,     0,     0,     0,   -40,   -40,
     -40,   -53,   -53,   -53,   -53,     0,   -40,   -40,     0,   -40,
       0,   -40,   -40,    27,     0,    28,    29,     0,    30,    31,
       0,   225,   148,   417,   418,     0,   -54,   -54,   -54,   -54,
     -54,     0,     0,     0,     0,    33,    34,    35,   -54,   -54,
     -54,   -54,     0,    36,    37,     0,    38,     0,    39,    40,
      -8,     0,    -8,    -8,     0,    -8,    -8,     0,    -8,    -8,
     417,   418,     0,   -57,   -57,   -57,   -57,   -57,     0,     0,
       0,     0,    -8,    -8,    -8,   -57,   -57,   -57,   -57,     0,
      -8,    -8,     0,    -8,     0,    -8,    -8,    -9,     0,    -9,
      -9,     0,    -9,    -9,     0,    -9,    -9,     0,     0,     0,
     237,   238,   239,   240,   241,     0,     0,     0,     0,    -9,
      -9,    -9,   -50,   -50,   -50,   -50,     0,    -9,    -9,     0,
      -9,     0,    -9,    -9,    27,     0,    28,    29,     0,    30,
      31,     0,   302,   148,     0,     0,     0,   237,   238,   239,
     240,   241,     0,     0,     0,     0,    33,    34,    35,   -51,
     -51,   -51,   -51,     0,    36,    37,     0,    38,     0,    39,
      40,   -29,     0,   -29,   -29,     0,   -29,   -29,     0,   -29,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -29,   -29,   -29,     0,     0,     0,     0,
       0,   -29,   -29,     0,   -29,     0,   -29,   -29,   -28,     0,
     -28,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
       0,   -28,     0,   -28,   -28,   -30,     0,   -30,   -30,     0,
     -30,   -30,     0,   -30,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,   -30,   -30,
       0,     0,     0,     0,     0,   -30,   -30,     0,   -30,     0,
     -30,   -30,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -31,   -31,     0,     0,     0,
       0,     0,   -31,   -31,     0,   -31,     0,   -31,   -31,   -32,
       0,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -45,     0,   -45,   -45,
       0,   -45,   -45,     0,   -45,   -45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,   -45,
     -45,     0,     0,     0,     0,     0,   -45,   -45,     0,   -45,
       0,   -45,   -45,   -33,     0,   -33,   -33,     0,   -33,   -33,
       0,   -33,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,   -33,   -33,     0,     0,
       0,     0,     0,   -33,   -33,   249,   -33,   -70,   -33,   -33,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,   195,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,   311,   -70,   -70,   -70,   -70,
     195,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   424,     0,   -70,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
      66,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
      67,   -70,   -70,   -70,    66,   -70,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,   290,   -70,   -70,   -70,    66,   -70,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   291,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,   -70,   -70,   -70,
     -71,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -74,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -58,     0,     0,   -58,
     -58,   -58,   265,   -58,   -58,   -58,   -58,   -58,   266,   267,
     268,     0,     0,     0,     0,   -58,   -58,   -58,   -58,   -61,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -66,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -69,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -67,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -68,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -72,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -59,     0,     0,
     -59,   -59,   -59,   265,   -59,   -59,   -59,   -59,   -59,   266,
     267,   268,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
     -60,     0,     0,   -60,   -60,   -60,   265,   -60,   -60,   -60,
     -60,   -60,   266,   267,   268,     0,     0,     0,     0,   -60,
     -60,   -60,   -60,   -62,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -64,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -65,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -63,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -73,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -71,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,   -74,   -71,   -71,
     -71,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,   -58,   -74,   -74,   -74,
     -58,   -58,   -58,    91,   -58,   -58,   -58,   -58,   -58,    92,
      93,    94,     0,     0,     0,   -61,   -58,   -58,   -58,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,     0,     0,     0,   -66,   -61,   -61,   -61,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,   -69,   -66,   -66,   -66,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,   -67,   -69,   -69,   -69,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,   -68,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
     -72,   -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -59,
     -72,   -72,   -72,   -59,   -59,   -59,    91,   -59,   -59,   -59,
     -59,   -59,    92,    93,    94,     0,     0,     0,   -60,   -59,
     -59,   -59,   -60,   -60,   -60,    91,   -60,   -60,   -60,   -60,
     -60,    92,    93,    94,     0,     0,     0,   -62,   -60,   -60,
     -60,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,   -64,   -62,   -62,   -62,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,   -65,   -64,   -64,   -64,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,   -63,   -65,   -65,   -65,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,     0,   -73,   -63,   -63,   -63,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,   -71,   -73,   -73,   -73,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -74,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -58,     0,
       0,     0,   -58,   -58,   431,   -58,   -58,   -58,   -58,   -58,
     432,   433,   434,     0,     0,     0,     0,   -58,   -58,   -58,
     -58,   -61,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -66,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -69,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -68,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -72,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -59,
       0,     0,     0,   -59,   -59,   431,   -59,   -59,   -59,   -59,
     -59,   432,   433,   434,     0,     0,     0,     0,   -59,   -59,
     -59,   -59,   -60,     0,     0,     0,   -60,   -60,   431,   -60,
     -60,   -60,   -60,   -60,   432,   433,   434,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -62,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,     0,     0,   -62,   -62,   -62,   -62,   -64,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -63,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -73,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,   -71,   -73,   -73,   -73,   -73,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,   -74,     0,   -71,   -71,   -71,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -58,     0,   -74,   -74,   -74,   -58,   -58,   296,   -58,
     -58,   -58,   -58,   -58,   297,   298,   299,     0,     0,   -61,
       0,   -58,   -58,   -58,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,   -66,     0,   -61,
     -61,   -61,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -69,     0,   -66,   -66,   -66,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,   -67,     0,   -69,   -69,   -69,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -68,     0,   -67,   -67,   -67,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,   -59,
       0,   -68,   -68,   -68,   -59,   -59,   296,   -59,   -59,   -59,
     -59,   -59,   297,   298,   299,     0,     0,   -60,     0,   -59,
     -59,   -59,   -60,   -60,   296,   -60,   -60,   -60,   -60,   -60,
     297,   298,   299,     0,     0,   -72,     0,   -60,   -60,   -60,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,   -62,     0,   -72,   -72,   -72,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,   -64,     0,   -62,   -62,   -62,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   -65,
       0,   -64,   -64,   -64,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -63,     0,   -65,
     -65,   -65,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,   -73,     0,   -63,   -63,   -63,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,   -56,   -73,   -73,   -73,   429,   430,
       0,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,
       0,     0,     0,   -56,   -56,   -56,   -56,   -53,     0,     0,
       0,   429,   430,     0,   -53,   -53,   -53,   -53,   -53,     0,
       0,     0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,
     -54,     0,     0,     0,   429,   430,     0,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -57,     0,     0,     0,   429,   430,   -51,
     -57,   -57,   -57,   -57,   -57,     0,   257,   258,   259,   260,
     261,     0,   -57,   -57,   -57,   -57,     0,     0,   -51,   -51,
     -51,   -51,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -58,   -58,   -58,   245,   -58,   -58,   -58,   -58,
     -58,   246,   247,   248,     0,     0,     0,     0,   -58,   -58,
     -58,   -58,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -59,   -59,   -59,   245,   -59,   -59,   -59,   -59,
     -59,   246,   247,   248,     0,     0,     0,     0,   -59,   -59,
     -59,   -59,   -60,   -60,   -60,   245,   -60,   -60,   -60,   -60,
     -60,   246,   247,   248,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   242,   243,   244,     0,   -52,   -52,   -52,   -52,
     -52,     0,     0,     0,     0,     0,     0,     0,   -52,   -52,
     -52,   -52
};

static const yytype_int16 yycheck[] =
{
      17,    78,    30,     3,     0,     8,    40,    24,     6,     4,
      30,     6,   128,   128,   128,   128,     4,     4,     0,     6,
     128,     7,     4,   128,     4,     5,   139,    30,    30,   129,
      30,   195,     4,   146,     6,   148,    31,    32,    66,    67,
     140,    27,    28,    29,    31,    32,    66,    67,     7,    77,
      78,     3,   129,    10,     4,     8,     6,    77,     8,    31,
      32,     4,    82,   140,     4,     7,    41,    42,    43,    28,
      29,   148,     6,    23,    24,    25,     4,    30,     6,     7,
      30,    31,    32,    33,     6,   249,    28,    29,     1,     4,
       3,     6,     7,     7,   128,    23,    24,    25,   126,   212,
     128,   129,     7,    31,    32,   269,   126,     6,    23,    24,
      25,   128,   140,   226,   227,   228,    31,    32,     7,     6,
     140,   149,    27,    28,    29,     5,     8,   291,     7,   149,
       8,     4,     4,     8,     6,   212,    30,     4,   166,     6,
      29,     4,     3,     6,     6,     7,   166,    29,    30,   226,
     227,   228,    30,   181,     4,    30,    23,    24,    25,    31,
      32,   181,     6,     7,    31,    32,   148,   195,    31,    32,
     198,     1,     7,   148,     4,   195,     6,     7,   198,   213,
      10,     8,    30,     8,     4,   213,     6,    28,    29,    30,
     303,   304,   305,    23,    24,    25,     4,     8,     6,     4,
       5,    31,    32,    30,    34,    30,    36,    37,     7,   309,
       7,    31,    32,     7,   234,   235,   236,    28,    29,    30,
       8,   249,     7,    31,    32,     8,   303,   304,   305,   249,
     212,     3,   309,     4,   254,   255,   256,   212,     4,     8,
       6,   269,    30,    30,   226,   227,   228,    30,   412,   269,
       7,   226,   227,   228,   274,   275,   276,    23,    24,    25,
     424,    30,   290,   291,     8,    31,    32,     4,     4,    30,
       6,   291,   436,     4,    30,     6,     8,    28,    29,    30,
     308,   309,     8,   311,    28,    29,    30,    30,   308,   317,
       8,   311,    23,    24,    25,    31,    32,   317,    30,     6,
      31,    32,     8,    30,    30,    30,     6,   131,    33,    34,
      35,   135,    30,    30,     8,     8,    30,   345,   142,     4,
       5,   303,   304,   305,    30,   345,     4,     5,   303,   304,
     305,     7,   448,   448,   448,   448,    30,    30,    29,    30,
     448,    66,    67,   448,    30,   373,     4,     0,     1,   449,
       3,    30,    77,   373,     4,    80,    81,    82,    83,    84,
      85,    86,    87,   479,   479,   479,   479,   483,   483,   483,
     483,   479,   449,    30,   479,   483,     1,     4,   483,     4,
     480,     6,     7,    30,   412,    10,    27,    28,    29,    30,
       0,     1,   412,     3,     0,     1,   424,     3,    23,    24,
      25,   126,    30,   480,   424,     7,    31,    32,   436,    34,
      30,    36,    37,     8,   448,   140,   436,     8,     7,    30,
     448,   449,    30,    30,   149,   150,   151,   152,     7,    30,
      30,   448,    27,    28,    29,    30,    27,    28,    29,    30,
       4,   166,   167,   168,   169,   479,    -1,     0,     1,   483,
       3,   479,   480,   474,    -1,   483,   181,   182,   183,   184,
     480,     4,   479,     6,     0,     1,   483,     3,     0,     1,
     195,     3,    -1,   198,   199,   200,   201,     4,    -1,     6,
      23,    24,    25,   208,   209,    -1,    -1,    -1,    31,    32,
      27,    28,    29,    30,    -1,    -1,    23,    24,    25,     0,
       1,    -1,     3,    -1,    31,    32,    -1,    -1,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,   243,   244,
     245,   246,   247,   248,   249,     0,     1,    -1,     3,   254,
     255,   256,   257,   258,   259,   260,   261,    -1,   263,   264,
     265,   266,   267,   268,   269,     0,     1,    -1,     3,   274,
     275,   276,   277,   278,   279,   280,   281,    -1,   283,   284,
     285,   286,   287,   288,     0,     1,   291,     3,    -1,    -1,
      -1,   296,   297,   298,   299,     1,    -1,    -1,     4,    30,
       6,     7,    -1,   308,    10,    -1,   311,     0,     1,    -1,
       3,    -1,   317,   318,   319,   320,    -1,    23,    24,    25,
       0,     1,    -1,     3,    -1,    31,    32,    -1,    34,    -1,
      36,    37,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
     345,   346,   347,   348,    -1,     4,    77,     6,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      91,    92,    93,    94,    23,    24,    25,    -1,   373,   374,
     375,   376,    31,    32,    -1,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,   126,    -1,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,   412,    34,   140,
      36,    37,   417,   418,   419,   420,   421,   422,   149,   424,
       0,     1,    -1,     3,   429,   430,   431,   432,   433,   434,
      -1,   436,    -1,    -1,     7,   166,   441,   442,   443,   444,
     445,   446,    15,    16,    17,    18,    19,    -1,     0,     1,
     181,     3,    -1,    -1,    27,    28,    29,     1,    -1,     3,
       4,    -1,     6,     7,   195,     9,    10,   198,     0,     1,
      -1,     3,    -1,    -1,    -1,   480,    -1,   208,   209,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    -1,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,   243,   244,   245,   246,   247,   248,   249,    -1,
      -1,    -1,    -1,   254,   255,   256,   257,   258,   259,   260,
     261,    -1,   263,   264,   265,   266,   267,   268,   269,    -1,
      -1,    -1,    -1,   274,   275,   276,   277,   278,   279,   280,
     281,    -1,   283,   284,   285,   286,   287,   288,    -1,    -1,
     291,    -1,    -1,    -1,    -1,   296,   297,   298,   299,    -1,
      -1,    -1,    -1,    30,     4,    -1,     6,   308,    -1,    -1,
     311,    -1,     1,    -1,     3,     4,   317,     6,     7,    -1,
       9,    10,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    23,    24,    25,    -1,    -1,    66,
      67,    -1,    31,    32,   345,    34,    35,    36,    37,    -1,
      77,    -1,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    90,    -1,     1,    -1,     3,     4,    -1,
       6,     7,   373,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    -1,    34,   126,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   412,    -1,   140,    -1,    -1,   417,   418,   419,   420,
     421,   422,   149,   424,    -1,    -1,    -1,    -1,   429,   430,
     431,   432,   433,   434,    -1,   436,    -1,    -1,     7,   166,
     441,   442,   443,   444,   445,   446,    15,    16,    17,    18,
      19,    -1,    -1,    -1,   181,    -1,    -1,    -1,    27,    28,
      29,     1,    -1,     3,     4,    -1,     6,     7,   195,     9,
      10,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,
      -1,   208,   209,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    -1,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,    -1,   243,   244,    -1,    -1,
      -1,    -1,   249,    -1,    -1,    -1,    -1,   254,   255,   256,
     257,   258,   259,   260,   261,    -1,   263,   264,    -1,    -1,
      -1,    -1,   269,    -1,    -1,    -1,    -1,   274,   275,   276,
     277,   278,   279,   280,   281,    -1,   283,   284,    -1,    30,
      -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,   308,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,
     317,    23,    24,    25,    -1,    66,    67,    29,    -1,    31,
      32,    -1,    34,    -1,    36,    37,    77,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,     1,   345,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,   373,    31,    32,    -1,
      34,    -1,    36,    37,     4,   126,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,   149,    -1,
      -1,    31,    32,    -1,    -1,   412,    -1,    -1,    -1,    -1,
     417,   418,     4,    -1,     6,   166,    -1,   424,    -1,    -1,
      -1,    -1,   429,   430,    -1,    30,    -1,    -1,    -1,   436,
     181,    23,    24,    25,   441,   442,     4,    -1,     6,    31,
      32,    -1,    -1,    -1,   195,    -1,    -1,   198,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,     8,    -1,
      -1,    66,    67,    31,    32,    15,    16,    17,    18,    19,
      -1,    -1,    77,   480,    -1,    -1,    81,    27,    28,    29,
      30,    -1,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    30,    -1,    -1,   249,    -1,
      -1,    -1,    -1,   254,   255,   256,   257,   258,   259,   260,
     261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,
      -1,   126,    -1,   274,   275,   276,   277,   278,   279,   280,
     281,    66,    67,    -1,    -1,   140,    -1,    -1,    -1,    -1,
     291,    -1,    77,    -1,   149,    80,    -1,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,   308,    -1,    -1,
     311,   166,    -1,    -1,    -1,    -1,   317,    -1,    -1,    23,
      24,    25,    -1,    -1,    28,    29,   181,    31,    32,    30,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
     195,   126,    -1,   198,   345,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    11,    12,    13,   140,    15,    16,    17,    18,
      19,    -1,    -1,    -1,   149,    66,    67,    -1,    27,    28,
      29,    30,   373,    -1,    -1,    -1,    77,    -1,    -1,   234,
     235,   166,     8,    -1,    -1,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,   249,    -1,   181,    -1,    -1,   254,
     255,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
     195,   412,    -1,   198,   269,    -1,    -1,    -1,    -1,   274,
     275,    -1,     7,   424,    -1,   126,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,   436,   291,    -1,    -1,   140,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,   149,   234,
      -1,    -1,     1,   308,     3,     4,   311,     6,     7,    -1,
       9,    10,   317,    -1,   249,   166,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,   480,
     181,    -1,    31,    32,   269,    34,    35,    36,    37,   274,
     345,     8,    -1,    -1,   195,    12,    13,   198,    15,    16,
      17,    18,    19,    -1,    -1,    -1,   291,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,   373,     1,
      -1,     3,     4,   308,     6,     7,   311,     9,    10,    -1,
      12,    13,   317,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,   249,    31,
      32,    -1,    34,    -1,    36,    37,     1,   412,     3,     4,
     345,     6,     7,    -1,     9,    10,    -1,    -1,   269,   424,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    23,    24,
      25,   436,    27,    28,    29,    -1,    31,    32,   373,    34,
     291,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,   308,     9,    10,
     311,    -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,   480,    -1,   412,    -1,    -1,
      31,    32,    -1,    34,    35,    36,    37,    -1,    -1,   424,
      -1,    -1,    -1,    -1,   345,    -1,    -1,     1,    -1,     3,
       4,   436,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   373,    27,    28,    29,    -1,    31,    32,    -1,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,   480,     6,     7,    -1,     9,
      10,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,   412,    -1,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,   424,    34,    -1,    36,    37,     1,    -1,
       3,     4,    -1,     6,     7,   436,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,   480,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    -1,    36,    37,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    -1,    36,    37,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      -1,    36,    37,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    -1,    36,    37,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    -1,    34,    -1,    36,    37,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    -1,
      34,    -1,    36,    37,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    -1,    34,    -1,    36,
      37,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    -1,    34,    -1,    36,    37,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    -1,    36,    37,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    -1,    34,    -1,
      36,    37,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    -1,    36,    37,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    -1,    36,    37,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      -1,    36,    37,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    -1,    36,    37,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    -1,    34,    -1,    36,    37,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    -1,
      34,    -1,    36,    37,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    -1,    34,    -1,    36,
      37,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    -1,    34,    -1,    36,    37,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    -1,    36,    37,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    -1,    34,    -1,
      36,    37,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    -1,    36,    37,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    -1,    36,    37,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      -1,    36,    37,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    -1,    36,    37,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    -1,    34,    -1,    36,    37,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    -1,
      34,    -1,    36,    37,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    -1,    34,    -1,    36,
      37,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    -1,    34,    -1,    36,    37,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    -1,    36,    37,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    -1,    34,    -1,
      36,    37,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    -1,    36,    37,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    -1,    36,    37,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      -1,    36,    37,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    -1,    36,    37,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    -1,    34,    -1,    36,    37,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    31,    32,    -1,
      34,    -1,    36,    37,     1,    -1,     3,     4,     6,     6,
       7,    -1,     9,    10,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    23,    24,    25,    27,
      28,    29,    30,    -1,    31,    32,    -1,    34,    35,    36,
      37,     1,    -1,     3,     4,    -1,     6,     7,     7,     9,
      10,    -1,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    23,    24,    25,    -1,    -1,    27,    28,
      29,    31,    32,    -1,    34,    35,    36,    37,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,     1,    -1,     3,     4,    -1,
       6,     7,     7,     9,    10,    -1,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    23,    24,    25,
      -1,    -1,    27,    28,    29,    31,    32,    -1,    34,    35,
      36,    37,     1,    -1,     3,     4,    -1,     6,     7,     7,
       9,    10,    -1,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    23,    24,    25,    -1,    -1,    27,
      28,    29,    31,    32,    -1,    34,    35,    36,    37,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    23,    24,    25,    27,    28,    29,    30,    -1,
      31,    32,    -1,    34,    35,    36,    37,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    23,
      24,    25,    27,    28,    29,    30,    -1,    31,    32,    -1,
      34,    35,    36,    37,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    23,    24,    25,    27,
      28,    29,    30,    -1,    31,    32,    -1,    34,    35,    36,
      37,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    23,    24,    25,    27,    28,    29,    30,
      -1,    31,    32,    -1,    34,    35,    36,    37,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      23,    24,    25,    27,    28,    29,    30,    -1,    31,    32,
      -1,    34,    35,    36,    37,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    23,    24,    25,
      27,    28,    29,    30,    -1,    31,    32,    -1,    34,    35,
      36,    37,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    23,    24,    25,    27,    28,    29,
      30,    -1,    31,    32,    -1,    34,    -1,    36,    37,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    23,    24,    25,    27,    28,    29,    30,    -1,    31,
      32,    -1,    34,    -1,    36,    37,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      -1,    36,    37,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    -1,    36,    37,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    23,    24,    25,    27,    28,    29,    30,    -1,
      31,    32,    -1,    34,    -1,    36,    37,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    23,
      24,    25,    27,    28,    29,    30,    -1,    31,    32,    -1,
      34,    -1,    36,    37,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    23,    24,    25,    27,
      28,    29,    30,    -1,    31,    32,    -1,    34,    -1,    36,
      37,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    23,    24,    25,    27,    28,    29,    30,
      -1,    31,    32,    -1,    34,    -1,    36,    37,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      23,    24,    25,    27,    28,    29,    30,    -1,    31,    32,
      -1,    34,    -1,    36,    37,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    23,    24,    25,
      27,    28,    29,    30,    -1,    31,    32,    -1,    34,    -1,
      36,    37,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    23,    24,    25,    27,    28,    29,
      30,    -1,    31,    32,    -1,    34,    -1,    36,    37,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    23,    24,    25,    27,    28,    29,    30,    -1,    31,
      32,    -1,    34,    -1,    36,    37,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      -1,    36,    37,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    -1,    36,    37,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    23,    24,    25,    27,    28,    29,    30,    -1,
      31,    32,    -1,    34,    -1,    36,    37,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    23,
      24,    25,    27,    28,    29,    30,    -1,    31,    32,    -1,
      34,    -1,    36,    37,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    23,    24,    25,    27,
      28,    29,    30,    -1,    31,    32,    -1,    34,    -1,    36,
      37,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    -1,    36,    37,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    -1,    36,    37,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      36,    37,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    34,    -1,    36,    37,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    36,    37,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,
      -1,    36,    37,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,     6,    34,     8,    36,    37,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,     6,    27,    28,    29,    30,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
       6,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     6,    -1,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,     6,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,     6,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
       8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     7,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,     7,    27,    28,
      29,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,     7,    27,    28,    29,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,     7,    27,    28,    29,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,     7,    27,    28,    29,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,     7,    27,    28,    29,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,     7,    27,    28,    29,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,     7,    27,    28,    29,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
       7,    27,    28,    29,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,     7,
      27,    28,    29,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,     7,    27,
      28,    29,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,     7,    27,    28,
      29,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,     7,    27,    28,    29,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,     7,    27,    28,    29,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,     7,    27,    28,    29,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,     7,    27,    28,    29,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,     8,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,     7,    27,    28,    29,    30,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,     8,    27,    28,    29,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    -1,    12,    13,     8,
      15,    16,    17,    18,    19,    -1,    15,    16,    17,    18,
      19,    -1,    27,    28,    29,    30,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    39,    40,    41,    42,    44,    46,     4,
       5,     0,    41,     6,     7,     4,     3,    30,    45,     7,
       4,     5,    10,    49,    30,     8,     4,     1,     3,     4,
       6,     7,     9,    23,    24,    25,    31,    32,    34,    36,
      37,    42,    43,    48,    49,    50,    51,    52,    54,    55,
      56,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    49,     3,     8,     4,     5,     6,    26,     4,    59,
      67,    67,    67,    54,    50,    50,    50,     6,     6,     7,
      29,    28,    27,    15,    16,    17,    18,    19,    11,    12,
      13,    14,    20,    21,    22,     4,     3,     4,    33,    59,
      68,    59,    30,    59,    43,    58,    59,    61,    64,    62,
      63,    64,    64,    64,    64,    64,     4,    65,    65,    66,
      66,    66,    66,     8,    47,     5,     8,    30,    30,     7,
       3,     4,    59,    48,    58,     4,     5,    47,    35,    53,
       7,    47,     4,    48,    58,    47,    30,    48,    10,     6,
      23,    24,    25,    31,    32,    60,    61,    62,    63,    64,
      65,    66,    67,     4,     7,     4,     6,    23,    24,    25,
      31,    32,    60,    61,    62,    63,    64,    65,    66,    67,
       4,     6,    23,    24,    25,    31,    32,    60,    61,    62,
      63,    64,    65,    66,    67,     6,     4,     4,     6,    23,
      24,    25,    31,    32,    65,    66,    67,     7,    12,    13,
       1,     7,    10,    37,    49,    51,    52,    54,    55,    56,
      57,    59,     4,    43,    59,     9,    42,    43,    48,    50,
      59,    67,    67,    67,    29,    28,    27,    15,    16,    17,
      18,    19,    11,    12,    13,    14,    20,    21,    22,     6,
      59,    67,    67,    67,    29,    28,    27,    15,    16,    17,
      18,    19,    11,    12,    13,    14,    20,    21,    22,     6,
      59,    67,    67,    67,    29,    28,    27,    15,    16,    17,
      18,    19,    11,    12,    13,    14,    20,    21,    22,    68,
      26,     6,    59,    67,    67,    67,    14,    20,    21,    22,
      65,    65,     9,    42,    43,    48,    50,    54,     6,     6,
       7,    26,    50,    50,    50,    30,     4,     6,    23,    24,
      25,    31,    32,    61,    64,    65,    66,    67,    62,    63,
      64,    64,    64,    64,    64,     4,    65,    65,    66,    66,
      66,    66,    68,    30,     4,     6,    23,    24,    25,    31,
      32,    61,    64,    65,    66,    67,    62,    63,    64,    64,
      64,    64,    64,     4,    65,    65,    66,    66,    66,    66,
      68,    30,     4,     6,    23,    24,    25,    31,    32,    61,
      64,    65,    66,    67,    62,    63,    64,    64,    64,    64,
      64,     4,    65,    65,    66,    66,    66,    66,    30,    59,
      68,    30,    66,    66,    66,    66,    50,    50,    50,    59,
      58,    59,     6,    59,    67,    67,    67,    12,    13,    14,
      20,    21,    22,    30,     6,    59,    67,    67,    67,    12,
      13,    14,    20,    21,    22,    30,     6,    59,    67,    67,
      67,    12,    13,    14,    20,    21,    22,    30,    30,     7,
      68,    30,    65,    65,    66,    66,    66,    66,    68,    30,
      65,    65,    66,    66,    66,    66,    68,    30,    65,    65,
      66,    66,    66,    66,    48,    58,    30,    30,    30,    53,
       7,    48,    58,    30,    48
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    41,    42,    42,
      43,    44,    44,    45,    45,    45,    45,    46,    46,    47,
      47,    47,    48,    48,    48,    48,    48,    48,    49,    50,
      50,    50,    50,    51,    51,    52,    53,    54,    54,    55,
      56,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    63,    63,    63,    63,    64,    64,
      64,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    68,    68,    68,    68
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
       3,     1,     3,     3,     3,     3,     1,     2,     2,     2,
       1,     1,     3,     4,     1,     0,     1,     3,     1
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
#line 55 "src/parser.y"
                  {;}
#line 2871 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 59 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2880 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 63 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 2890 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 71 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 2898 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 74 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 2906 "src/parser.c"
    break;

  case 7: /* GlobalDec: error  */
#line 77 "src/parser.y"
                        {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 2915 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 84 "src/parser.y"
                                     {
			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-2].string));
			add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true);
			strcat(str, " ");
			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);

		}
#line 2928 "src/parser.c"
    break;

  case 9: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 93 "src/parser.y"
                                          {
			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");
			add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true);
			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);

		}
#line 2941 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT Expression  */
#line 104 "src/parser.y"
                                          {
			(yyval.state) = new_node("=", root);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-2].string));

			add_child((yyval.state), new_node(str, root));
			add_child((yyval.state), (yyvsp[0].state));

			if (!variable_was_declared(s_table, scope, (yyvsp[-2].string))) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %zu col %zu.", (yyvsp[-2].string), n_line, n_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

			
			if(!check_type_subtree((yyval.state), s_table, scope)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Invalid operand types, at ln %zu col %zu.", n_line, n_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
#line 2974 "src/parser.c"
    break;

  case 11: /* FunctionDefinition: FunctionHead LP FunctionArgs RP CompStatement  */
#line 135 "src/parser.y"
                                                 {
		(yyval.state) = new_node("FunctionDefinition", root);

		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));

		decrease_depth_scope(scope);
	}
#line 2988 "src/parser.c"
    break;

  case 12: /* FunctionDefinition: FunctionHead LP RP CompStatement  */
#line 145 "src/parser.y"
                                        {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

	}
#line 3000 "src/parser.c"
    break;

  case 13: /* FunctionArgs: TYPE IDENTIFIER  */
#line 155 "src/parser.y"
                        {
		(yyval.state) = new_node("FunctionParameters", root);

		add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, true);
		push_arg_to_arglist(s_table, (yyvsp[-1].string), last_f);
	}
#line 3011 "src/parser.c"
    break;

  case 14: /* FunctionArgs: TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 162 "src/parser.y"
                                                      {
		(yyval.state) = new_node("FunctionParameters", root);

		add_row_symbol_table(s_table, (yyvsp[-4].string), (yyvsp[-5].string), scope, true);
		push_arg_to_arglist(s_table, (yyvsp[-5].string), last_f);

		add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true);
		push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f);
	}
#line 3025 "src/parser.c"
    break;

  case 15: /* FunctionArgs: TYPE LIST IDENTIFIER  */
#line 172 "src/parser.y"
                             {
		(yyval.state) = new_node("FunctionParameters", root);

		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");

		add_row_symbol_table(s_table, (yyvsp[0].string), str, scope, true);
		push_arg_to_arglist(s_table, str, last_f);	
	}
#line 3040 "src/parser.c"
    break;

  case 16: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 183 "src/parser.y"
                                                                {
		(yyval.state) = new_node("FunctionParameters", root);

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, (yyvsp[-7].string));
		strcat(arg_1," LIST ");

		add_row_symbol_table(s_table, (yyvsp[-5].string), arg_1, scope, true);
		push_arg_to_arglist(s_table, arg_1, last_f);

		char arg_2[MAX_BUFFER_SIZE];
		strcpy(arg_2, (yyvsp[-3].string));
		strcat(arg_2," LIST ");

		add_row_symbol_table(s_table, (yyvsp[-1].string), arg_2, scope, true);
		push_arg_to_arglist(s_table, arg_2, last_f);
	}
#line 3062 "src/parser.c"
    break;

  case 17: /* FunctionHead: TYPE IDENTIFIER  */
#line 203 "src/parser.y"
                        {
		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[0].string));
		strcat(str, "()");

		(yyval.state) = new_node(str, root);
		add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, false);

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);

	}
#line 3080 "src/parser.c"
    break;

  case 18: /* FunctionHead: TYPE LIST IDENTIFIER  */
#line 217 "src/parser.y"
                             {
		char f_name[MAX_BUFFER_SIZE];
		strcpy(f_name, (yyvsp[0].string));
		strcat(f_name, "()");

		(yyval.state) = new_node(f_name, root);

		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");
		add_row_symbol_table(s_table, (yyvsp[0].string), str, scope, false);

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);
	}
#line 3101 "src/parser.c"
    break;

  case 19: /* ParamList: %empty  */
#line 236 "src/parser.y"
             {
			(yyval.state) = new_node("ParamList", root);
		}
#line 3109 "src/parser.c"
    break;

  case 20: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 240 "src/parser.y"
                                              {
			(yyval.state) = new_node("ParamList", root);
			add_child((yyval.state), (yyvsp[0].state));

			add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true);
			push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f);
		}
#line 3121 "src/parser.c"
    break;

  case 21: /* ParamList: COM TYPE LIST IDENTIFIER ParamList  */
#line 248 "src/parser.y"
                                                   {
			(yyval.state) = new_node("ParamList", root);
			add_child((yyval.state), (yyvsp[0].state));

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");

			add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true);
			push_arg_to_arglist(s_table, str, last_f);
		}
#line 3137 "src/parser.c"
    break;

  case 22: /* Statement: CompStatement  */
#line 264 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 3143 "src/parser.c"
    break;

  case 23: /* Statement: JmpStatement  */
#line 265 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 3149 "src/parser.c"
    break;

  case 24: /* Statement: SelStatement  */
#line 266 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 3155 "src/parser.c"
    break;

  case 25: /* Statement: ItStatement  */
#line 267 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 3161 "src/parser.c"
    break;

  case 26: /* Statement: ExpStatement  */
#line 268 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 3167 "src/parser.c"
    break;

  case 27: /* Statement: error  */
#line 269 "src/parser.y"
                      {yyerrok; (yyval.state) = NULL;}
#line 3173 "src/parser.c"
    break;

  case 28: /* CompStatement: LCB StatementExp  */
#line 273 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 3181 "src/parser.c"
    break;

  case 29: /* StatementExp: RCB  */
#line 279 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 3187 "src/parser.c"
    break;

  case 30: /* StatementExp: Declaration StatementExp  */
#line 280 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3197 "src/parser.c"
    break;

  case 31: /* StatementExp: Definition StatementExp  */
#line 285 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3207 "src/parser.c"
    break;

  case 32: /* StatementExp: Statement StatementExp  */
#line 290 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3217 "src/parser.c"
    break;

  case 33: /* SelStatement: IfHead LP Expression RP Statement  */
#line 298 "src/parser.y"
                                                  {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3228 "src/parser.c"
    break;

  case 34: /* SelStatement: IfHead LP Expression RP Statement ElseHead Statement  */
#line 304 "src/parser.y"
                                                                     {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3240 "src/parser.c"
    break;

  case 35: /* IfHead: IF  */
#line 314 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 3248 "src/parser.c"
    break;

  case 36: /* ElseHead: ELSE  */
#line 320 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 3257 "src/parser.c"
    break;

  case 37: /* ExpStatement: SEMI  */
#line 327 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 3263 "src/parser.c"
    break;

  case 38: /* ExpStatement: Expression SEMI  */
#line 328 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 3271 "src/parser.c"
    break;

  case 39: /* JmpStatement: RET ExpStatement  */
#line 334 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3280 "src/parser.c"
    break;

  case 40: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 341 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3293 "src/parser.c"
    break;

  case 41: /* ForHead: FOR  */
#line 352 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 3301 "src/parser.c"
    break;

  case 42: /* ExpAtt: Expression  */
#line 358 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 3309 "src/parser.c"
    break;

  case 43: /* ExpAtt: Definition  */
#line 362 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 3317 "src/parser.c"
    break;

  case 44: /* Expression: LogicalOrExpression  */
#line 369 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 3323 "src/parser.c"
    break;

  case 45: /* Expression: AdditiveExpression TWD IDENTIFIER  */
#line 371 "src/parser.y"
                                                    {
			(yyval.state) = new_node(":", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), new_node((yyvsp[0].string), root));

		}
#line 3334 "src/parser.c"
    break;

  case 46: /* LogicalOrExpression: LogicalAndExpression  */
#line 380 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 3340 "src/parser.c"
    break;

  case 47: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 381 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 3351 "src/parser.c"
    break;

  case 48: /* LogicalAndExpression: EqualityExpression  */
#line 390 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 3357 "src/parser.c"
    break;

  case 49: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 391 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3367 "src/parser.c"
    break;

  case 50: /* EqualityExpression: RelationalExpression  */
#line 399 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 3373 "src/parser.c"
    break;

  case 51: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 400 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3383 "src/parser.c"
    break;

  case 52: /* RelationalExpression: AdditiveExpression  */
#line 409 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 3389 "src/parser.c"
    break;

  case 53: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 410 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 3399 "src/parser.c"
    break;

  case 54: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 415 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3409 "src/parser.c"
    break;

  case 55: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 420 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3419 "src/parser.c"
    break;

  case 56: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 425 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3429 "src/parser.c"
    break;

  case 57: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 430 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3439 "src/parser.c"
    break;

  case 58: /* AdditiveExpression: MultiplicativeExpression  */
#line 438 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 3445 "src/parser.c"
    break;

  case 59: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 439 "src/parser.y"
                                                                 {
			(yyval.state) = new_node("+", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3455 "src/parser.c"
    break;

  case 60: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 444 "src/parser.y"
                                                        {
			(yyval.state) = new_node("-", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3465 "src/parser.c"
    break;

  case 61: /* MultiplicativeExpression: UnaryExpression  */
#line 452 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 3471 "src/parser.c"
    break;

  case 62: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 453 "src/parser.y"
                                                             {
			(yyval.state) = new_node("*", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3481 "src/parser.c"
    break;

  case 63: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 458 "src/parser.y"
                                                             {
			(yyval.state) = new_node("/", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3491 "src/parser.c"
    break;

  case 64: /* MultiplicativeExpression: MultiplicativeExpression MAP UnaryExpression  */
#line 463 "src/parser.y"
                                                         {
			(yyval.state) = new_node(">>", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3501 "src/parser.c"
    break;

  case 65: /* MultiplicativeExpression: MultiplicativeExpression FIL UnaryExpression  */
#line 468 "src/parser.y"
                                                         {
			(yyval.state) = new_node("<<", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3511 "src/parser.c"
    break;

  case 66: /* UnaryExpression: PrimaryExpression  */
#line 476 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 3517 "src/parser.c"
    break;

  case 67: /* UnaryExpression: TNR PrimaryExpression  */
#line 477 "src/parser.y"
                                      {
			(yyval.state) = new_node("!", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3526 "src/parser.c"
    break;

  case 68: /* UnaryExpression: HD PrimaryExpression  */
#line 481 "src/parser.y"
                                     {
			(yyval.state) = new_node("?", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3535 "src/parser.c"
    break;

  case 69: /* UnaryExpression: TR PrimaryExpression  */
#line 485 "src/parser.y"
                                     {
			(yyval.state) = new_node("%", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 3544 "src/parser.c"
    break;

  case 70: /* PrimaryExpression: IDENTIFIER  */
#line 491 "src/parser.y"
                           {
			(yyval.state) = new_node((yyvsp[0].string), root);
			if (!variable_was_declared(s_table, scope, (yyvsp[0].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %zu col %zu.", (yyvsp[0].string), n_line, n_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
#line 3561 "src/parser.c"
    break;

  case 71: /* PrimaryExpression: NUM_CONST  */
#line 504 "src/parser.y"
                      {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", (yyvsp[0].num));
			(yyval.state) = new_node(str, root);
		}
#line 3571 "src/parser.c"
    break;

  case 72: /* PrimaryExpression: LP Expression RP  */
#line 510 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 3580 "src/parser.c"
    break;

  case 73: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 515 "src/parser.y"
                                        {
			(yyval.state) = new_node("FunctionCall", root);
			add_child((yyval.state), new_node((yyvsp[-3].string), root));
			add_child((yyval.state), (yyvsp[-1].state));

			if (!variable_was_declared(s_table, scope, (yyvsp[-3].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Function %s was not declared, at ln %zu col %zu.", (yyvsp[-3].string), n_line, n_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

		}
#line 3601 "src/parser.c"
    break;

  case 74: /* PrimaryExpression: NIL  */
#line 532 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root);}
#line 3607 "src/parser.c"
    break;

  case 75: /* Params: %empty  */
#line 536 "src/parser.y"
               {(yyval.state) = new_node("Args", root);}
#line 3613 "src/parser.c"
    break;

  case 76: /* Params: Expression  */
#line 538 "src/parser.y"
                   {(yyval.state) = new_node("Args", root); add_child((yyval.state), (yyvsp[0].state));}
#line 3619 "src/parser.c"
    break;

  case 77: /* Params: Params COM Expression  */
#line 540 "src/parser.y"
                              {(yyval.state) = new_node("Args", root); add_child((yyval.state), (yyvsp[-2].state));  add_child((yyval.state), (yyvsp[0].state));}
#line 3625 "src/parser.c"
    break;

  case 78: /* Params: STR  */
#line 542 "src/parser.y"
            {(yyval.state) = new_node("Args", root); add_child((yyval.state), new_node((yyvsp[0].string), root));}
#line 3631 "src/parser.c"
    break;


#line 3635 "src/parser.c"

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

#line 546 "src/parser.y"

int yydebug = 1;

syntax_tree* parse() {
    root = new_syntax_tree();
	s_table = new_symbol_table();
	scope = new_scope_stack();
	last_f = 0;
	first_pass_sematic_error_found = false;

	push_default_functions(s_table, scope, &last_f);

    yyparse();

	
	if(!analyze_semantics(s_table, root) && !first_pass_sematic_error_found) {
		printf("\n\033[92mNo semantic errors were found.\033[0m\n");
	}

	show_table(s_table);

	char* line = (char*) malloc(MAX_BUFFER_SIZE);
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
	char str[MAX_BUFFER_SIZE];
	strcpy(str, s);
	str[0] = 'S';

	fprintf (stderr, "\033[91m%s, at ln %lu col %lu\033[0m\n", str, n_line, n_column);
 }
