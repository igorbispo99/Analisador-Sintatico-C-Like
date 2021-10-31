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
  YYSYMBOL_WRITE = 34,                     /* WRITE  */
  YYSYMBOL_READ = 35,                      /* READ  */
  YYSYMBOL_WRITE_LN = 36,                  /* WRITE_LN  */
  YYSYMBOL_IF = 37,                        /* IF  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_FOR = 39,                       /* FOR  */
  YYSYMBOL_RET = 40,                       /* RET  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_ROOT_TREE = 42,                 /* ROOT_TREE  */
  YYSYMBOL_GlobalDef = 43,                 /* GlobalDef  */
  YYSYMBOL_GlobalDec = 44,                 /* GlobalDec  */
  YYSYMBOL_Declaration = 45,               /* Declaration  */
  YYSYMBOL_Definition = 46,                /* Definition  */
  YYSYMBOL_FunctionDefinition = 47,        /* FunctionDefinition  */
  YYSYMBOL_FunctionArgs = 48,              /* FunctionArgs  */
  YYSYMBOL_FunctionHead = 49,              /* FunctionHead  */
  YYSYMBOL_ParamList = 50,                 /* ParamList  */
  YYSYMBOL_Statement = 51,                 /* Statement  */
  YYSYMBOL_CompStatement = 52,             /* CompStatement  */
  YYSYMBOL_StatementExp = 53,              /* StatementExp  */
  YYSYMBOL_SelStatement = 54,              /* SelStatement  */
  YYSYMBOL_IfHead = 55,                    /* IfHead  */
  YYSYMBOL_ElseHead = 56,                  /* ElseHead  */
  YYSYMBOL_ExpStatement = 57,              /* ExpStatement  */
  YYSYMBOL_JmpStatement = 58,              /* JmpStatement  */
  YYSYMBOL_ItStatement = 59,               /* ItStatement  */
  YYSYMBOL_ForHead = 60,                   /* ForHead  */
  YYSYMBOL_ExpAtt = 61,                    /* ExpAtt  */
  YYSYMBOL_Expression = 62,                /* Expression  */
  YYSYMBOL_LogicalOrExpression = 63,       /* LogicalOrExpression  */
  YYSYMBOL_LogicalAndExpression = 64,      /* LogicalAndExpression  */
  YYSYMBOL_EqualityExpression = 65,        /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 66,      /* RelationalExpression  */
  YYSYMBOL_AdditiveExpression = 67,        /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 68,  /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 69,           /* UnaryExpression  */
  YYSYMBOL_PrimaryExpression = 70,         /* PrimaryExpression  */
  YYSYMBOL_Params = 71                     /* Params  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   8704

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  610

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    57,    61,    65,    73,    76,    79,    86,    98,
     115,   144,   177,   187,   198,   209,   228,   244,   274,   293,
     317,   321,   334,   355,   356,   357,   358,   359,   360,   364,
     370,   371,   376,   381,   390,   396,   406,   412,   419,   420,
     426,   440,   451,   457,   461,   468,   470,   479,   480,   489,
     490,   498,   499,   508,   509,   514,   519,   524,   529,   534,
     539,   547,   548,   553,   561,   562,   567,   575,   576,   580,
     584,   590,   603,   609,   614,   671,   712,   717,   721,   725,
     729,   734,   738,   744
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
  "ATT", "COMP_EQ", "AND", "OR", "RP", "NUM_CONST", "NIL", "STR", "WRITE",
  "READ", "WRITE_LN", "IF", "ELSE", "FOR", "RET", "$accept", "ROOT_TREE",
  "GlobalDef", "GlobalDec", "Declaration", "Definition",
  "FunctionDefinition", "FunctionArgs", "FunctionHead", "ParamList",
  "Statement", "CompStatement", "StatementExp", "SelStatement", "IfHead",
  "ElseHead", "ExpStatement", "JmpStatement", "ItStatement", "ForHead",
  "ExpAtt", "Expression", "LogicalOrExpression", "LogicalAndExpression",
  "EqualityExpression", "RelationalExpression", "AdditiveExpression",
  "MultiplicativeExpression", "UnaryExpression", "PrimaryExpression",
  "Params", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-178)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-84)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,    86,   147,    17,    90,   406,   448,   454,     3,   210,
      30,  -178,   471,     9,   507,   302,   260,    11,    -3,   529,
      25,    34,  4825,   533,    11,    80,    51,  4865,   323,  6294,
    6002,  4905,   578,    26,    26,    26,  6843,  6862,    94,   100,
     111,   118,   128,    12,  4825,  4825,  4825,  4945,   592,  4985,
     130,  5025,  5065,  5105,   137,   154,    56,    87,    13,  2231,
    4226,  6881,  6900,  6919,   596,   160,   168,   172,   178,    78,
     149,  6244,   162,  6938,  6957,  6976,   209,   185,   390,  5145,
     610,   630,   656,  6002,  6024,  5185,  6038,  6038,  6038,  6038,
    6038,  6038,  6038,  6038,  6038,  6038,   199,  6060,  6060,  6060,
    6060,   117,   195,   205,  6995,   127,   190,   200,  5225,  7014,
     228,   230,   239,   273,   282,   293,   232,   329,   340,   138,
    4266,   104,  4586,  4306,  4346,  4386,  4426,  4466,  4506,  4546,
     366,  7033,  7052,  7071,  7090,   351,   336,   231,  6074,  7109,
    5265,  7128,  7147,  7166,  7185,  7204,   328,  6024,   353,   117,
     191,  1745,   367,   117,   373,   365,   694,  1013,  6096,   371,
     117,  5305,   378,   381,  1013,  5345,  5385,  6002,   159,   159,
     159,  8274,  8294,   422,   424,   426,   359,    23,   357,  1329,
    8674,  8314,  8334,  8354,  6342,  5425,  6199,  6002,   255,   255,
     255,  6382,  6405,   437,   444,   446,   167,   148,    68,  8238,
    7682,  6428,  6451,  6474,   536,  6002,   344,   344,   344,   766,
    1080,   450,   469,   470,  4145,  1826,  1367,  4065,  3705,  2063,
    2103,  2205,   804,  6318,  6360,  6002,   649,   649,   649,  7701,
    7719,   476,   477,   478,  7737,  7755,  7773,  5465,  6038,  6038,
    4185,  4225,  5505,   818,  4265,  4305,   481,  4345,  4385,  4425,
     483,   405,  6219,   447,   461,  5545,  5385,  5385,  5385,  5585,
     462,  8374,  8394,  8414,   866,   491,   969,  6110,  6110,  6110,
    6110,  6110,  6110,  6110,  6110,  6110,  6110,   496,  6002,  6002,
    6002,  6002,  1123,   472,  6497,  6520,  6543,  1137,   497,  1185,
    6132,  6132,  6132,  6132,  6132,  6132,  6132,  6132,  6132,  6132,
     505,  6074,  6074,  6074,  6074,  1199,   492,  2265,  2305,  2345,
    1404,   519,  1863,  6146,  6146,  6146,  6146,  6146,  6146,  6146,
    6146,  6146,  6146,   520,  6168,  6168,  6168,  6168,  8434,   197,
    1897,  1460,   501,  7791,  7809,  7827,  2146,   523,  5807,  6038,
    6038,  7845,  7863,  4465,  5505,  5505,  5505,  4505,  4545,  6002,
    6024,  4585,  5822,  5625,  5665,  5705,  8454,   508,   511,   514,
     544,   550,  4184,  6002,   709,   709,   709,  4624,  4664,   576,
     577,   588,   312,  5424,  4704,  4744,  4784,   370,  5744,  5464,
    5504,  5544,  5584,  5624,  5664,  5704,   568,  8474,  8494,  8514,
    8534,  6566,   238,  6589,   570,   571,   572,   582,   594,  6269,
    6002,   881,   881,   881,  7222,  7245,   600,   619,   620,   196,
    8061,  7268,  7291,  7314,   112,  8254,  8084,  8107,  8130,  8153,
    8176,  8199,  8222,   258,  6612,  6635,  6658,  6681,  2385,   284,
    2425,   602,   604,   605,   606,   617,  2865,  6002,  1028,  1028,
    1028,  2905,  2945,   648,   652,   664,  2014,  3745,  2985,  3025,
    3065,  1628,  4105,  3785,  3825,  3865,  3905,  3945,  3985,  4025,
    5745,  2465,  2505,  2545,  2585,  8554,   504,   668,  7881,   307,
    7899,   646,   659,   660,   669,   672,  7917,  7935,  4625,  4665,
    4705,   673,   675,   663,   676,  8574,  8594,  8614,  8634,  8654,
    5844,   677,  4824,  4864,  4904,  5858,   692,  5880,  6110,  6110,
    6110,  6110,  6704,  6727,  6750,  6773,  6796,  6819,  5894,   678,
    7337,  7360,  7383,  5916,   701,  5930,  6132,  6132,  6132,  6132,
    2625,  2665,  2705,  2745,  2785,  2825,  5952,   684,  3105,  3145,
    3185,  5966,   712,  5988,  6146,  6146,  6146,  6146,   713,  7953,
    7971,  7989,  8007,  8025,  8043,   328,  6024,   691,  4944,   313,
    4984,   693,   697,   702,   707,   708,  5024,  5064,  5104,  5144,
    7406,   325,  7429,   716,   717,   718,   719,   721,  7452,  7475,
    7498,  7521,  3225,   331,  3265,   732,   735,   736,   738,   741,
    3305,  3345,  3385,  3425,  5785,   715,  5184,  5224,  5264,  5304,
    5344,  5384,  7544,  7567,  7590,  7613,  7636,  7659,  3465,  3505,
    3545,  3585,  3625,  3665,   328,  6096,  4745,   744,   328,  4785
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
    -178,  -178,  -178,   720,   263,   -28,  -178,  -178,  -178,   -61,
    -135,   -17,   114,  -143,  -142,    95,   -42,  -141,  -140,  -118,
     -93,  1659,  1457,  1428,  1296,  1267,   985,   666,   347,   -20,
    -177
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    44,    45,     7,    18,     8,   136,
      46,    47,    48,    49,    50,   157,    51,    52,    53,    54,
     117,    55,   176,   177,   178,   179,   180,   181,   182,   183,
     106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    79,    63,   245,   246,   248,   249,    64,     1,    13,
       2,   151,    16,    73,    74,    75,   184,    11,    30,    31,
     -49,    22,   161,    63,    63,    63,    63,    24,   250,   165,
     184,   258,    30,    25,    15,    33,    34,    35,    26,    17,
      88,   -49,   -49,    36,    37,   329,    38,    39,    40,   203,
     221,   268,   -47,   -47,   152,   -14,   116,    36,    37,    66,
      38,    39,    40,   -45,    63,   162,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   -49,    63,    63,    63,
      63,   -16,   186,    65,   187,    86,    -7,    -7,   155,    -7,
      -2,     1,   159,     2,   -47,   292,   -49,   -49,   -49,   163,
      76,   188,   189,   190,   247,   392,    77,   346,   104,   191,
     192,   -50,   193,   194,   195,    87,   -47,    78,   203,   116,
     -50,   258,   258,   258,   -36,   135,    63,    63,   429,   244,
     253,    88,   -50,   -50,   -42,   -82,    83,    63,   257,   292,
     -50,   -50,   -50,    84,    63,   -48,    63,   -20,   261,   262,
     263,     9,    10,   204,   469,   205,   -47,   -82,    80,    81,
      82,    85,   107,    71,   101,   167,    87,   -48,   284,   285,
     286,   102,   206,   207,   208,   -45,   291,   -47,   -47,   185,
     209,   210,   103,   211,   212,   213,   307,   308,   309,   112,
     171,   172,   109,   173,   174,   175,   290,   -45,   138,   -83,
     137,   348,   203,   130,   -48,   138,   333,   334,   335,   346,
     346,   346,   237,    71,   345,   167,   -18,    14,   236,   236,
     139,   -83,    63,    63,   291,   -48,   -48,   465,   257,   257,
     257,   140,   168,   169,   170,   149,    63,    63,    63,   -44,
     171,   172,   110,   173,   174,   175,   138,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   482,   141,   186,
     142,   187,   203,     6,    20,    21,   -46,     6,   502,   143,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     259,   203,   203,   203,   203,   203,   191,   192,   -46,   193,
     194,   195,   138,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   144,   221,   221,   221,   221,   -19,    19,
      63,   203,   145,   549,   520,   138,   345,   345,   345,   236,
     236,   138,   116,   146,    63,    63,    63,    67,    68,   240,
      63,   561,   184,   138,    30,   241,   147,   539,   242,   138,
     268,   -48,   -48,   586,   492,   493,   494,   -43,   204,   573,
     205,    33,    34,    35,   148,   592,   347,   153,   154,    36,
      37,   598,    38,    39,    40,    41,   -15,    42,   243,    62,
     353,   354,   355,   -46,   158,   209,   210,   160,   211,   212,
     213,   510,   511,   512,   269,   -49,   -49,   -49,   267,   -45,
      62,    62,    62,    62,    71,   -17,   167,   269,   -50,   -50,
     -50,   -21,   245,   246,   248,   249,    -3,    -3,   164,    -3,
     584,   -22,   351,   168,   169,   170,   202,   220,   528,   529,
     530,   171,   172,   113,   173,   174,   175,   250,   264,   256,
     265,    62,   266,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   287,    62,    62,   133,   134,    -5,    -5,
     288,    -5,   289,   585,    -6,    -6,   310,    -6,   478,   479,
     480,   245,   246,   248,   249,   245,   246,   248,   249,   606,
     203,    -4,    -4,   609,    -4,   311,   312,   -44,   376,   376,
     376,   376,   336,   337,   338,   202,   250,   349,   203,   350,
     250,   -43,   356,    62,    62,   359,   413,   413,   413,   413,
     386,   396,   393,   247,    62,   344,   203,    -8,    -8,   423,
      -8,    62,   607,    62,   450,   450,   450,   450,   116,   256,
     256,   256,   430,   433,   460,    63,    63,   473,   244,    -9,
      -9,   470,    -9,   -13,   -13,   538,   -13,   -71,   485,   -71,
     -71,   486,   305,   -71,   487,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   247,   -71,   -71,   -71,   247,   -71,   -71,   202,
     -71,   -71,   -71,   -71,   488,   -71,   -71,   253,   -30,   -30,
     489,   -30,   495,   496,    63,   235,   235,   244,    63,    62,
      62,   244,   -29,   -29,   497,   -29,   -12,   -12,   -46,   -12,
     503,   504,   505,    62,    62,    62,   513,   344,   344,   344,
     -31,   -31,   506,   -31,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   507,   514,   515,   389,   390,   202,
     -32,   -32,   521,   -32,   522,   523,   524,   412,   412,   412,
     412,   412,   412,   412,   412,   412,   412,   525,   202,   202,
     426,   427,   202,   224,   531,   225,   -33,   -33,   532,   -33,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     533,   220,   220,   463,   464,   -10,   540,    62,   202,   604,
     229,   230,   546,   231,   232,   233,   476,   477,    61,   541,
     542,    62,    62,    62,   547,   -37,   553,    62,   -37,   543,
     -37,   -37,   544,   545,   -37,   565,   -10,   550,   562,    61,
      61,    61,    61,   362,   574,   363,   577,   -37,   -37,   -37,
     -11,   -11,   605,   587,    12,   -37,   -37,   588,   -37,   -37,
     -37,   -37,   589,   -37,   -37,   201,   219,   590,   591,     0,
     367,   368,     0,   369,   370,   371,   593,   594,   595,   596,
      61,   597,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   599,   131,   132,   600,   601,   -72,   602,   -72,
     -72,   603,   -72,   -72,   608,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   201,   -72,   -72,     0,   186,     0,
     187,     0,    61,    61,     0,     0,     0,     0,     0,     0,
       0,     0,   184,    61,    30,   241,     0,   188,   189,   190,
      61,     0,    61,     0,   328,   191,   192,   202,   193,   194,
     195,    33,    34,    35,     0,   375,   375,   558,   559,    36,
      37,     0,    38,    39,    40,   202,     0,     0,     0,     0,
       0,     0,     0,   412,   412,   570,   571,     0,     0,     0,
      71,     0,   167,   202,     0,     0,     0,     0,     0,     0,
       0,   449,   449,   582,   583,   399,     0,   400,   201,   168,
     169,   170,    62,    62,     0,     0,     0,   171,   172,   357,
     173,   174,   175,     0,   341,   342,     0,     0,    61,    61,
       0,     0,   404,   405,     0,   406,   407,   408,     0,     0,
       0,     0,    61,    61,    61,     0,     0,     0,     0,     0,
       0,     0,     0,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,     0,   387,   388,     0,     0,   201,     0,
       0,    62,     0,     0,     0,    62,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,     0,   424,   425,     0,
       0,   201,     0,    71,     0,   167,     0,     0,     0,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,     0,
     461,   462,   168,   169,   170,     0,    61,   201,     0,     0,
     171,   172,   360,   173,   174,   175,     0,    60,     0,     0,
      61,    61,    61,     0,    27,     0,    61,   184,     0,    30,
      31,     0,     0,   166,     0,     0,     0,     0,    60,    60,
      60,    60,   436,     0,   437,     0,    33,    34,    35,     0,
       0,     0,     0,     0,    36,    37,     0,    38,    39,    40,
      41,     0,    42,    43,   200,   218,     0,     0,     0,   441,
     442,     0,   443,   444,   445,     0,     0,     0,     0,    60,
       0,   120,   120,   120,   123,   124,   125,   126,   127,   128,
     129,   -81,     0,   -81,   -81,     0,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
       0,   -81,   -81,     0,   -81,   -81,   -81,   -81,     0,   -81,
     -81,     0,     0,   200,     0,     0,     0,   186,     0,   187,
       0,    60,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    60,   167,     0,     0,   188,   189,   190,    60,
       0,    60,     0,   391,   191,   192,   201,   193,   194,   195,
     168,   169,   170,     0,   556,   557,     0,     0,   171,   172,
     394,   173,   174,   175,   201,     0,     0,     0,     0,     0,
       0,     0,   568,   569,     0,     0,     0,     0,     0,    71,
       0,   167,   201,     0,     0,     0,     0,     0,     0,     0,
     580,   581,     0,   186,     0,   187,     0,   200,   168,   169,
     170,    61,    61,     0,     0,     0,   171,   172,   397,   173,
     174,   175,   188,   189,   190,     0,     0,    60,    60,   428,
     191,   192,     0,   193,   194,   195,     0,     0,     0,     0,
       0,    60,    60,    60,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   373,   373,   379,   380,   381,   382,   383,
     384,   385,     0,     0,     0,     0,     0,   200,     0,     0,
      61,     0,     0,     0,    61,   410,   410,   410,   416,   417,
     418,   419,   420,   421,   422,     0,     0,     0,     0,    59,
     200,     0,     0,     0,     0,     0,     0,     0,   447,   447,
     447,   453,   454,   455,   456,   457,   458,   459,     0,     0,
      59,    59,    59,    59,     0,    60,   200,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      60,    60,     0,     0,     0,    60,   199,   217,     0,    58,
      58,    58,    58,     0,   270,   271,   272,   273,   274,   275,
     276,    59,     0,    59,    59,   122,   -51,   -51,   -51,   -51,
       0,     0,     0,     0,     0,   198,   216,     0,   -49,     0,
     -49,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,     0,
      58,     0,    58,   121,     0,     0,     0,     0,     0,     0,
     -49,   -49,   -49,     0,   315,   -49,   -49,     0,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   199,   -49,   -49,    71,     0,
     167,     0,     0,    59,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,   168,   169,   170,
       0,    59,     0,    59,   198,   171,   172,   431,   173,   174,
     175,     0,    58,    58,     0,     0,     0,     0,     0,     0,
      57,     0,     0,    58,     0,     0,     0,     0,     0,     0,
      58,     0,    58,     0,   186,     0,   187,     0,     0,     0,
       0,    57,    57,    57,    57,   200,     0,     0,     0,    56,
       0,     0,     0,   188,   189,   190,     0,     0,     0,   199,
     468,   191,   192,   200,   193,   194,   195,   197,   215,     0,
      56,    56,    56,    56,     0,     0,     0,     0,     0,    59,
      59,   200,    57,     0,   119,     0,     0,     0,   198,     0,
       0,     0,     0,    59,    59,    59,   196,   214,     0,     0,
      60,    60,     0,     0,     0,     0,   378,     0,    58,    58,
       0,    56,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,    58,    58,    58,     0,     0,   199,   199,   415,
       0,     0,     0,     0,   377,     0,   197,     0,     0,     0,
       0,     0,   199,     0,    57,    57,     0,     0,   198,     0,
     217,   217,   452,     0,     0,    57,   198,   414,     0,    60,
       0,     0,    57,    60,    57,   196,     0,    59,   199,     0,
       0,   198,     0,    56,    56,     0,     0,     0,     0,   216,
     451,    59,    59,    59,    56,     0,     0,    59,     0,     0,
       0,    56,     0,    56,     0,     0,    58,   198,     0,   -50,
       0,   -50,   -50,     0,   -50,   -50,     0,   -50,   -50,     0,
      58,    58,    58,     0,     0,     0,    58,     0,     0,     0,
     197,   -50,   -50,   -50,     0,   315,   -50,   -50,     0,   -50,
     -50,     0,   -50,   -50,   -50,   -50,     0,   -50,   -50,     0,
      57,    57,     0,     0,     0,     0,     0,     0,     0,   196,
       0,     0,     0,     0,    57,    57,    57,     0,     0,    72,
       0,     0,     0,     0,     0,   372,     0,     0,     0,    56,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,     0,     0,    56,    56,    56,     0,     0,   409,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   108,
       0,     0,     0,   197,     0,   111,     0,   114,     0,   196,
       0,   446,   115,   118,     0,     0,   -34,     0,   -34,   -34,
       0,   -34,   -34,     0,   -34,   -34,     0,   199,    57,   197,
       0,     0,   196,     0,     0,     0,     0,     0,   -34,   -34,
     -34,     0,    57,    57,    57,   199,   -34,   -34,    57,   -34,
     -34,   -34,   -34,   156,   -34,   -34,   198,    56,   196,     0,
       0,     0,     0,   199,     0,     0,     0,   150,     0,     0,
       0,    56,    56,    56,   198,   251,   118,    56,     0,     0,
       0,     0,    59,    59,     0,     0,     0,   254,     0,     0,
       0,     0,   198,     0,     0,     0,   260,   -47,     0,   -47,
     -47,     0,   -47,   -47,     0,   -47,   -47,     0,     0,     0,
       0,    58,    58,     0,     0,     0,   283,     0,     0,   -47,
     -47,   -47,     0,     0,   314,   -47,     0,   -47,   -47,     0,
     -47,   -47,   -47,   -47,   306,   -47,   -47,    71,     0,   167,
       0,    59,     0,     0,     0,    59,     0,     0,     0,     0,
       0,   105,     0,     0,   332,     0,   168,   169,   170,     0,
       0,     0,     0,     0,   171,   172,   434,   173,   174,   175,
      58,   184,   251,    30,    58,     0,     0,     0,     0,     0,
     466,     0,     0,     0,     0,     0,     0,     0,   197,     0,
      33,    34,    35,   358,     0,   361,     0,     0,    36,    37,
       0,    38,    39,    40,     0,     0,   197,     0,     0,     0,
       0,   105,     0,     0,     0,     0,   395,   196,   398,     0,
       0,     0,     0,     0,   197,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   196,     0,     0,     0,   432,
       0,   435,     0,    57,    57,     0,     0,     0,     0,     0,
       0,     0,     0,   196,     0,     0,     0,     0,     0,   467,
     105,     0,     0,     0,     0,   472,     0,   475,     0,     0,
       0,     0,    56,    56,     0,     0,     0,     0,   481,   118,
       0,   484,     0,     0,     0,   -48,     0,   -48,   -48,     0,
     -48,   -48,   491,   -48,   -48,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,    57,   -48,   -48,   -48,
       0,     0,   314,   -48,     0,   -48,   -48,     0,   -48,   -48,
     -48,   -48,     0,   -48,   -48,     0,     0,     0,     0,   509,
       0,    56,     0,     0,   -61,    56,   -61,   -61,     0,   -61,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   326,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   327,   -61,   -61,   -61,     0,
     -61,   -61,   -61,     0,   -61,   -61,   527,   -61,   -61,   -61,
     -61,     0,   -61,   -61,   -64,     0,   -64,   -64,     0,   -64,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   -64,
     -64,     0,   -64,   -64,     0,     0,     0,     0,     0,   105,
      71,     0,   167,     0,   552,     0,   555,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,   168,
     169,   170,   564,     0,   567,     0,     0,   171,   172,   471,
     173,   174,   175,     0,     0,   105,     0,     0,     0,     0,
     576,     0,   579,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   251,   118,   -67,     0,   -67,   -67,
       0,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,     0,   -67,   -67,   -51,   -67,
     -67,   -67,   -67,     0,   -67,   -67,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,   -51,   -51,
     -51,     0,     0,   251,   254,     0,   -70,   251,   -70,   -70,
       0,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -70,     0,   -70,   -70,     0,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -68,     0,   -68,   -68,
       0,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,     0,   -68,   -68,     0,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -69,     0,   -69,   -69,
       0,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,     0,   -69,   -69,     0,   -69,
     -69,   -69,   -69,     0,   -69,   -69,   -75,     0,   -75,   -75,
       0,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -75,   -75,   -75,     0,   -75,   -75,     0,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -73,     0,   -73,   -73,
       0,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,     0,   -73,   -73,     0,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -62,     0,   -62,   -62,
       0,   -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,   326,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   327,   -62,   -62,
     -62,     0,   -62,   -62,   -62,     0,   -62,   -62,     0,   -62,
     -62,   -62,   -62,     0,   -62,   -62,   -63,     0,   -63,   -63,
       0,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,   326,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   327,   -63,   -63,
     -63,     0,   -63,   -63,   -63,     0,   -63,   -63,     0,   -63,
     -63,   -63,   -63,     0,   -63,   -63,   -65,     0,   -65,   -65,
       0,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,     0,   -65,   -65,     0,   -65,
     -65,   -65,   -65,     0,   -65,   -65,   -66,     0,   -66,   -66,
       0,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -66,     0,   -66,   -66,     0,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   -74,     0,   -74,   -74,
       0,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,     0,   -74,   -74,     0,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -76,     0,   -76,   -76,
       0,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,     0,   -76,   -76,     0,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -77,     0,   -77,   -77,
       0,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,     0,   -77,   -77,     0,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -78,     0,   -78,   -78,
       0,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,     0,   -78,   -78,     0,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -79,     0,   -79,   -79,
       0,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,     0,   -79,   -79,     0,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -80,     0,   -80,   -80,
       0,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,     0,   -80,   -80,     0,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -71,     0,   -71,   -71,
       0,   526,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,     0,   -71,   -71,     0,   -71,
     -71,   -71,   -71,     0,   -71,   -71,   -72,     0,   -72,   -72,
       0,   -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,     0,   -72,   -72,     0,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -81,     0,   -81,   -81,
       0,   -81,   -81,     0,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,     0,   -81,   -81,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -61,     0,   -61,   -61,
       0,   -61,   -61,     0,   -61,   -61,     0,   -61,   -61,   536,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   537,   -61,   -61,
     -61,     0,   -61,   -61,   -61,     0,   -61,   -61,     0,   -61,
     -61,   -61,   -61,     0,   -61,   -61,   -64,     0,   -64,   -64,
       0,   -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,   -64,   -64,   -64,     0,   -64,   -64,     0,   -64,
     -64,   -64,   -64,     0,   -64,   -64,   -67,     0,   -67,   -67,
       0,   -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,     0,   -67,   -67,     0,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -70,     0,   -70,   -70,
       0,   -70,   -70,     0,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -70,     0,   -70,   -70,     0,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -68,     0,   -68,   -68,
       0,   -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,     0,   -68,   -68,     0,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -69,     0,   -69,   -69,
       0,   -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,     0,   -69,   -69,     0,   -69,
     -69,   -69,   -69,     0,   -69,   -69,   -75,     0,   -75,   -75,
       0,   -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -75,   -75,   -75,     0,   -75,   -75,     0,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -73,     0,   -73,   -73,
       0,   -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,     0,   -73,   -73,     0,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -62,     0,   -62,   -62,
       0,   -62,   -62,     0,   -62,   -62,     0,   -62,   -62,   536,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   537,   -62,   -62,
     -62,     0,   -62,   -62,   -62,     0,   -62,   -62,     0,   -62,
     -62,   -62,   -62,     0,   -62,   -62,   -63,     0,   -63,   -63,
       0,   -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   536,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   537,   -63,   -63,
     -63,     0,   -63,   -63,   -63,     0,   -63,   -63,     0,   -63,
     -63,   -63,   -63,     0,   -63,   -63,   -65,     0,   -65,   -65,
       0,   -65,   -65,     0,   -65,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,     0,   -65,   -65,     0,   -65,
     -65,   -65,   -65,     0,   -65,   -65,   -66,     0,   -66,   -66,
       0,   -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -66,     0,   -66,   -66,     0,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   -74,     0,   -74,   -74,
       0,   -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,     0,   -74,   -74,     0,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -76,     0,   -76,   -76,
       0,   -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,     0,   -76,   -76,     0,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -77,     0,   -77,   -77,
       0,   -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,     0,   -77,   -77,     0,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -78,     0,   -78,   -78,
       0,   -78,   -78,     0,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,     0,   -78,   -78,     0,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -79,     0,   -79,   -79,
       0,   -79,   -79,     0,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,     0,   -79,   -79,     0,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -80,     0,   -80,   -80,
       0,   -80,   -80,     0,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,     0,   -80,   -80,     0,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -53,     0,   -53,   -53,
       0,   -53,   -53,     0,   -53,   -53,   323,   324,   325,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,   -53,
     -53,     0,   -53,   -53,   -53,     0,   -53,   -53,     0,   -53,
     -53,   -53,   -53,     0,   -53,   -53,   -53,     0,   -53,   -53,
       0,   -53,   -53,     0,   -53,   -53,     0,   534,   535,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,   -53,
     -53,     0,   -53,   -53,   -53,     0,   -53,   -53,     0,   -53,
     -53,   -53,   -53,     0,   -53,   -53,   -56,     0,   -56,   -56,
       0,   -56,   -56,     0,   -56,   -56,     0,   534,   535,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,
     -56,     0,   -56,   -56,   -56,     0,   -56,   -56,     0,   -56,
     -56,   -56,   -56,     0,   -56,   -56,   -57,     0,   -57,   -57,
       0,   -57,   -57,     0,   -57,   -57,     0,   534,   535,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,
     -57,     0,   -57,   -57,   -57,     0,   -57,   -57,     0,   -57,
     -57,   -57,   -57,     0,   -57,   -57,   -54,     0,   -54,   -54,
       0,   -54,   -54,     0,   -54,   -54,     0,   534,   535,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,
     -54,     0,   -54,   -54,   -54,     0,   -54,   -54,     0,   -54,
     -54,   -54,   -54,     0,   -54,   -54,   -55,     0,   -55,   -55,
       0,   -55,   -55,     0,   -55,   -55,     0,   534,   535,     0,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,   -55,   -55,
     -55,     0,   -55,   -55,   -55,     0,   -55,   -55,     0,   -55,
     -55,   -55,   -55,     0,   -55,   -55,   -58,     0,   -58,   -58,
       0,   -58,   -58,     0,   -58,   -58,     0,   534,   535,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,
     -58,     0,   -58,   -58,   -58,     0,   -58,   -58,     0,   -58,
     -58,   -58,   -58,     0,   -58,   -58,   -59,     0,   -59,   -59,
       0,   -59,   -59,     0,   -59,   -59,     0,   534,   535,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,
     -59,     0,   -59,   -59,   -59,     0,   -59,   -59,     0,   -59,
     -59,   -59,   -59,     0,   -59,   -59,   -60,     0,   -60,   -60,
       0,   -60,   -60,     0,   -60,   -60,     0,   534,   535,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -60,     0,   -60,   -60,   -60,     0,   -60,   -60,     0,   -60,
     -60,   -60,   -60,     0,   -60,   -60,   -51,     0,   -51,   -51,
       0,   -51,   -51,     0,   -51,   -51,     0,     0,     0,     0,
     316,   317,   318,   319,   320,   321,   322,     0,   -51,   -51,
     -51,     0,   -51,   -51,   -51,     0,   -51,   -51,     0,   -51,
     -51,   -51,   -51,     0,   -51,   -51,   -52,     0,   -52,   -52,
       0,   -52,   -52,     0,   -52,   -52,     0,     0,     0,     0,
     316,   317,   318,   319,   320,   321,   322,     0,   -52,   -52,
     -52,     0,   -52,   -52,   -52,     0,   -52,   -52,     0,   -52,
     -52,   -52,   -52,     0,   -52,   -52,   -45,     0,   -45,   -45,
       0,   -45,   -45,     0,   -45,   -45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,   -45,
     -45,     0,     0,     0,   313,     0,   -45,   -45,     0,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -28,     0,   -28,   -28,
     490,   -28,   -28,     0,   -28,   -28,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -28,   -28,
     -28,   -71,   -71,   -71,   -71,     0,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -38,     0,   -38,   -38,
       0,   -38,   -38,   -53,   -38,   -38,     0,    96,    97,    98,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -38,   -38,
     -38,     0,     0,   -53,   -53,   -53,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -23,     0,   -23,   -23,
       0,   -23,   -23,   -53,   -23,   -23,     0,     0,   238,   239,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -23,   -23,
     -23,     0,     0,   -53,   -53,   -53,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -25,     0,   -25,   -25,
       0,   -25,   -25,   -56,   -25,   -25,     0,     0,   238,   239,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -25,   -25,
     -25,     0,     0,   -56,   -56,   -56,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -27,     0,   -27,   -27,
       0,   -27,   -27,   -57,   -27,   -27,     0,     0,   238,   239,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -27,   -27,
     -27,     0,     0,   -57,   -57,   -57,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -24,     0,   -24,   -24,
       0,   -24,   -24,   -54,   -24,   -24,     0,     0,   238,   239,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -24,   -24,
     -24,     0,     0,   -54,   -54,   -54,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -26,     0,   -26,   -26,
       0,   -26,   -26,   -55,   -26,   -26,     0,     0,   238,   239,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -26,   -26,
     -26,     0,     0,   -55,   -55,   -55,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -30,     0,   -30,   -30,
       0,   -30,   -30,   -58,   -30,   -30,     0,     0,   238,   239,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -30,   -30,
     -30,     0,     0,   -58,   -58,   -58,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -29,     0,   -29,   -29,
       0,   -29,   -29,   -59,   -29,   -29,     0,     0,   238,   239,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -29,   -29,
     -29,     0,     0,   -59,   -59,   -59,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -40,     0,   -40,   -40,
       0,   -40,   -40,   -60,   -40,   -40,     0,     0,   238,   239,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -40,   -40,
     -40,     0,     0,   -60,   -60,   -60,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -39,     0,   -39,   -39,
       0,   -39,   -39,   -52,   -39,   -39,     0,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    95,   -39,   -39,
     -39,     0,     0,   -52,   -52,   -52,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -31,     0,   -31,   -31,
       0,   -31,   -31,     0,   -31,   -31,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -31,   -31,
     -31,   -72,   -72,   -72,   -72,     0,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -32,     0,   -32,   -32,
       0,   -32,   -32,     0,   -32,   -32,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -32,   -32,
     -32,   -81,   -81,   -81,   -81,     0,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -33,     0,   -33,   -33,
       0,   -33,   -33,     0,   -33,   -33,   -61,   -61,   500,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   501,     0,   -33,   -33,
     -33,   -61,   -61,   -61,   -61,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -35,     0,   -35,   -35,
       0,   -35,   -35,     0,   -35,   -35,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -35,   -35,
     -35,   -64,   -64,   -64,   -64,     0,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -41,     0,   -41,   -41,
       0,   -41,   -41,     0,   -41,   -41,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -41,   -41,
     -41,   -67,   -67,   -67,   -67,     0,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,    27,     0,    28,    29,
       0,    30,    31,     0,    32,   166,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,    33,    34,
      35,   -70,   -70,   -70,   -70,     0,    36,    37,     0,    38,
      39,    40,    41,     0,    42,    43,   -28,     0,   -28,   -28,
       0,   -28,   -28,     0,   -28,   -28,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -28,   -28,
     -28,   -68,   -68,   -68,   -68,     0,   -28,   -28,     0,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -38,     0,   -38,   -38,
       0,   -38,   -38,     0,   -38,   -38,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -38,   -38,
     -38,   -69,   -69,   -69,   -69,     0,   -38,   -38,     0,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -23,     0,   -23,   -23,
       0,   -23,   -23,     0,   -23,   -23,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -23,   -23,
     -23,   -75,   -75,   -75,   -75,     0,   -23,   -23,     0,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -25,     0,   -25,   -25,
       0,   -25,   -25,     0,   -25,   -25,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -25,   -25,
     -25,   -73,   -73,   -73,   -73,     0,   -25,   -25,     0,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -27,     0,   -27,   -27,
       0,   -27,   -27,     0,   -27,   -27,   -62,   -62,   500,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   501,     0,   -27,   -27,
     -27,   -62,   -62,   -62,   -62,     0,   -27,   -27,     0,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -24,     0,   -24,   -24,
       0,   -24,   -24,     0,   -24,   -24,   -63,   -63,   500,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   501,     0,   -24,   -24,
     -24,   -63,   -63,   -63,   -63,     0,   -24,   -24,     0,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -26,     0,   -26,   -26,
       0,   -26,   -26,     0,   -26,   -26,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -26,   -26,
     -26,   -65,   -65,   -65,   -65,     0,   -26,   -26,     0,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -40,     0,   -40,   -40,
       0,   -40,   -40,     0,   -40,   -40,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -40,   -40,
     -40,   -66,   -66,   -66,   -66,     0,   -40,   -40,     0,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -39,     0,   -39,   -39,
       0,   -39,   -39,     0,   -39,   -39,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -39,   -39,
     -39,   -74,   -74,   -74,   -74,     0,   -39,   -39,     0,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -10,     0,   -10,   -10,
       0,   -10,   -10,     0,   -10,   -10,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -10,   -10,
     -10,   -76,   -76,   -76,   -76,     0,   -10,   -10,     0,   -10,
     -10,   -10,   -10,     0,   -10,   -10,   -11,     0,   -11,   -11,
       0,   -11,   -11,     0,   -11,   -11,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -11,   -11,
     -11,   -77,   -77,   -77,   -77,     0,   -11,   -11,     0,   -11,
     -11,   -11,   -11,     0,   -11,   -11,   -35,     0,   -35,   -35,
       0,   -35,   -35,     0,   -35,   -35,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -35,   -35,
     -35,   -78,   -78,   -78,   -78,     0,   -35,   -35,     0,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -41,     0,   -41,   -41,
       0,   -41,   -41,     0,   -41,   -41,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -41,   -41,
     -41,   -79,   -79,   -79,   -79,     0,   -41,   -41,     0,   -41,
     -41,   -41,   -41,     0,   -41,   -41,    27,     0,    28,    29,
       0,    30,    31,     0,   255,   166,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,    33,    34,
      35,   -80,   -80,   -80,   -80,     0,    36,    37,     0,    38,
      39,    40,    41,     0,    42,    43,    -8,     0,    -8,    -8,
       0,    -8,    -8,     0,    -8,    -8,   498,   499,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,     0,     0,    -8,    -8,
      -8,   -53,   -53,   -53,   -53,     0,    -8,    -8,     0,    -8,
      -8,    -8,    -8,     0,    -8,    -8,    -9,     0,    -9,    -9,
       0,    -9,    -9,     0,    -9,    -9,   498,   499,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,     0,    -9,    -9,
      -9,   -56,   -56,   -56,   -56,     0,    -9,    -9,     0,    -9,
      -9,    -9,    -9,     0,    -9,    -9,    27,     0,    28,    29,
       0,    30,    31,     0,   343,   166,   498,   499,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,     0,     0,    33,    34,
      35,   -57,   -57,   -57,   -57,     0,    36,    37,     0,    38,
      39,    40,    41,     0,    42,    43,   -30,     0,   -30,   -30,
       0,   -30,   -30,     0,   -30,   -30,   498,   499,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,     0,     0,   -30,   -30,
     -30,   -54,   -54,   -54,   -54,     0,   -30,   -30,     0,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -29,     0,   -29,   -29,
       0,   -29,   -29,     0,   -29,   -29,   498,   499,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,     0,     0,   -29,   -29,
     -29,   -55,   -55,   -55,   -55,     0,   -29,   -29,     0,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -31,     0,   -31,   -31,
       0,   -31,   -31,     0,   -31,   -31,   498,   499,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,     0,     0,   -31,   -31,
     -31,   -58,   -58,   -58,   -58,     0,   -31,   -31,     0,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -32,     0,   -32,   -32,
       0,   -32,   -32,     0,   -32,   -32,   498,   499,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,     0,     0,   -32,   -32,
     -32,   -59,   -59,   -59,   -59,     0,   -32,   -32,     0,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -33,     0,   -33,   -33,
       0,   -33,   -33,     0,   -33,   -33,   498,   499,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,     0,   -33,   -33,
     -33,   -60,   -60,   -60,   -60,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -46,     0,   -46,   -46,
       0,   -46,   -46,     0,   -46,   -46,     0,     0,     0,   270,
     271,   272,   273,   274,   275,   276,     0,     0,   -46,   -46,
     -46,   -52,   -52,   -52,   -52,     0,   -46,   -46,     0,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -34,     0,   -34,   -34,
       0,   -34,   -34,     0,   -34,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,   -34,
     -34,    71,     0,   167,     0,     0,   -34,   -34,     0,   -34,
     -34,   -34,   -34,     0,   -34,   -34,    71,     0,   167,     0,
     168,   169,   170,     0,     0,   483,     0,     0,   171,   172,
     474,   173,   174,   175,     0,   168,   169,   170,   186,     0,
     187,     0,     0,   171,   172,     0,   173,   174,   175,     0,
       0,     0,    71,     0,   167,     0,     0,   188,   189,   190,
       0,     0,     0,     0,   548,   191,   192,     0,   193,   194,
     195,   168,   169,   170,    71,     0,   167,     0,     0,   171,
     172,   551,   173,   174,   175,     0,     0,     0,   186,     0,
     187,     0,     0,   168,   169,   170,     0,     0,     0,     0,
       0,   171,   172,   554,   173,   174,   175,   188,   189,   190,
      71,     0,   167,     0,   560,   191,   192,     0,   193,   194,
     195,     0,     0,     0,    71,     0,   167,     0,     0,   168,
     169,   170,     0,     0,     0,     0,     0,   171,   172,   563,
     173,   174,   175,   168,   169,   170,   186,     0,   187,     0,
       0,   171,   172,   566,   173,   174,   175,     0,     0,     0,
      71,     0,   167,     0,     0,   188,   189,   190,     0,     0,
       0,     0,   572,   191,   192,     0,   193,   194,   195,   168,
     169,   170,    71,     0,   167,     0,     0,   171,   172,   575,
     173,   174,   175,     0,     0,     0,    71,     0,   167,     0,
       0,   168,   169,   170,     0,     0,     0,     0,     0,   171,
     172,   578,   173,   174,   175,   168,   169,   170,   223,     0,
      30,     0,     0,   171,   172,     0,   173,   174,   175,     0,
       0,     0,   224,     0,   225,     0,     0,    33,    34,    35,
       0,     0,     0,     0,     0,    36,    37,     0,    38,    39,
      40,   226,   227,   228,   184,     0,    30,     0,     0,   229,
     230,     0,   231,   232,   233,     0,     0,     0,   186,     0,
     187,     0,     0,    33,    34,    35,     0,     0,     0,     0,
       0,    36,    37,     0,    38,    39,    40,   188,   189,   190,
     252,     0,   167,     0,     0,   191,   192,     0,   193,   194,
     195,     0,     0,     0,   362,     0,   363,     0,     0,   168,
     169,   170,     0,     0,     0,     0,     0,   171,   172,     0,
     173,   174,   175,   364,   365,   366,   399,     0,   400,     0,
       0,   367,   368,     0,   369,   370,   371,     0,     0,     0,
     436,     0,   437,     0,     0,   401,   402,   403,     0,     0,
       0,     0,     0,   404,   405,     0,   406,   407,   408,   438,
     439,   440,   204,     0,   205,     0,     0,   441,   442,     0,
     443,   444,   445,     0,     0,     0,     0,     0,     0,     0,
       0,   206,   207,   208,     0,     0,     0,     0,     0,   209,
     210,     0,   211,   212,   213,   282,     0,   -71,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,   222,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,   352,   -71,   -71,   -71,   -71,
     222,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   508,     0,   -71,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
      69,   -71,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
      70,   -71,   -71,   -71,    69,   -71,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,   330,   -71,   -71,   -71,    69,   -71,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   331,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,
     -72,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -81,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -61,     0,     0,   -61,
     -61,   -61,   303,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     304,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -64,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -67,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -70,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -68,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -69,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -75,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -73,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -62,     0,     0,   -62,   -62,   -62,   303,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   304,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -63,     0,     0,   -63,   -63,   -63,   303,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   304,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -65,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -66,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   -74,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -76,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -77,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -78,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -79,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -72,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -81,
     -72,   -72,   -72,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,   -61,   -81,
     -81,   -81,   -61,   -61,   -61,    99,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   100,     0,     0,     0,   -64,   -61,   -61,
     -61,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   -67,   -64,   -64,   -64,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,   -70,   -67,   -67,   -67,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,   -68,   -70,   -70,   -70,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,   -69,   -68,   -68,   -68,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,   -75,   -69,   -69,   -69,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,   -73,   -75,   -75,   -75,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
     -62,   -73,   -73,   -73,   -62,   -62,   -62,    99,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   100,     0,     0,     0,   -63,
     -62,   -62,   -62,   -63,   -63,   -63,    99,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   100,     0,     0,     0,   -65,   -63,
     -63,   -63,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,   -66,   -65,   -65,
     -65,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,   -74,   -66,   -66,   -66,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,   -76,   -74,   -74,   -74,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,   -77,   -76,   -76,   -76,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,   -78,   -77,   -77,   -77,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,   -79,   -78,   -78,   -78,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,   -80,   -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
     -72,   -80,   -80,   -80,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -81,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -61,     0,     0,     0,
     -61,   -61,   518,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     519,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -64,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -70,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -68,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -75,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -73,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -62,     0,     0,     0,   -62,   -62,   518,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   519,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -63,     0,     0,     0,   -63,   -63,   518,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   519,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -65,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -66,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   -74,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -76,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -77,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -78,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -79,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -80,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -53,     0,     0,   300,   301,   302,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,     0,     0,     0,   -72,   -53,
     -53,   -53,   -53,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,   -81,     0,   -72,   -72,
     -72,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,   -61,     0,   -81,   -81,   -81,   -61,
     -61,   339,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   340,
       0,     0,   -64,     0,   -61,   -61,   -61,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -67,     0,   -64,   -64,   -64,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,   -70,     0,
     -67,   -67,   -67,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -68,     0,   -70,   -70,
     -70,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -69,     0,   -68,   -68,   -68,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,   -62,     0,   -69,   -69,   -69,   -62,   -62,   339,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   340,     0,     0,
     -63,     0,   -62,   -62,   -62,   -63,   -63,   339,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   340,     0,     0,   -75,     0,
     -63,   -63,   -63,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,   -73,     0,   -75,   -75,
     -75,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -65,     0,   -73,   -73,   -73,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,   -66,     0,   -65,   -65,   -65,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -74,     0,   -66,   -66,   -66,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -76,     0,
     -74,   -74,   -74,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -77,     0,   -76,   -76,
     -76,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,   -78,     0,   -77,   -77,   -77,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -79,     0,   -78,   -78,   -78,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     -80,     0,   -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,   -53,
     -80,   -80,   -80,   516,   517,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,     0,     0,     0,     0,     0,   -53,   -53,
     -53,   -53,   -56,     0,     0,     0,   516,   517,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   -57,     0,     0,     0,   516,
     517,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,   -54,     0,
       0,     0,   516,   517,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,     0,     0,   -54,   -54,   -54,
     -54,   -55,     0,     0,     0,   516,   517,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,
     -55,   -55,   -55,   -55,   -58,     0,     0,     0,   516,   517,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
       0,     0,     0,   -58,   -58,   -58,   -58,   -59,     0,     0,
       0,   516,   517,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
     -60,     0,     0,     0,   516,   517,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,   -51,     0,     0,   -60,
     -60,   -60,   -60,   293,   294,   295,   296,   297,   298,   299,
       0,     0,   -52,     0,     0,   -51,   -51,   -51,   -51,   293,
     294,   295,   296,   297,   298,   299,     0,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -61,   -61,   -61,   280,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   281,     0,     0,     0,
       0,   -61,   -61,   -61,   -61,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -62,   -62,   -62,   280,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   281,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -63,   -63,   -63,   280,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   281,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   277,   278,   279,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,
       0,   -53,   -53,   -53,   -53
};

static const yytype_int16 yycheck[] =
{
      17,    43,    22,   146,   146,   146,   146,    24,     1,     6,
       3,   146,     3,    33,    34,    35,     4,     0,     6,     7,
       7,    10,   157,    43,    44,    45,    46,    30,   146,   164,
       4,   166,     6,     8,     4,    23,    24,    25,     4,    30,
      27,    28,    29,    31,    32,   222,    34,    35,    36,    69,
      70,    28,    29,    30,   147,    30,    84,    31,    32,     8,
      34,    35,    36,     7,    84,   158,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     8,    97,    98,    99,
     100,    30,     4,     3,     6,    29,     0,     1,   149,     3,
       0,     1,   153,     3,     7,    27,    28,    29,    30,   160,
       6,    23,    24,    25,   146,   282,     6,   242,    30,    31,
      32,     7,    34,    35,    36,    28,    29,     6,   138,   147,
       8,   256,   257,   258,     6,     8,   146,   147,   305,   146,
     158,    27,    28,    29,     6,     8,     6,   157,   166,    27,
      28,    29,    30,     6,   164,     7,   166,    30,   168,   169,
     170,     4,     5,     4,   331,     6,     8,    30,    44,    45,
      46,     7,    13,     4,     4,     6,    28,    29,   188,   189,
     190,     3,    23,    24,    25,     8,    28,    29,    30,     7,
      31,    32,     4,    34,    35,    36,   206,   207,   208,     4,
      31,    32,    30,    34,    35,    36,    29,    30,     8,     8,
       5,   243,   222,     4,     8,     8,   226,   227,   228,   344,
     345,   346,     7,     4,   242,     6,     6,     7,   238,   239,
      30,    30,   242,   243,    28,    29,    30,    30,   256,   257,
     258,    31,    23,    24,    25,     4,   256,   257,   258,     7,
      31,    32,    33,    34,    35,    36,     8,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   350,    30,     4,
      30,     6,   282,     0,     4,     5,     8,     4,    30,    30,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     166,   301,   302,   303,   304,   305,    31,    32,    30,    34,
      35,    36,     8,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,    30,   324,   325,   326,   327,     6,     7,
     330,   331,    30,   490,    30,     8,   344,   345,   346,   339,
     340,     8,   350,    30,   344,   345,   346,     4,     5,     1,
     350,   508,     4,     8,     6,     7,     7,    30,    10,     8,
      28,    29,    30,    30,   364,   365,   366,     7,     4,   526,
       6,    23,    24,    25,     3,    30,   242,     4,     5,    31,
      32,    30,    34,    35,    36,    37,    30,    39,    40,    22,
     256,   257,   258,     7,     7,    31,    32,     4,    34,    35,
      36,   401,   402,   403,    27,    28,    29,    30,    29,    30,
      43,    44,    45,    46,     4,    30,     6,    27,    28,    29,
      30,    30,   545,   545,   545,   545,     0,     1,    30,     3,
     545,    30,     7,    23,    24,    25,    69,    70,   438,   439,
     440,    31,    32,    33,    34,    35,    36,   545,     6,   166,
       6,    84,     6,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     6,    97,    98,    99,   100,     0,     1,
       6,     3,     6,   546,     0,     1,     6,     3,   344,   345,
     346,   604,   604,   604,   604,   608,   608,   608,   608,   604,
     490,     0,     1,   608,     3,     6,     6,    30,   498,   499,
     500,   501,     6,     6,     6,   138,   604,     6,   508,     6,
     608,    30,    30,   146,   147,     4,   516,   517,   518,   519,
       4,     4,    30,   545,   157,   242,   526,     0,     1,     4,
       3,   164,   605,   166,   534,   535,   536,   537,   546,   256,
     257,   258,    30,     4,     4,   545,   546,     4,   545,     0,
       1,    30,     3,     0,     1,    31,     3,     1,    30,     3,
       4,    30,     6,     7,    30,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   604,    27,    28,    29,   608,    31,    32,   222,
      34,    35,    36,    37,    30,    39,    40,   605,     0,     1,
      30,     3,     6,     6,   604,   238,   239,   604,   608,   242,
     243,   608,     0,     1,     6,     3,     0,     1,    30,     3,
      30,    30,    30,   256,   257,   258,     6,   344,   345,   346,
       0,     1,    30,     3,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,    30,     6,     6,   280,   281,   282,
       0,     1,    30,     3,    30,    30,    30,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,    30,   301,   302,
     303,   304,   305,     4,     6,     6,     0,     1,     6,     3,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
       6,   324,   325,   326,   327,     7,    30,   330,   331,   584,
      31,    32,     7,    34,    35,    36,   339,   340,    22,    30,
      30,   344,   345,   346,    31,     1,     4,   350,     4,    30,
       6,     7,    30,    30,    10,     4,    30,    30,    30,    43,
      44,    45,    46,     4,    30,     6,     4,    23,    24,    25,
       7,    30,     7,    30,     4,    31,    32,    30,    34,    35,
      36,    37,    30,    39,    40,    69,    70,    30,    30,    -1,
      31,    32,    -1,    34,    35,    36,    30,    30,    30,    30,
      84,    30,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    30,    97,    98,    30,    30,     1,    30,     3,
       4,    30,     6,     7,    30,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,   138,    39,    40,    -1,     4,    -1,
       6,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,   157,     6,     7,    -1,    23,    24,    25,
     164,    -1,   166,    -1,    30,    31,    32,   490,    34,    35,
      36,    23,    24,    25,    -1,   498,   499,   500,   501,    31,
      32,    -1,    34,    35,    36,   508,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   516,   517,   518,   519,    -1,    -1,    -1,
       4,    -1,     6,   526,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   534,   535,   536,   537,     4,    -1,     6,   222,    23,
      24,    25,   545,   546,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,   238,   239,    -1,    -1,   242,   243,
      -1,    -1,    31,    32,    -1,    34,    35,    36,    -1,    -1,
      -1,    -1,   256,   257,   258,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,   278,   279,    -1,    -1,   282,    -1,
      -1,   604,    -1,    -1,    -1,   608,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,    -1,   301,   302,    -1,
      -1,   305,    -1,     4,    -1,     6,    -1,    -1,    -1,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    -1,
     324,   325,    23,    24,    25,    -1,   330,   331,    -1,    -1,
      31,    32,    33,    34,    35,    36,    -1,    22,    -1,    -1,
     344,   345,   346,    -1,     1,    -1,   350,     4,    -1,     6,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,     4,    -1,     6,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      37,    -1,    39,    40,    69,    70,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    -1,    39,
      40,    -1,    -1,   138,    -1,    -1,    -1,     4,    -1,     6,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,   157,     6,    -1,    -1,    23,    24,    25,   164,
      -1,   166,    -1,    30,    31,    32,   490,    34,    35,    36,
      23,    24,    25,    -1,   498,   499,    -1,    -1,    31,    32,
      33,    34,    35,    36,   508,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   516,   517,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,   526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     534,   535,    -1,     4,    -1,     6,    -1,   222,    23,    24,
      25,   545,   546,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    23,    24,    25,    -1,    -1,   242,   243,    30,
      31,    32,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,   256,   257,   258,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,    -1,    -1,
     604,    -1,    -1,    -1,   608,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    -1,    -1,    -1,    -1,    22,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    -1,    -1,
      43,    44,    45,    46,    -1,   330,   331,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,
     345,   346,    -1,    -1,    -1,   350,    69,    70,    -1,    43,
      44,    45,    46,    -1,    15,    16,    17,    18,    19,    20,
      21,    84,    -1,    86,    87,    88,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      84,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,   138,    39,    40,     4,    -1,
       6,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,    23,    24,    25,
      -1,   164,    -1,   166,   138,    31,    32,    33,    34,    35,
      36,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    -1,   166,    -1,     4,    -1,     6,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,   490,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,   222,
      30,    31,    32,   508,    34,    35,    36,    69,    70,    -1,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,   242,
     243,   526,    84,    -1,    86,    -1,    -1,    -1,   222,    -1,
      -1,    -1,    -1,   256,   257,   258,    69,    70,    -1,    -1,
     545,   546,    -1,    -1,    -1,    -1,   269,    -1,   242,   243,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,
      -1,    -1,   256,   257,   258,    -1,    -1,   290,   291,   292,
      -1,    -1,    -1,    -1,   268,    -1,   138,    -1,    -1,    -1,
      -1,    -1,   305,    -1,   146,   147,    -1,    -1,   282,    -1,
     313,   314,   315,    -1,    -1,   157,   290,   291,    -1,   604,
      -1,    -1,   164,   608,   166,   138,    -1,   330,   331,    -1,
      -1,   305,    -1,   146,   147,    -1,    -1,    -1,    -1,   313,
     314,   344,   345,   346,   157,    -1,    -1,   350,    -1,    -1,
      -1,   164,    -1,   166,    -1,    -1,   330,   331,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
     344,   345,   346,    -1,    -1,    -1,   350,    -1,    -1,    -1,
     222,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,    -1,
     242,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,    -1,    -1,   256,   257,   258,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,   242,
     243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     282,    -1,    -1,   256,   257,   258,    -1,    -1,   290,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    -1,    -1,   305,    -1,    76,    -1,    78,    -1,   282,
      -1,   313,    83,    84,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,   490,   330,   331,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,   344,   345,   346,   508,    31,    32,   350,    34,
      35,    36,    37,    38,    39,    40,   490,   330,   331,    -1,
      -1,    -1,    -1,   526,    -1,    -1,    -1,   138,    -1,    -1,
      -1,   344,   345,   346,   508,   146,   147,   350,    -1,    -1,
      -1,    -1,   545,   546,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    -1,   526,    -1,    -1,    -1,   167,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,   545,   546,    -1,    -1,    -1,   187,    -1,    -1,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,   205,    39,    40,     4,    -1,     6,
      -1,   604,    -1,    -1,    -1,   608,    -1,    -1,    -1,    -1,
      -1,   222,    -1,    -1,   225,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
     604,     4,   243,     6,   608,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,
      23,    24,    25,   264,    -1,   266,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    -1,    -1,   508,    -1,    -1,    -1,
      -1,   282,    -1,    -1,    -1,    -1,   287,   490,   289,    -1,
      -1,    -1,    -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,   508,    -1,    -1,    -1,   310,
      -1,   312,    -1,   545,   546,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,   330,
     331,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,    -1,
      -1,    -1,   545,   546,    -1,    -1,    -1,    -1,   349,   350,
      -1,   352,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,     7,   363,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   604,    -1,    -1,    -1,   608,    23,    24,    25,
      -1,    -1,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,   400,
      -1,   604,    -1,    -1,     1,   608,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,   437,    34,    35,    36,
      37,    -1,    39,    40,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,   490,
       4,    -1,     6,    -1,   495,    -1,   497,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   508,    -1,    23,
      24,    25,   513,    -1,   515,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,   526,    -1,    -1,    -1,    -1,
     531,    -1,   533,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   545,   546,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,     7,    34,
      35,    36,    37,    -1,    39,    40,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,   604,   605,    -1,     1,   608,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
       6,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,     4,    -1,     6,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     4,    -1,     6,    -1,
      23,    24,    25,    -1,    -1,    13,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    23,    24,    25,     4,    -1,
       6,    -1,    -1,    31,    32,    -1,    34,    35,    36,    -1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,    34,    35,
      36,    23,    24,    25,     4,    -1,     6,    -1,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,     4,    -1,
       6,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    23,    24,    25,
       4,    -1,     6,    -1,    30,    31,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    23,    24,    25,     4,    -1,     6,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
       4,    -1,     6,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,    -1,    34,    35,    36,    23,
      24,    25,     4,    -1,     6,    -1,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,     4,    -1,     6,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    23,    24,    25,     4,    -1,
       6,    -1,    -1,    31,    32,    -1,    34,    35,    36,    -1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    23,    24,    25,     4,    -1,     6,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    -1,    -1,    -1,     4,    -1,
       6,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    35,    36,    23,    24,    25,
       4,    -1,     6,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    23,    24,    25,     4,    -1,     6,    -1,
      -1,    31,    32,    -1,    34,    35,    36,    -1,    -1,    -1,
       4,    -1,     6,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,    23,
      24,    25,     4,    -1,     6,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,     6,    -1,     8,    -1,    -1,
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
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
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
      -1,    -1,     7,    27,    28,    29,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,     7,    27,    28,    29,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
       8,    27,    28,    29,    12,    13,    14,    15,    16,    17,
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
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,     7,    27,
      28,    29,    30,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,     7,    -1,    27,    28,
      29,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,     7,    -1,    27,    28,    29,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
       7,    -1,    27,    28,    29,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,     7,    -1,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,     7,    -1,    27,    28,
      29,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,     7,    -1,    27,    28,    29,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
       7,    -1,    27,    28,    29,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,     7,    -1,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,     7,    -1,    27,    28,
      29,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,     7,    -1,    27,    28,    29,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
       7,    -1,    27,    28,    29,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,     7,    -1,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,     7,    -1,    27,    28,
      29,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,     7,    -1,    27,    28,    29,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
       7,    -1,    27,    28,    29,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,     8,
      27,    28,    29,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,     8,    -1,    -1,    27,
      28,    29,    30,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,     8,    -1,    -1,    27,    28,    29,    30,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    42,    43,    44,    45,    47,    49,     4,
       5,     0,    44,     6,     7,     4,     3,    30,    48,     7,
       4,     5,    10,    52,    30,     8,     4,     1,     3,     4,
       6,     7,     9,    23,    24,    25,    31,    32,    34,    35,
      36,    37,    39,    40,    45,    46,    51,    52,    53,    54,
      55,    57,    58,    59,    60,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    52,     3,     8,     4,     5,     6,
      26,     4,    62,    70,    70,    70,     6,     6,     6,    57,
      53,    53,    53,     6,     6,     7,    29,    28,    27,    15,
      16,    17,    18,    19,    20,    21,    11,    12,    13,    14,
      22,     4,     3,     4,    30,    62,    71,    13,    62,    30,
      33,    62,     4,    33,    62,    62,    46,    61,    62,    64,
      67,    65,    66,    67,    67,    67,    67,    67,    67,    67,
       4,    68,    68,    69,    69,     8,    50,     5,     8,    30,
      31,    30,    30,    30,    30,    30,    30,     7,     3,     4,
      62,    51,    61,     4,     5,    50,    38,    56,     7,    50,
       4,    51,    61,    50,    30,    51,    10,     6,    23,    24,
      25,    31,    32,    34,    35,    36,    63,    64,    65,    66,
      67,    68,    69,    70,     4,     7,     4,     6,    23,    24,
      25,    31,    32,    34,    35,    36,    63,    64,    65,    66,
      67,    68,    69,    70,     4,     6,    23,    24,    25,    31,
      32,    34,    35,    36,    63,    64,    65,    66,    67,    68,
      69,    70,     6,     4,     4,     6,    23,    24,    25,    31,
      32,    34,    35,    36,    68,    69,    70,     7,    12,    13,
       1,     7,    10,    40,    52,    54,    55,    57,    58,    59,
      60,    62,     4,    46,    62,     9,    45,    46,    51,    53,
      62,    70,    70,    70,     6,     6,     6,    29,    28,    27,
      15,    16,    17,    18,    19,    20,    21,    11,    12,    13,
      14,    22,     6,    62,    70,    70,    70,     6,     6,     6,
      29,    28,    27,    15,    16,    17,    18,    19,    20,    21,
      11,    12,    13,    14,    22,     6,    62,    70,    70,    70,
       6,     6,     6,    29,    28,    27,    15,    16,    17,    18,
      19,    20,    21,    11,    12,    13,    14,    22,    30,    71,
      26,     6,    62,    70,    70,    70,     6,     6,     6,    14,
      22,    68,    68,     9,    45,    46,    51,    53,    57,     6,
       6,     7,    26,    53,    53,    53,    30,    33,    62,     4,
      33,    62,     4,     6,    23,    24,    25,    31,    32,    34,
      35,    36,    64,    67,    68,    69,    70,    65,    66,    67,
      67,    67,    67,    67,    67,    67,     4,    68,    68,    69,
      69,    30,    71,    30,    33,    62,     4,    33,    62,     4,
       6,    23,    24,    25,    31,    32,    34,    35,    36,    64,
      67,    68,    69,    70,    65,    66,    67,    67,    67,    67,
      67,    67,    67,     4,    68,    68,    69,    69,    30,    71,
      30,    33,    62,     4,    33,    62,     4,     6,    23,    24,
      25,    31,    32,    34,    35,    36,    64,    67,    68,    69,
      70,    65,    66,    67,    67,    67,    67,    67,    67,    67,
       4,    68,    68,    69,    69,    30,    13,    62,    30,    71,
      30,    33,    62,     4,    33,    62,    69,    69,    53,    53,
      53,    62,    61,    13,    62,    30,    30,    30,    30,    30,
       6,    62,    70,    70,    70,     6,     6,     6,    12,    13,
      14,    22,    30,    30,    30,    30,    30,    30,     6,    62,
      70,    70,    70,     6,     6,     6,    12,    13,    14,    22,
      30,    30,    30,    30,    30,    30,     6,    62,    70,    70,
      70,     6,     6,     6,    12,    13,    14,    22,    31,    30,
      30,    30,    30,    30,    30,    30,     7,    31,    30,    71,
      30,    33,    62,     4,    33,    62,    68,    68,    69,    69,
      30,    71,    30,    33,    62,     4,    33,    62,    68,    68,
      69,    69,    30,    71,    30,    33,    62,     4,    33,    62,
      68,    68,    69,    69,    51,    61,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    56,     7,    51,    61,    30,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    45,    45,
      46,    46,    47,    47,    48,    48,    48,    48,    49,    49,
      50,    50,    50,    51,    51,    51,    51,    51,    51,    52,
      53,    53,    53,    53,    54,    54,    55,    56,    57,    57,
      58,    59,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     4,
       3,     4,     5,     4,     2,     6,     3,     8,     2,     3,
       0,     4,     5,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     5,     7,     1,     1,     1,     2,
       2,     9,     1,     1,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     1,     1,     3,     4,     3,     4,     4,     4,     4,
       4,     1,     1,     3
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
  YYLTYPE *yylloc;
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* ROOT_TREE: GlobalDef  */
#line 57 "src/parser.y"
                  {;}
