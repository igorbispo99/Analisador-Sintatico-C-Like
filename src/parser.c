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
  YYSYMBOL_NUM_CONST_INT = 31,             /* NUM_CONST_INT  */
  YYSYMBOL_NUM_CONST_FLOAT = 32,           /* NUM_CONST_FLOAT  */
  YYSYMBOL_NIL = 33,                       /* NIL  */
  YYSYMBOL_STR = 34,                       /* STR  */
  YYSYMBOL_WRITE = 35,                     /* WRITE  */
  YYSYMBOL_READ = 36,                      /* READ  */
  YYSYMBOL_WRITE_LN = 37,                  /* WRITE_LN  */
  YYSYMBOL_IF = 38,                        /* IF  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_FOR = 40,                       /* FOR  */
  YYSYMBOL_RET = 41,                       /* RET  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_ROOT_TREE = 43,                 /* ROOT_TREE  */
  YYSYMBOL_GlobalDef = 44,                 /* GlobalDef  */
  YYSYMBOL_GlobalDec = 45,                 /* GlobalDec  */
  YYSYMBOL_Declaration = 46,               /* Declaration  */
  YYSYMBOL_Definition = 47,                /* Definition  */
  YYSYMBOL_FunctionDefinition = 48,        /* FunctionDefinition  */
  YYSYMBOL_FunctionArgs = 49,              /* FunctionArgs  */
  YYSYMBOL_FunctionHead = 50,              /* FunctionHead  */
  YYSYMBOL_ParamList = 51,                 /* ParamList  */
  YYSYMBOL_Statement = 52,                 /* Statement  */
  YYSYMBOL_CompStatement = 53,             /* CompStatement  */
  YYSYMBOL_StatementExp = 54,              /* StatementExp  */
  YYSYMBOL_SelStatement = 55,              /* SelStatement  */
  YYSYMBOL_IfHead = 56,                    /* IfHead  */
  YYSYMBOL_ElseHead = 57,                  /* ElseHead  */
  YYSYMBOL_ExpStatement = 58,              /* ExpStatement  */
  YYSYMBOL_JmpStatement = 59,              /* JmpStatement  */
  YYSYMBOL_ItStatement = 60,               /* ItStatement  */
  YYSYMBOL_ForHead = 61,                   /* ForHead  */
  YYSYMBOL_ExpAtt = 62,                    /* ExpAtt  */
  YYSYMBOL_Expression = 63,                /* Expression  */
  YYSYMBOL_LogicalOrExpression = 64,       /* LogicalOrExpression  */
  YYSYMBOL_LogicalAndExpression = 65,      /* LogicalAndExpression  */
  YYSYMBOL_EqualityExpression = 66,        /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 67,      /* RelationalExpression  */
  YYSYMBOL_AdditiveExpression = 68,        /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 69,  /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 70,           /* UnaryExpression  */
  YYSYMBOL_PrimaryExpression = 71,         /* PrimaryExpression  */
  YYSYMBOL_Params = 72                     /* Params  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  809

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    67,    71,    79,    82,    88,   101,   119,
     150,   183,   216,   260,   270,   279,   288,   303,   333,   354,
     394,   429,   467,   485,   510,   514,   532,   560,   561,   562,
     563,   564,   569,   575,   576,   581,   586,   591,   596,   602,
     609,   620,   624,   627,   633,   640,   641,   647,   661,   670,
     679,   687,   698,   704,   708,   712,   717,   725,   729,   730,
     739,   740,   748,   749,   758,   759,   764,   769,   774,   779,
     784,   789,   794,   802,   803,   814,   828,   829,   840,   854,
     855,   864,   873,   884,   899,   904,   910,   915,   920,   995,
    1043,  1048,  1052,  1058,  1062,  1067,  1071,  1077
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
  "ATT", "COMP_EQ", "AND", "OR", "RP", "NUM_CONST_INT", "NUM_CONST_FLOAT",
  "NIL", "STR", "WRITE", "READ", "WRITE_LN", "IF", "ELSE", "FOR", "RET",
  "$accept", "ROOT_TREE", "GlobalDef", "GlobalDec", "Declaration",
  "Definition", "FunctionDefinition", "FunctionArgs", "FunctionHead",
  "ParamList", "Statement", "CompStatement", "StatementExp",
  "SelStatement", "IfHead", "ElseHead", "ExpStatement", "JmpStatement",
  "ItStatement", "ForHead", "ExpAtt", "Expression", "LogicalOrExpression",
  "LogicalAndExpression", "EqualityExpression", "RelationalExpression",
  "AdditiveExpression", "MultiplicativeExpression", "UnaryExpression",
  "PrimaryExpression", "Params", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    21,    19,    14,   139,   217,   221,     9,   143,    23,
    -176,   231,    15,   259,   151,    33,    98,    30,    53,   373,
      30,    -6,    88,  8708,   374,    30,   375,    91,    22,    -2,
     379, 10995,   100,  8749,   385, 10747, 10747, 10747, 11614, 11633,
   11652,    92,   104,   115,   140,   158,  1189,  8708,  8708,  8708,
    8790,   393,  8831,   171,  8872,  8913,  8954,   175,   178,    50,
      90,   127,   948,  7725, 11671, 11690, 11709,   399,   429,   188,
     403,   981,  2097,   197,   211,  2835,  1607,   202, 10945,   208,
   11728, 11747, 11766, 10141,   257, 10156,  8995,   404,   408,   409,
     147,   212,  9036, 10747, 10747, 10747, 10769, 10769, 10769, 10769,
   10769, 10747, 10747, 10747, 10769, 10747, 10747, 10747,    79,   285,
     437,   224,  9077,   339, 11785,   114,   130,    -3,  9118, 11804,
   11823,   283,   312,   332,   380,   383,   395,   424,    26,   414,
     452,   459,   239,   134,  2910,  2548,  7766,  7807,  7848,  7889,
    3137, 11842, 11861,  7930,  7971, 11880, 11899,   464,   438,    79,
      79,   465, 10784, 11918,  9159,  9200,  9241, 11937, 11956, 11975,
   11994, 12013,  2097,  2758,   463,   467,  2097,   599,   440,   445,
     449,    79,   184,  9282,  9323,   391,  9364,    52,   487,    79,
     491,   469,  2097,  2097,  1432,   470,    79,  9405,  9446,    54,
     475,   476,  2097,  2097,  9487,  9528,  9569,  1772, 10806, 10806,
   10806, 12995, 13015, 13035,   503,   506,   507,   236,   325,   146,
     420, 13435, 13055, 13075, 13095, 11067,  9610,   789,  1941, 10784,
   10784, 10784, 11107, 11130, 11153,   508,   509,   511,   261,    99,
      61,  1798,   182, 11176, 11199, 11222,  4239,  2238, 10821, 10821,
   10821,  4280,  4321,  4362,   517,   518,   519,  7683,  3574,  1250,
    7519,  5223,  4403,  4444,  4485,  3315, 11019, 11085,  2661, 10769,
   10769, 10769, 12533, 12551, 12569,   520,   522,   524, 12587, 12605,
   12623,  9651, 10769, 10769,   224,  3234,  9692,  3525,  3355,  7724,
     525,  7765,  7806,  7847,   528,   529,  3757,   512,   515,   516,
     537,     2,  9733,  9569,  9569,  9569,  9774,   539,   540, 13115,
   13135, 13155, 10178,   545, 10193, 10806, 10806, 10806, 10843, 10843,
   10843, 10843, 10843, 10806, 10806, 10806, 10843, 10806, 10806, 10806,
   10215,   541,   542, 11245, 11268, 11291, 10230,   547, 10252, 10784,
   10784, 10784, 10858, 10858, 10858, 10858, 10858, 10784, 10784, 10784,
   10858, 10784, 10784, 10784, 10267,   548,   555,  4526,  4567,  4608,
   10289,   551, 10304, 10821, 10821, 10821, 10880, 10880, 10880, 10880,
   10880, 10821, 10821, 10821, 10880, 10821, 10821, 10821, 13175,   225,
   10338, 10353,   556,   559, 12641, 12659, 12677, 10375,   573, 10390,
   10769, 10769, 12695, 12713,  9976,     3,  7888,  9692,  9692,  9692,
    7929,  7970,  2813,  3011,  8011, 10424,  9815,  9856,  9897,  9938,
   13195, 13215,   560,   562,   563,   564,   565,   435,   341,   546,
     474,  3073, 10843, 10843, 10843,  8010,  8051,  8092,   544,   595,
     601,   878,  8133,  8174,  8215,  2529,  8912,  8953,  8994,  9076,
   13235, 13255,  9035,  9117, 13275, 13295, 11314,   263, 11337, 11360,
     582,   583,   584,   585,   586,   222,    87,  2307, 10970,  3291,
   10858, 10858, 10858, 12031, 12054, 12077,   620,   621,   622, 10337,
   12100, 12123, 12146, 10423, 10620, 12929, 12952,  2891, 11383, 11406,
   12975,  3283, 11429, 11452,  4649,   287,  4690,  4731,   603,   607,
     608,   610,   612,  3661,  1725,  7560,  1024,  3397, 10880, 10880,
   10880,  6166,  6207,  6248,   623,   637,   639,  2496,  6289,  6330,
    6371,  7232,  7273,  7314,  7355,  7601,  4772,  4813,  7396,  7642,
    4854,  4895, 13315,     4,   640, 12731,   306, 12749, 12767,   626,
     627,   638,   641,   642, 12785, 12803,  8052,  8093,  8134,  8175,
    8216,   644,   645,    63,   646,    16,   647, 13335, 13355, 13375,
   13395, 13415, 10439,   648,   650,  8256,  8297,  8338, 10461,   663,
   10476, 10843, 10843, 10843, 10843, 11475, 11498, 11521, 11544, 11567,
   11590, 10498,   667,   668, 12169, 12192, 12215, 10513,   665, 10535,
   10858, 10858, 10858, 10858,  4936,  4977,  5018,  5059,  5100,  5141,
   10550,   670,   671,  6412,  6453,  6494, 10572,   672, 10587, 10880,
   10880, 10880, 10880,   701,   704,   709, 12821, 12839, 12857, 12875,
   12893, 12911,  9976, 10014,  9976, 10052,   687,   692,   693,  8379,
     307,  8420,  8461,   694,   695,   696,   697,   698,  8502,  8543,
    8584,  8625, 12238,   308, 12261, 12284,   699,   702,   705,   708,
     713, 12307, 12330, 12353, 12376,  6535,   311,  6576,  6617,   714,
     716,   717,   718,   719,  6658,  6699,  6740,  6781,  8257, 11043,
    8298,   391,  8339,    70,   743,  8666,  8707,  8748,  8789,  8830,
    8871, 12399, 12422, 12445, 12468, 12491, 12514,  6822,  6863,  6904,
    6945,  6986,  7027, 10621,  9976,  9976, 10067,  1469, 10104,    18,
   10895, 10895, 10895,  1510,  1551,  1677,   746,   756,   757,  8380,
    3110,  1831,  1096,   921,  5182,  1978,  2028,  2193,  8421,  8462,
      78,   734, 10636,   735,   736,  8503,  8544,  8585,  2454,  2960,
    3446, 10658,   763, 10673, 10895, 10895, 10895, 10917, 10917, 10917,
   10917, 10917, 10895, 10895, 10895, 10917, 10895, 10895, 10895,  9976,
    9976,  3487,   335,  3719,  3788,   738,   739,   740,   741,   742,
    2142,  1151,  1325,  2602, 10119, 10917, 10917, 10917,  5264,  5305,
    5346,   767,   768,   769,  2382,  5387,  5428,  5469,  3620,  7068,
    7109,  7150,  7437,  3829,  3870,  7191,  7478,  3911,  3952,  8626,
    8667,  3993,  4034,  4075,  4116,  4157,  4198, 10695,   747,   748,
    5510,  5551,  5592, 10710,   779, 10732, 10917, 10917, 10917, 10917,
    5633,   336,  5674,  5715,   754,   760,   766,   782,   783,  5756,
    5797,  5838,  5879,  5920,  5961,  6002,  6043,  6084,  6125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,   549,    96,   -37,  -176,  -176,  -176,  -140,
     315,    56,    64,  -142,  -131,  -169,   -23,   -20,    59,    62,
    -129,  2355,  3005,  2857,  2503,  2001,  1575,  1066,   -32,   521,
    -175
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    47,    48,     6,    18,     7,   148,
      49,    50,    51,    52,    53,    72,    54,    55,    56,    57,
     130,    58,    59,    60,    61,    62,    63,    64,    65,    66,
     116
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     213,   154,    27,    80,    81,    82,   182,    70,   593,   169,
     170,   396,   527,     1,    -2,    12,    15,     1,    16,    10,
     606,   279,   705,    86,   -16,     8,     9,    14,   155,   156,
      69,   181,   280,   164,   165,   594,   595,    71,   178,   185,
      23,    71,    71,   234,   253,    17,   191,   607,   608,   706,
     707,   213,   -18,   213,   129,   190,   166,   -57,   213,   164,
     165,   289,   290,    20,   269,   269,   269,   269,   269,   -60,
     164,   165,   269,    24,   145,   146,    26,   164,   165,    93,
     369,    67,   183,    25,   192,   289,   290,   147,   331,   -60,
     -60,   -60,    28,   604,    68,   -61,     5,   -58,    83,     5,
     675,    77,    21,    22,    78,   384,   197,   -58,   729,   -24,
      84,    87,    88,    89,   331,   -61,   -61,   -61,    94,   -58,
     234,    85,   -96,   198,   199,   200,   174,   330,   -58,   -58,
     129,   201,   202,   203,   -60,   204,   205,   206,   152,    -3,
     281,   -61,    -3,   282,   -96,   437,   -43,   287,   126,   -22,
      13,    78,   213,   197,    95,   -60,   -60,   -23,    19,   294,
     153,    95,   -61,   -61,   -52,   213,   299,   300,   301,   475,
     198,   199,   200,   307,   -60,   -60,   -60,    90,   201,   202,
     203,    91,   204,   205,   206,    92,   213,   323,   324,   325,
     -64,   110,   -97,   337,   338,   339,   516,   -64,   -64,   -64,
     -64,   -64,   340,   341,   216,   213,   347,   348,   349,   -64,
     -64,   -64,   -64,   128,   -97,   113,   256,    -5,    32,   278,
      -5,    -6,   283,   234,    -6,   284,   213,   374,   375,   376,
     -59,    -4,   119,   152,    -4,    35,    36,    37,   120,   388,
     269,   269,   279,    38,    39,    40,   -59,    41,    42,    43,
     330,   -59,   -59,   280,   391,   512,   294,   294,   294,    -7,
     296,   123,    -7,    71,   534,   305,   -57,    94,   -59,   -57,
     213,   152,   213,   213,   213,   213,   423,   423,   423,   423,
     423,   213,   213,   213,   423,   213,   434,   435,   234,   149,
     329,   -57,   293,   555,   213,   152,   213,   234,   234,   234,
     461,   461,   461,   461,   461,   234,   234,   234,   461,   234,
     472,   473,   234,   157,   152,   152,   152,   574,   213,   152,
     213,   253,   253,   253,   499,   499,   499,   499,   499,   253,
     253,   253,   499,   253,   510,   511,   596,   655,   661,   234,
     390,   667,   158,   152,   152,   213,   271,   213,   524,   525,
     388,   388,   388,   306,   -58,   -58,   129,   397,   398,   399,
     213,   281,   159,   213,   282,   771,   803,   610,   307,   -61,
     -61,   -61,   387,    -8,   -14,   -15,    -8,   -14,   -15,   213,
     545,   546,   547,    73,    74,   -33,   623,   112,   -33,   293,
     293,   293,   -38,   -32,   -38,   -38,   -32,   -38,   -38,   -13,
     -38,   -38,   -13,   -37,   -34,   636,   -37,   -34,   -35,   -36,
     160,   -35,   -36,   161,   -38,   -38,   -38,   213,   564,   565,
     566,   -54,   -38,   -38,   -38,   162,   -38,   -38,   -38,   -38,
      71,   -38,   -38,   108,   109,   308,   309,   310,   311,   312,
     278,   150,   151,   283,   179,   180,   284,   -62,   -62,   -62,
     -62,   528,   529,   530,   163,   213,   583,   584,   585,   167,
     279,   279,   279,   306,   -59,   -59,   -53,   168,   -17,   171,
     -55,   280,   280,   280,   -56,   -20,   654,   173,   175,   -21,
     542,   176,   674,   387,   387,   387,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   184,   186,   -83,   187,   188,   -19,
     -25,   -83,   -83,   -83,   -83,   193,   -26,   194,   195,   302,
     234,   295,   303,   304,   326,   327,   213,   328,   213,   423,
     423,   620,   621,   350,   351,   352,   377,   732,   378,   234,
     379,   392,   279,   279,   393,   213,   394,   213,   461,   461,
     633,   634,   -54,   280,   280,   -53,   -55,   701,   234,   404,
     548,   442,    11,   214,   213,   480,   213,   499,   499,   646,
     647,   308,   309,   310,   311,   312,   650,   -56,   129,   400,
     401,   438,   439,   -63,   -63,   -63,   -63,   521,   476,   281,
     281,   281,   282,   282,   282,   477,   517,   279,   279,   518,
     537,   389,   538,   539,   540,   541,   235,   254,   280,   280,
     177,   549,   791,   256,   214,    32,   214,   550,   295,   295,
     295,   214,   556,   557,   558,   559,   560,   270,   270,   270,
     270,   270,    35,    36,    37,   270,   567,   568,   569,   586,
      38,    39,    40,   575,    41,    42,    43,   576,   577,   287,
     578,   696,   579,   587,   213,   588,   213,    -9,   708,   709,
     710,   281,   281,   605,   282,   282,   597,   598,   278,   278,
     278,   283,   283,   283,   284,   284,   284,   615,   599,   628,
     234,   600,   601,   235,   602,   603,   641,    -9,   611,   213,
     612,   213,   696,   696,   696,   756,   756,   756,   756,   756,
     696,   696,   696,   756,   696,   767,   768,   624,   625,   526,
     637,   638,   389,   389,   389,   214,   281,   281,   -12,   282,
     282,   -11,   213,   780,   781,   782,   -10,   -12,   214,   214,
     214,   214,   -11,   -10,   656,   657,   658,   659,   660,   662,
     278,   278,   663,   283,   283,   664,   284,   284,   665,   214,
     235,   235,   235,   666,   668,   234,   669,   670,   671,   672,
     676,   213,   711,   213,   756,   756,   801,   802,   214,   254,
     254,   254,   712,   713,   730,   733,   734,   737,   772,   773,
     774,   775,   776,   783,   784,   785,   235,   792,   793,   214,
     270,   270,   270,   796,   804,   278,   278,     0,   283,   283,
     805,   284,   284,   270,   270,   320,   806,   -83,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   807,   808,     0,     0,   -83,   -83,   -83,   -83,
       0,     0,     0,   214,     0,   214,   214,   214,   214,   424,
     424,   424,   424,   424,   214,   214,   214,   424,   214,   214,
     214,   235,     0,     0,     0,     0,     0,   214,     0,   214,
     235,   235,   235,   462,   462,   462,   462,   462,   235,   235,
     235,   462,   235,   235,   235,   235,     0,     0,     0,     0,
       0,   214,     0,   214,   254,   254,   254,   500,   500,   500,
     500,   500,   254,   254,   254,   500,   254,   254,   254,     0,
     551,   552,   235,   -67,   -67,   -67,   -67,   -67,   214,     0,
     214,   270,   270,     0,     0,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,   214,     0,     0,   214,   648,   651,   652,
       0,     0,   -62,     0,   -62,   -62,     0,   -62,   -62,     0,
     -62,   -62,   214,   424,   424,   424,   717,   718,   719,   720,
     721,     0,     0,     0,   -62,   -62,   -62,     0,   -62,   -62,
     -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,    96,    97,    98,    99,   100,     0,     0,
     214,   462,   462,   462,     0,   -62,   -62,   -62,     0,     0,
       0,     0,   -44,     0,     0,   -44,     0,   -44,   -44,   698,
     699,   -44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,   -44,   -44,     0,   214,   500,
     500,   500,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
       0,   -44,   -44,     0,     0,   -83,     0,   -83,   -83,     0,
     580,   -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   769,   770,   -83,   -83,   -83,   -83,
       0,   -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   235,   -83,   -83,     0,     0,     0,   214,
       0,   214,   424,   424,   424,   424,     0,     0,     0,     0,
       0,     0,   235,     0,     0,     0,     0,     0,   214,     0,
     214,   462,   462,   462,   462,     0,     0,   -60,   212,   -60,
     -60,   235,   -60,   -60,     0,   -60,   -60,   214,     0,   214,
     500,   500,   500,   500,     0,     0,     0,     0,     0,   -60,
     -60,   -60,     0,   716,   -60,   -60,     0,   -60,   -60,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
       0,   233,   252,     0,     0,     0,     0,     0,     0,   212,
       0,   212,   -61,     0,   -61,   -61,   212,   -61,   -61,     0,
     -61,   -61,   268,   268,   268,   268,   268,     0,   141,   142,
     268,     0,     0,     0,   -61,   -61,   -61,     0,   716,   -61,
     -61,     0,   -61,   -61,   -61,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   215,   697,    32,    33,   214,     0,   214,
       0,   697,   697,   697,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,     0,     0,     0,   233,     0,
      38,    39,    40,   235,    41,    42,    43,     0,     0,     0,
       0,     0,   214,     0,   214,   697,   697,   697,   757,   757,
     757,   757,   757,   697,   697,   697,   757,   697,   697,   697,
     212,   -60,     0,   -60,   -60,     0,   -60,   -60,     0,   -60,
     -60,     0,     0,   212,     0,   214,   757,   757,   757,     0,
       0,     0,     0,   -60,   -60,   -60,     0,   355,   -60,   -60,
       0,   -60,   -60,   -60,   212,   -60,   -60,   -60,   -60,     0,
     -60,   -60,     0,     0,     0,     0,     0,     0,   235,     0,
       0,     0,     0,   212,   214,     0,   214,   757,   757,   757,
     757,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,   212,     0,   -63,     0,   -63,   -63,
       0,   -63,   -63,     0,   -63,   -63,     0,     0,   382,   383,
     717,   718,   719,   720,   721,     0,     0,     0,   -63,   -63,
     -63,     0,   -63,   -63,   -63,     0,   -63,   -63,   -63,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   212,     0,
     212,   212,   212,   212,   422,   422,   422,   422,   422,   212,
     430,   431,   422,   212,     0,     0,   233,     0,     0,     0,
       0,     0,   212,     0,   212,   233,   233,   233,   460,   460,
     460,   460,   460,   233,   468,   469,   460,   233,     0,     0,
     233,     0,     0,     0,     0,     0,   212,     0,   212,   252,
     252,   252,   498,   498,   498,   498,   498,   252,   506,   507,
     498,   252,     0,   189,     0,     0,   286,   233,   197,     0,
       0,     0,     0,   212,     0,   212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,   199,   200,   212,     0,
       0,   212,     0,   201,   202,   203,     0,   204,   205,   206,
     -83,     0,   -83,   -83,     0,   702,   -83,   212,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,     0,
     -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -84,     0,   -84,   -84,   212,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
       0,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,   212,   -85,   -85,     0,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,     0,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   211,   233,     0,
       0,   236,     0,   237,   212,     0,   212,   618,   619,     0,
     117,     0,     0,     0,     0,     0,     0,   233,     0,     0,
     238,   239,   240,   212,     0,   212,   631,   632,   241,   242,
     243,     0,   244,   245,   246,     0,   233,     0,     0,     0,
     232,   251,   212,     0,   212,   644,   645,     0,   211,     0,
     211,     0,     0,     0,     0,   211,     0,     0,     0,     0,
       0,   135,   136,   137,   138,   139,     0,     0,   -95,   143,
     -95,   -95,     0,   -95,   -95,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,     0,   -95,   -95,   -95,     0,   -95,   -95,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
       0,     0,     0,     0,     0,     0,   -61,   232,   -61,   -61,
       0,   -61,   -61,     0,   -61,   -61,     0,     0,     0,   695,
       0,     0,   212,     0,   212,     0,     0,     0,   -61,   -61,
     -61,     0,   355,   -61,   -61,     0,   -61,   -61,   -61,   211,
     -61,   -61,   -61,   -61,     0,   -61,   -61,     0,   233,     0,
       0,     0,   211,   297,     0,     0,    78,   212,   197,   212,
     695,   695,   695,   755,   755,   755,   755,   755,   695,   763,
     764,   755,   695,   211,     0,   198,   199,   200,     0,     0,
       0,     0,     0,   201,   202,   203,   -62,   204,   205,   206,
     212,     0,   211,   332,   333,   334,   335,   336,     0,     0,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,     0,
     232,     0,   -58,   211,   -58,   -58,     0,   -58,   -58,     0,
     -58,   -58,     0,   233,     0,     0,     0,     0,     0,   212,
       0,   212,   799,   800,   -58,   -58,   -58,     0,     0,   715,
     -58,     0,   -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,   211,     0,   211,
     211,   211,   211,   421,   425,   426,   427,   428,   211,     0,
       0,   432,   211,     0,     0,   232,     0,     0,     0,     0,
       0,   211,     0,   211,   232,   232,   232,   459,   463,   464,
     465,   466,   232,     0,     0,   470,   232,     0,     0,   232,
       0,     0,     0,     0,     0,   211,     0,   211,   251,   251,
     251,   497,   501,   502,   503,   504,   251,     0,     0,   508,
     251,     0,   321,     0,     0,    78,   232,   197,     0,     0,
       0,     0,   211,     0,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,   199,   200,   211,     0,     0,
     211,     0,   201,   202,   203,     0,   204,   205,   206,   -73,
       0,   -73,   -73,     0,   -73,   -73,   211,   -73,   -73,   -73,
     -73,   -73,   727,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     728,   -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,   211,     0,     0,     0,     0,   -76,
       0,   -76,   -76,   210,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   211,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,   231,   250,     0,     0,
       0,     0,     0,     0,   210,     0,   210,     0,     0,     0,
       0,   210,     0,     0,     0,     0,   134,     0,   111,     0,
       0,   215,   140,    32,    33,     0,   144,   196,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232,     0,     0,
      35,    36,    37,   211,     0,   211,     0,     0,    38,    39,
      40,     0,    41,    42,    43,    44,   232,    45,    46,     0,
       0,     0,   211,   -59,   211,   -59,   -59,     0,   -59,   -59,
       0,   -59,   -59,   231,     0,   232,     0,     0,     0,     0,
       0,   211,     0,   211,     0,   -59,   -59,   -59,     0,     0,
     715,   -59,     0,   -59,   -59,   -59,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   210,     0,     0,     0,     0,
       0,     0,     0,     0,   -79,     0,   -79,   -79,   210,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   210,
     -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,   210,   345,
       0,     0,    78,     0,   197,     0,     0,     0,   694,     0,
       0,   211,     0,   211,     0,     0,   231,     0,     0,   210,
       0,   198,   199,   200,     0,     0,     0,     0,     0,   201,
     202,   203,     0,   204,   205,   206,     0,   232,     0,     0,
       0,     0,     0,     0,     0,     0,   211,     0,   211,   694,
     694,   694,   754,   758,   759,   760,   761,   694,     0,     0,
     765,   694,     0,   210,     0,   210,   210,   210,   409,     0,
       0,     0,     0,     0,   429,   -63,     0,     0,   433,   211,
       0,   231,   332,   333,   334,   335,   336,   210,     0,   210,
     231,   231,   447,     0,   -63,   -63,   -63,   -63,   467,     0,
       0,     0,   471,     0,     0,   231,     0,     0,     0,     0,
       0,   210,   232,   210,   250,   250,   485,     0,   211,     0,
     211,     0,   505,     0,     0,     0,   509,     0,     0,     0,
       0,     0,   231,     0,     0,     0,     0,     0,   210,     0,
     210,     0,     0,   -67,     0,   -67,   -67,    79,   -67,   -67,
       0,   -67,   -67,   210,   786,   787,   210,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,   -67,   -67,   -67,     0,   -67,
     -67,   -67,   210,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
     115,   118,     0,     0,     0,     0,     0,     0,   122,     0,
     125,     0,     0,     0,     0,   127,   131,     0,     0,     0,
     210,     0,     0,     0,     0,   -82,     0,   -82,   -82,     0,
     -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   210,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -67,     0,   -67,
     -67,     0,   -67,   -67,     0,   -67,   -67,   172,   589,   590,
       0,   -67,   -67,   -67,   -67,   -67,     0,     0,   285,   -67,
     -67,   -67,   131,   -67,   -67,   -67,     0,   -67,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   209,   -67,   -67,     0,   288,
       0,   551,   552,   231,   -68,   -68,   -68,   -68,   -68,   210,
       0,   210,   298,     0,     0,   -67,   -68,   -68,   -68,   -68,
     272,   273,   231,   -67,   -67,   -67,   -67,   -67,   210,     0,
     210,     0,     0,   322,     0,   -67,   -67,   -67,   230,   249,
       0,   231,     0,     0,     0,     0,   209,   210,   209,   210,
       0,     0,   346,   209,     0,     0,     0,   133,     0,     0,
       0,     0,     0,   -83,     0,   -83,   -83,     0,   777,   -83,
     115,   -83,   -83,   373,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   285,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,   403,     0,   406,
       0,     0,   372,     0,     0,    78,     0,   197,     0,     0,
       0,     0,     0,     0,   693,   115,     0,   210,     0,   210,
       0,   441,     0,   444,   198,   199,   200,   209,     0,     0,
       0,     0,   201,   202,   203,     0,   204,   205,   206,   115,
     209,     0,     0,   231,     0,   479,     0,   482,     0,     0,
       0,     0,   210,     0,   210,   693,   693,   742,     0,     0,
       0,   209,     0,   762,     0,   514,   115,   766,     0,     0,
       0,     0,   520,     0,   523,     0,     0,     0,     0,   285,
     209,     0,     0,     0,     0,   210,     0,   532,   131,     0,
     536,     0,     0,     0,     0,     0,     0,     0,   230,   274,
       0,   209,    31,     0,    32,   275,   544,     0,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,    35,    36,    37,   210,     0,   210,     0,     0,    38,
      39,    40,     0,    41,    42,    43,    44,     0,    45,   277,
       0,     0,     0,     0,   563,   209,     0,   209,   209,   408,
       0,     0,     0,     0,   531,     0,     0,    78,     0,   197,
       0,     0,     0,   230,     0,     0,     0,     0,     0,   209,
       0,   209,   230,   446,     0,     0,   198,   199,   200,   217,
       0,   218,   582,     0,   201,   202,   203,   230,   204,   205,
     206,     0,     0,   209,     0,   209,   249,   484,   219,   220,
     221,     0,     0,     0,     0,   114,   222,   223,   224,     0,
     225,   226,   227,     0,   230,     0,     0,     0,     0,     0,
     209,     0,   209,     0,     0,     0,     0,     0,     0,   208,
       0,     0,     0,     0,     0,   209,     0,   115,   209,   -72,
       0,     0,     0,   614,     0,   617,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,   209,     0,   115,   -63,   -72,   -72,
     -72,   -72,   627,     0,   630,    96,    97,    98,    99,   100,
       0,     0,   229,   248,     0,   115,     0,   -63,   -63,   -63,
     208,   640,   208,   643,     0,     0,     0,   208,     0,     0,
     132,     0,   209,     0,     0,     0,     0,   285,   285,   285,
     131,   -80,     0,   -80,   -80,     0,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     209,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,   229,
       0,     0,   533,     0,     0,   256,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   689,   285,
     285,   288,     0,   704,    35,    36,    37,   207,     0,     0,
       0,   208,    38,    39,    40,   230,    41,    42,    43,     0,
       0,   209,     0,   209,   208,     0,     0,   115,     0,     0,
       0,     0,     0,     0,   230,     0,   736,     0,   739,     0,
     209,     0,   209,     0,   543,   208,     0,    78,     0,   197,
     228,   247,     0,   230,   285,   285,     0,     0,   207,   209,
     207,   209,     0,     0,   208,   207,   198,   199,   200,   779,
       0,     0,     0,     0,   201,   202,   203,     0,   204,   205,
     206,   -57,   229,   -57,   -57,   208,   -57,   -57,     0,   -57,
     -57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   115,   -57,   -57,   -57,     0,     0,   795,   714,
     798,   -57,   -57,   -57,   -72,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -72,   -72,   -72,   -72,   -72,   228,     0,   208,
       0,   208,   407,     0,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   692,   229,     0,   209,
       0,   209,     0,   208,     0,   208,   445,     0,     0,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   229,   207,     0,     0,   230,     0,   208,     0,   208,
     483,     0,     0,     0,   209,     0,   209,   692,   741,     0,
       0,     0,     0,   207,     0,     0,     0,     0,   229,     0,
       0,     0,     0,     0,   208,   -45,   208,   -45,   -45,     0,
     -45,   -45,   207,   -45,   -45,     0,     0,   209,     0,   208,
       0,     0,   208,     0,     0,     0,     0,   -45,   -45,   -45,
     228,     0,     0,   207,     0,   -45,   -45,   -45,   208,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
     230,     0,     0,     0,     0,     0,   209,     0,   209,     0,
       0,   -71,   562,     0,     0,    78,     0,   197,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,   208,   207,     0,   207,
     -71,   -71,   -71,   -71,   198,   199,   200,     0,     0,   217,
       0,   218,   201,   202,   203,   228,   204,   205,   206,     0,
       0,   207,     0,   207,     0,     0,     0,     0,   219,   220,
     221,     0,     0,     0,   208,   368,   222,   223,   224,   228,
     225,   226,   227,     0,     0,   207,   -27,   207,   -27,   -27,
       0,   -27,   -27,     0,   -27,   -27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   228,     0,   -27,   -27,
     -27,     0,   207,     0,   207,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   207,   581,   229,
     207,    78,     0,   197,     0,   208,     0,   208,     0,     0,
       0,     0,     0,     0,     0,     0,   207,     0,   229,     0,
     198,   199,   200,     0,   208,     0,   208,     0,   201,   202,
     203,     0,   204,   205,   206,     0,     0,   229,     0,     0,
       0,     0,     0,   208,     0,   208,     0,   -81,     0,   -81,
     -81,     0,   -81,   -81,   207,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,     0,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -89,     0,
     -89,   -89,   207,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   215,
     691,    32,   275,   208,     0,   208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   228,    35,    36,
      37,     0,     0,   207,     0,   207,    38,    39,    40,   229,
      41,    42,    43,     0,     0,     0,   228,     0,   208,     0,
     208,   740,   207,     0,   207,   -58,     0,   -58,   -58,     0,
     -58,   -58,     0,   -58,   -58,   228,     0,     0,     0,     0,
       0,   207,     0,   207,     0,     0,     0,   -58,   -58,   -58,
       0,   208,   354,   -58,     0,   -58,   -58,   -58,     0,   -58,
     -58,   -58,   -58,     0,   -58,   -58,     0,     0,     0,     0,
       0,   -68,     0,   -68,   -68,     0,   -68,   -68,     0,   -68,
     -68,     0,   786,   787,   229,   -68,   -68,   -68,   -68,   -68,
     208,     0,   208,   -68,   -68,   -68,     0,   -68,   -68,   -68,
       0,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -59,     0,   -59,   -59,     0,   -59,   -59,     0,
     -59,   -59,     0,     0,     0,     0,     0,     0,   690,     0,
       0,   207,     0,   207,   -59,   -59,   -59,     0,     0,   354,
     -59,     0,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,
       0,   -59,   -59,     0,     0,     0,     0,   228,     0,     0,
       0,     0,     0,     0,     0,     0,   207,     0,   207,     0,
     -87,     0,   -87,   -87,     0,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   207,
     -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   255,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,   228,   395,   -83,   -83,   -83,   -83,   207,   -86,
     207,   -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -74,     0,   -74,   -74,     0,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   727,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   728,   -74,   -74,   -74,     0,   -74,   -74,   -74,     0,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -75,     0,   -75,   -75,     0,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   727,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   728,   -75,   -75,   -75,     0,   -75,   -75,   -75,
       0,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -77,     0,   -77,   -77,     0,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -78,     0,   -78,   -78,     0,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -88,     0,   -88,   -88,     0,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -88,     0,   -88,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -90,     0,   -90,   -90,     0,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
       0,   -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -91,     0,   -91,   -91,
       0,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -91,   -91,   -91,     0,   -91,   -91,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -92,     0,   -92,
     -92,     0,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -92,     0,   -92,   -92,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -93,     0,
     -93,   -93,     0,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -93,   -93,   -93,     0,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -94,
       0,   -94,   -94,     0,   -94,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,     0,   -94,
     -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -83,     0,   -83,   -83,     0,   344,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,     0,
     -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -84,     0,   -84,   -84,     0,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
       0,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -85,     0,   -85,   -85,     0,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,     0,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   -95,     0,   -95,   -95,     0,   -95,   -95,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,
     -95,   -95,     0,   -95,   -95,   -95,     0,   -95,   -95,   -95,
     -95,     0,   -95,   -95,   -73,     0,   -73,   -73,     0,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   366,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   367,   -73,   -73,   -73,     0,
     -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -76,     0,   -76,   -76,     0,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -79,     0,   -79,   -79,
       0,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,     0,   -79,   -79,   -79,     0,
     -79,   -79,   -79,   -79,     0,   -79,   -79,   -82,     0,   -82,
     -82,     0,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -80,     0,
     -80,   -80,     0,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -81,
       0,   -81,   -81,     0,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -89,     0,   -89,   -89,     0,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,     0,
     -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -87,     0,   -87,   -87,     0,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
       0,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -86,     0,   -86,   -86,     0,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,     0,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,
       0,   -86,   -86,   -74,     0,   -74,   -74,     0,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   366,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   367,   -74,   -74,   -74,     0,   -74,
     -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -75,     0,   -75,   -75,     0,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   366,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   367,   -75,   -75,   -75,     0,
     -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -77,     0,   -77,   -77,     0,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -78,     0,   -78,   -78,
       0,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -88,     0,   -88,
     -88,     0,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   -88,     0,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -90,     0,
     -90,   -90,     0,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,   -90,
     -90,     0,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -91,
       0,   -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,     0,   -91,
     -91,   -91,     0,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -92,     0,   -92,   -92,     0,   -92,   -92,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,     0,
     -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -93,     0,   -93,   -93,     0,   -93,   -93,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,
       0,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,     0,
     -93,   -93,   -94,     0,   -94,   -94,     0,   -94,   -94,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,
     -94,     0,   -94,   -94,   -94,     0,   -94,   -94,   -94,   -94,
       0,   -94,   -94,   -64,     0,   -64,   -64,     0,   -64,   -64,
       0,   -64,   -64,   722,   723,   724,     0,   -64,   -64,   -64,
     -64,   -64,   725,   726,     0,   -64,   -64,   -64,     0,   -64,
     -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   -64,   -64,     0,   -64,
     -64,     0,   -64,   -64,   361,   362,   363,     0,   -64,   -64,
     -64,   -64,   -64,   364,   365,     0,   -64,   -64,   -64,     0,
     -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,
     -64,   -64,     0,   -64,   -64,   -84,     0,   -84,   -84,     0,
     -84,   -84,     0,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -85,     0,   -85,   -85,
       0,   -85,   -85,     0,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,     0,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -95,     0,   -95,
     -95,     0,   -95,   -95,     0,   -95,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,     0,     0,   -95,   -95,
     -95,   -95,     0,   -95,   -95,   -95,     0,   -95,   -95,   -95,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -73,     0,
     -73,   -73,     0,   -73,   -73,     0,   -73,   -73,     0,   -73,
     -73,   788,   -73,   -73,   -73,   -73,   -73,     0,     0,   789,
     -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -76,
       0,   -76,   -76,     0,   -76,   -76,     0,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -79,     0,   -79,   -79,     0,   -79,   -79,     0,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,     0,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -82,     0,   -82,   -82,     0,   -82,   -82,     0,   -82,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
       0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -80,     0,   -80,   -80,     0,   -80,   -80,     0,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,
     -80,     0,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -81,     0,   -81,   -81,     0,   -81,   -81,
       0,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,     0,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -89,     0,   -89,   -89,     0,   -89,
     -89,     0,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -87,     0,   -87,   -87,     0,
     -87,   -87,     0,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,
       0,   -87,   -87,   -87,     0,   -87,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -86,     0,   -86,   -86,
       0,   -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -74,     0,   -74,
     -74,     0,   -74,   -74,     0,   -74,   -74,     0,   -74,   -74,
     788,   -74,   -74,   -74,   -74,   -74,     0,     0,   789,   -74,
     -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,
     -75,   -75,     0,   -75,   -75,     0,   -75,   -75,     0,   -75,
     -75,   788,   -75,   -75,   -75,   -75,   -75,     0,     0,   789,
     -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -77,
       0,   -77,   -77,     0,   -77,   -77,     0,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -78,     0,   -78,   -78,     0,   -78,   -78,     0,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -88,     0,   -88,   -88,     0,   -88,   -88,     0,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,
       0,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -90,     0,   -90,   -90,     0,   -90,   -90,     0,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,     0,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -91,     0,   -91,   -91,     0,   -91,   -91,
       0,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,   -91,   -91,   -91,   -91,     0,   -91,
     -91,   -91,     0,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -92,     0,   -92,   -92,     0,   -92,
     -92,     0,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,     0,   -92,   -92,   -92,   -92,     0,
     -92,   -92,   -92,     0,   -92,   -92,   -92,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -93,     0,   -93,   -93,     0,
     -93,   -93,     0,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,     0,   -93,   -93,   -93,   -93,
       0,   -93,   -93,   -93,     0,   -93,   -93,   -93,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -94,     0,   -94,   -94,
       0,   -94,   -94,     0,   -94,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,     0,     0,   -94,   -94,   -94,
     -94,     0,   -94,   -94,   -94,     0,   -94,   -94,   -94,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -84,     0,   -84,
     -84,     0,   -84,   -84,     0,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,   -84,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -85,     0,
     -85,   -85,     0,   -85,   -85,     0,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -95,
       0,   -95,   -95,     0,   -95,   -95,     0,   -95,   -95,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,     0,   -95,
     -95,   -95,     0,   -95,   -95,   -95,   -95,     0,   -95,   -95,
     -73,     0,   -73,   -73,     0,   -73,   -73,     0,   -73,   -73,
       0,   -73,   -73,   591,   -73,   -73,   -73,   -73,   -73,     0,
       0,   592,   -73,   -73,   -73,     0,   -73,   -73,   -73,     0,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -76,     0,   -76,   -76,     0,   -76,   -76,     0,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
       0,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -79,     0,   -79,   -79,     0,   -79,   -79,     0,
     -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,     0,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -82,     0,   -82,   -82,     0,   -82,   -82,
       0,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -80,     0,   -80,   -80,     0,   -80,
     -80,     0,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -81,     0,   -81,   -81,     0,
     -81,   -81,     0,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -89,     0,   -89,   -89,
       0,   -89,   -89,     0,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,     0,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -87,     0,   -87,
     -87,     0,   -87,   -87,     0,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,     0,   -87,   -87,   -87,
       0,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -86,     0,
     -86,   -86,     0,   -86,   -86,     0,   -86,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -74,
       0,   -74,   -74,     0,   -74,   -74,     0,   -74,   -74,     0,
     -74,   -74,   591,   -74,   -74,   -74,   -74,   -74,     0,     0,
     592,   -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -75,     0,   -75,   -75,     0,   -75,   -75,     0,   -75,   -75,
       0,   -75,   -75,   591,   -75,   -75,   -75,   -75,   -75,     0,
       0,   592,   -75,   -75,   -75,     0,   -75,   -75,   -75,     0,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -77,     0,   -77,   -77,     0,   -77,   -77,     0,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
       0,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -78,     0,   -78,   -78,     0,   -78,   -78,     0,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   -78,   -78,   -78,   -78,     0,   -78,   -78,
     -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -88,     0,   -88,   -88,     0,   -88,   -88,
       0,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,   -88,   -88,   -88,   -88,     0,   -88,
     -88,   -88,     0,   -88,   -88,   -88,     0,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -90,     0,   -90,   -90,     0,   -90,
     -90,     0,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,   -90,   -90,   -90,   -90,     0,
     -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,     0,   -90,   -90,   -91,     0,   -91,   -91,     0,
     -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,     0,   -91,   -91,   -91,     0,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -92,     0,   -92,   -92,
       0,   -92,   -92,     0,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,   -92,   -92,   -92,
     -92,     0,   -92,   -92,   -92,     0,   -92,   -92,   -92,     0,
     -92,   -92,   -92,   -92,     0,   -92,   -92,   -93,     0,   -93,
     -93,     0,   -93,   -93,     0,   -93,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,     0,   -93,   -93,
     -93,   -93,     0,   -93,   -93,   -93,     0,   -93,   -93,   -93,
       0,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -94,     0,
     -94,   -94,     0,   -94,   -94,     0,   -94,   -94,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,   -94,
     -94,   -94,   -94,     0,   -94,   -94,   -94,     0,   -94,   -94,
     -94,     0,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -65,
       0,   -65,   -65,     0,   -65,   -65,     0,   -65,   -65,     0,
     786,   787,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,   -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,
     -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -66,     0,   -66,   -66,     0,   -66,   -66,     0,   -66,   -66,
       0,   786,   787,     0,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,   -66,   -66,   -66,     0,   -66,   -66,   -66,     0,
     -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -69,     0,   -69,   -69,     0,   -69,   -69,     0,   -69,
     -69,     0,   786,   787,     0,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,   -69,   -69,   -69,     0,   -69,   -69,   -69,
       0,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -70,     0,   -70,   -70,     0,   -70,   -70,     0,
     -70,   -70,     0,   786,   787,     0,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,   -70,   -70,   -70,     0,   -70,   -70,
     -70,     0,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -68,     0,   -68,   -68,     0,   -68,   -68,
       0,   -68,   -68,     0,   589,   590,     0,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,   -68,   -68,   -68,     0,   -68,
     -68,   -68,     0,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -65,     0,   -65,   -65,     0,   -65,
     -65,     0,   -65,   -65,     0,   589,   590,     0,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,     0,
     -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -66,     0,   -66,   -66,     0,
     -66,   -66,     0,   -66,   -66,     0,   589,   590,     0,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,   -66,   -66,   -66,
       0,   -66,   -66,   -66,     0,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   -69,     0,   -69,   -69,
       0,   -69,   -69,     0,   -69,   -69,     0,   589,   590,     0,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,   -69,   -69,
     -69,     0,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -70,     0,   -70,
     -70,     0,   -70,   -70,     0,   -70,   -70,     0,   589,   590,
       0,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,   -70,
     -70,   -70,     0,   -70,   -70,   -70,     0,   -70,   -70,   -70,
       0,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -72,     0,
     -72,   -72,     0,   -72,   -72,     0,   -72,   -72,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
     -72,   -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -71,
       0,   -71,   -71,     0,   -71,   -71,     0,   -71,   -71,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,   -71,   -71,   -71,     0,   -71,   -71,   -71,     0,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -62,     0,   -62,   -62,     0,   -62,   -62,     0,   -62,   -62,
       0,     0,     0,     0,   356,   357,   358,   359,   360,     0,
       0,     0,   -62,   -62,   -62,     0,   -62,   -62,   -62,     0,
     -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,     0,   -62,
     -62,   -63,     0,   -63,   -63,     0,   -63,   -63,     0,   -63,
     -63,     0,     0,     0,     0,   356,   357,   358,   359,   360,
       0,     0,     0,   -63,   -63,   -63,     0,   -63,   -63,   -63,
       0,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,     0,
     -63,   -63,   -72,     0,   -72,   -72,     0,   -72,   -72,     0,
     -72,   -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,   -72,   -72,   -72,     0,   -72,   -72,
     -72,     0,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -71,     0,   -71,   -71,     0,   -71,   -71,
       0,   -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,   -71,   -71,   -71,     0,   -71,
     -71,   -71,     0,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -57,     0,   -57,   -57,     0,   -57,
     -57,     0,   -57,   -57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   -57,   -57,     0,
       0,     0,   353,     0,   -57,   -57,   -57,     0,   -57,   -57,
     -57,   -57,     0,   -57,   -57,   -29,     0,   -29,   -29,     0,
     -29,   -29,   -64,   -29,   -29,     0,   101,   102,   103,     0,
     -64,   -64,   -64,   -64,   -64,   104,   105,   -29,   -29,   -29,
       0,     0,   -64,   -64,   -64,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -31,     0,   -31,   -31,
       0,   -31,   -31,   -68,   -31,   -31,     0,     0,   272,   273,
       0,   -68,   -68,   -68,   -68,   -68,     0,     0,   -31,   -31,
     -31,     0,     0,   -68,   -68,   -68,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -28,     0,   -28,
     -28,     0,   -28,   -28,   -65,   -28,   -28,     0,     0,   272,
     273,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,   -28,
     -28,   -28,     0,     0,   -65,   -65,   -65,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -30,     0,
     -30,   -30,     0,   -30,   -30,   -66,   -30,   -30,     0,     0,
     272,   273,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -30,   -30,   -30,     0,     0,   -66,   -66,   -66,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -33,
       0,   -33,   -33,     0,   -33,   -33,   -69,   -33,   -33,     0,
       0,   272,   273,     0,   -69,   -69,   -69,   -69,   -69,     0,
       0,   -33,   -33,   -33,     0,     0,   -69,   -69,   -69,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -32,     0,   -32,   -32,     0,   -32,   -32,   -70,   -32,   -32,
       0,     0,   272,   273,     0,   -70,   -70,   -70,   -70,   -70,
       0,     0,   -32,   -32,   -32,     0,     0,   -70,   -70,   -70,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -47,     0,   -47,   -47,     0,   -47,   -47,   -71,   -47,
     -47,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,     0,     0,   -47,   -47,   -47,     0,     0,   -71,   -71,
     -71,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -46,     0,   -46,   -46,     0,   -46,   -46,     0,
     -46,   -46,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,   -84,     0,   -46,   -46,   -46,   -84,   -84,   -84,
     -84,     0,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -42,     0,   -42,   -42,     0,   -42,   -42,
       0,   -42,   -42,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,   -85,     0,   -42,   -42,   -42,   -85,   -85,
     -85,   -85,     0,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -37,     0,   -37,   -37,     0,   -37,
     -37,     0,   -37,   -37,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,     0,     0,   -95,     0,   -37,   -37,   -37,   -95,
     -95,   -95,   -95,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -34,     0,   -34,   -34,     0,
     -34,   -34,     0,   -34,   -34,   -73,   -73,   553,   -73,   -73,
     -73,   -73,   -73,     0,     0,   554,     0,   -34,   -34,   -34,
     -73,   -73,   -73,   -73,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -35,     0,   -35,   -35,
       0,   -35,   -35,     0,   -35,   -35,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -76,     0,   -35,   -35,
     -35,   -76,   -76,   -76,   -76,     0,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -36,     0,   -36,
     -36,     0,   -36,   -36,     0,   -36,   -36,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -79,     0,   -36,
     -36,   -36,   -79,   -79,   -79,   -79,     0,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -41,     0,
     -41,   -41,     0,   -41,   -41,     0,   -41,   -41,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -82,     0,
     -41,   -41,   -41,   -82,   -82,   -82,   -82,     0,   -41,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -39,
       0,   -39,   -39,     0,   -39,   -39,     0,   -39,   -39,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,   -80,
       0,   -39,   -39,   -39,   -80,   -80,   -80,   -80,     0,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -50,     0,   -50,   -50,     0,   -50,   -50,     0,   -50,   -50,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
     -81,     0,   -50,   -50,   -50,   -81,   -81,   -81,   -81,     0,
     -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,    -9,     0,    -9,    -9,     0,    -9,    -9,     0,    -9,
      -9,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,   -89,     0,    -9,    -9,    -9,   -89,   -89,   -89,   -89,
       0,    -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,   -40,     0,   -40,   -40,     0,   -40,   -40,     0,
     -40,   -40,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,   -87,     0,   -40,   -40,   -40,   -87,   -87,   -87,
     -87,     0,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -49,     0,   -49,   -49,     0,   -49,   -49,
       0,   -49,   -49,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,   -86,     0,   -49,   -49,   -49,   -86,   -86,
     -86,   -86,     0,   -49,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -12,     0,   -12,   -12,     0,   -12,
     -12,     0,   -12,   -12,   -74,   -74,   553,   -74,   -74,   -74,
     -74,   -74,     0,     0,   554,     0,   -12,   -12,   -12,   -74,
     -74,   -74,   -74,     0,   -12,   -12,   -12,     0,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,   -11,     0,   -11,   -11,     0,
     -11,   -11,     0,   -11,   -11,   -75,   -75,   553,   -75,   -75,
     -75,   -75,   -75,     0,     0,   554,     0,   -11,   -11,   -11,
     -75,   -75,   -75,   -75,     0,   -11,   -11,   -11,     0,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -10,     0,   -10,   -10,
       0,   -10,   -10,     0,   -10,   -10,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,   -77,     0,   -10,   -10,
     -10,   -77,   -77,   -77,   -77,     0,   -10,   -10,   -10,     0,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -51,     0,   -51,
     -51,     0,   -51,   -51,     0,   -51,   -51,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,   -78,     0,   -51,
     -51,   -51,   -78,   -78,   -78,   -78,     0,   -51,   -51,   -51,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -48,     0,
     -48,   -48,     0,   -48,   -48,     0,   -48,   -48,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,     0,
     -48,   -48,   -48,   -88,   -88,   -88,   -88,     0,   -48,   -48,
     -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,    29,
       0,    30,    31,     0,    32,    33,     0,    34,   196,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,   -90,
       0,    35,    36,    37,   -90,   -90,   -90,   -90,     0,    38,
      39,    40,     0,    41,    42,    43,    44,     0,    45,    46,
     -45,     0,   -45,   -45,     0,   -45,   -45,     0,   -45,   -45,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
     -91,     0,   -45,   -45,   -45,   -91,   -91,   -91,   -91,     0,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,   -27,
     -27,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
       0,   -92,     0,   -27,   -27,   -27,   -92,   -92,   -92,   -92,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -29,     0,   -29,   -29,     0,   -29,   -29,     0,
     -29,   -29,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,   -93,     0,   -29,   -29,   -29,   -93,   -93,   -93,
     -93,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -31,     0,   -31,   -31,     0,   -31,   -31,
       0,   -31,   -31,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,     0,     0,   -94,     0,   -31,   -31,   -31,   -94,   -94,
     -94,   -94,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -28,     0,   -28,   -28,     0,   -28,
     -28,     0,   -28,   -28,   551,   552,     0,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,   -28,   -28,   -28,   -65,
     -65,   -65,   -65,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -30,     0,   -30,   -30,     0,
     -30,   -30,     0,   -30,   -30,   551,   552,     0,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,   -30,   -30,   -30,
     -66,   -66,   -66,   -66,     0,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -47,     0,   -47,   -47,
       0,   -47,   -47,     0,   -47,   -47,   551,   552,     0,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,   -47,   -47,
     -47,   -69,   -69,   -69,   -69,     0,   -47,   -47,   -47,     0,
     -47,   -47,   -47,   -47,     0,   -47,   -47,   -46,     0,   -46,
     -46,     0,   -46,   -46,     0,   -46,   -46,   551,   552,     0,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,   -46,
     -46,   -46,   -70,   -70,   -70,   -70,     0,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -42,     0,
     -42,   -42,     0,   -42,   -42,     0,   -42,   -42,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
     -42,   -42,   -42,   -72,   -72,   -72,   -72,     0,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,     0,   -42,   -42,    -9,
       0,    -9,    -9,     0,    -9,    -9,     0,    -9,    -9,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,    -9,    -9,    -9,   -71,   -71,   -71,   -71,     0,    -9,
      -9,    -9,     0,    -9,    -9,    -9,    -9,     0,    -9,    -9,
     -12,     0,   -12,   -12,     0,   -12,   -12,     0,   -12,   -12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -12,   -12,   -12,     0,     0,     0,     0,     0,
     -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,     0,   -12,
     -12,   -11,     0,   -11,   -11,     0,   -11,   -11,     0,   -11,
     -11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -11,   -11,   -11,     0,     0,     0,     0,
       0,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,     0,
     -11,   -11,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,
     -10,   -10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -10,   -10,   -10,     0,     0,     0,
       0,     0,   -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,
       0,   -10,   -10,   -41,     0,   -41,   -41,     0,   -41,   -41,
       0,   -41,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,   -41,   -41,     0,     0,
       0,     0,     0,   -41,   -41,   -41,     0,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -39,     0,   -39,   -39,     0,   -39,
     -39,     0,   -39,   -39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -39,   -39,   -39,     0,
       0,     0,     0,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -50,     0,   -50,   -50,     0,
     -50,   -50,     0,   -50,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -50,   -50,   -50,
       0,     0,     0,     0,     0,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,     0,   -50,   -50,   -40,     0,   -40,   -40,
       0,   -40,   -40,     0,   -40,   -40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -40,   -40,
     -40,     0,     0,     0,     0,     0,   -40,   -40,   -40,     0,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -49,     0,   -49,
     -49,     0,   -49,   -49,     0,   -49,   -49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -49,
     -49,   -49,     0,     0,     0,     0,     0,   -49,   -49,   -49,
       0,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -51,     0,
     -51,   -51,     0,   -51,   -51,     0,   -51,   -51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -51,   -51,   -51,     0,     0,     0,     0,     0,   -51,   -51,
     -51,     0,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -48,
       0,   -48,   -48,     0,   -48,   -48,     0,   -48,   -48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -48,   -48,   -48,     0,     0,     0,     0,     0,   -48,
     -48,   -48,     0,   -48,   -48,   -48,   -48,     0,   -48,   -48,
     291,     0,    30,    31,     0,    32,    33,     0,   292,   196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,     0,     0,     0,     0,     0,
      38,    39,    40,     0,    41,    42,    43,    44,     0,    45,
      46,    -7,     0,    -7,    -7,     0,    -7,    -7,     0,    -7,
      -7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -7,    -7,    -7,     0,     0,     0,     0,
       0,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,
      -8,    -8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    -8,    -8,    -8,     0,     0,     0,
       0,     0,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,
       0,    -8,    -8,   385,     0,    30,    31,     0,    32,    33,
       0,   386,   196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,    37,     0,     0,
       0,     0,     0,    38,    39,    40,     0,    41,    42,    43,
      44,     0,    45,    46,   -33,     0,   -33,   -33,     0,   -33,
     -33,     0,   -33,   -33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,   -33,     0,
       0,     0,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -32,     0,   -32,   -32,     0,
     -32,   -32,     0,   -32,   -32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,   -32,   -32,
       0,     0,     0,     0,     0,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -37,     0,   -37,   -37,
       0,   -37,   -37,     0,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -34,     0,   -34,
     -34,     0,   -34,   -34,     0,   -34,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -35,     0,
     -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -36,
       0,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,     0,     0,     0,     0,     0,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   274,   -36,   -36,
     215,     0,    32,   275,     0,     0,   276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,    37,     0,     0,     0,     0,     0,    38,    39,    40,
       0,    41,    42,    43,    44,   274,    45,   277,   649,     0,
      32,   275,     0,     0,   276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,    37,
       0,     0,     0,     0,     0,    38,    39,    40,     0,    41,
      42,    43,    44,   653,    45,   277,   256,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   700,     0,
       0,   286,     0,   197,     0,    35,    36,    37,     0,     0,
       0,     0,     0,    38,    39,    40,     0,    41,    42,    43,
     198,   199,   200,     0,     0,     0,     0,     0,   201,   202,
     203,     0,   204,   205,   206,   703,     0,     0,    78,     0,
     197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     778,     0,     0,    78,     0,   197,     0,   198,   199,   200,
       0,     0,     0,     0,     0,   201,   202,   203,     0,   204,
     205,   206,   198,   199,   200,    78,     0,   197,     0,     0,
     201,   202,   203,     0,   204,   205,   206,     0,     0,     0,
      78,     0,   197,     0,   198,   199,   200,     0,     0,     0,
       0,     0,   201,   202,   203,   121,   204,   205,   206,   198,
     199,   200,    78,     0,   197,     0,     0,   201,   202,   203,
     124,   204,   205,   206,     0,     0,     0,    78,     0,   197,
       0,   198,   199,   200,     0,     0,     0,     0,     0,   201,
     202,   203,   402,   204,   205,   206,   198,   199,   200,   217,
       0,   218,     0,     0,   201,   202,   203,   405,   204,   205,
     206,     0,     0,     0,    78,     0,   197,     0,   219,   220,
     221,     0,     0,     0,     0,   436,   222,   223,   224,     0,
     225,   226,   227,   198,   199,   200,    78,     0,   197,     0,
       0,   201,   202,   203,   440,   204,   205,   206,     0,     0,
       0,   217,     0,   218,     0,   198,   199,   200,     0,     0,
       0,     0,     0,   201,   202,   203,   443,   204,   205,   206,
     219,   220,   221,    78,     0,   197,     0,   474,   222,   223,
     224,     0,   225,   226,   227,     0,     0,     0,    78,     0,
     197,     0,   198,   199,   200,     0,     0,     0,     0,     0,
     201,   202,   203,   478,   204,   205,   206,   198,   199,   200,
       0,     0,     0,     0,     0,   201,   202,   203,   481,   204,
     205,   206,   215,     0,    32,   -67,     0,     0,     0,   570,
     571,   513,   -67,   -67,   -67,   -67,   -67,   217,     0,   218,
       0,    35,    36,    37,   -67,   -67,   -67,   -67,     0,    38,
      39,    40,     0,    41,    42,    43,   219,   220,   221,    78,
       0,   197,     0,   515,   222,   223,   224,     0,   225,   226,
     227,     0,     0,     0,    78,     0,   197,     0,   198,   199,
     200,     0,     0,     0,     0,     0,   201,   202,   203,   519,
     204,   205,   206,   198,   199,   200,     0,     0,     0,     0,
       0,   201,   202,   203,   522,   204,   205,   206,    78,     0,
     197,   -68,     0,     0,     0,   570,   571,   535,   -68,   -68,
     -68,   -68,   -68,   217,     0,   218,     0,   198,   199,   200,
     -68,   -68,   -68,   -68,     0,   201,   202,   203,     0,   204,
     205,   206,   219,   220,   221,    78,     0,   197,     0,   609,
     222,   223,   224,     0,   225,   226,   227,     0,     0,     0,
      78,     0,   197,     0,   198,   199,   200,     0,     0,     0,
       0,     0,   201,   202,   203,   613,   204,   205,   206,   198,
     199,   200,   217,     0,   218,     0,     0,   201,   202,   203,
     616,   204,   205,   206,     0,     0,     0,    78,     0,   197,
       0,   219,   220,   221,     0,     0,     0,     0,   622,   222,
     223,   224,     0,   225,   226,   227,   198,   199,   200,    78,
       0,   197,     0,     0,   201,   202,   203,   626,   204,   205,
     206,     0,     0,     0,   217,     0,   218,     0,   198,   199,
     200,     0,     0,     0,     0,     0,   201,   202,   203,   629,
     204,   205,   206,   219,   220,   221,    78,     0,   197,     0,
     635,   222,   223,   224,     0,   225,   226,   227,     0,     0,
       0,    78,     0,   197,     0,   198,   199,   200,     0,     0,
       0,     0,     0,   201,   202,   203,   639,   204,   205,   206,
     198,   199,   200,     0,     0,     0,     0,     0,   201,   202,
     203,   642,   204,   205,   206,   677,     0,   678,   -65,     0,
       0,     0,   570,   571,   679,   -65,   -65,   -65,   -65,   -65,
     217,     0,   218,     0,   680,   681,   682,   -65,   -65,   -65,
     -65,     0,   683,   684,   685,     0,   686,   687,   688,   219,
     220,   221,    78,     0,   197,     0,   731,   222,   223,   224,
       0,   225,   226,   227,     0,     0,     0,    78,     0,   197,
       0,   198,   199,   200,     0,     0,     0,     0,     0,   201,
     202,   203,   735,   204,   205,   206,   198,   199,   200,   217,
       0,   218,     0,     0,   201,   202,   203,   738,   204,   205,
     206,     0,     0,     0,    78,     0,   197,     0,   219,   220,
     221,     0,     0,     0,     0,   790,   222,   223,   224,     0,
     225,   226,   227,   198,   199,   200,    78,     0,   197,     0,
       0,   201,   202,   203,   794,   204,   205,   206,     0,     0,
       0,   215,     0,    32,     0,   198,   199,   200,     0,     0,
       0,     0,     0,   201,   202,   203,   797,   204,   205,   206,
      35,    36,    37,   257,     0,   258,     0,     0,    38,    39,
      40,     0,    41,    42,    43,     0,     0,     0,   217,     0,
     218,     0,   259,   260,   261,     0,     0,     0,     0,     0,
     262,   263,   264,     0,   265,   266,   267,   219,   220,   221,
      78,     0,   197,     0,     0,   222,   223,   224,     0,   225,
     226,   227,     0,     0,     0,   236,     0,   237,     0,   198,
     199,   200,     0,     0,     0,     0,     0,   201,   202,   203,
       0,   204,   205,   206,   238,   239,   240,   410,     0,   411,
       0,     0,   241,   242,   243,     0,   244,   245,   246,     0,
       0,     0,   448,     0,   449,     0,   412,   413,   414,     0,
       0,     0,     0,     0,   415,   416,   417,     0,   418,   419,
     420,   450,   451,   452,   486,     0,   487,     0,     0,   453,
     454,   455,     0,   456,   457,   458,     0,     0,     0,   677,
       0,   678,     0,   488,   489,   490,     0,     0,     0,     0,
       0,   491,   492,   493,     0,   494,   495,   496,   680,   681,
     682,   743,     0,   744,     0,     0,   683,   684,   685,     0,
     686,   687,   688,     0,     0,     0,     0,     0,     0,     0,
     745,   746,   747,     0,     0,     0,     0,     0,   748,   749,
     750,   255,   751,   752,   753,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   561,     0,   -83,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,   -83,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,    75,   -83,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,    76,   -83,   -83,   -83,    75,   -83,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,   370,   -83,   -83,   -83,    75,
     -83,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,   673,
     -83,   -83,   -83,    75,   -83,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   371,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,   -83,     0,     0,
       0,     0,   -83,   -83,   -83,   -84,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -85,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -95,     0,     0,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,     0,
     -95,   -95,   -95,   -95,   -73,     0,     0,   -73,   -73,   -73,
     342,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   343,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -76,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
     -79,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -82,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -80,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -81,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -89,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -87,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -86,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -74,     0,     0,   -74,   -74,   -74,   342,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   343,     0,     0,     0,     0,
     -74,   -74,   -74,   -74,   -75,     0,     0,   -75,   -75,   -75,
     342,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   343,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -77,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -78,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -88,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -90,     0,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -91,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,     0,   -91,   -91,
     -91,   -91,   -92,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
       0,   -92,   -92,   -92,   -92,   -93,     0,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,     0,     0,   -93,   -93,   -93,   -93,   -94,     0,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,     0,     0,     0,     0,   -94,   -94,   -94,
     -94,   -84,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
     -85,   -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,   -95,
     -85,   -85,   -85,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,     0,     0,   -73,   -95,
     -95,   -95,   -73,   -73,   -73,   106,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   107,     0,     0,     0,   -76,   -73,   -73,
     -73,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,   -79,   -76,   -76,   -76,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,   -82,   -79,   -79,   -79,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,   -80,   -82,   -82,   -82,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,   -81,   -80,   -80,   -80,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,   -89,   -81,   -81,   -81,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,   -87,   -89,   -89,   -89,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
     -86,   -87,   -87,   -87,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -74,
     -86,   -86,   -86,   -74,   -74,   -74,   106,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   107,     0,     0,     0,   -75,   -74,
     -74,   -74,   -75,   -75,   -75,   106,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   107,     0,     0,     0,   -77,   -75,   -75,
     -75,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,   -78,   -77,   -77,   -77,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,   -88,   -78,   -78,   -78,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,   -90,   -88,   -88,   -88,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,     0,   -91,   -90,   -90,   -90,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,
       0,     0,   -92,   -91,   -91,   -91,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,   -93,   -92,   -92,   -92,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,
     -94,   -93,   -93,   -93,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,     0,     0,     0,   -84,
     -94,   -94,   -94,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,   -84,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -85,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,   -85,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -95,     0,     0,     0,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,   -95,
       0,     0,     0,     0,   -95,   -95,   -95,   -95,   -73,     0,
       0,     0,   -73,   -73,   572,   -73,   -73,   -73,   -73,   -73,
       0,     0,   573,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,   -76,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -79,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -79,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -82,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -82,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -80,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,   -80,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -81,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -89,     0,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
     -89,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -87,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   -87,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -86,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,   -86,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,   -74,     0,     0,     0,   -74,
     -74,   572,   -74,   -74,   -74,   -74,   -74,     0,     0,   573,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -75,     0,
       0,     0,   -75,   -75,   572,   -75,   -75,   -75,   -75,   -75,
       0,     0,   573,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -77,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,   -77,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -78,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   -78,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -88,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,   -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,
     -90,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,     0,   -90,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,   -91,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,   -91,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -92,     0,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
     -92,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -93,
       0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,     0,     0,   -93,     0,     0,     0,     0,   -93,   -93,
     -93,   -93,   -94,     0,     0,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,     0,     0,   -94,     0,     0,     0,
     -84,   -94,   -94,   -94,   -94,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,   -84,     0,     0,   -85,     0,
     -84,   -84,   -84,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,   -85,     0,     0,   -95,     0,   -85,   -85,
     -85,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
       0,   -95,     0,     0,   -73,     0,   -95,   -95,   -95,   -73,
     -73,   380,   -73,   -73,   -73,   -73,   -73,     0,     0,   381,
       0,     0,   -76,     0,   -73,   -73,   -73,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,   -76,     0,     0,
     -79,     0,   -76,   -76,   -76,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,   -79,     0,     0,   -82,     0,
     -79,   -79,   -79,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,   -82,     0,     0,   -80,     0,   -82,   -82,
     -82,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,   -80,     0,     0,   -81,     0,   -80,   -80,   -80,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,
       0,     0,   -74,     0,   -81,   -81,   -81,   -74,   -74,   380,
     -74,   -74,   -74,   -74,   -74,     0,     0,   381,     0,     0,
     -75,     0,   -74,   -74,   -74,   -75,   -75,   380,   -75,   -75,
     -75,   -75,   -75,     0,     0,   381,     0,     0,   -89,     0,
     -75,   -75,   -75,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,   -89,     0,     0,   -87,     0,   -89,   -89,
     -89,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,   -87,     0,     0,   -86,     0,   -87,   -87,   -87,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   -86,
       0,     0,   -77,     0,   -86,   -86,   -86,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,   -77,     0,     0,
     -78,     0,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,   -78,     0,     0,   -88,     0,
     -78,   -78,   -78,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,   -88,     0,     0,   -90,     0,   -88,   -88,
     -88,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,   -90,     0,     0,   -91,     0,   -90,   -90,   -90,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,   -91,
       0,     0,   -92,     0,   -91,   -91,   -91,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,   -92,     0,     0,
     -93,     0,   -92,   -92,   -92,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,   -93,     0,     0,   -94,     0,
     -93,   -93,   -93,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,     0,     0,   -94,     0,     0,     0,   -66,   -94,   -94,
     -94,   570,   571,     0,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -69,     0,     0,     0,   570,   571,     0,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -70,     0,     0,     0,   570,   571,     0,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -73,   -73,   -73,   318,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   319,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,   -89,   -89,   -89,   -89,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -74,   -74,   -74,   318,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   319,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   318,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   319,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,   -78,   -78,   -78,   -78,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,     0,   -92,   -92,   -92,   -92,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,     0,   -93,   -93,   -93,   -93,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
       0,     0,   -94,   -94,   -94,   -94,   313,   314,   315,     0,
     -64,   -64,   -64,   -64,   -64,   316,   317,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64
};

static const yytype_int16 yycheck[] =
{
      32,     4,     8,    35,    36,    37,   175,     9,     4,   149,
     150,     9,     9,     3,     0,     6,     1,     3,     3,     0,
       4,   163,     4,    46,    30,     4,     5,     4,    31,    32,
       8,   171,   163,     7,     8,    31,    32,    39,   167,   179,
      10,    39,    39,    75,    76,    30,   186,    31,    32,    31,
      32,    83,    30,    85,    91,   184,    30,     7,    90,     7,
       8,     7,     8,    30,    96,    97,    98,    99,   100,     8,
       7,     8,   104,    17,   106,   107,    20,     7,     8,    29,
     255,    25,    30,    30,    30,     7,     8,     8,    27,    28,
      29,    30,     4,    30,     3,     8,     0,     7,     6,     3,
      30,     1,     4,     5,     4,   274,     6,     8,    30,    30,
       6,    47,    48,    49,    27,    28,    29,    30,    28,    29,
     152,     6,     8,    23,    24,    25,   163,    28,    29,    30,
     167,    31,    32,    33,     7,    35,    36,    37,     8,     0,
     163,     7,     3,   163,    30,   320,     6,   184,     1,     6,
       7,     4,   184,     6,    27,    28,    29,     6,     7,   196,
      30,    27,    28,    29,     6,   197,   198,   199,   200,   344,
      23,    24,    25,    27,    28,    29,    30,     6,    31,    32,
      33,     6,    35,    36,    37,     7,   218,   219,   220,   221,
       8,     3,     8,    11,    12,    13,   371,    15,    16,    17,
      18,    19,    20,    21,     7,   237,   238,   239,   240,    27,
      28,    29,    30,     1,    30,     4,     4,     0,     6,   163,
       3,     0,   163,   255,     3,   163,   258,   259,   260,   261,
       8,     0,    30,     8,     3,    23,    24,    25,    30,   276,
     272,   273,   384,    31,    32,    33,     7,    35,    36,    37,
      28,    29,    30,   384,   277,    30,   293,   294,   295,     0,
     196,     4,     3,    39,   393,    29,    30,    28,    29,     8,
     302,     8,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,     4,
      29,    30,   196,    30,   326,     8,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    30,     8,     8,     8,    30,   350,     8,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,    30,    30,    30,   371,
     276,    30,    30,     8,     8,   377,     7,   379,   380,   381,
     387,   388,   389,    28,    29,    30,   393,   293,   294,   295,
     392,   384,    30,   395,   384,    30,    30,   542,    27,    28,
      29,    30,   276,     0,     0,     0,     3,     3,     3,   411,
     412,   413,   414,     4,     5,     0,   561,    72,     3,   293,
     294,   295,     1,     0,     3,     4,     3,     6,     7,     0,
       9,    10,     3,     0,     0,   580,     3,     3,     0,     0,
      30,     3,     3,    30,    23,    24,    25,   449,   450,   451,
     452,     7,    31,    32,    33,    30,    35,    36,    37,    38,
      39,    40,    41,     4,     5,    15,    16,    17,    18,    19,
     384,     4,     5,   384,     4,     5,   384,    27,    28,    29,
      30,   387,   388,   389,    30,   487,   488,   489,   490,     7,
     602,   603,   604,    28,    29,    30,     7,     3,    30,     4,
       7,   602,   603,   604,     7,    30,   605,   162,   163,    30,
       6,   166,   651,   387,   388,   389,    12,    13,    14,    15,
      16,    17,    18,    19,     7,     4,    22,   182,   183,    30,
      30,    27,    28,    29,    30,    30,    30,   192,   193,     6,
     542,   196,     6,     6,     6,     6,   548,     6,   550,   551,
     552,   553,   554,     6,     6,     6,     6,   702,     6,   561,
       6,     6,   674,   675,     6,   567,     7,   569,   570,   571,
     572,   573,    30,   674,   675,    30,    30,   676,   580,     4,
       6,     4,     3,    32,   586,     4,   588,   589,   590,   591,
     592,    15,    16,    17,    18,    19,   603,    30,   605,    30,
      30,    30,    30,    27,    28,    29,    30,     4,    30,   602,
     603,   604,   602,   603,   604,    30,    30,   729,   730,    30,
      30,   276,    30,    30,    30,    30,    75,    76,   729,   730,
       1,     6,   777,     4,    83,     6,    85,     6,   293,   294,
     295,    90,    30,    30,    30,    30,    30,    96,    97,    98,
      99,   100,    23,    24,    25,   104,     6,     6,     6,     6,
      31,    32,    33,    30,    35,    36,    37,    30,    30,   676,
      30,   673,    30,     6,   676,     6,   678,     7,   680,   681,
     682,   674,   675,     7,   674,   675,    30,    30,   602,   603,
     604,   602,   603,   604,   602,   603,   604,     4,    30,     4,
     702,    30,    30,   152,    30,    30,     4,    30,    30,   711,
      30,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   724,   725,   726,   727,   728,    30,    30,   384,
      30,    30,   387,   388,   389,   184,   729,   730,     7,   729,
     730,     7,   744,   745,   746,   747,     7,    30,   197,   198,
     199,   200,    30,    30,    30,    30,    30,    30,    30,    30,
     674,   675,    30,   674,   675,    30,   674,   675,    30,   218,
     219,   220,   221,    30,    30,   777,    30,    30,    30,    30,
       7,   783,     6,   785,   786,   787,   788,   789,   237,   238,
     239,   240,     6,     6,    30,    30,    30,     4,    30,    30,
      30,    30,    30,     6,     6,     6,   255,    30,    30,   258,
     259,   260,   261,     4,    30,   729,   730,    -1,   729,   730,
      30,   729,   730,   272,   273,     6,    30,     8,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    30,    30,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,   302,    -1,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,    -1,    -1,    -1,    -1,    -1,   326,    -1,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,    -1,    -1,    -1,
      -1,   350,    -1,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,    -1,
      12,    13,   371,    15,    16,    17,    18,    19,   377,    -1,
     379,   380,   381,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,   392,    -1,    -1,   395,   602,   603,   604,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,   411,   412,   413,   414,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,     7,    35,    36,    37,    38,
      39,    40,    41,    15,    16,    17,    18,    19,    -1,    -1,
     449,   450,   451,   452,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,     1,    -1,    -1,     4,    -1,     6,     7,   674,
     675,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,   487,   488,
     489,   490,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,   729,   730,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,   542,    40,    41,    -1,    -1,    -1,   548,
      -1,   550,   551,   552,   553,   554,    -1,    -1,    -1,    -1,
      -1,    -1,   561,    -1,    -1,    -1,    -1,    -1,   567,    -1,
     569,   570,   571,   572,   573,    -1,    -1,     1,    32,     3,
       4,   580,     6,     7,    -1,     9,    10,   586,    -1,   588,
     589,   590,   591,   592,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,     1,    -1,     3,     4,    90,     6,     7,    -1,
       9,    10,    96,    97,    98,    99,   100,    -1,   102,   103,
     104,    -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,     4,   673,     6,     7,   676,    -1,   678,
      -1,   680,   681,   682,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,   152,    -1,
      31,    32,    33,   702,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,   711,    -1,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     184,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,   197,    -1,   744,   745,   746,   747,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,   218,    35,    36,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,   777,    -1,
      -1,    -1,    -1,   237,   783,    -1,   785,   786,   787,   788,
     789,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,    -1,   258,    -1,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,   272,   273,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,   302,    -1,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,   326,    -1,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,    -1,    -1,
     344,    -1,    -1,    -1,    -1,    -1,   350,    -1,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,    -1,     1,    -1,    -1,     4,   371,     6,    -1,
      -1,    -1,    -1,   377,    -1,   379,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,   392,    -1,
      -1,   395,    -1,    31,    32,    33,    -1,    35,    36,    37,
       1,    -1,     3,     4,    -1,     6,     7,   411,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,     3,     4,   449,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,   487,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,   542,    -1,
      -1,     4,    -1,     6,   548,    -1,   550,   551,   552,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,   561,    -1,    -1,
      23,    24,    25,   567,    -1,   569,   570,   571,    31,    32,
      33,    -1,    35,    36,    37,    -1,   580,    -1,    -1,    -1,
      75,    76,   586,    -1,   588,   589,   590,    -1,    83,    -1,
      85,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,    -1,    -1,     1,   104,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,   152,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,   673,
      -1,    -1,   676,    -1,   678,    -1,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,   184,
      35,    36,    37,    38,    -1,    40,    41,    -1,   702,    -1,
      -1,    -1,   197,     1,    -1,    -1,     4,   711,     6,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     724,   725,   726,   218,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,    35,    36,    37,
     744,    -1,   237,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
     255,    -1,     1,   258,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,   777,    -1,    -1,    -1,    -1,    -1,   783,
      -1,   785,   786,   787,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,   302,    -1,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    -1,
      -1,   316,   317,    -1,    -1,   320,    -1,    -1,    -1,    -1,
      -1,   326,    -1,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    -1,    -1,   340,   341,    -1,    -1,   344,
      -1,    -1,    -1,    -1,    -1,   350,    -1,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,    -1,    -1,   364,
     365,    -1,     1,    -1,    -1,     4,   371,     6,    -1,    -1,
      -1,    -1,   377,    -1,   379,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,   392,    -1,    -1,
     395,    -1,    31,    32,    33,    -1,    35,    36,    37,     1,
      -1,     3,     4,    -1,     6,     7,   411,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,   449,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,    32,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,   487,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    95,    -1,     1,    -1,
      -1,     4,   101,     6,     7,    -1,   105,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   542,    -1,    -1,
      23,    24,    25,   548,    -1,   550,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,   561,    40,    41,    -1,
      -1,    -1,   567,     1,   569,     3,     4,    -1,     6,     7,
      -1,     9,    10,   152,    -1,   580,    -1,    -1,    -1,    -1,
      -1,   586,    -1,   588,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,   197,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   218,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,   237,     1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    -1,   673,    -1,
      -1,   676,    -1,   678,    -1,    -1,   255,    -1,    -1,   258,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    -1,   702,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   711,    -1,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,    -1,    -1,
     725,   726,    -1,   302,    -1,   304,   305,   306,   307,    -1,
      -1,    -1,    -1,    -1,   313,     8,    -1,    -1,   317,   744,
      -1,   320,    15,    16,    17,    18,    19,   326,    -1,   328,
     329,   330,   331,    -1,    27,    28,    29,    30,   337,    -1,
      -1,    -1,   341,    -1,    -1,   344,    -1,    -1,    -1,    -1,
      -1,   350,   777,   352,   353,   354,   355,    -1,   783,    -1,
     785,    -1,   361,    -1,    -1,    -1,   365,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,   377,    -1,
     379,    -1,    -1,     1,    -1,     3,     4,    32,     6,     7,
      -1,     9,    10,   392,    12,    13,   395,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,   411,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
     449,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,   487,    35,
      36,    37,    38,    39,    40,    41,    -1,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,   152,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,   163,    23,
      24,    25,   167,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    32,    40,    41,    -1,   184,
      -1,    12,    13,   542,    15,    16,    17,    18,    19,   548,
      -1,   550,   197,    -1,    -1,     7,    27,    28,    29,    30,
      12,    13,   561,    15,    16,    17,    18,    19,   567,    -1,
     569,    -1,    -1,   218,    -1,    27,    28,    29,    75,    76,
      -1,   580,    -1,    -1,    -1,    -1,    83,   586,    85,   588,
      -1,    -1,   237,    90,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,
     255,     9,    10,   258,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    29,   277,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,   302,    -1,   304,
      -1,    -1,     1,    -1,    -1,     4,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    -1,   673,   320,    -1,   676,    -1,   678,
      -1,   326,    -1,   328,    23,    24,    25,   184,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,   344,
     197,    -1,    -1,   702,    -1,   350,    -1,   352,    -1,    -1,
      -1,    -1,   711,    -1,   713,   714,   715,   716,    -1,    -1,
      -1,   218,    -1,   722,    -1,   370,   371,   726,    -1,    -1,
      -1,    -1,   377,    -1,   379,    -1,    -1,    -1,    -1,   384,
     237,    -1,    -1,    -1,    -1,   744,    -1,   392,   393,    -1,
     395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,     1,
      -1,   258,     4,    -1,     6,     7,   411,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   777,    -1,
      -1,    23,    24,    25,   783,    -1,   785,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    -1,   449,   302,    -1,   304,   305,   306,
      -1,    -1,    -1,    -1,     1,    -1,    -1,     4,    -1,     6,
      -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,   326,
      -1,   328,   329,   330,    -1,    -1,    23,    24,    25,     4,
      -1,     6,   487,    -1,    31,    32,    33,   344,    35,    36,
      37,    -1,    -1,   350,    -1,   352,   353,   354,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,   371,    -1,    -1,    -1,    -1,    -1,
     377,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,   392,    -1,   542,   395,     8,
      -1,    -1,    -1,   548,    -1,   550,    15,    16,    17,    18,
      19,    -1,    -1,    -1,   411,    -1,   561,     7,    27,    28,
      29,    30,   567,    -1,   569,    15,    16,    17,    18,    19,
      -1,    -1,    75,    76,    -1,   580,    -1,    27,    28,    29,
      83,   586,    85,   588,    -1,    -1,    -1,    90,    -1,    -1,
      93,    -1,   449,    -1,    -1,    -1,    -1,   602,   603,   604,
     605,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
     487,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,    -1,     1,    -1,    -1,     4,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   673,   674,
     675,   676,    -1,   678,    23,    24,    25,    32,    -1,    -1,
      -1,   184,    31,    32,    33,   542,    35,    36,    37,    -1,
      -1,   548,    -1,   550,   197,    -1,    -1,   702,    -1,    -1,
      -1,    -1,    -1,    -1,   561,    -1,   711,    -1,   713,    -1,
     567,    -1,   569,    -1,     1,   218,    -1,     4,    -1,     6,
      75,    76,    -1,   580,   729,   730,    -1,    -1,    83,   586,
      85,   588,    -1,    -1,   237,    90,    23,    24,    25,   744,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,     1,   255,     3,     4,   258,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   777,    23,    24,    25,    -1,    -1,   783,    29,
     785,    31,    32,    33,     7,    35,    36,    37,    38,    39,
      40,    41,    15,    16,    17,    18,    19,   152,    -1,   302,
      -1,   304,   305,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   673,   320,    -1,   676,
      -1,   678,    -1,   326,    -1,   328,   329,    -1,    -1,   184,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   344,   197,    -1,    -1,   702,    -1,   350,    -1,   352,
     353,    -1,    -1,    -1,   711,    -1,   713,   714,   715,    -1,
      -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,   371,    -1,
      -1,    -1,    -1,    -1,   377,     1,   379,     3,     4,    -1,
       6,     7,   237,     9,    10,    -1,    -1,   744,    -1,   392,
      -1,    -1,   395,    -1,    -1,    -1,    -1,    23,    24,    25,
     255,    -1,    -1,   258,    -1,    31,    32,    33,   411,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
     777,    -1,    -1,    -1,    -1,    -1,   783,    -1,   785,    -1,
      -1,     8,     1,    -1,    -1,     4,    -1,     6,    15,    16,
      17,    18,    19,    -1,    -1,    -1,   449,   302,    -1,   304,
      27,    28,    29,    30,    23,    24,    25,    -1,    -1,     4,
      -1,     6,    31,    32,    33,   320,    35,    36,    37,    -1,
      -1,   326,    -1,   328,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,   487,    30,    31,    32,    33,   344,
      35,    36,    37,    -1,    -1,   350,     1,   352,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    23,    24,
      25,    -1,   377,    -1,   379,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,   392,     1,   542,
     395,     4,    -1,     6,    -1,   548,    -1,   550,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   411,    -1,   561,    -1,
      23,    24,    25,    -1,   567,    -1,   569,    -1,    31,    32,
      33,    -1,    35,    36,    37,    -1,    -1,   580,    -1,    -1,
      -1,    -1,    -1,   586,    -1,   588,    -1,     1,    -1,     3,
       4,    -1,     6,     7,   449,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     1,    -1,
       3,     4,   487,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     4,
     673,     6,     7,   676,    -1,   678,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   542,    23,    24,
      25,    -1,    -1,   548,    -1,   550,    31,    32,    33,   702,
      35,    36,    37,    -1,    -1,    -1,   561,    -1,   711,    -1,
     713,   714,   567,    -1,   569,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,   580,    -1,    -1,    -1,    -1,
      -1,   586,    -1,   588,    -1,    -1,    -1,    23,    24,    25,
      -1,   744,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,   777,    15,    16,    17,    18,    19,
     783,    -1,   785,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,   673,    -1,
      -1,   676,    -1,   678,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    -1,   702,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   711,    -1,   713,    -1,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,   744,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,     6,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,   777,    26,    27,    28,    29,    30,   783,     1,
     785,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     7,     9,    10,    -1,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    23,    24,    25,
      -1,    -1,    27,    28,    29,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,     7,     9,    10,    -1,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    23,    24,
      25,    -1,    -1,    27,    28,    29,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,     7,     9,    10,    -1,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    23,
      24,    25,    -1,    -1,    27,    28,    29,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,     7,     9,    10,
      -1,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    23,    24,    25,    -1,    -1,    27,    28,    29,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,     7,     9,
      10,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    23,    24,    25,    -1,    -1,    27,    28,
      29,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    23,    24,    25,    27,    28,    29,
      30,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    23,    24,    25,    27,
      28,    29,    30,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    23,    24,    25,
      27,    28,    29,    30,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    23,
      24,    25,    27,    28,    29,    30,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      23,    24,    25,    27,    28,    29,    30,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    23,    24,    25,    27,    28,    29,    30,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    23,    24,    25,    27,    28,    29,    30,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    23,    24,    25,    27,    28,    29,    30,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    23,    24,    25,    27,    28,    29,
      30,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    23,    24,    25,    27,
      28,    29,    30,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    23,    24,    25,
      27,    28,    29,    30,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    23,
      24,    25,    27,    28,    29,    30,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      23,    24,    25,    27,    28,    29,    30,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    23,    24,    25,    27,    28,    29,    30,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    23,    24,    25,    27,    28,    29,    30,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    23,    24,    25,    27,    28,    29,    30,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    23,    24,    25,    27,    28,    29,
      30,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    23,    24,    25,    27,
      28,    29,    30,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    23,    24,    25,
      27,    28,    29,    30,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    23,
      24,    25,    27,    28,    29,    30,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      23,    24,    25,    27,    28,    29,    30,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    23,    24,    25,    27,    28,    29,    30,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,     1,    40,    41,
       4,    -1,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,     1,    40,    41,     4,    -1,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,     1,    40,    41,     4,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,     1,    -1,    -1,     4,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    23,    24,    25,     4,    -1,     6,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,
       4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    23,
      24,    25,     4,    -1,     6,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,     4,    -1,     6,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    23,    24,    25,     4,    -1,     6,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      23,    24,    25,     4,    -1,     6,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    -1,    -1,     4,    -1,
       6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,     4,    -1,     6,     8,    -1,    -1,    -1,    12,
      13,    13,    15,    16,    17,    18,    19,     4,    -1,     6,
      -1,    23,    24,    25,    27,    28,    29,    30,    -1,    31,
      32,    33,    -1,    35,    36,    37,    23,    24,    25,     4,
      -1,     6,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,     4,    -1,
       6,     8,    -1,    -1,    -1,    12,    13,    13,    15,    16,
      17,    18,    19,     4,    -1,     6,    -1,    23,    24,    25,
      27,    28,    29,    30,    -1,    31,    32,    33,    -1,    35,
      36,    37,    23,    24,    25,     4,    -1,     6,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,
       4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    23,
      24,    25,     4,    -1,     6,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,     4,    -1,     6,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    23,    24,    25,     4,    -1,     6,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,     4,    -1,     6,     8,    -1,
      -1,    -1,    12,    13,    13,    15,    16,    17,    18,    19,
       4,    -1,     6,    -1,    23,    24,    25,    27,    28,    29,
      30,    -1,    31,    32,    33,    -1,    35,    36,    37,    23,
      24,    25,     4,    -1,     6,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,     4,    -1,     6,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    23,    24,    25,     4,    -1,     6,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      23,    24,    25,     4,    -1,     6,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    -1,    -1,    -1,     4,    -1,
       6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    23,    24,    25,
       4,    -1,     6,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    23,    24,    25,     4,    -1,     6,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    -1,
      -1,    -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    23,    24,    25,     4,    -1,     6,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,     4,
      -1,     6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    23,    24,
      25,     4,    -1,     6,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,     6,    35,    36,    37,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     6,    -1,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     6,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,     6,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,     6,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,     8,    -1,    -1,    11,    12,
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
      30,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
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
       7,    27,    28,    29,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,     8,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
       7,    27,    28,    29,    30,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    -1,     7,    -1,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,     7,    -1,    27,    28,
      29,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    -1,     7,    -1,    27,    28,    29,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    -1,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,
       7,    -1,    27,    28,    29,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    -1,     7,    -1,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,     7,    -1,    27,    28,
      29,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    -1,     7,    -1,    27,    28,    29,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    -1,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,
       7,    -1,    27,    28,    29,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    -1,     7,    -1,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,     7,    -1,    27,    28,
      29,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    -1,     7,    -1,    27,    28,    29,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    -1,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,
       7,    -1,    27,    28,    29,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    -1,     7,    -1,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,     7,    -1,    27,    28,
      29,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    -1,     7,    -1,    27,    28,    29,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    -1,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,
       7,    -1,    27,    28,    29,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    -1,     7,    -1,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,     8,    27,    28,
      29,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    43,    44,    45,    46,    48,    50,     4,     5,
       0,    45,     6,     7,     4,     1,     3,    30,    49,     7,
      30,     4,     5,    10,    53,    30,    53,     8,     4,     1,
       3,     4,     6,     7,     9,    23,    24,    25,    31,    32,
      33,    35,    36,    37,    38,    40,    41,    46,    47,    52,
      53,    54,    55,    56,    58,    59,    60,    61,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    53,     3,     8,
       9,    39,    57,     4,     5,     6,    26,     1,     4,    63,
      70,    70,    70,     6,     6,     6,    58,    54,    54,    54,
       6,     6,     7,    29,    28,    27,    15,    16,    17,    18,
      19,    11,    12,    13,    20,    21,    14,    22,     4,     5,
       3,     1,    52,     4,    30,    63,    72,    13,    63,    30,
      30,    34,    63,     4,    34,    63,     1,    63,     1,    47,
      62,    63,    65,    66,    67,    68,    68,    68,    68,    68,
      67,    69,    69,    68,    67,    70,    70,     8,    51,     4,
       4,     5,     8,    30,     4,    31,    32,    30,    30,    30,
      30,    30,    30,    30,     7,     8,    30,     7,     3,    51,
      51,     4,    63,    52,    47,    52,    52,     1,    62,     4,
       5,    51,    57,    30,     7,    51,     4,    52,    52,     1,
      62,    51,    30,    30,    52,    52,    10,     6,    23,    24,
      25,    31,    32,    33,    35,    36,    37,    64,    65,    66,
      67,    68,    69,    70,    71,     4,     7,     4,     6,    23,
      24,    25,    31,    32,    33,    35,    36,    37,    64,    65,
      66,    67,    68,    69,    70,    71,     4,     6,    23,    24,
      25,    31,    32,    33,    35,    36,    37,    64,    65,    66,
      67,    68,    69,    70,    71,     6,     4,     4,     6,    23,
      24,    25,    31,    32,    33,    35,    36,    37,    69,    70,
      71,     7,    12,    13,     1,     7,    10,    41,    53,    55,
      56,    58,    59,    60,    61,    63,     4,    47,    63,     7,
       8,     1,     9,    46,    47,    52,    54,     1,    63,    70,
      70,    70,     6,     6,     6,    29,    28,    27,    15,    16,
      17,    18,    19,    11,    12,    13,    20,    21,    14,    22,
       6,     1,    63,    70,    70,    70,     6,     6,     6,    29,
      28,    27,    15,    16,    17,    18,    19,    11,    12,    13,
      20,    21,    14,    22,     6,     1,    63,    70,    70,    70,
       6,     6,     6,    29,    28,    27,    15,    16,    17,    18,
      19,    11,    12,    13,    20,    21,    14,    22,    30,    72,
      26,     6,     1,    63,    70,    70,    70,     6,     6,     6,
      14,    22,    69,    69,    57,     1,     9,    46,    47,    52,
      54,    58,     6,     6,     7,    26,     9,    54,    54,    54,
      30,    30,    34,    63,     4,    34,    63,    65,    66,    67,
       4,     6,    23,    24,    25,    31,    32,    33,    35,    36,
      37,    68,    69,    70,    71,    68,    68,    68,    68,    67,
      69,    69,    68,    67,    70,    70,    30,    72,    30,    30,
      34,    63,     4,    34,    63,    65,    66,    67,     4,     6,
      23,    24,    25,    31,    32,    33,    35,    36,    37,    68,
      69,    70,    71,    68,    68,    68,    68,    67,    69,    69,
      68,    67,    70,    70,    30,    72,    30,    30,    34,    63,
       4,    34,    63,    65,    66,    67,     4,     6,    23,    24,
      25,    31,    32,    33,    35,    36,    37,    68,    69,    70,
      71,    68,    68,    68,    68,    67,    69,    69,    68,    67,
      70,    70,    30,    13,    63,    30,    72,    30,    30,    34,
      63,     4,    34,    63,    70,    70,    52,     9,    54,    54,
      54,     1,    63,     1,    62,    13,    63,    30,    30,    30,
      30,    30,     6,     1,    63,    70,    70,    70,     6,     6,
       6,    12,    13,    14,    22,    30,    30,    30,    30,    30,
      30,     6,     1,    63,    70,    70,    70,     6,     6,     6,
      12,    13,    14,    22,    30,    30,    30,    30,    30,    30,
       6,     1,    63,    70,    70,    70,     6,     6,     6,    12,
      13,    14,    22,     4,    31,    32,    30,    30,    30,    30,
      30,    30,    30,    30,    30,     7,     4,    31,    32,    30,
      72,    30,    30,    34,    63,     4,    34,    63,    69,    69,
      70,    70,    30,    72,    30,    30,    34,    63,     4,    34,
      63,    69,    69,    70,    70,    30,    72,    30,    30,    34,
      63,     4,    34,    63,    69,    69,    70,    70,    52,     4,
      47,    52,    52,     1,    62,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    26,    57,    30,     7,     4,     6,    13,
      23,    24,    25,    31,    32,    33,    35,    36,    37,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    52,    52,
       1,    62,     6,     1,    63,     4,    31,    32,    70,    70,
      70,     6,     6,     6,    29,    28,    27,    15,    16,    17,
      18,    19,    11,    12,    13,    20,    21,    14,    22,    30,
      30,    30,    72,    30,    30,    34,    63,     4,    34,    63,
      65,    66,    67,     4,     6,    23,    24,    25,    31,    32,
      33,    35,    36,    37,    68,    69,    70,    71,    68,    68,
      68,    68,    67,    69,    69,    68,    67,    70,    70,    52,
      52,    30,    30,    30,    30,    30,    30,     6,     1,    63,
      70,    70,    70,     6,     6,     6,    12,    13,    14,    22,
      30,    72,    30,    30,    34,    63,     4,    34,    63,    69,
      69,    70,    70,    30,    30,    30,    30,    30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    47,
      47,    47,    47,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    50,    50,    51,    51,    51,    52,    52,    52,
      52,    52,    53,    54,    54,    54,    54,    54,    55,    55,
      55,    55,    55,    56,    57,    58,    58,    59,    60,    60,
      60,    60,    61,    62,    62,    62,    62,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    69,    69,    69,    70,
      70,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     4,     3,
       4,     4,     4,     5,     4,     5,     2,     6,     3,     8,
       7,     7,     2,     3,     0,     4,     5,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     2,     5,     5,
       7,     5,     3,     1,     1,     1,     2,     2,     9,     7,
       5,     9,     1,     1,     1,     2,     2,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       2,     2,     2,     1,     1,     1,     3,     3,     4,     3,
       4,     4,     4,     4,     4,     1,     1,     3
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
#line 63 "src/parser.y"
                  {;}
#line 4481 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 67 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root, -1, false, "-");
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4490 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 71 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root, -1, false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 4500 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 79 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 4508 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 82 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 4516 "src/parser.c"
    break;

  case 7: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 88 "src/parser.y"
                                     {
			char str[2*MAX_BUFFER_SIZE];
			if(!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			sprintf(str, "%s %s (scope %u)", (yyvsp[-2].string), (yyvsp[-1].string), get_scope_symbol(s_table, (yyvsp[-1].string), scope, true));

			(yyval.state) = new_node(str, root, get_scope_symbol(s_table, (yyvsp[-1].string), scope, true), false, (yyvsp[-2].string));
		}
#line 4533 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 101 "src/parser.y"
                                          {
			char str[2*MAX_BUFFER_SIZE];
			sprintf(str, "%s LIST ", (yyvsp[-3].string));
			
			if(!add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			char node_str[2*MAX_BUFFER_SIZE];
			sprintf(node_str,"%s LIST %s (scope %u)", (yyvsp[-3].string), (yyvsp[-1].string), get_scope_symbol(s_table, (yyvsp[-1].string), scope, true));
			
			(yyval.state) = new_node(node_str, root, get_scope_symbol(s_table, (yyvsp[-1].string), scope, true), false, str);
		}
#line 4553 "src/parser.c"
    break;

  case 9: /* Definition: IDENTIFIER ATT Expression  */
