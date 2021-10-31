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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  567

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
       0,    58,    58,    62,    66,    74,    77,    83,    95,   112,
     141,   172,   213,   223,   234,   245,   264,   280,   308,   335,
     364,   383,   407,   411,   424,   445,   446,   447,   448,   449,
     454,   460,   461,   466,   471,   476,   481,   487,   493,   500,
     511,   515,   518,   524,   531,   532,   538,   552,   561,   570,
     578,   589,   595,   599,   603,   611,   615,   616,   625,   626,
     634,   635,   644,   645,   650,   655,   660,   665,   670,   675,
     683,   684,   689,   695,   703,   704,   709,   717,   718,   722,
     726,   732,   745,   751,   756,   761,   818,   859,   864,   868,
     872,   876,   881,   885,   891
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

#define YYPACT_NINF (-243)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-95)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      34,   142,    49,    65,    70,    82,    98,    23,   194,    62,
    -243,   131,    11,   158,   209,   297,    54,    80,   199,    24,
     122,  5738,   205,    54,    81,   113,    -8,   328,  7522,   206,
    5778,   253,  7373,  7373,  7373,  8100,  8119,   127,   132,   138,
     151,   153,   105,  5738,  5738,  5738,  5818,   290,  5858,   176,
    5898,  5938,  5978,   182,   202,   120,    51,   191,  5019,  4659,
    8138,  8157,  8176,   291,   336,   187,   296,   144,  1468,   229,
     239,  1197,   633,   215,  7497,   217,  8195,  8214,  8233,  1506,
     245,  7045,  6018,   309,   317,   331,   520,   793,  6058,  7373,
    7373,  7373,  7373,  7373,  7373,  7373,  7373,  7373,  7373,  7373,
    7373,  7373,  7373,  7373,   157,   250,   341,   221,  6098,   257,
    8252,   181,   183,    12,  6138,  8271,  8290,   247,   265,   267,
     278,   280,   286,   327,     8,   262,   268,   319,    60,   244,
    5059,  4699,  4779,  4819,  4859,  4899,  4939,  4979,  8309,  8328,
    8347,  8366,  8385,   356,   330,   157,   157,   357,  7387,  8404,
    6178,  6218,  8423,  8442,  8461,  8480,  8499,  1468,  1808,   355,
    1468,   915,   345,   333,   334,   157,   184,  6258,  6298,  4658,
    4698,  6338,    26,   358,   157,   362,   338,  1468,  1468,  1114,
     359,   157,  6378,  6418,    27,   360,   380,  1468,  1468,  6458,
    6498,  6538,  1277,  7409,  7409,  7409,  8718,  8738,   381,   382,
     386,   323,    89,   -10,  5097,  9158,  8758,  8778,  8798,  7594,
    6578,   484,  1612,  7387,  7387,  7387,   974,  7616,   405,   406,
     407,   166,   252,    86,  1573,  8521,  7639,  7662,  7685,  2818,
    1672,  7423,  7423,  7423,  2858,  2898,   408,   410,   427,  4738,
    4538,  1235,  4418,  4018,  2938,  2978,  3018,  7081,  7546,  6618,
     221,  4778,  6658,  7095,  4818,  4858,   428,  4898,  4938,   432,
     379,  7472,   413,   416,   418,    -3,  6698,  6538,  6538,  6538,
    6738,   422,   429,  8818,  8838,  8858,  7117,   453,  7131,  7409,
    7409,  7409,  7409,  7409,  7409,  7409,  7409,  7409,  7409,  7409,
    7409,  7409,  7409,  7409,  7153,   431,   433,  7708,  7731,  7754,
    7167,   466,  7189,  7387,  7387,  7387,  7387,  7387,  7387,  7387,
    7387,  7387,  7387,  7387,  7387,  7387,  7387,  7387,  7203,   444,
     445,  3058,  3098,  3138,  7225,   481,  7239,  7423,  7423,  7423,
    7423,  7423,  7423,  7423,  7423,  7423,  7423,  7423,  7423,  7423,
    7423,  7423,  8878,   198,  7263,  6935,     4,  4978,  6658,  6658,
    6658,  5018,  5058,  1732,  1856,  5098,  7277,  6778,  6818,  6858,
    6898,  8898,  8918,   458,   479,   480,   485,   486,   307,    -2,
    5137,  9178,  9198,  9218,  9238,  9258,  9278,  9298,  8938,  8958,
    8978,  8998,  9018,  7777,   218,  7800,  7823,   492,   493,   495,
     498,   500,   259,   195,  8698,  8544,  8567,  8590,  8613,  8636,
    8659,  8682,  7846,  7869,  7892,  7915,  7938,  3178,   227,  3218,
    3258,   501,   502,   503,   507,   508,  4578,  2045,  4458,  4058,
    4098,  4138,  4178,  4218,  4258,  4298,  3298,  3338,  3378,  3418,
    3458,  9038,    17,   534,  5138,  4698,  5178,  5218,  5258,  5298,
     512,   518,    29,   542,    19,   523,  9058,  9078,  9098,  9118,
    9138,  7961,  7984,  8007,  8030,  8053,  8076,  3498,  3538,  3578,
    3618,  3658,  3698,   543,   550,  6935,  6972,  6935,  7009,   528,
     529,  5338,  7570,  5378,  4658,  4698,  5418,    32,   553,  7301,
    6935,  6935,  7023,   870,  7059,    20,  7445,  7445,  7445,  1160,
    1408,   555,   556,   557,  5458,  4618,  1909,    68,  4338,   681,
    1965,  2005,  2098,  5498,  5538,    56,   538,  7315,   539,   541,
    5578,  5618,  2138,  2178,  2218,  7337,   560,  7351,  7445,  7445,
    7445,  7445,  7445,  7445,  7445,  7445,  7445,  7445,  7445,  7445,
    7445,  7445,  7445,  6935,  6935,  2258,   236,  2298,  2338,   544,
     546,   552,   554,   559,  4498,  1004,  4378,  3738,  3778,  3818,
    3858,  3898,  3938,  3978,  2378,  2418,  2458,  2498,  2538,  5658,
    5698,  2578,  2618,  2658,  2698,  2738,  2778
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
       0,     0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -243,  -243,  -243,   569,    87,    -6,  -243,  -243,  -243,  -134,
     676,   -16,   -35,     6,    13,  -167,     2,   100,   121,   326,
    -157,   -26,  1583,  1447,  1387,  1304,  1038,   769,    91,   448,
    -242
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    43,    44,     6,    17,     7,   144,
      45,    46,    47,    48,    49,    68,    50,    51,    52,    53,
     126,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    66,   177,    75,   173,   343,   357,    63,    83,    84,
      85,   163,   164,   436,    15,   159,   150,   281,   -58,   -58,
     -58,   463,   185,   469,   510,   281,   -59,   -59,   -59,    12,
      67,   176,    24,   159,   264,    67,   159,     1,   160,   159,
     180,    16,    67,   151,    82,   111,   114,   186,   464,    10,
     470,   511,   384,   118,   -14,   121,   178,   187,   -56,   467,
     123,   127,   481,   264,    21,    -2,    14,   -57,     1,   -58,
      -3,   -58,   -58,    -3,   -58,   -58,   408,   -58,   -58,    90,
     -56,   125,    -5,   345,    64,    -5,   533,     5,    90,   -57,
       5,   -58,   -58,   -58,   -58,   520,   -58,   -58,    -6,   -58,
     -58,    -6,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   209,
      23,    29,    30,   305,   -58,   -58,   -58,   280,   -56,   -56,
     207,    65,   166,    76,    77,    78,    25,   -55,    32,    33,
      34,    -4,   260,    79,    -4,   127,    35,    36,    80,    37,
      38,    39,   254,   -16,    81,   -43,     8,     9,   -43,    89,
     -43,   -43,   168,   263,   -43,   125,   270,   -42,    -7,   -51,
     170,    -7,   227,   245,   255,   143,   272,   -43,   -43,   -43,
     207,   256,   207,   262,   -55,   -43,   -43,   207,   -43,   -43,
     -43,   -43,    86,   -43,   -43,   268,   296,   -22,    87,   -93,
     106,   148,   -94,   141,   142,   303,   -55,   443,   -58,    -8,
     -20,    13,    -8,   -59,   320,   -13,   148,    73,   -13,    88,
      74,   -93,   192,   149,   -94,   -21,    18,   351,    91,   -58,
     -58,   111,   305,   -59,   -59,   -59,   148,   260,   431,   193,
     194,   195,   358,   359,   360,   148,   210,   196,   197,   227,
     198,   199,   200,   109,   148,   115,   349,   116,   451,   119,
     364,   -59,   367,   -31,   145,   352,   -31,   457,   257,    67,
     -56,   268,   268,   268,   249,   536,   561,   -57,   111,   -53,
     207,    91,   -59,   -59,   388,   161,   391,   152,   267,   258,
     304,   -56,   -56,   207,   273,   274,   275,   304,   -57,   -57,
     -30,   -12,   111,   -30,   -12,   153,   -35,   154,   412,   -35,
     415,    19,    20,   207,   297,   298,   299,   480,   155,   -32,
     156,   478,   -32,   437,   438,   439,   157,   -33,   433,   260,
     -33,   207,   321,   322,   323,   506,   -52,   441,   127,   254,
     445,   -34,    69,    70,   -34,   280,   -57,   -57,   227,   348,
     104,   105,   349,   349,   349,   146,   147,   435,   125,   174,
     175,   255,   279,   -55,   267,   267,   267,   158,   256,   162,
     -15,   165,   -54,   -18,   -19,   179,   181,   207,   -17,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   381,   382,   227,   355,   276,   277,   -23,
     188,   207,   278,   207,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   405,   406,   227,
     -24,   300,   301,   302,   324,   207,   325,   207,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   429,   430,   326,   353,   348,   348,   348,   354,   260,
     260,   260,   127,   -53,   207,   257,   -52,   207,   -54,   254,
     254,   254,   361,   494,   260,   260,   263,   365,   509,   362,
     473,   385,   125,   386,   254,   254,   258,   435,   475,   435,
     389,   255,   255,   255,   409,   410,   262,   208,   256,   256,
     256,   111,   435,   435,   259,   413,   255,   255,   446,   540,
     294,   543,   -81,   256,   256,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   260,   260,   447,
     448,   -81,   -81,   -81,   -81,   449,   450,   254,   254,   228,
     246,   122,   452,   453,    74,   454,   192,   208,   455,   208,
     456,   458,   459,   460,   208,   435,   435,   461,   462,   255,
     255,    -9,   465,   193,   194,   195,   256,   256,   466,   468,
     -11,   196,   197,    -9,   198,   199,   200,   -10,   -11,   -10,
     482,   515,   516,   517,   541,   257,   257,   257,   534,   537,
     501,   538,    11,   207,   562,   207,   563,   512,   513,   514,
     257,   257,   564,     0,   565,     0,   258,   258,   258,   566,
       0,     0,     0,     0,     0,     0,   228,     0,   227,     0,
       0,   258,   258,     0,     0,     0,   207,     0,   207,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   557,   558,     0,     0,     0,   208,     0,     0,
       0,     0,     0,   257,   257,     0,     0,   229,     0,   230,
     208,   208,   208,   208,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,   258,   258,   231,   232,   233,     0,
     208,   228,   228,   228,   234,   235,     0,   236,   237,   238,
       0,   259,     0,     0,     0,     0,     0,     0,   208,   246,
     246,   246,   -62,     0,   -62,   -62,     0,   -62,   -62,     0,
     -62,   -62,   528,   529,   530,   228,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,   -62,
     -62,     0,   -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,   208,     0,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   228,     0,   108,     0,     0,     0,   208,     0,
     208,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,     0,     0,     0,
       0,     0,   208,     0,   208,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
       0,   259,   259,   259,   124,     0,     0,   248,   206,    29,
       0,   208,     0,     0,   208,     0,   259,   259,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,     0,
       0,     0,     0,     0,    35,    36,     0,    37,    38,    39,
       0,     0,     0,   167,   169,     0,   171,     0,     0,     0,
     226,   244,     0,     0,     0,     0,     0,     0,   206,     0,
     206,     0,     0,   182,   183,   206,     0,     0,     0,   259,
     259,     0,     0,   189,   190,     0,     0,   269,   138,   139,
     140,   -81,     0,   -81,   -81,     0,   507,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
       0,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,   172,   226,     0,   248,
       0,    29,     0,     0,     0,     0,     0,   502,   350,     0,
     208,     0,   208,     0,   502,   502,   502,     0,    32,    33,
      34,     0,     0,   269,   269,   269,    35,    36,   206,    37,
      38,    39,     0,     0,     0,   228,     0,     0,     0,     0,
       0,   206,     0,   208,     0,   208,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   206,   -82,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   206,
       0,   -82,   -82,   -82,   -82,   -59,     0,   -59,   -59,     0,
     -59,   -59,     0,   -59,   -59,     0,   226,     0,     0,     0,
       0,   434,     0,     0,   350,   350,   350,   -59,   -59,   -59,
       0,   520,   -59,   -59,     0,   -59,   -59,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   206,     0,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   378,   379,
     380,     0,     0,   226,     0,     0,     0,   205,     0,   206,
       0,   206,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   402,   403,   404,     0,     0,   226,     0,     0,
       0,     0,     0,   206,     0,   206,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   426,   427,   428,   225,
     243,     0,     0,     0,     0,   184,     0,   205,   261,   205,
     192,     0,   206,     0,   205,   206,     0,     0,     0,     0,
     131,   132,   133,   134,   135,   136,   137,   193,   194,   195,
       0,   471,   474,   476,     0,   196,   197,     0,   198,   199,
     200,     0,     0,     0,     0,     0,   503,   504,     0,     0,
       0,   -82,     0,   -82,   -82,     0,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   225,   -82,   -82,   -82,
       0,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   211,     0,   212,     0,     0,     0,     0,     0,   559,
     560,     0,     0,     0,     0,     0,     0,   205,     0,     0,
     213,   214,   215,     0,     0,     0,     0,   110,   216,   217,
     205,   218,   219,   220,     0,     0,   -58,     0,   -58,   -58,
       0,   -58,   -58,     0,   -58,   -58,     0,     0,   500,     0,
     205,   206,     0,   206,     0,     0,     0,     0,   -58,   -58,
     -58,     0,   329,   -58,   -58,     0,   -58,   -58,   205,   -58,
     -58,   -58,   -58,     0,   -58,   -58,   226,     0,   271,     0,
       0,    74,     0,   192,   206,   225,   206,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   554,   555,   556,
     193,   194,   195,     0,     0,     0,     0,     0,   196,   197,
       0,   198,   199,   200,   205,     0,   205,   205,   205,   205,
     371,   372,   373,   374,   375,   376,   377,     0,     0,     0,
       0,     0,   225,   204,     0,     0,     0,     0,   205,     0,
     205,   225,   225,   225,   395,   396,   397,   398,   399,   400,
     401,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,   205,     0,   205,   243,   243,   243,   419,   420,
     421,   422,   423,   424,   425,   224,   242,     0,     0,     0,
       0,     0,     0,   204,     0,   204,     0,     0,     0,     0,
     204,   205,     0,     0,   205,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -92,
       0,   -92,   -92,     0,   -92,   -92,   203,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,     0,   -92,
     -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
       0,     0,   224,     0,     0,     0,     0,     0,   223,   241,
       0,     0,     0,     0,     0,     0,   203,     0,   203,   107,
       0,     0,   209,   203,    29,    30,   202,   129,   191,     0,
       0,     0,     0,   204,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,   204,     0,     0,    35,
      36,     0,    37,    38,    39,    40,     0,    41,    42,     0,
      74,     0,   192,     0,     0,     0,   204,   499,   222,   240,
     205,     0,   205,     0,     0,     0,   202,     0,   202,   193,
     194,   195,     0,   202,   204,   223,   128,   196,   197,   117,
     198,   199,   200,     0,     0,   225,     0,     0,     0,     0,
       0,   224,     0,   205,     0,   205,   499,   499,   499,   547,
     548,   549,   550,   551,   552,   553,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   -60,   204,   204,   204,   370,     0,     0,   306,   307,
     308,   309,   310,   311,   312,   222,     0,     0,   224,   203,
     -60,   -60,   -60,   -60,   204,     0,   204,   224,   224,   394,
       0,     0,   201,   295,     0,     0,    74,   203,   192,     0,
       0,     0,   224,     0,     0,     0,   202,     0,   204,     0,
     204,   242,   242,   418,   223,   193,   194,   195,     0,   202,
       0,     0,     0,   196,   197,     0,   198,   199,   200,     0,
       0,     0,     0,     0,   221,   239,     0,   204,     0,   202,
     204,     0,   201,   203,   201,   203,   203,   369,     0,   201,
       0,     0,     0,   319,     0,     0,    74,   202,   192,     0,
       0,   223,     0,     0,     0,     0,     0,   203,     0,   203,
     223,   393,     0,     0,   222,   193,   194,   195,     0,     0,
       0,     0,     0,   196,   197,   223,   198,   199,   200,     0,
       0,   203,     0,   203,   241,   417,     0,     0,     0,     0,
       0,     0,     0,   202,     0,   202,   368,     0,     0,     0,
       0,   221,     0,   440,     0,     0,    74,     0,   192,     0,
     203,   222,     0,   203,     0,     0,     0,   202,     0,   202,
     392,     0,     0,     0,     0,   193,   194,   195,     0,     0,
       0,     0,   201,   196,   197,   222,   198,   199,   200,     0,
       0,   202,     0,   202,   416,   201,     0,     0,     0,     0,
       0,     0,     0,   498,     0,     0,   204,     0,   204,     0,
       0,     0,     0,     0,     0,   201,     0,     0,     0,     0,
     202,     0,     0,   202,     0,     0,     0,     0,     0,   250,
       0,   224,    28,   201,    29,   251,     0,     0,   252,   204,
       0,   204,   498,   498,   546,     0,     0,     0,     0,     0,
     221,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,     0,    37,    38,    39,    40,     0,    41,   253,     0,
       0,     0,     0,     0,     0,     0,     0,   442,     0,   201,
     248,   201,    29,     0,     0,     0,   497,     0,     0,   203,
       0,   203,     0,     0,     0,     0,     0,   221,     0,    32,
      33,    34,     0,   201,     0,   201,     0,    35,    36,     0,
      37,    38,    39,     0,   223,     0,     0,     0,     0,     0,
       0,   221,   203,     0,   203,   497,   545,   201,     0,   201,
     -56,     0,   -56,   -56,     0,   -56,   -56,     0,   -56,   -56,
       0,     0,     0,     0,     0,     0,   496,     0,     0,   202,
       0,   202,   -56,   -56,   -56,     0,   201,   519,   -56,   201,
     -56,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,   202,     0,   202,   544,   -70,     0,   -70,   -70,
       0,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   531,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   532,   -70,   -70,
     -70,     0,   -70,   -70,   -70,     0,   -70,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -74,     0,   -74,   -74,
       0,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,     0,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -59,     0,   -59,   -59,
       0,   -59,   -59,     0,   -59,   -59,     0,     0,     0,     0,
       0,     0,   495,     0,     0,   201,     0,   201,   -59,   -59,
     -59,     0,   329,   -59,   -59,     0,   -59,   -59,     0,   -59,
     -59,   -59,   -59,     0,   -59,   -59,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,   201,   -77,
     201,   -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -80,
       0,   -80,   -80,     0,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -78,
       0,   -78,   -78,     0,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -79,
       0,   -79,   -79,     0,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -86,
       0,   -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -84,
       0,   -84,   -84,     0,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -83,
       0,   -83,   -83,     0,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -73,
       0,   -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   531,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     532,   -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -71,
       0,   -71,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   531,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     532,   -71,   -71,   -71,     0,   -71,   -71,   -71,     0,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,
       0,   -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   531,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     532,   -72,   -72,   -72,     0,   -72,   -72,   -72,     0,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -75,
       0,   -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,   -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -85,
       0,   -85,   -85,     0,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -87,
       0,   -87,   -87,     0,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,     0,   -87,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
       0,   -88,   -88,     0,   -88,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,     0,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,
       0,   -89,   -89,     0,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -90,
       0,   -90,   -90,     0,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,
     -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -91,
       0,   -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,     0,   -91,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -81,
       0,   -81,   -81,     0,   318,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,
     -81,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -82,
       0,   -82,   -82,     0,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,     0,   -82,
     -82,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -92,
       0,   -92,   -92,     0,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,     0,   -92,
     -92,     0,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -70,
       0,   -70,   -70,     0,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   340,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     341,   -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,
     -70,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -74,
       0,   -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,
     -74,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -77,
       0,   -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,
     -77,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -80,
       0,   -80,   -80,     0,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,
     -80,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -78,
       0,   -78,   -78,     0,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,
     -78,     0,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -79,
       0,   -79,   -79,     0,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,
     -79,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -86,
       0,   -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,
     -86,     0,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -84,
       0,   -84,   -84,     0,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,
     -84,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -83,
       0,   -83,   -83,     0,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,
     -83,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -73,
       0,   -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   340,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     341,   -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,
     -73,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -71,
       0,   -71,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   340,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     341,   -71,   -71,   -71,     0,   -71,   -71,   -71,     0,   -71,
     -71,     0,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -72,
       0,   -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   340,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     341,   -72,   -72,   -72,     0,   -72,   -72,   -72,     0,   -72,
     -72,     0,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -75,
       0,   -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,
     -75,     0,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -76,
       0,   -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -85,
       0,   -85,   -85,     0,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,
     -85,     0,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -87,
       0,   -87,   -87,     0,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,     0,   -87,
     -87,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -88,
       0,   -88,   -88,     0,   -88,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,     0,   -88,
     -88,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -89,
       0,   -89,   -89,     0,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,
     -89,     0,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -90,
       0,   -90,   -90,     0,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,
     -90,     0,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -91,
       0,   -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,     0,   -91,
     -91,     0,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -65,
       0,   -65,   -65,     0,   -65,   -65,     0,   -65,   -65,   528,
     529,   530,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,
       0,   -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   528,
     529,   530,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,     0,   -66,   -66,   -66,     0,   -66,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -63,
       0,   -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   528,
     529,   530,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -63,     0,   -63,   -63,   -63,     0,   -63,
     -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -64,
       0,   -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   528,
     529,   530,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -67,
       0,   -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   528,
     529,   530,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,
       0,   -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   528,
     529,   530,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,
       0,   -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   528,
     529,   530,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -62,
       0,   -62,   -62,     0,   -62,   -62,     0,   -62,   -62,   337,
     338,   339,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,
     -62,     0,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -65,
       0,   -65,   -65,     0,   -65,   -65,     0,   -65,   -65,   337,
     338,   339,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,
     -65,     0,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -66,
       0,   -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   337,
     338,   339,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,     0,   -66,   -66,   -66,     0,   -66,
     -66,     0,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -63,
       0,   -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   337,
     338,   339,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -63,     0,   -63,   -63,   -63,     0,   -63,
     -63,     0,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -64,
       0,   -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   337,
     338,   339,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,
     -64,     0,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -67,
       0,   -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   337,
     338,   339,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,
     -67,     0,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -68,
       0,   -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   337,
     338,   339,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,
     -68,     0,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -69,
       0,   -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   337,
     338,   339,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,   -69,
     -69,     0,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -60,
       0,   -60,   -60,     0,   -60,   -60,     0,   -60,   -60,     0,
       0,     0,     0,   521,   522,   523,   524,   525,   526,   527,
       0,   -60,   -60,   -60,     0,   -60,   -60,   -60,     0,   -60,
     -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -61,
       0,   -61,   -61,     0,   -61,   -61,     0,   -61,   -61,     0,
       0,     0,     0,   521,   522,   523,   524,   525,   526,   527,
       0,   -61,   -61,   -61,     0,   -61,   -61,   -61,     0,   -61,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -60,
       0,   -60,   -60,     0,   -60,   -60,     0,   -60,   -60,     0,
       0,     0,     0,   330,   331,   332,   333,   334,   335,   336,
       0,   -60,   -60,   -60,     0,   -60,   -60,   -60,     0,   -60,
     -60,     0,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -61,
       0,   -61,   -61,     0,   -61,   -61,     0,   -61,   -61,     0,
       0,     0,     0,   330,   331,   332,   333,   334,   335,   336,
       0,   -61,   -61,   -61,     0,   -61,   -61,   -61,     0,   -61,
     -61,     0,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -57,
       0,   -57,   -57,     0,   -57,   -57,     0,   -57,   -57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -57,   -57,   -57,     0,     0,   519,   -57,     0,   -57,
     -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -56,
       0,   -56,   -56,     0,   -56,   -56,     0,   -56,   -56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -56,   -56,   -56,     0,     0,   328,   -56,     0,   -56,
     -56,     0,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -57,
       0,   -57,   -57,     0,   -57,   -57,     0,   -57,   -57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -57,   -57,   -57,     0,     0,   328,   -57,     0,   -57,
     -57,     0,   -57,   -57,   -57,   -57,     0,   -57,   -57,   -55,
       0,   -55,   -55,     0,   -55,   -55,     0,   -55,   -55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -55,   -55,   -55,     0,     0,     0,   518,     0,   -55,
     -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -36,
       0,   -36,   -36,     0,   -36,   -36,   -62,   -36,   -36,     0,
      99,   100,   101,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -36,   -36,   -36,     0,     0,   -62,   -62,   -62,   -36,
     -36,     0,   -36,   -36,   -36,   -36,    67,   -36,   -36,   -29,
       0,   -29,   -29,     0,   -29,   -29,   -65,   -29,   -29,     0,
      99,   100,   101,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -29,   -29,   -29,     0,     0,   -65,   -65,   -65,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -55,
       0,   -55,   -55,     0,   -55,   -55,     0,   -55,   -55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -55,   -55,   -55,     0,     0,     0,   327,     0,   -55,
     -55,     0,   -55,   -55,   -55,   -55,     0,   -55,   -55,   -44,
       0,   -44,   -44,     0,   -44,   -44,   -66,   -44,   -44,     0,
      99,   100,   101,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -44,   -44,   -44,     0,     0,   -66,   -66,   -66,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -25,
       0,   -25,   -25,     0,   -25,   -25,   -63,   -25,   -25,     0,
      99,   100,   101,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -25,   -25,   -25,     0,     0,   -63,   -63,   -63,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -27,
       0,   -27,   -27,     0,   -27,   -27,   -64,   -27,   -27,     0,
      99,   100,   101,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -27,   -27,   -27,     0,     0,   -64,   -64,   -64,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -26,
       0,   -26,   -26,     0,   -26,   -26,   -67,   -26,   -26,     0,
      99,   100,   101,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -26,   -26,   -26,     0,     0,   -67,   -67,   -67,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -28,
       0,   -28,   -28,     0,   -28,   -28,   -68,   -28,   -28,     0,
      99,   100,   101,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -28,   -28,   -28,     0,     0,   -68,   -68,   -68,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -31,
       0,   -31,   -31,     0,   -31,   -31,   -69,   -31,   -31,     0,
      99,   100,   101,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -31,   -31,   -31,     0,     0,   -69,   -69,   -69,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -30,
       0,   -30,   -30,     0,   -30,   -30,   -60,   -30,   -30,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,    97,
      98,   -30,   -30,   -30,     0,     0,   -60,   -60,   -60,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -46,
       0,   -46,   -46,     0,   -46,   -46,   -61,   -46,   -46,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,    97,
      98,   -46,   -46,   -46,     0,     0,   -61,   -61,   -61,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -45,
       0,   -45,   -45,     0,   -45,   -45,     0,   -45,   -45,     0,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,   -45,   -45,   -45,   -60,   -60,   -60,   -60,     0,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -41,
       0,   -41,   -41,     0,   -41,   -41,     0,   -41,   -41,     0,
       0,     0,   282,   283,   284,   285,   286,   287,   288,     0,
       0,   -41,   -41,   -41,   -61,   -61,   -61,   -61,     0,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -35,
       0,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -32,
       0,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -33,
       0,   -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -34,
       0,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -40,
       0,   -40,   -40,     0,   -40,   -40,     0,   -40,   -40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -37,
       0,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -49,
       0,   -49,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -49,   -49,   -49,     0,     0,     0,     0,     0,   -49,
     -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,    -9,
       0,    -9,    -9,     0,    -9,    -9,     0,    -9,    -9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -9,    -9,    -9,     0,     0,     0,     0,     0,    -9,
      -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,   -39,
       0,   -39,   -39,     0,   -39,   -39,     0,   -39,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -39,   -39,   -39,     0,     0,     0,     0,     0,   -39,
     -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -48,
       0,   -48,   -48,     0,   -48,   -48,     0,   -48,   -48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -48,   -48,   -48,     0,     0,     0,     0,     0,   -48,
     -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -11,
       0,   -11,   -11,     0,   -11,   -11,     0,   -11,   -11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -11,   -11,   -11,     0,     0,     0,     0,     0,   -11,
     -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -10,
       0,   -10,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -10,   -10,   -10,     0,     0,     0,     0,     0,   -10,
     -10,     0,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -50,
       0,   -50,   -50,     0,   -50,   -50,     0,   -50,   -50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -50,   -50,   -50,     0,     0,     0,     0,     0,   -50,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -47,
       0,   -47,   -47,     0,   -47,   -47,     0,   -47,   -47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -47,   -47,   -47,     0,     0,     0,     0,     0,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,    26,
       0,    27,    28,     0,    29,    30,     0,    31,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,     0,    37,    38,    39,    40,     0,    41,    42,   -44,
       0,   -44,   -44,     0,   -44,   -44,     0,   -44,   -44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -44,   -44,   -44,     0,     0,     0,     0,     0,   -44,
     -44,     0,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -25,
       0,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -25,   -25,   -25,     0,     0,     0,     0,     0,   -25,
     -25,     0,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -27,
       0,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,
     -27,     0,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -29,
       0,   -29,   -29,     0,   -29,   -29,     0,   -29,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -26,
       0,   -26,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,     0,     0,     0,     0,     0,   -26,
     -26,     0,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -28,
       0,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,   -28,   -28,     0,     0,     0,     0,     0,   -28,
     -28,     0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -46,
       0,   -46,   -46,     0,   -46,   -46,     0,   -46,   -46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -46,   -46,   -46,     0,     0,     0,     0,     0,   -46,
     -46,     0,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -45,
       0,   -45,   -45,     0,   -45,   -45,     0,   -45,   -45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -45,   -45,   -45,     0,     0,     0,     0,     0,   -45,
     -45,     0,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -41,
       0,   -41,   -41,     0,   -41,   -41,     0,   -41,   -41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,     0,     0,     0,     0,     0,   -41,
     -41,     0,   -41,   -41,   -41,   -41,     0,   -41,   -41,    -9,
       0,    -9,    -9,     0,    -9,    -9,     0,    -9,    -9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -9,    -9,    -9,     0,     0,     0,     0,     0,    -9,
      -9,     0,    -9,    -9,    -9,    -9,     0,    -9,    -9,   -11,
       0,   -11,   -11,     0,   -11,   -11,     0,   -11,   -11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -11,   -11,   -11,     0,     0,     0,     0,     0,   -11,
     -11,     0,   -11,   -11,   -11,   -11,     0,   -11,   -11,   -10,
       0,   -10,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -10,   -10,   -10,     0,     0,     0,     0,     0,   -10,
     -10,     0,   -10,   -10,   -10,   -10,     0,   -10,   -10,   -40,
       0,   -40,   -40,     0,   -40,   -40,     0,   -40,   -40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,
     -40,     0,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -37,
       0,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,
     -37,     0,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -49,
       0,   -49,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -49,   -49,   -49,     0,     0,     0,     0,     0,   -49,
     -49,     0,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -39,
       0,   -39,   -39,     0,   -39,   -39,     0,   -39,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -39,   -39,   -39,     0,     0,     0,     0,     0,   -39,
     -39,     0,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -48,
       0,   -48,   -48,     0,   -48,   -48,     0,   -48,   -48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -48,   -48,   -48,     0,     0,     0,     0,     0,   -48,
     -48,     0,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -50,
       0,   -50,   -50,     0,   -50,   -50,     0,   -50,   -50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -50,   -50,   -50,     0,     0,     0,     0,     0,   -50,
     -50,     0,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -47,
       0,   -47,   -47,     0,   -47,   -47,     0,   -47,   -47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -47,   -47,   -47,     0,     0,     0,     0,     0,   -47,
     -47,     0,   -47,   -47,   -47,   -47,     0,   -47,   -47,   265,
       0,    27,    28,     0,    29,    30,     0,   266,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,     0,    37,    38,    39,    40,     0,    41,    42,    -7,
       0,    -7,    -7,     0,    -7,    -7,     0,    -7,    -7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -7,    -7,    -7,     0,     0,     0,     0,     0,    -7,
      -7,     0,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -8,
       0,    -8,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -8,    -8,    -8,     0,     0,     0,     0,     0,    -8,
      -8,     0,    -8,    -8,    -8,    -8,     0,    -8,    -8,   346,
       0,    27,    28,     0,    29,    30,     0,   347,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,     0,    37,    38,    39,    40,     0,    41,    42,   -31,
       0,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,
     -31,     0,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -30,
       0,   -30,   -30,     0,   -30,   -30,     0,   -30,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,     0,     0,     0,     0,     0,   -30,
     -30,     0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -35,
       0,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,
     -35,     0,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -32,
       0,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,
     -32,     0,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -33,
       0,   -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,
     -33,     0,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -34,
       0,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   250,   -34,   -34,   209,
       0,    29,   251,     0,     0,   252,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,    35,    36,     0,    37,
      38,    39,    40,   250,    41,   253,   472,     0,    29,   251,
       0,     0,   252,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,     0,     0,
       0,     0,     0,    35,    36,     0,    37,    38,    39,    40,
     477,    41,   253,   248,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,   505,     0,     0,   261,     0,   192,
       0,     0,    32,    33,    34,     0,     0,     0,     0,     0,
      35,    36,     0,    37,    38,    39,   193,   194,   195,    74,
       0,   192,     0,     0,   196,   197,     0,   198,   199,   200,
     508,     0,     0,    74,     0,   192,     0,     0,   193,   194,
     195,     0,     0,     0,     0,     0,   196,   197,   120,   198,
     199,   200,   193,   194,   195,   211,     0,   212,     0,     0,
     196,   197,     0,   198,   199,   200,     0,     0,     0,   209,
       0,    29,   251,     0,   213,   214,   215,     0,     0,     0,
       0,   342,   216,   217,     0,   218,   219,   220,    32,    33,
      34,    74,     0,   192,     0,     0,    35,    36,     0,    37,
      38,    39,     0,     0,     0,    74,     0,   192,     0,     0,
     193,   194,   195,     0,     0,     0,     0,     0,   196,   197,
     363,   198,   199,   200,   193,   194,   195,   211,     0,   212,
       0,     0,   196,   197,   366,   198,   199,   200,     0,     0,
       0,    74,     0,   192,     0,     0,   213,   214,   215,     0,
       0,     0,     0,   383,   216,   217,     0,   218,   219,   220,
     193,   194,   195,    74,     0,   192,     0,     0,   196,   197,
     387,   198,   199,   200,     0,     0,     0,   211,     0,   212,
       0,     0,   193,   194,   195,     0,     0,     0,     0,     0,
     196,   197,   390,   198,   199,   200,   213,   214,   215,    74,
       0,   192,     0,   407,   216,   217,     0,   218,   219,   220,
       0,     0,     0,    74,     0,   192,     0,     0,   193,   194,
     195,     0,     0,     0,     0,     0,   196,   197,   411,   198,
     199,   200,   193,   194,   195,     0,     0,   209,     0,    29,
     196,   197,   414,   198,   199,   200,   432,     0,     0,     0,
       0,    74,     0,   192,     0,     0,    32,    33,    34,     0,
     444,     0,     0,     0,    35,    36,     0,    37,    38,    39,
     193,   194,   195,     0,     0,   483,     0,   484,   196,   197,
       0,   198,   199,   200,   485,     0,     0,     0,     0,   211,
       0,   212,     0,     0,   486,   487,   488,     0,     0,     0,
       0,     0,   489,   490,     0,   491,   492,   493,   213,   214,
     215,    74,     0,   192,     0,   535,   216,   217,     0,   218,
     219,   220,     0,     0,     0,    74,     0,   192,     0,     0,
     193,   194,   195,     0,     0,     0,     0,     0,   196,   197,
     539,   198,   199,   200,   193,   194,   195,   209,     0,    29,
       0,     0,   196,   197,   542,   198,   199,   200,     0,     0,
       0,   211,     0,   212,     0,     0,    32,    33,    34,     0,
       0,     0,     0,     0,    35,    36,     0,    37,    38,    39,
     213,   214,   215,    74,     0,   192,     0,     0,   216,   217,
       0,   218,   219,   220,     0,     0,     0,   229,     0,   230,
       0,     0,   193,   194,   195,     0,     0,     0,     0,     0,
     196,   197,     0,   198,   199,   200,   231,   232,   233,   483,
       0,   484,     0,     0,   234,   235,     0,   236,   237,   238,
       0,     0,     0,     0,     0,     0,     0,     0,   486,   487,
     488,     0,     0,     0,     0,     0,   489,   490,   247,   491,
     492,   493,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,   356,   -81,
     -81,   -81,   -81,   247,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,    71,   -81,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,    72,   -81,
     -81,   -81,    71,   -81,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,   344,   -81,   -81,   -81,    71,   -81,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,   479,   -81,   -81,   -81,
      71,   -81,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -92,     0,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
       0,     0,     0,   -92,   -92,   -92,   -92,   -70,     0,     0,
     -70,   -70,   -70,   316,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   317,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -74,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -77,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -80,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -78,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -86,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -84,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -83,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -73,     0,     0,   -73,   -73,   -73,
     316,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   317,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -71,     0,     0,
     -71,   -71,   -71,   316,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   317,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -72,     0,     0,   -72,   -72,   -72,   316,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   317,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -75,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -76,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -85,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -87,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -88,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -89,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,   -90,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -91,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,
       0,     0,     0,   -91,   -91,   -91,   -91,   -82,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,   -92,   -82,   -82,   -82,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,     0,   -70,   -92,   -92,   -92,   -70,
     -70,   -70,   102,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     103,     0,     0,     0,   -74,   -70,   -70,   -70,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,   -77,   -74,   -74,   -74,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,   -80,   -77,   -77,   -77,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,   -78,   -80,   -80,   -80,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
     -79,   -78,   -78,   -78,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,   -86,
     -79,   -79,   -79,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -84,   -86,
     -86,   -86,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,   -83,   -84,   -84,
     -84,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,   -73,   -83,   -83,   -83,
     -73,   -73,   -73,   102,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   103,     0,     0,     0,   -71,   -73,   -73,   -73,   -71,
     -71,   -71,   102,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     103,     0,     0,     0,   -72,   -71,   -71,   -71,   -72,   -72,
     -72,   102,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   103,
       0,     0,     0,   -75,   -72,   -72,   -72,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,   -76,   -75,   -75,   -75,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,   -85,   -76,   -76,   -76,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
     -87,   -85,   -85,   -85,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,   -88,
     -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,   -89,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,   -90,   -89,   -89,
     -89,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,   -91,   -90,   -90,   -90,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,     0,     0,   -91,   -91,   -91,   -62,
       0,     0,   313,   314,   315,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -65,     0,     0,   313,   314,   315,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -66,     0,     0,   313,   314,
     315,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -63,     0,
       0,   313,   314,   315,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -64,     0,     0,   313,   314,   315,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -67,     0,     0,   313,   314,   315,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -68,     0,     0,
     313,   314,   315,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -69,     0,     0,   313,   314,   315,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,   -61,     0,     0,   -69,
     -69,   -69,   -69,   306,   307,   308,   309,   310,   311,   312,
       0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -70,
     -70,   -70,   292,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     293,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -73,
     -73,   -73,   292,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     293,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -71,
     -71,   -71,   292,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     293,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -72,
     -72,   -72,   292,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     293,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   289,
     290,   291,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   289,
     290,   291,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   289,
     290,   291,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   289,
     290,   291,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   289,
     290,   291,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   289,
     290,   291,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   289,
     290,   291,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   289,
     290,   291,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69
};