#line 3465 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 61 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3474 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 65 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 3484 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 73 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 3492 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 76 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 3500 "src/parser.c"
    break;

  case 7: /* GlobalDec: error  */
#line 79 "src/parser.y"
                        {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 3509 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 86 "src/parser.y"
                                     {
			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-2].string));
			if(!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}
			strcat(str, " ");
			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);
		}
#line 3525 "src/parser.c"
    break;

  case 9: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 98 "src/parser.y"
                                          {
			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");
			
			if(!add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);

		}
#line 3544 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT Expression  */
#line 115 "src/parser.y"
                                          {
			(yyval.state) = new_node("=", root);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-2].string));

			add_child((yyval.state), new_node(str, root));
			add_child((yyval.state), (yyvsp[0].state));

			if (!variable_was_declared(s_table, scope, (yyvsp[-2].string))) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", (yyvsp[-2].string), (yylsp[-2]).first_line, (yylsp[-2]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

			
			if(!check_type_subtree((yyval.state), s_table, scope)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Invalid operand types, at ln %lu col %lu.", n_line, n_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
#line 3577 "src/parser.c"
    break;

  case 11: /* Definition: IDENTIFIER ATT MIN NUM_CONST  */
#line 144 "src/parser.y"
                                             {
			(yyval.state) = new_node("=", root);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));

			add_child((yyval.state), new_node(str, root));
			sprintf(str, "-%lf", (yyvsp[0].num));

			add_child((yyval.state), new_node(str, root));

			if (!variable_was_declared(s_table, scope, (yyvsp[-3].string))) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", (yyvsp[-3].string), (yylsp[-3]).first_line, (yylsp[-3]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

			
			if(!check_type_subtree((yyval.state), s_table, scope)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Invalid expression type, at ln %d col %d.", (yylsp[0]).first_line, (yylsp[0]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
#line 3612 "src/parser.c"
    break;

  case 12: /* FunctionDefinition: FunctionHead LP FunctionArgs RP CompStatement  */
#line 177 "src/parser.y"
                                                 {
		(yyval.state) = new_node("FunctionDefinition", root);

		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));

		decrease_depth_scope(scope);
	}