#line 119 "src/parser.y"
                                          {
			char* exp_type = get_type_var((yyvsp[-2].string), s_table, scope, true);

			(yyval.state) = new_node("=", root, get_scope_symbol(s_table, (yyvsp[-2].string), scope, true), false, exp_type);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-2].string));

			add_child((yyval.state), new_node(str, root, get_scope_symbol(s_table, (yyvsp[-2].string), scope, true), true, exp_type));
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
#line 4588 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT MIN NUM_CONST_FLOAT  */
#line 150 "src/parser.y"
                                                   {
			char* exp_type = get_type_var((yyvsp[-3].string), s_table, scope, true);

			(yyval.state) = new_node("=", root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), false, exp_type);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));

			add_child((yyval.state), new_node(str, root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), true, exp_type));
			sprintf(str, "-%lf", (yyvsp[0].num_float));

			add_child((yyval.state), new_node(str, root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), false, "float"));

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
#line 4625 "src/parser.c"
    break;

  case 11: /* Definition: IDENTIFIER ATT MIN NUM_CONST_INT  */
#line 183 "src/parser.y"
                                                {
			char* exp_type = get_type_var((yyvsp[-3].string), s_table, scope, true);

			(yyval.state) = new_node("=", root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), false, exp_type);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));

			add_child((yyval.state), new_node(str, root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), true, exp_type));
			sprintf(str, "-%ld", (yyvsp[0].num_int));

			add_child((yyval.state), new_node(str, root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), false, "int"));

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
#line 4662 "src/parser.c"
    break;

  case 12: /* Definition: IDENTIFIER ATT MIN IDENTIFIER  */