static const yytype_int16 yycheck[] =
{
      16,     9,   169,    29,   161,   247,     9,    23,    43,    44,
      45,   145,   146,     9,     3,     7,     4,    27,    28,    29,
      30,     4,   179,     4,     4,    27,    28,    29,    30,     6,
      38,   165,     8,     7,     7,    38,     7,     3,    30,     7,
     174,    30,    38,    31,    42,    71,    72,   181,    31,     0,
      31,    31,   294,    79,    30,    81,    30,    30,     7,    30,
      86,    87,    30,     7,    10,     0,     4,     7,     3,     1,
       0,     3,     4,     3,     6,     7,   318,     9,    10,    28,
      29,    87,     0,   250,     3,     3,    30,     0,    28,    29,
       3,    23,    24,    25,     8,    27,    28,    29,     0,    31,
      32,     3,    34,    35,    36,    37,    38,    39,    40,     4,
      30,     6,     7,    27,    28,    29,    30,    28,    29,    30,
      29,     8,   148,    32,    33,    34,     4,     7,    23,    24,
      25,     0,   158,     6,     3,   161,    31,    32,     6,    34,
      35,    36,   158,    30,     6,     1,     4,     5,     4,    29,
       6,     7,   158,   179,    10,   161,   191,     6,     0,     6,
     158,     3,    71,    72,   158,     8,   192,    23,    24,    25,
      79,   158,    81,   179,     8,    31,    32,    86,    34,    35,
      36,    37,     6,    39,    40,   191,   212,    30,     6,     8,
       3,     8,     8,   102,   103,    29,    30,   354,     7,     0,
       6,     7,     3,     8,   230,     0,     8,     1,     3,     7,
       4,    30,     6,    30,    30,     6,     7,   252,    27,    28,
      29,   247,    27,    28,    29,    30,     8,   253,    30,    23,
      24,    25,   267,   268,   269,     8,     7,    31,    32,   148,
      34,    35,    36,     4,     8,    30,   252,    30,    30,     4,
     276,     7,   278,     0,     4,   253,     3,    30,   158,    38,
       8,   267,   268,   269,     7,   507,    30,     8,   294,     7,
     179,    27,    28,    29,   300,     7,   302,    30,   191,   158,
      28,    29,    30,   192,   193,   194,   195,    28,    29,    30,
       0,     0,   318,     3,     3,    30,     0,    30,   324,     3,
     326,     4,     5,   212,   213,   214,   215,   474,    30,     0,
      30,   468,     3,   348,   349,   350,    30,     0,   344,   345,
       3,   230,   231,   232,   233,   482,     7,   353,   354,   345,
     356,     0,     4,     5,     3,    28,    29,    30,   247,   252,
       4,     5,   348,   349,   350,     4,     5,   345,   354,     4,
       5,   345,    29,    30,   267,   268,   269,    30,   345,     3,
      30,     4,     7,    30,    30,     7,     4,   276,    30,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,     7,     6,     6,    30,
      30,   300,     6,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
      30,     6,     6,     6,     6,   324,     6,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,     6,     6,   348,   349,   350,     6,   465,
     466,   467,   468,    30,   353,   345,    30,   356,    30,   465,
     466,   467,    30,   479,   480,   481,   482,     4,   484,    30,
     466,    30,   468,    30,   480,   481,   345,   465,   466,   467,
       4,   465,   466,   467,    30,    30,   482,    29,   465,   466,
     467,   507,   480,   481,   158,     4,   480,   481,    30,   515,
       6,   517,     8,   480,   481,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   533,   534,    30,
      30,    27,    28,    29,    30,    30,    30,   533,   534,    71,
      72,     1,    30,    30,     4,    30,     6,    79,    30,    81,
      30,    30,    30,    30,    86,   533,   534,    30,    30,   533,
     534,     7,    30,    23,    24,    25,   533,   534,    30,     7,
       7,    31,    32,    30,    34,    35,    36,     7,    30,    30,
       7,     6,     6,     6,     4,   465,   466,   467,    30,    30,
     479,    30,     3,   482,    30,   484,    30,   486,   487,   488,
     480,   481,    30,    -1,    30,    -1,   465,   466,   467,    30,
      -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,   507,    -1,
      -1,   480,   481,    -1,    -1,    -1,   515,    -1,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,    -1,    -1,    -1,   179,    -1,    -1,
      -1,    -1,    -1,   533,   534,    -1,    -1,     4,    -1,     6,
     192,   193,   194,   195,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   533,   534,    23,    24,    25,    -1,
     212,   213,   214,   215,    31,    32,    -1,    34,    35,    36,
      -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,   230,   231,
     232,   233,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,   247,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,    -1,    68,    -1,    -1,    -1,   300,    -1,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,    -1,    -1,    -1,
      -1,    -1,   324,    -1,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      -1,   465,   466,   467,     1,    -1,    -1,     4,    29,     6,
      -1,   353,    -1,    -1,   356,    -1,   480,   481,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,   157,   158,    -1,   160,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,   177,   178,    86,    -1,    -1,    -1,   533,
     534,    -1,    -1,   187,   188,    -1,    -1,   191,    99,   100,
     101,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,     1,   148,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    -1,   479,   252,    -1,
     482,    -1,   484,    -1,   486,   487,   488,    -1,    23,    24,
      25,    -1,    -1,   267,   268,   269,    31,    32,   179,    34,
      35,    36,    -1,    -1,    -1,   507,    -1,    -1,    -1,    -1,
      -1,   192,    -1,   515,    -1,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   212,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,   230,
      -1,    27,    28,    29,    30,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,   247,    -1,    -1,    -1,
      -1,   345,    -1,    -1,   348,   349,   350,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,   276,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    -1,    -1,   294,    -1,    -1,    -1,    29,    -1,   300,
      -1,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,    -1,    -1,   318,    -1,    -1,
      -1,    -1,    -1,   324,    -1,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,    71,
      72,    -1,    -1,    -1,    -1,     1,    -1,    79,     4,    81,
       6,    -1,   353,    -1,    86,   356,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    97,    98,    23,    24,    25,
      -1,   465,   466,   467,    -1,    31,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,   480,   481,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   148,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,   533,
     534,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
     192,    34,    35,    36,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,   479,    -1,
     212,   482,    -1,   484,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,   230,    34,
      35,    36,    37,    -1,    39,    40,   507,    -1,     1,    -1,
      -1,     4,    -1,     6,   515,   247,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,    -1,    -1,    -1,
      -1,    -1,   294,    29,    -1,    -1,    -1,    -1,   300,    -1,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,    -1,    -1,    -1,    -1,    -1,   318,    -1,    -1,    -1,
      -1,    -1,   324,    -1,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,   353,    -1,    -1,   356,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    29,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,     1,
      -1,    -1,     4,    86,     6,     7,    29,    90,    10,    -1,
      -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,   192,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,    -1,
       4,    -1,     6,    -1,    -1,    -1,   212,   479,    71,    72,
     482,    -1,   484,    -1,    -1,    -1,    79,    -1,    81,    23,
      24,    25,    -1,    86,   230,   148,    89,    31,    32,    33,
      34,    35,    36,    -1,    -1,   507,    -1,    -1,    -1,    -1,
      -1,   247,    -1,   515,    -1,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     276,     8,   278,   279,   280,   281,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,   148,    -1,    -1,   294,   212,
      27,    28,    29,    30,   300,    -1,   302,   303,   304,   305,
      -1,    -1,    29,     1,    -1,    -1,     4,   230,     6,    -1,
      -1,    -1,   318,    -1,    -1,    -1,   179,    -1,   324,    -1,
     326,   327,   328,   329,   247,    23,    24,    25,    -1,   192,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,   353,    -1,   212,
     356,    -1,    79,   276,    81,   278,   279,   280,    -1,    86,
      -1,    -1,    -1,     1,    -1,    -1,     4,   230,     6,    -1,
      -1,   294,    -1,    -1,    -1,    -1,    -1,   300,    -1,   302,
     303,   304,    -1,    -1,   247,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,   318,    34,    35,    36,    -1,
      -1,   324,    -1,   326,   327,   328,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   276,    -1,   278,   279,    -1,    -1,    -1,
      -1,   148,    -1,     1,    -1,    -1,     4,    -1,     6,    -1,
     353,   294,    -1,   356,    -1,    -1,    -1,   300,    -1,   302,
     303,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,   179,    31,    32,   318,    34,    35,    36,    -1,
      -1,   324,    -1,   326,   327,   192,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   479,    -1,    -1,   482,    -1,   484,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
     353,    -1,    -1,   356,    -1,    -1,    -1,    -1,    -1,     1,
      -1,   507,     4,   230,     6,     7,    -1,    -1,    10,   515,
      -1,   517,   518,   519,   520,    -1,    -1,    -1,    -1,    -1,
     247,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   276,
       4,   278,     6,    -1,    -1,    -1,   479,    -1,    -1,   482,
      -1,   484,    -1,    -1,    -1,    -1,    -1,   294,    -1,    23,
      24,    25,    -1,   300,    -1,   302,    -1,    31,    32,    -1,
      34,    35,    36,    -1,   507,    -1,    -1,    -1,    -1,    -1,
      -1,   318,   515,    -1,   517,   518,   519,   324,    -1,   326,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,   482,
      -1,   484,    23,    24,    25,    -1,   353,    28,    29,   356,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,   507,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   515,    -1,   517,   518,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,   479,    -1,    -1,   482,    -1,   484,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
     507,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   515,     1,
     517,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    23,    24,    25,    27,    28,    29,    30,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    23,    24,    25,    27,    28,    29,    30,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,     1,    39,    40,     4,
      -1,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    37,     1,    39,    40,     4,    -1,     6,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,    37,
       1,    39,    40,     4,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,     4,    -1,     6,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    34,    35,    36,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    -1,    34,    35,    36,
       1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    23,    24,    25,     4,    -1,     6,    -1,    -1,
      31,    32,    -1,    34,    35,    36,    -1,    -1,    -1,     4,
      -1,     6,     7,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,    -1,    34,    35,    36,    23,    24,
      25,     4,    -1,     6,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    23,    24,    25,     4,    -1,     6,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    34,    35,    36,
      23,    24,    25,     4,    -1,     6,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,     4,    -1,     6,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    23,    24,    25,     4,
      -1,     6,    -1,    30,    31,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    23,    24,    25,    -1,    -1,     4,    -1,     6,
      31,    32,    33,    34,    35,    36,    13,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    23,    24,    25,    -1,
      13,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      23,    24,    25,    -1,    -1,     4,    -1,     6,    31,    32,
      -1,    34,    35,    36,    13,    -1,    -1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    36,    23,    24,
      25,     4,    -1,     6,    -1,    30,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    23,    24,    25,     4,    -1,     6,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      23,    24,    25,     4,    -1,     6,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    -1,    -1,    -1,     4,    -1,     6,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    34,    35,    36,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,     6,    34,
      35,    36,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,     6,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,     6,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    28,    29,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,     8,    -1,    -1,    11,    12,    13,
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
      30,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
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
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,     7,
      27,    28,    29,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,     7,    27,
      28,    29,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,     7,    27,    28,
      29,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,     7,    27,    28,    29,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,     8,
      -1,    -1,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     8,    -1,    -1,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,
      -1,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,     8,    -1,    -1,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,     8,    -1,    -1,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       8,    -1,    -1,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,     8,    -1,    -1,    27,
      28,    29,    30,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    42,    43,    44,    45,    47,    49,     4,     5,
       0,    44,     6,     7,     4,     3,    30,    48,     7,     4,
       5,    10,    52,    30,     8,     4,     1,     3,     4,     6,
       7,     9,    23,    24,    25,    31,    32,    34,    35,    36,
      37,    39,    40,    45,    46,    51,    52,    53,    54,    55,
      57,    58,    59,    60,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    52,     3,     8,     9,    38,    56,     4,
       5,     6,    26,     1,     4,    62,    69,    69,    69,     6,
       6,     6,    57,    53,    53,    53,     6,     6,     7,    29,
      28,    27,    15,    16,    17,    18,    19,    20,    21,    11,
      12,    13,    14,    22,     4,     5,     3,     1,    51,     4,
      30,    62,    71,    13,    62,    30,    30,    33,    62,     4,
      33,    62,     1,    62,     1,    46,    61,    62,    64,    65,
      66,    67,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    69,    69,     8,    50,     4,     4,     5,     8,    30,
       4,    31,    30,    30,    30,    30,    30,    30,    30,     7,
      30,     7,     3,    50,    50,     4,    62,    51,    46,    51,
      57,    51,     1,    61,     4,     5,    50,    56,    30,     7,
      50,     4,    51,    51,     1,    61,    50,    30,    30,    51,
      51,    10,     6,    23,    24,    25,    31,    32,    34,    35,
      36,    63,    64,    65,    66,    67,    68,    69,    70,     4,
       7,     4,     6,    23,    24,    25,    31,    32,    34,    35,
      36,    63,    64,    65,    66,    67,    68,    69,    70,     4,
       6,    23,    24,    25,    31,    32,    34,    35,    36,    63,
      64,    65,    66,    67,    68,    69,    70,     6,     4,     7,
       1,     7,    10,    40,    52,    54,    55,    58,    59,    60,
      62,     4,    46,    62,     7,     1,     9,    45,    46,    51,
      53,     1,    62,    69,    69,    69,     6,     6,     6,    29,
      28,    27,    15,    16,    17,    18,    19,    20,    21,    11,
      12,    13,    14,    22,     6,     1,    62,    69,    69,    69,
       6,     6,     6,    29,    28,    27,    15,    16,    17,    18,
      19,    20,    21,    11,    12,    13,    14,    22,     6,     1,
      62,    69,    69,    69,     6,     6,     6,    29,    28,    27,
      15,    16,    17,    18,    19,    20,    21,    11,    12,    13,
      14,    22,    30,    71,    26,    56,     1,     9,    45,    46,
      51,    53,    57,     6,     6,     7,    26,     9,    53,    53,
      53,    30,    30,    33,    62,     4,    33,    62,    64,    65,
      66,    67,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    69,    69,    30,    71,    30,    30,    33,    62,     4,
      33,    62,    64,    65,    66,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    69,    69,    30,    71,    30,
      30,    33,    62,     4,    33,    62,    64,    65,    66,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    30,    13,    62,    51,    57,     9,    53,    53,    53,
       1,    62,     1,    61,    13,    62,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,     4,    31,    30,    30,    30,     7,     4,
      31,    51,     4,    46,    51,    57,    51,     1,    61,    26,
      56,    30,     7,     4,     6,    13,    23,    24,    25,    31,
      32,    34,    35,    36,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    51,    51,     1,    61,     6,     1,    62,
       4,    31,    69,    69,    69,     6,     6,     6,    29,    28,
      27,    15,    16,    17,    18,    19,    20,    21,    11,    12,
      13,    14,    22,    30,    30,    30,    71,    30,    30,    33,
      62,     4,    33,    62,    64,    65,    66,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    51,
      51,    30,    30,    30,    30,    30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      49,    49,    50,    50,    50,    51,    51,    51,    51,    51,
      52,    53,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    55,    56,    57,    57,    58,    59,    59,    59,
      59,    60,    61,    61,    61,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     4,     3,
       4,     4,     5,     4,     2,     6,     3,     8,     7,     7,
       2,     3,     0,     4,     5,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     2,     5,     5,     5,     7,
       5,     3,     1,     1,     1,     2,     2,     9,     7,     5,
       9,     1,     1,     1,     2,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     1,     1,     3,     3,     4,     3,     4,     4,     4,
       4,     4,     1,     1,     3
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
#line 58 "src/parser.y"
                  {;}
#line 3580 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 62 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3589 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 66 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 3599 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 74 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 3607 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 77 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 3615 "src/parser.c"
    break;

  case 7: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 83 "src/parser.y"
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
#line 3631 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 95 "src/parser.y"
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
#line 3650 "src/parser.c"
    break;

  case 9: /* Definition: IDENTIFIER ATT Expression  */
#line 112 "src/parser.y"
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
#line 3683 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT MIN NUM_CONST  */
#line 141 "src/parser.y"
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
#line 3718 "src/parser.c"
    break;

  case 11: /* Definition: IDENTIFIER ATT MIN IDENTIFIER  */
#line 172 "src/parser.y"
                                              {
			(yyval.state) = new_node("=", root);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));

			add_child((yyval.state), new_node(str, root));
			add_child((yyval.state), new_node("-", root));

			add_child((yyval.state)->children[1], new_node((yyvsp[0].string), root));

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
#line 3761 "src/parser.c"
    break;

  case 12: /* FunctionDefinition: FunctionHead LP FunctionArgs RP CompStatement  */