#line 3626 "src/parser.c"
    break;

  case 13: /* FunctionDefinition: FunctionHead LP RP CompStatement  */
#line 187 "src/parser.y"
                                        {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

		push_arg_to_arglist(s_table, "None", last_f);
	}
#line 3639 "src/parser.c"
    break;

  case 14: /* FunctionArgs: TYPE IDENTIFIER  */
#line 198 "src/parser.y"
                        {
		(yyval.state) = new_node("FunctionParameters", root);

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, (yyvsp[-1].string), last_f);
	}
#line 3654 "src/parser.c"
    break;

  case 15: /* FunctionArgs: TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 209 "src/parser.y"
                                                      {
		(yyval.state) = new_node("FunctionParameters", root);

		if(!add_row_symbol_table(s_table, (yyvsp[-4].string), (yyvsp[-5].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-4].string));
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, (yyvsp[-5].string), last_f);


		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f);
	}
#line 3677 "src/parser.c"
    break;

  case 16: /* FunctionArgs: TYPE LIST IDENTIFIER  */
#line 228 "src/parser.y"
                             {
		(yyval.state) = new_node("FunctionParameters", root);

		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), str, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, str, last_f);	
	}
#line 3697 "src/parser.c"
    break;

  case 17: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 244 "src/parser.y"
                                                                {
		(yyval.state) = new_node("FunctionParameters", root);

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, (yyvsp[-7].string));
		strcat(arg_1," LIST ");

		if(!add_row_symbol_table(s_table, (yyvsp[-5].string), arg_1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_1, last_f);

		char arg_2[MAX_BUFFER_SIZE];
		strcpy(arg_2, (yyvsp[-3].string));
		strcat(arg_2," LIST ");

		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), arg_2, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_2, last_f);
	}