#line 216 "src/parser.y"
                                              {
			char* exp_type = get_type_var((yyvsp[-3].string), s_table, scope, true);
			(yyval.state) = new_node("=", root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), false, exp_type);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));

			add_child((yyval.state), new_node(str, root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), true, exp_type));

			exp_type = get_type_var((yyvsp[0].string), s_table, scope, true);
			add_child((yyval.state), new_node("-", root, get_scope_symbol(s_table, (yyvsp[0].string), scope, true), false, exp_type));

			add_child((yyval.state)->children[1], new_node((yyvsp[0].string), root, get_scope_symbol(s_table, (yyvsp[0].string), scope, true), true, exp_type));

			if (!variable_was_declared(s_table, scope, (yyvsp[-3].string))) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", (yyvsp[-3].string), (yylsp[-3]).first_line, (yylsp[-3]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

			if (!variable_was_declared(s_table, scope, (yyvsp[0].string))) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", (yyvsp[0].string), (yylsp[0]).first_line, (yylsp[0]).first_column);

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
#line 4708 "src/parser.c"
    break;

  case 13: /* FunctionDefinition: FunctionHead LP FunctionArgs RP CompStatement  */
#line 260 "src/parser.y"
                                                 {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false, "-");

		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));

		decrease_depth_scope(scope);
	}