#line 213 "src/parser.y"
                                                 {
		(yyval.state) = new_node("FunctionDefinition", root);

		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));

		decrease_depth_scope(scope);
	}
#line 3775 "src/parser.c"
    break;

  case 13: /* FunctionDefinition: FunctionHead LP RP CompStatement  */
#line 223 "src/parser.y"
                                        {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

		push_arg_to_arglist(s_table, "None", last_f);
	}
#line 3788 "src/parser.c"
    break;

  case 14: /* FunctionArgs: TYPE IDENTIFIER  */
#line 234 "src/parser.y"
                        {
		(yyval.state) = new_node("FunctionParameters", root);

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, (yyvsp[-1].string), last_f);
	}
#line 3803 "src/parser.c"
    break;

  case 15: /* FunctionArgs: TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 245 "src/parser.y"
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
#line 3826 "src/parser.c"
    break;

  case 16: /* FunctionArgs: TYPE LIST IDENTIFIER  */
#line 264 "src/parser.y"
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
#line 3846 "src/parser.c"
    break;

  case 17: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 280 "src/parser.y"
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
#line 3878 "src/parser.c"
    break;

  case 18: /* FunctionArgs: TYPE IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 308 "src/parser.y"
                                                           {
		(yyval.state) = new_node("FunctionParameters", root);

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, (yyvsp[-6].string));

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
#line 3909 "src/parser.c"
    break;

  case 19: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 335 "src/parser.y"
                                                           {
		(yyval.state) = new_node("FunctionParameters", root);

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, (yyvsp[-6].string));
		strcat(arg_1," LIST ");

		if(!add_row_symbol_table(s_table, (yyvsp[-4].string), arg_1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-4].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_1, last_f);

		char arg_2[MAX_BUFFER_SIZE];
		strcpy(arg_2, (yyvsp[-2].string));

		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), arg_2, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_2, last_f);
	}
#line 3940 "src/parser.c"
    break;

  case 20: /* FunctionHead: TYPE IDENTIFIER  */