#line 3729 "src/parser.c"
    break;

  case 18: /* FunctionHead: TYPE IDENTIFIER  */
#line 274 "src/parser.y"
                        {
		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[0].string));
		strcat(str, "()");

		(yyval.state) = new_node(str, root);

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, false))
		{
			printf("\033[91mSemantic error at line %d, column %d: Function %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);

	}
#line 3752 "src/parser.c"
    break;

  case 19: /* FunctionHead: TYPE LIST IDENTIFIER  */
#line 293 "src/parser.y"
                             {
		char f_name[MAX_BUFFER_SIZE];
		strcpy(f_name, (yyvsp[0].string));
		strcat(f_name, "()");

		(yyval.state) = new_node(f_name, root);

		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), str, scope, false))
		{
			printf("\033[91mSemantic error at line %d, column %d: Function %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, f_name);
			first_pass_sematic_error_found = true;
		}

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);
	}
#line 3778 "src/parser.c"
    break;

  case 20: /* ParamList: %empty  */
#line 317 "src/parser.y"
             {
			(yyval.state) = new_node("ParamList", root);
		}
#line 3786 "src/parser.c"
    break;

  case 21: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 321 "src/parser.y"
                                              {
			(yyval.state) = new_node("ParamList", root);
			add_child((yyval.state), (yyvsp[0].state));

			if (!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f);
		}