#line 4722 "src/parser.c"
    break;

  case 14: /* FunctionDefinition: FunctionHead LP RP CompStatement  */
#line 270 "src/parser.y"
                                        {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false, "-");
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

		push_arg_to_arglist(s_table, "-", last_f, true);
	}
#line 4735 "src/parser.c"
    break;

  case 15: /* FunctionDefinition: FunctionHead LP error RP CompStatement  */
#line 279 "src/parser.y"
                                               {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false, "-");
		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);
	}
#line 4746 "src/parser.c"
    break;

  case 16: /* FunctionArgs: TYPE IDENTIFIER  */
#line 288 "src/parser.y"
                        {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false, "-");
		char str[MAX_BUFFER_SIZE];
		sprintf(str, "%s %s", (yyvsp[-1].string), (yyvsp[0].string));

		add_child((yyval.state), new_node(str, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, (yyvsp[-1].string), last_f, true);
	}
#line 4765 "src/parser.c"
    break;

  case 17: /* FunctionArgs: TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 303 "src/parser.y"
                                                      {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char str[MAX_BUFFER_SIZE];
		sprintf(str, "%s %s", (yyvsp[-5].string), (yyvsp[-4].string));
		add_child((yyval.state), new_node(str, root, scope->stack[0], false, "-"));

		sprintf(str, "%s %s", (yyvsp[-2].string), (yyvsp[-1].string));
		add_child((yyval.state), new_node(str, root, scope->stack[0], false, "-"));
		
		add_child((yyval.state), (yyvsp[0].state));


		if(!add_row_symbol_table(s_table, (yyvsp[-4].string), (yyvsp[-5].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-4].string));
			first_pass_sematic_error_found = true;
		}


		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f, false);
		push_arg_to_arglist(s_table, (yyvsp[-5].string), last_f, false);

	}
#line 4799 "src/parser.c"
    break;

  case 18: /* FunctionArgs: TYPE LIST IDENTIFIER  */