#line 364 "src/parser.y"
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
#line 3963 "src/parser.c"
    break;

  case 21: /* FunctionHead: TYPE LIST IDENTIFIER  */
#line 383 "src/parser.y"
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
#line 3989 "src/parser.c"
    break;

  case 22: /* ParamList: %empty  */
#line 407 "src/parser.y"
             {
			(yyval.state) = new_node("ParamList", root);
		}
#line 3997 "src/parser.c"
    break;

  case 23: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 411 "src/parser.y"
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
#line 4014 "src/parser.c"
    break;

  case 24: /* ParamList: COM TYPE LIST IDENTIFIER ParamList  */
#line 424 "src/parser.y"
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
#line 4035 "src/parser.c"
    break;

  case 25: /* Statement: CompStatement  */
#line 445 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 4041 "src/parser.c"
    break;

  case 26: /* Statement: JmpStatement  */
#line 446 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 4047 "src/parser.c"
    break;

  case 27: /* Statement: SelStatement  */
#line 447 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 4053 "src/parser.c"
    break;

  case 28: /* Statement: ItStatement  */
#line 448 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 4059 "src/parser.c"
    break;

  case 29: /* Statement: ExpStatement  */
#line 449 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 4065 "src/parser.c"
    break;

  case 30: /* CompStatement: LCB StatementExp  */