#line 3803 "src/parser.c"
    break;

  case 22: /* ParamList: COM TYPE LIST IDENTIFIER ParamList  */
#line 334 "src/parser.y"
                                                   {
			(yyval.state) = new_node("ParamList", root);
			add_child((yyval.state), (yyvsp[0].state));

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");

			if(!add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			push_arg_to_arglist(s_table, str, last_f);
		}
#line 3824 "src/parser.c"
    break;

  case 23: /* Statement: CompStatement  */
#line 355 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 3830 "src/parser.c"
    break;

  case 24: /* Statement: JmpStatement  */
#line 356 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 3836 "src/parser.c"
    break;

  case 25: /* Statement: SelStatement  */
#line 357 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 3842 "src/parser.c"
    break;

  case 26: /* Statement: ItStatement  */
#line 358 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 3848 "src/parser.c"
    break;

  case 27: /* Statement: ExpStatement  */
#line 359 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 3854 "src/parser.c"
    break;

  case 28: /* Statement: error  */
#line 360 "src/parser.y"
                      {yyerrok; (yyval.state) = NULL;}
#line 3860 "src/parser.c"
    break;

  case 29: /* CompStatement: LCB StatementExp  */
#line 364 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 3868 "src/parser.c"
    break;

  case 30: /* StatementExp: RCB  */
#line 370 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 3874 "src/parser.c"
    break;

  case 31: /* StatementExp: Declaration StatementExp  */
#line 371 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3884 "src/parser.c"
    break;

  case 32: /* StatementExp: Definition StatementExp  */
#line 376 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3894 "src/parser.c"
    break;

  case 33: /* StatementExp: Statement StatementExp  */
#line 381 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3904 "src/parser.c"
    break;

  case 34: /* SelStatement: IfHead LP Expression RP Statement  */
#line 390 "src/parser.y"
                                                  {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3915 "src/parser.c"
    break;

  case 35: /* SelStatement: IfHead LP Expression RP Statement ElseHead Statement  */
#line 396 "src/parser.y"
                                                                     {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3927 "src/parser.c"
    break;

  case 36: /* IfHead: IF  */
#line 406 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 3935 "src/parser.c"
    break;

  case 37: /* ElseHead: ELSE  */
#line 412 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 3944 "src/parser.c"
    break;

  case 38: /* ExpStatement: SEMI  */
#line 419 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 3950 "src/parser.c"
    break;

  case 39: /* ExpStatement: Expression SEMI  */
#line 420 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 3958 "src/parser.c"
    break;

  case 40: /* JmpStatement: RET ExpStatement  */
#line 426 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root);
			add_child((yyval.state), (yyvsp[0].state));

			if (!check_type_subtree((yyval.state), s_table, scope))
			{
				printf("\033[91mSemantic error at line %d, column %d: Incompatible return type.\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column);
				first_pass_sematic_error_found = true;
			}
			
		}
#line 3974 "src/parser.c"
    break;

  case 41: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 440 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3987 "src/parser.c"
    break;

  case 42: /* ForHead: FOR  */
#line 451 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 3995 "src/parser.c"
    break;

  case 43: /* ExpAtt: Expression  */
#line 457 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 4003 "src/parser.c"
    break;

  case 44: /* ExpAtt: Definition  */
#line 461 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 4011 "src/parser.c"
    break;

  case 45: /* Expression: LogicalOrExpression  */
#line 468 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 4017 "src/parser.c"
    break;

  case 46: /* Expression: AdditiveExpression TWD IDENTIFIER  */
#line 470 "src/parser.y"
                                                    {
			(yyval.state) = new_node(":", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), new_node((yyvsp[0].string), root));

		}
#line 4028 "src/parser.c"
    break;

  case 47: /* LogicalOrExpression: LogicalAndExpression  */
#line 479 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 4034 "src/parser.c"
    break;

  case 48: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 480 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 4045 "src/parser.c"
    break;

  case 49: /* LogicalAndExpression: EqualityExpression  */
#line 489 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 4051 "src/parser.c"
    break;

  case 50: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 490 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4061 "src/parser.c"
    break;

  case 51: /* EqualityExpression: RelationalExpression  */
#line 498 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 4067 "src/parser.c"
    break;

  case 52: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 499 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4077 "src/parser.c"
    break;

  case 53: /* RelationalExpression: AdditiveExpression  */
#line 508 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 4083 "src/parser.c"
    break;

  case 54: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 509 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 4093 "src/parser.c"
    break;

  case 55: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 514 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4103 "src/parser.c"
    break;

  case 56: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 519 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4113 "src/parser.c"
    break;

  case 57: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 524 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4123 "src/parser.c"
    break;

  case 58: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 529 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4133 "src/parser.c"
    break;

  case 59: /* RelationalExpression: RelationalExpression MAP AdditiveExpression  */
#line 534 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">>", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4143 "src/parser.c"
    break;

  case 60: /* RelationalExpression: RelationalExpression FIL AdditiveExpression  */
#line 539 "src/parser.y"
                                                        {
				(yyval.state) = new_node("<<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4153 "src/parser.c"
    break;

  case 61: /* AdditiveExpression: MultiplicativeExpression  */
#line 547 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 4159 "src/parser.c"
    break;

  case 62: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 548 "src/parser.y"
                                                                 {
			(yyval.state) = new_node("+", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4169 "src/parser.c"
    break;

  case 63: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 553 "src/parser.y"
                                                        {
			(yyval.state) = new_node("-", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4179 "src/parser.c"
    break;

  case 64: /* MultiplicativeExpression: UnaryExpression  */
#line 561 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 4185 "src/parser.c"
    break;

  case 65: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 562 "src/parser.y"
                                                             {
			(yyval.state) = new_node("*", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4195 "src/parser.c"
    break;

  case 66: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 567 "src/parser.y"
                                                             {
			(yyval.state) = new_node("/", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4205 "src/parser.c"
    break;

  case 67: /* UnaryExpression: PrimaryExpression  */
#line 575 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 4211 "src/parser.c"
    break;

  case 68: /* UnaryExpression: TNR PrimaryExpression  */
#line 576 "src/parser.y"
                                      {
			(yyval.state) = new_node("!", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4220 "src/parser.c"
    break;

  case 69: /* UnaryExpression: HD PrimaryExpression  */
#line 580 "src/parser.y"
                                     {
			(yyval.state) = new_node("?", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4229 "src/parser.c"
    break;

  case 70: /* UnaryExpression: TR PrimaryExpression  */
#line 584 "src/parser.y"
                                     {
			(yyval.state) = new_node("%", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4238 "src/parser.c"
    break;

  case 71: /* PrimaryExpression: IDENTIFIER  */
#line 590 "src/parser.y"
                           {
			(yyval.state) = new_node((yyvsp[0].string), root);
			if (!variable_was_declared(s_table, scope, (yyvsp[0].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", (yyvsp[0].string), (yylsp[0]).first_line, (yylsp[0]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
#line 4255 "src/parser.c"
    break;

  case 72: /* PrimaryExpression: NUM_CONST  */
#line 603 "src/parser.y"
                      {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", (yyvsp[0].num));
			(yyval.state) = new_node(str, root);
		}
#line 4265 "src/parser.c"
    break;

  case 73: /* PrimaryExpression: LP Expression RP  */
#line 609 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4274 "src/parser.c"
    break;

  case 74: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 614 "src/parser.y"
                                        {
			(yyval.state) = new_node("FunctionCall", root);
			add_child((yyval.state), new_node((yyvsp[-3].string), root));
			add_child((yyval.state), (yyvsp[-1].state));

			if (!variable_was_declared(s_table, scope, (yyvsp[-3].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Function %s was not declared, at ln %d col %d.", (yyvsp[-3].string), (yylsp[-3]).first_line, (yylsp[-3]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

	        uint16_t n_args = 0;

	        char** args = get_function_signature((yyvsp[-3].string), s_table, scope, &n_args);

			bool compatible_args = true;

			for (size_t i = 0, j = args_count-1; j >= 0 && i < n_args; i++, j--) {
				if (!check_type_with_casting(args[i], args_last_f[j])) {
					compatible_args = false;
					break;
				}
			}

			if (!compatible_args) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE*2];
				sprintf(err, "Invalid function call, function %s expect parameters ", (yyvsp[-3].string));

				for (size_t i = 0; i < n_args; i++) {
					strcat(err, args[i]);
					if (i != n_args - 1) {
						strcat(err, ", ");
					}
				}

				char err_tail[MAX_BUFFER_SIZE];
				sprintf(err_tail, " at ln %d col %d.", (yylsp[-3]).first_line, (yylsp[-3]).first_column);
				strcat(err, err_tail);

				print_error(err);
				first_pass_sematic_error_found = true;
			}

			for (size_t i = 0; i < args_count; i++) {
				free(args_last_f[i]);
			}

			free(args_last_f);

			args_count = 0;

		}
#line 4336 "src/parser.c"
    break;

  case 75: /* PrimaryExpression: IDENTIFIER LP RP  */
#line 671 "src/parser.y"
                                 {
			(yyval.state) = new_node("FunctionCall", root);
			add_child((yyval.state), new_node((yyvsp[-2].string), root));
			add_child((yyval.state), new_node("", root));

			if (!variable_was_declared(s_table, scope, (yyvsp[-2].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Function %s was not declared, at ln %d col %d.", (yyvsp[-2].string), (yylsp[-2]).first_line, (yylsp[-2]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

	        uint16_t n_args = 0;

			if (!check_function_arg("None", (yyvsp[-2].string), 0, s_table, scope, &n_args)) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE*2];

		        char** args = get_function_signature((yyvsp[-2].string), s_table, scope, &n_args);

				sprintf(err, "Invalid function call, function %s expect parameters ", (yyvsp[-2].string));

				for (uint16_t i = 0; i < n_args; i++) {
					strcat(err, args[i]);
					if (i != n_args - 1) {
						strcat(err, ", ");
					}
				}

				char err_tail[MAX_BUFFER_SIZE];

				sprintf(err_tail, ", at ln %d col %d.", (yylsp[-2]).first_line, (yylsp[-2]).first_column);
				strcat(err, err_tail);

				print_error(err);

			}
	}
#line 4382 "src/parser.c"
    break;

  case 76: /* PrimaryExpression: WRITE LP STR RP  */
#line 712 "src/parser.y"
                                {
			(yyval.state) = new_node("write_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));

		}
#line 4392 "src/parser.c"
    break;

  case 77: /* PrimaryExpression: WRITE LP Expression RP  */
#line 717 "src/parser.y"
                                   {
			(yyval.state) = new_node("write_call", root);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4401 "src/parser.c"
    break;

  case 78: /* PrimaryExpression: READ LP IDENTIFIER RP  */
#line 721 "src/parser.y"
                                      {
			(yyval.state) = new_node("read_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));
		}
#line 4410 "src/parser.c"
    break;

  case 79: /* PrimaryExpression: WRITE_LN LP STR RP  */
#line 725 "src/parser.y"
                                    {
			(yyval.state) = new_node("write_ln_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));
		}
#line 4419 "src/parser.c"
    break;

  case 80: /* PrimaryExpression: WRITE_LN LP Expression RP  */
#line 729 "src/parser.y"
                                           {
			(yyval.state) = new_node("write_ln_call", root);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4428 "src/parser.c"
    break;

  case 81: /* PrimaryExpression: NIL  */
#line 734 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root);}
#line 4434 "src/parser.c"
    break;

  case 82: /* Params: Expression  */
#line 738 "src/parser.y"
                   {
		(yyval.state) = new_node("Args", root);
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 4444 "src/parser.c"
    break;

  case 83: /* Params: Params COM Expression  */
#line 744 "src/parser.y"
                              {
		(yyval.state) = new_node("Args", root);
		add_child((yyval.state), (yyvsp[-2].state)); 
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 4455 "src/parser.c"
    break;


#line 4459 "src/parser.c"

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
  *++yylsp = yyloc;

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
          = {yyssp, yytoken, &yylloc};
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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
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

#line 752 "src/parser.y"

int yydebug = 1;

syntax_tree* parse(char* filename) {
    root = new_syntax_tree();
	s_table = new_symbol_table();
	scope = new_scope_stack();
	last_f = 0;
	first_pass_sematic_error_found = false;

	args_count = 0;

	//push_default_functions(s_table, scope, &last_f);

    yyparse();
	
	if(!analyze_semantics(s_table, root) && !first_pass_sematic_error_found) {
		printf("\n\033[92mNo semantic errors were found.\033[0m\n");
	}

	show_table(s_table);

	char* line = (char*) malloc(MAX_BUFFER_SIZE);
	line[0] = (char) 0;
	show_tree(root->element_list[root->tree_size-1], line, true);

	output_tac(s_table, root, filename);

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

	fprintf (stderr, "\033[91m%s, at ln %d col %d\033[0m\n", str, yylloc.first_line, yylloc.first_column);
 }