#line 333 "src/parser.y"
                             {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");

		char str_list[MAX_BUFFER_SIZE*2];
		sprintf(str_list, "%s LIST %s", (yyvsp[-2].string), (yyvsp[0].string));

		add_child((yyval.state), new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), str, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, str, last_f, true);	
	}
#line 4824 "src/parser.c"
    break;

  case 19: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 354 "src/parser.y"
                                                                {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, (yyvsp[-7].string));
		strcat(arg_1," LIST ");

		char str_list[MAX_BUFFER_SIZE*2];
		sprintf(str_list, "%s LIST %s", (yyvsp[-7].string), (yyvsp[-5].string));

		add_child((yyval.state), new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, (yyvsp[-5].string), arg_1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].string));
			first_pass_sematic_error_found = true;
		}


		char arg_2[MAX_BUFFER_SIZE*2];
		strcpy(arg_2, (yyvsp[-3].string));
		strcat(arg_2," LIST ");

		sprintf(str_list, "%s LIST %s", (yyvsp[-3].string), (yyvsp[-1].string));

		add_child((yyval.state), new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), arg_2, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}

		add_child((yyval.state), (yyvsp[0].state));

		push_arg_to_arglist(s_table, arg_2, last_f, false);
		push_arg_to_arglist(s_table, arg_1, last_f, false);

	}