#line 454 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 4073 "src/parser.c"
    break;

  case 31: /* StatementExp: RCB  */
#line 460 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 4079 "src/parser.c"
    break;

  case 32: /* StatementExp: Declaration StatementExp  */
#line 461 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4089 "src/parser.c"
    break;

  case 33: /* StatementExp: Definition StatementExp  */
#line 466 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4099 "src/parser.c"
    break;

  case 34: /* StatementExp: Statement StatementExp  */
#line 471 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4109 "src/parser.c"
    break;

  case 35: /* StatementExp: error RCB  */
#line 476 "src/parser.y"
                          {yyerrok; (yyval.state) = NULL;}
#line 4115 "src/parser.c"
    break;

  case 36: /* SelStatement: IfHead LP Expression RP Statement  */
#line 481 "src/parser.y"
                                                  {
			(yyval.state) = new_node("IF", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4126 "src/parser.c"
    break;

  case 37: /* SelStatement: IfHead LP Expression RP Definition  */
#line 487 "src/parser.y"
                                                     {
			(yyval.state) = new_node("IF", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4137 "src/parser.c"
    break;

  case 38: /* SelStatement: IfHead LP Expression RP ExpStatement  */
#line 493 "src/parser.y"
                                                       {
			(yyval.state) = new_node("IF", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4148 "src/parser.c"
    break;

  case 39: /* SelStatement: IfHead LP Expression RP Statement ElseHead Statement  */
#line 500 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("IF_ELSE", root);

			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
		}
#line 4162 "src/parser.c"
    break;

  case 40: /* SelStatement: IfHead LP error RP Statement  */
#line 511 "src/parser.y"
                                         {
		(yyval.state) = new_node("IF", root);
		add_child((yyval.state), (yyvsp[0].state));
	}
#line 4171 "src/parser.c"
    break;

  case 41: /* SelStatement: error ElseHead Statement  */
#line 515 "src/parser.y"
                                     {decrease_depth_scope(scope);yyerrok;}
#line 4177 "src/parser.c"
    break;

  case 42: /* IfHead: IF  */
#line 518 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 4185 "src/parser.c"
    break;

  case 43: /* ElseHead: ELSE  */
#line 524 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 4194 "src/parser.c"
    break;

  case 44: /* ExpStatement: SEMI  */
#line 531 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 4200 "src/parser.c"
    break;

  case 45: /* ExpStatement: Expression SEMI  */
#line 532 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 4208 "src/parser.c"
    break;

  case 46: /* JmpStatement: RET ExpStatement  */
#line 538 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root);
			add_child((yyval.state), (yyvsp[0].state));

			if (!check_type_subtree((yyval.state), s_table, scope))
			{
				printf("\033[91mSemantic error at line %d, column %d: Incompatible return type.\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column);
				first_pass_sematic_error_found = true;
			}

		}
#line 4224 "src/parser.c"
    break;

  case 47: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 552 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4237 "src/parser.c"
    break;

  case 48: /* ItStatement: ForHead LP ExpAtt SEMI error RP Statement  */
#line 561 "src/parser.y"
                                                          {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
			yyerrok;
		}
#line 4250 "src/parser.c"
    break;

  case 49: /* ItStatement: ForHead LP error RP Statement  */
#line 570 "src/parser.y"
                                              {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[0].state));
			
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 4262 "src/parser.c"
    break;

  case 50: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI error RP Statement  */
#line 578 "src/parser.y"
                                                                      {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 4275 "src/parser.c"
    break;

  case 51: /* ForHead: FOR  */
#line 589 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 4283 "src/parser.c"
    break;

  case 52: /* ExpAtt: Expression  */
#line 595 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 4291 "src/parser.c"
    break;

  case 53: /* ExpAtt: Definition  */
#line 599 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 4299 "src/parser.c"
    break;

  case 54: /* ExpAtt: error SEMI  */
#line 603 "src/parser.y"
                   {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 4308 "src/parser.c"
    break;

  case 55: /* Expression: LogicalOrExpression  */
#line 611 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 4314 "src/parser.c"
    break;

  case 56: /* LogicalOrExpression: LogicalAndExpression  */
#line 615 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 4320 "src/parser.c"
    break;

  case 57: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 616 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 4331 "src/parser.c"
    break;

  case 58: /* LogicalAndExpression: EqualityExpression  */
#line 625 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 4337 "src/parser.c"
    break;

  case 59: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 626 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4347 "src/parser.c"
    break;

  case 60: /* EqualityExpression: RelationalExpression  */
#line 634 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 4353 "src/parser.c"
    break;

  case 61: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 635 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4363 "src/parser.c"
    break;

  case 62: /* RelationalExpression: AdditiveExpression  */
#line 644 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 4369 "src/parser.c"
    break;

  case 63: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 645 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 4379 "src/parser.c"
    break;

  case 64: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 650 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4389 "src/parser.c"
    break;

  case 65: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 655 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4399 "src/parser.c"
    break;

  case 66: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 660 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4409 "src/parser.c"
    break;

  case 67: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 665 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4419 "src/parser.c"
    break;

  case 68: /* RelationalExpression: RelationalExpression MAP AdditiveExpression  */
#line 670 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">>", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4429 "src/parser.c"
    break;

  case 69: /* RelationalExpression: RelationalExpression FIL AdditiveExpression  */
#line 675 "src/parser.y"
                                                        {
				(yyval.state) = new_node("<<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4439 "src/parser.c"
    break;

  case 70: /* AdditiveExpression: MultiplicativeExpression  */
#line 683 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 4445 "src/parser.c"
    break;

  case 71: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 684 "src/parser.y"
                                                                 {
			(yyval.state) = new_node("+", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4455 "src/parser.c"
    break;

  case 72: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 689 "src/parser.y"
                                                        {
			(yyval.state) = new_node("-", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4465 "src/parser.c"
    break;

  case 73: /* AdditiveExpression: AdditiveExpression TWD MultiplicativeExpression  */
#line 695 "src/parser.y"
                                                          {
			(yyval.state) = new_node(":", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4475 "src/parser.c"
    break;

  case 74: /* MultiplicativeExpression: UnaryExpression  */
#line 703 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 4481 "src/parser.c"
    break;

  case 75: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 704 "src/parser.y"
                                                             {
			(yyval.state) = new_node("*", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4491 "src/parser.c"
    break;

  case 76: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 709 "src/parser.y"
                                                             {
			(yyval.state) = new_node("/", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4501 "src/parser.c"
    break;

  case 77: /* UnaryExpression: PrimaryExpression  */
#line 717 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 4507 "src/parser.c"
    break;

  case 78: /* UnaryExpression: TNR UnaryExpression  */
#line 718 "src/parser.y"
                                    {
			(yyval.state) = new_node("!", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4516 "src/parser.c"
    break;

  case 79: /* UnaryExpression: HD UnaryExpression  */
#line 722 "src/parser.y"
                                   {
			(yyval.state) = new_node("?", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4525 "src/parser.c"
    break;

  case 80: /* UnaryExpression: TR UnaryExpression  */
#line 726 "src/parser.y"
                                   {
			(yyval.state) = new_node("%", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4534 "src/parser.c"
    break;

  case 81: /* PrimaryExpression: IDENTIFIER  */
#line 732 "src/parser.y"
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
#line 4551 "src/parser.c"
    break;

  case 82: /* PrimaryExpression: NUM_CONST  */
#line 745 "src/parser.y"
                      {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", (yyvsp[0].num));
			(yyval.state) = new_node(str, root);
		}
#line 4561 "src/parser.c"
    break;

  case 83: /* PrimaryExpression: LP Expression RP  */
#line 751 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4570 "src/parser.c"
    break;

  case 84: /* PrimaryExpression: LP error RP  */
#line 756 "src/parser.y"
                            {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 4579 "src/parser.c"
    break;

  case 85: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 761 "src/parser.y"
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
#line 4641 "src/parser.c"
    break;

  case 86: /* PrimaryExpression: IDENTIFIER LP RP  */
#line 818 "src/parser.y"
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
#line 4687 "src/parser.c"
    break;

  case 87: /* PrimaryExpression: WRITE LP STR RP  */
#line 859 "src/parser.y"
                                {
			(yyval.state) = new_node("write_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));

		}
#line 4697 "src/parser.c"
    break;

  case 88: /* PrimaryExpression: WRITE LP Expression RP  */
#line 864 "src/parser.y"
                                   {
			(yyval.state) = new_node("write_call", root);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4706 "src/parser.c"
    break;

  case 89: /* PrimaryExpression: READ LP IDENTIFIER RP  */
#line 868 "src/parser.y"
                                      {
			(yyval.state) = new_node("read_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));
		}
#line 4715 "src/parser.c"
    break;

  case 90: /* PrimaryExpression: WRITE_LN LP STR RP  */
#line 872 "src/parser.y"
                                    {
			(yyval.state) = new_node("write_ln_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));
		}
#line 4724 "src/parser.c"
    break;

  case 91: /* PrimaryExpression: WRITE_LN LP Expression RP  */
#line 876 "src/parser.y"
                                           {
			(yyval.state) = new_node("write_ln_call", root);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4733 "src/parser.c"
    break;

  case 92: /* PrimaryExpression: NIL  */
#line 881 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root);}
#line 4739 "src/parser.c"
    break;

  case 93: /* Params: Expression  */
#line 885 "src/parser.y"
                   {
		(yyval.state) = new_node("Args", root);
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 4749 "src/parser.c"
    break;

  case 94: /* Params: Params COM Expression  */
#line 891 "src/parser.y"
                              {
		(yyval.state) = new_node("Args", root);
		add_child((yyval.state), (yyvsp[-2].state)); 
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 4760 "src/parser.c"
    break;


#line 4764 "src/parser.c"

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

#line 899 "src/parser.y"

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