#line 4868 "src/parser.c"
    break;

  case 20: /* FunctionArgs: TYPE IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 394 "src/parser.y"
                                                           {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char str[MAX_BUFFER_SIZE];
		sprintf(str, "%s %s", (yyvsp[-6].string), (yyvsp[-5].string));

		add_child((yyval.state), new_node(str, root, scope->stack[0], false, "-"));
		if(!add_row_symbol_table(s_table, (yyvsp[-5].string), (yyvsp[-6].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, (yyvsp[-6].string), last_f, false);

		char arg_2[MAX_BUFFER_SIZE];
		strcpy(arg_2, (yyvsp[-3].string));
		strcat(arg_2," LIST ");

		char str_list[MAX_BUFFER_SIZE*2];
		sprintf(str_list, "%s LIST %s", (yyvsp[-3].string), (yyvsp[-1].string));

		add_child((yyval.state), new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), arg_2, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}

		add_child((yyval.state), (yyvsp[0].state));

		push_arg_to_arglist(s_table, arg_2, last_f, false);
	}
#line 4907 "src/parser.c"
    break;

  case 21: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 429 "src/parser.y"
                                                           {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, (yyvsp[-6].string));
		strcat(arg_1," LIST ");

		char str_list[MAX_BUFFER_SIZE*2];
		sprintf(str_list, "%s LIST %s", (yyvsp[-6].string), (yyvsp[-4].string));

		add_child((yyval.state), new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, (yyvsp[-4].string), arg_1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-4].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_1, last_f, false);

		char str[MAX_BUFFER_SIZE];
		sprintf(str, "%s %s", (yyvsp[-6].string), (yyvsp[-5].string));

		add_child((yyval.state), new_node(str, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}

		add_child((yyval.state), (yyvsp[0].state));

		push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f, false);
	}
#line 4947 "src/parser.c"
    break;

  case 22: /* FunctionHead: TYPE IDENTIFIER  */
#line 467 "src/parser.y"
                        {
		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[0].string));
		strcat(str, "()");

		(yyval.state) = new_node(str, root, scope->stack[0], false, (yyvsp[-1].string));

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, false))
		{
			printf("\033[91mSemantic error at line %d, column %d: Function %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);
	}
#line 4969 "src/parser.c"
    break;

  case 23: /* FunctionHead: TYPE LIST IDENTIFIER  */
#line 485 "src/parser.y"
                             {
		char f_name[MAX_BUFFER_SIZE];
		strcpy(f_name, (yyvsp[0].string));
		strcat(f_name, "()");


		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");

		(yyval.state) = new_node(f_name, root, scope->stack[0], false, str);

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), str, scope, false))
		{
			printf("\033[91mSemantic error at line %d, column %d: Function %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, f_name);
			first_pass_sematic_error_found = true;
		}

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);
	}
#line 4996 "src/parser.c"
    break;

  case 24: /* ParamList: %empty  */
#line 510 "src/parser.y"
             {
			(yyval.state) = NULL;
		}
#line 5004 "src/parser.c"
    break;

  case 25: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 514 "src/parser.y"
                                              {
			(yyval.state) = new_node("ParamList", root, scope->stack[0], false, "-");

			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%s %s", (yyvsp[-2].string), (yyvsp[-1].string));

			add_child((yyval.state), new_node(str, root, scope->stack[0], false, "-"));
			add_child((yyval.state), (yyvsp[0].state));

			if (!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f, true);
		}
#line 5026 "src/parser.c"
    break;

  case 26: /* ParamList: COM TYPE LIST IDENTIFIER ParamList  */
#line 532 "src/parser.y"
                                                   {
			(yyval.state) = new_node("ParamList", root, scope->stack[0], false, "-");

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");

			char str_list[MAX_BUFFER_SIZE*2];
			sprintf(str_list, "%s LIST %s", (yyvsp[-3].string), (yyvsp[-1].string));

			add_child((yyval.state), new_node(str_list, root, scope->stack[0], false, "-"));

			add_child((yyval.state), (yyvsp[0].state));


			if(!add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			push_arg_to_arglist(s_table, str, last_f, true);
		}
#line 5054 "src/parser.c"
    break;

  case 27: /* Statement: CompStatement  */
#line 560 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 5060 "src/parser.c"
    break;

  case 28: /* Statement: JmpStatement  */
#line 561 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 5066 "src/parser.c"
    break;

  case 29: /* Statement: SelStatement  */
#line 562 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 5072 "src/parser.c"
    break;

  case 30: /* Statement: ItStatement  */
#line 563 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 5078 "src/parser.c"
    break;

  case 31: /* Statement: ExpStatement  */
#line 564 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 5084 "src/parser.c"
    break;

  case 32: /* CompStatement: LCB StatementExp  */
#line 569 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 5092 "src/parser.c"
    break;

  case 33: /* StatementExp: RCB  */
#line 575 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 5098 "src/parser.c"
    break;

  case 34: /* StatementExp: Declaration StatementExp  */
#line 576 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5108 "src/parser.c"
    break;

  case 35: /* StatementExp: Definition StatementExp  */
#line 581 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5118 "src/parser.c"
    break;

  case 36: /* StatementExp: Statement StatementExp  */
#line 586 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5128 "src/parser.c"
    break;

  case 37: /* StatementExp: error RCB  */
#line 591 "src/parser.y"
                          {yyerrok; (yyval.state) = NULL;}
#line 5134 "src/parser.c"
    break;

  case 38: /* SelStatement: IfHead LP Expression RP Statement  */
#line 596 "src/parser.y"
                                                  {
			(yyval.state) = new_node("IF", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 5145 "src/parser.c"
    break;

  case 39: /* SelStatement: IfHead LP Expression RP Definition  */
#line 602 "src/parser.y"
                                                     {
			(yyval.state) = new_node("IF", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 5156 "src/parser.c"
    break;

  case 40: /* SelStatement: IfHead LP Expression RP Statement ElseHead Statement  */
#line 609 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("IF_ELSE", root, scope->stack[0], false, "-");

			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
		}
#line 5170 "src/parser.c"
    break;

  case 41: /* SelStatement: IfHead LP error RP Statement  */
#line 620 "src/parser.y"
                                         {
		(yyval.state) = new_node("IF", root, scope->stack[0], false, "-");
		add_child((yyval.state), (yyvsp[0].state));
	}
#line 5179 "src/parser.c"
    break;

  case 42: /* SelStatement: error ElseHead Statement  */
#line 624 "src/parser.y"
                                     {(yyval.state)=NULL;decrease_depth_scope(scope);yyerrok;}
#line 5185 "src/parser.c"
    break;

  case 43: /* IfHead: IF  */
#line 627 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 5193 "src/parser.c"
    break;

  case 44: /* ElseHead: ELSE  */
#line 633 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 5202 "src/parser.c"
    break;

  case 45: /* ExpStatement: SEMI  */
#line 640 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 5208 "src/parser.c"
    break;

  case 46: /* ExpStatement: Expression SEMI  */
#line 641 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 5216 "src/parser.c"
    break;

  case 47: /* JmpStatement: RET ExpStatement  */
#line 647 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root, scope->stack[0], false, (yyvsp[0].state)->type);
			add_child((yyval.state), (yyvsp[0].state));

			if (!check_type_subtree((yyval.state), s_table, scope))
			{
				printf("\033[91mSemantic error at line %d, column %d: Incompatible return type.\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column);
				first_pass_sematic_error_found = true;
			}

		}
#line 5232 "src/parser.c"
    break;

  case 48: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 661 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 5245 "src/parser.c"
    break;

  case 49: /* ItStatement: ForHead LP ExpAtt SEMI error RP Statement  */
#line 670 "src/parser.y"
                                                          {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
			yyerrok;
		}
#line 5258 "src/parser.c"
    break;

  case 50: /* ItStatement: ForHead LP error RP Statement  */
#line 679 "src/parser.y"
                                              {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[0].state));
			
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 5270 "src/parser.c"
    break;

  case 51: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI error RP Statement  */
#line 687 "src/parser.y"
                                                                      {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 5283 "src/parser.c"
    break;

  case 52: /* ForHead: FOR  */
#line 698 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 5291 "src/parser.c"
    break;

  case 53: /* ExpAtt: Expression  */
#line 704 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 5299 "src/parser.c"
    break;

  case 54: /* ExpAtt: Definition  */
#line 708 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 5307 "src/parser.c"
    break;

  case 55: /* ExpAtt: error SEMI  */
#line 712 "src/parser.y"
                   {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 5316 "src/parser.c"
    break;

  case 56: /* ExpAtt: error COM  */
#line 717 "src/parser.y"
                  {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 5325 "src/parser.c"
    break;

  case 57: /* Expression: LogicalOrExpression  */
#line 725 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 5331 "src/parser.c"
    break;

  case 58: /* LogicalOrExpression: LogicalAndExpression  */
#line 729 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 5337 "src/parser.c"
    break;

  case 59: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 730 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root, scope->stack[0], false, "int");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 5348 "src/parser.c"
    break;

  case 60: /* LogicalAndExpression: EqualityExpression  */
#line 739 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 5354 "src/parser.c"
    break;

  case 61: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 740 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root, scope->stack[0], false, "int");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5364 "src/parser.c"
    break;

  case 62: /* EqualityExpression: RelationalExpression  */
#line 748 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 5370 "src/parser.c"
    break;

  case 63: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 749 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root, scope->stack[0], false, "int");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5380 "src/parser.c"
    break;

  case 64: /* RelationalExpression: AdditiveExpression  */
#line 758 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 5386 "src/parser.c"
    break;

  case 65: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 759 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 5396 "src/parser.c"
    break;

  case 66: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 764 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5406 "src/parser.c"
    break;

  case 67: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 769 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5416 "src/parser.c"
    break;

  case 68: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 774 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5426 "src/parser.c"
    break;

  case 69: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 779 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5436 "src/parser.c"
    break;

  case 70: /* RelationalExpression: AdditiveExpression MAP AdditiveExpression  */
#line 784 "src/parser.y"
                                                      {
				(yyval.state) = new_node(">>", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5446 "src/parser.c"
    break;

  case 71: /* RelationalExpression: AdditiveExpression FIL RelationalExpression  */
#line 789 "src/parser.y"
                                                        {
				(yyval.state) = new_node("<<", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5456 "src/parser.c"
    break;

  case 72: /* RelationalExpression: AdditiveExpression TWD RelationalExpression  */
#line 794 "src/parser.y"
                                                      {
			(yyval.state) = new_node(":", root, scope->stack[0], false, "float LIST ");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 5466 "src/parser.c"
    break;

  case 73: /* AdditiveExpression: MultiplicativeExpression  */
#line 802 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 5472 "src/parser.c"
    break;

  case 74: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 803 "src/parser.y"
                                                                 {
			if (equal_to((yyvsp[-2].state)->type, "float") || equal_to((yyvsp[0].state)->type, "float")) {
				(yyval.state) = new_node("+", root, scope->stack[0], false, "float");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("+", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
			}
	}
#line 5488 "src/parser.c"
    break;

  case 75: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 814 "src/parser.y"
                                                        {
			if (equal_to((yyvsp[-2].state)->type, "float") || equal_to((yyvsp[0].state)->type, "float")) {
				(yyval.state) = new_node("-", root, scope->stack[0], false, "float");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("-", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
			}
	}
#line 5504 "src/parser.c"
    break;

  case 76: /* MultiplicativeExpression: UnaryExpression  */
#line 828 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 5510 "src/parser.c"
    break;

  case 77: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 829 "src/parser.y"
                                                             {
			if (equal_to((yyvsp[-2].state)->type, "float") || equal_to((yyvsp[0].state)->type, "float")) {
				(yyval.state) = new_node("*", root, scope->stack[0], false, "float");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("*", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
			}
	}
#line 5526 "src/parser.c"
    break;

  case 78: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 840 "src/parser.y"
                                                             {
			if (equal_to((yyvsp[-2].state)->type, "int")) {
				(yyval.state) = new_node("/", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("/", root, scope->stack[0], false, "float");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
			}
	}
#line 5542 "src/parser.c"
    break;

  case 79: /* UnaryExpression: PrimaryExpression  */
#line 854 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 5548 "src/parser.c"
    break;

  case 80: /* UnaryExpression: TNR UnaryExpression  */
#line 855 "src/parser.y"
                                    {
			if (equal_to((yyvsp[0].state)->type, "float LIST ")) {
				(yyval.state) = new_node("!", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("!", root, scope->stack[0], false, "int LIST ");
				add_child((yyval.state), (yyvsp[0].state));
			}
		}
#line 5562 "src/parser.c"
    break;

  case 81: /* UnaryExpression: HD UnaryExpression  */
#line 864 "src/parser.y"
                                   {
			if (equal_to((yyvsp[0].state)->type, "float LIST ")) {
				(yyval.state) = new_node("?", root, scope->stack[0], false, "float");
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("?", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[0].state));
			}
		}
#line 5576 "src/parser.c"
    break;

  case 82: /* UnaryExpression: TR UnaryExpression  */
#line 873 "src/parser.y"
                                   {
			if (equal_to((yyvsp[0].state)->type, "float LIST ")) {
				(yyval.state) = new_node("%", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("%", root, scope->stack[0], false, "int LIST ");
				add_child((yyval.state), (yyvsp[0].state));
			}
	}
#line 5590 "src/parser.c"
    break;

  case 83: /* PrimaryExpression: IDENTIFIER  */
#line 884 "src/parser.y"
                           {
			char* exp_type = get_type_var((yyvsp[0].string), s_table, scope, true);

			(yyval.state) = new_node((yyvsp[0].string), root, get_scope_symbol(s_table, (yyvsp[0].string), scope, true), true, exp_type);
			if (!variable_was_declared(s_table, scope, (yyvsp[0].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", (yyvsp[0].string), (yylsp[0]).first_line, (yylsp[0]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
#line 5609 "src/parser.c"
    break;

  case 84: /* PrimaryExpression: NUM_CONST_INT  */
#line 899 "src/parser.y"
                          {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%ld", (yyvsp[0].num_int));
			(yyval.state) = new_node(str, root, scope->stack[0], false, "int");
		}
#line 5619 "src/parser.c"
    break;

  case 85: /* PrimaryExpression: NUM_CONST_FLOAT  */
#line 904 "src/parser.y"
                            {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", (yyvsp[0].num_float));
			(yyval.state) = new_node(str, root, scope->stack[0], false, "float");
		}
#line 5629 "src/parser.c"
    break;

  case 86: /* PrimaryExpression: LP Expression RP  */
#line 910 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root, scope->stack[0], false, (yyvsp[-1].state)->type); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 5638 "src/parser.c"
    break;

  case 87: /* PrimaryExpression: LP error RP  */
#line 915 "src/parser.y"
                            {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 5647 "src/parser.c"
    break;

  case 88: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 920 "src/parser.y"
                                        {
			char* exp_type = get_type_var((yyvsp[-3].string), s_table, scope, false);

			(yyval.state) = new_node("FunctionCall", root, scope->stack[0], false, exp_type);
			add_child((yyval.state), new_node((yyvsp[-3].string), root, scope->stack[0], true, exp_type));
			add_child((yyval.state), (yyvsp[-1].state));

			if (!variable_was_declared(s_table, scope, (yyvsp[-3].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Function %s was not declared, at ln %d col %d.", (yyvsp[-3].string), (yylsp[-3]).first_line, (yylsp[-3]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;

								
				for (size_t i = 0; i < args_count; i++) {
						free(args_last_f[i]);
					}

				free(args_last_f);
			} else {
				uint16_t n_args = 0;

				char** args = get_function_signature((yyvsp[-3].string), s_table, scope, &n_args, true);

				if (!args) {
					first_pass_sematic_error_found = true;
					char err[MAX_BUFFER_SIZE];
					sprintf(err, "Invalid function call, %s is not a function, at ln %d col %d.", (yyvsp[-3].string), (yylsp[-3]).first_line, (yylsp[-3]).first_column);

					print_error(err);
				} else {
					bool compatible_args = true;
					int i = 0;
					int j = args_count-1;
					for (; j >= 0 && i < n_args; i++, j--) {
						if (!check_type_with_casting(args[i], args_last_f[j])) {
							compatible_args = false;
							break;
						}
					}

					if (!compatible_args || i != n_args) {
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
			}

		}
#line 5727 "src/parser.c"
    break;

  case 89: /* PrimaryExpression: IDENTIFIER LP RP  */
#line 995 "src/parser.y"
                                 {
			char* exp_type = get_type_var((yyvsp[-2].string), s_table, scope, false);

			(yyval.state) = new_node("FunctionCall", root, scope->stack[0], false, exp_type);
			add_child((yyval.state), new_node((yyvsp[-2].string), root, scope->stack[0], true, exp_type));
			add_child((yyval.state), new_node("", root, scope->stack[0], false, "-"));

			if (!variable_was_declared(s_table, scope, (yyvsp[-2].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Function %s was not declared, at ln %d col %d.", (yyvsp[-2].string), (yylsp[-2]).first_line, (yylsp[-2]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

	        uint16_t n_args = 0;

			if (!check_function_arg("-", (yyvsp[-2].string), 0, s_table, scope, &n_args)) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE*2];

		        char** args = get_function_signature((yyvsp[-2].string), s_table, scope, &n_args, true);

				if(!args) {
					sprintf(err, "Invalid function call, %s is not a function, at ln %d col %d.", (yyvsp[-2].string), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
					print_error(err);
				} else {
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
	}
#line 5780 "src/parser.c"
    break;

  case 90: /* PrimaryExpression: WRITE LP STR RP  */
#line 1043 "src/parser.y"
                                {
			(yyval.state) = new_node("write_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], true, "String"));

		}
#line 5790 "src/parser.c"
    break;

  case 91: /* PrimaryExpression: WRITE LP Expression RP  */
#line 1048 "src/parser.y"
                                   {
			(yyval.state) = new_node("write_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 5799 "src/parser.c"
    break;

  case 92: /* PrimaryExpression: READ LP IDENTIFIER RP  */
#line 1052 "src/parser.y"
                                      {
			char* exp_type = get_type_var((yyvsp[-1].string), s_table, scope, true);

			(yyval.state) = new_node("read_call", root, scope->stack[0], false, exp_type);
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], true, exp_type));
		}
#line 5810 "src/parser.c"
    break;

  case 93: /* PrimaryExpression: WRITE_LN LP STR RP  */
#line 1058 "src/parser.y"
                                    {
			(yyval.state) = new_node("write_ln_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], false, "String"));
		}
#line 5819 "src/parser.c"
    break;

  case 94: /* PrimaryExpression: WRITE_LN LP Expression RP  */
#line 1062 "src/parser.y"
                                           {
			(yyval.state) = new_node("write_ln_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 5828 "src/parser.c"
    break;

  case 95: /* PrimaryExpression: NIL  */
#line 1067 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root, scope->stack[0], false, "float LIST ");}
#line 5834 "src/parser.c"
    break;

  case 96: /* Params: Expression  */
#line 1071 "src/parser.y"
                   {
		(yyval.state) = new_node("Args", root, scope->stack[0], false, (yyvsp[0].state)->type);
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 5844 "src/parser.c"
    break;

  case 97: /* Params: Params COM Expression  */
#line 1077 "src/parser.y"
                              {
		(yyval.state) = new_node("Args", root, scope->stack[0], false, (yyvsp[0].state)->type);
		add_child((yyval.state), (yyvsp[-2].state)); 
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 5855 "src/parser.c"
    break;


#line 5859 "src/parser.c"

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

#line 1085 "src/parser.y"

int yydebug = 1;

syntax_tree* parse(char* filename) {
    root = new_syntax_tree();
	s_table = new_symbol_table();
	scope = new_scope_stack();
	last_f = 0;
	first_pass_sematic_error_found = false;
	syntax_error_found = false;

	args_count = 0;

	//push_default_functions(s_table, scope, &last_f);

	int failure = yyparse();
	
	if(!analyze_semantics(s_table, root) && !first_pass_sematic_error_found) {
		printf("\n\033[92mNo semantic errors were found.\033[0m\n");
	}

	show_table(s_table);

	char* line = (char*) malloc(MAX_BUFFER_SIZE);
	line[0] = (char) 0;
	show_tree(root->element_list[root->tree_size-1], line, true);


	char option;
	if (failure || syntax_error_found || first_pass_sematic_error_found) {
		fprintf(stderr, "\033[91m\nSome errors were found. Generated TAC may be invalid.\033[0m\n");
		fprintf(stderr, "\033[91mDo you want to generate TAC anyway? (y/N)\033[0m\n");
		scanf("%c", &option);
		if (option == 'y' || option == 'Y') {
			output_tac(s_table, root, filename);
		}
	} else {
		output_tac(s_table, root, filename);
	}

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
	syntax_error_found = true;
	fprintf (stderr, "\033[91m%s, at ln %d col %d\033[0m\n", str, yylloc.first_line, yylloc.first_column);
 }
