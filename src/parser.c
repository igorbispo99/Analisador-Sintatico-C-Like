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
#define YYLAST   9351

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  570

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
       0,    58,    58,    62,    66,    74,    77,    83,    96,   112,
     141,   172,   213,   223,   232,   241,   254,   276,   293,   323,
     349,   378,   396,   420,   424,   440,   464,   465,   466,   467,
     468,   473,   479,   480,   485,   490,   495,   500,   506,   513,
     524,   528,   531,   537,   544,   545,   551,   565,   574,   583,
     591,   602,   608,   612,   616,   621,   629,   633,   634,   643,
     644,   652,   653,   662,   663,   668,   673,   678,   683,   688,
     693,   701,   702,   707,   713,   721,   722,   727,   735,   736,
     740,   744,   750,   763,   769,   774,   779,   844,   890,   895,
     899,   903,   907,   912,   916,   922
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

#define YYPACT_NINF (-230)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    15,    45,   153,   198,   245,   291,    55,    72,    84,
    -230,   303,    21,   376,    97,    60,   128,    66,   107,   393,
      66,     4,    92,  5707,   394,    66,   395,   124,   120,    14,
     137,  7542,     5,  5747,   408,  7369,  7369,  7369,  8143,  8162,
     141,   166,   221,   222,   228,   235,  5707,  5707,  5707,  5787,
     409,  5827,   247,  5867,  5907,  5947,   249,   180,   183,    64,
     223,  4948,  2029,  8181,  8200,  8219,   410,   199,   194,   419,
      76,  2171,   250,   257,   730,  1811,   246,  7517,   263,  8238,
    8257,  8276,  1590,   293,  2210,  5987,   420,   421,   427,   201,
     491,  6027,  7369,  7369,  7369,  7369,  7369,  7369,  7369,  7369,
    7369,  7369,  7369,  7369,  7369,  7369,  7369,   191,   301,   282,
     269,  6067,   329,  8295,   208,   214,    13,  6107,  8314,  8333,
     372,   373,   396,   401,   402,   411,   416,    57,   363,   418,
     432,    91,   236,  4988,  4628,  4708,  4748,  4788,  4828,  4868,
    4908,  8352,  8371,  8390,  8409,  8428,   437,   417,   191,   191,
     455,  7391,  8447,  6147,  6187,  8466,  8485,  8504,  8523,  8542,
    2171,  6904,   454,   458,  2171,   652,   340,   442,   443,   191,
     238,  6227,  6267,  4627,  6307,    59,   467,   191,   471,   448,
    2171,  2171,   795,   449,   191,  6347,  6387,    61,   450,   460,
    2171,  2171,  6427,  6467,  6507,  1077,  7405,  7405,  7405,  1988,
    8761,   478,   479,   488,   331,    93,   345,  1781,  9181,  8781,
    8801,  8821,  7614,  6547,  7472,  1567,  7391,  7391,  7391,  7636,
    7659,   490,   492,   493,   284,   254,   156,   644,  8564,  7682,
    7705,  7728,  2987,  1757,  7427,  7427,  7427,  3027,  3067,   494,
     495,   496,  4667,  2130,  1714,  4427,  4107,  3107,  3147,  3187,
    1898,  7566,  6587,   269,  4707,  6627,  7101,  4747,  4787,   498,
    4827,  4867,  4907,   499,   500,  7492,   476,   481,   482,   483,
      16,  6667,  6507,  6507,  6507,  6707,   487,   501,  8841,  8861,
    8881,  7115,   504,  7137,  7405,  7405,  7405,  7405,  7405,  7405,
    7405,  7405,  7405,  7405,  7405,  7405,  7405,  7405,  7405,  7151,
     502,   503,  7751,  7774,  7797,  7173,   514,  7187,  7391,  7391,
    7391,  7391,  7391,  7391,  7391,  7391,  7391,  7391,  7391,  7391,
    7391,  7391,  7391,  7209,   505,   523,  3227,  3267,  3307,  7223,
     517,  7245,  7427,  7427,  7427,  7427,  7427,  7427,  7427,  7427,
    7427,  7427,  7427,  7427,  7427,  7427,  7427,  8901,   341,  7259,
    6941,    18,  4947,  6627,  6627,  6627,  4987,  5027,  1863,  7015,
    5067,  7283,  6747,  6787,  6827,  6867,  8921,  8941,   524,   525,
     526,   527,   529,   185,   359,  5026,  9201,  9221,  9241,  9261,
    9281,  9301,  9321,  8961,  8981,  9001,  9021,  9041,  7820,   354,
    7843,  7866,   547,   548,   549,   550,   551,   318,   181,  8741,
    8587,  8610,  8633,  8656,  8679,  8702,  8725,  7889,  7912,  7935,
    7958,  7981,  3347,   355,  3387,  3427,   553,   570,   571,   572,
     573,  4547,  2076,  4467,  4147,  4187,  4227,  4267,  4307,  4347,
    4387,  3467,  3507,  3547,  3587,  3627,  9061,    22,   521,  5107,
    5147,  5187,  5227,  5267,   574,   575,    65,   599,    28,   578,
    9081,  9101,  9121,  9141,  9161,  8004,  8027,  8050,  8073,  8096,
    8119,  3667,  3707,  3747,  3787,  3827,  3867,   625,   629,  6941,
    6978,  6941,  7029,   617,   618,  5307,  7590,  5347,  4627,  5387,
      67,   642,  7297,  6941,  6941,  7065,   606,  7079,    29,  7441,
    7441,  7441,   691,   960,   518,   645,   648,  5427,  4587,  2334,
    1274,   142,   843,  1032,  1348,  1640,  5467,  5507,   110,   620,
    7319,   627,   636,  5547,  5587,  2251,  2291,  2387,  7333,   651,
    7355,  7441,  7441,  7441,  7441,  7441,  7441,  7441,  7441,  7441,
    7441,  7441,  7441,  7441,  7441,  7441,  6941,  6941,  2427,   361,
    2467,  2507,   637,   638,   639,   640,   649,  4507,  1396,  1958,
    1156,  1475,  3907,  3947,  3987,  4027,  4067,  2547,  2587,  2627,
    2667,  2707,  5627,  5667,  2747,  2787,  2827,  2867,  2907,  2947
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,   675,    46,   -80,  -230,  -230,  -230,  -134,
     -55,   -17,    83,  -159,  -154,  -169,    -7,  -130,  -119,  -103,
    -164,   -27,  1869,  1730,  1608,  1545,  1247,   928,   253,   607,
    -229
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    46,    47,     6,    18,     7,   147,
      48,    49,    50,    51,    52,    71,    53,    54,    55,    56,
     129,    57,    58,    59,    60,    61,    62,    63,    64,    65,
     115
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   176,   258,    26,   180,    78,    76,   259,    66,    77,
     128,   195,    27,     1,   167,   168,   111,   153,   188,     8,
       9,   348,    15,    69,    16,   362,   467,   440,   196,   197,
     198,   261,   473,   513,   -15,   179,   199,   200,    85,   201,
     202,   203,   262,   183,   154,    10,     5,   114,   117,     5,
     189,    17,    70,   468,    70,   121,    70,   124,   263,   474,
     514,    12,   126,   130,   162,   163,   162,   163,   268,   269,
     389,   -57,   162,   163,   162,   163,    23,   -43,   -21,    13,
     -43,   172,   -43,   -43,   350,   128,   -43,   164,    14,   181,
      20,   190,    93,   -57,   413,   471,    28,   484,   -58,   -43,
     -43,   -43,   266,   -22,    19,   171,   173,   -43,   -43,   174,
     -43,   -43,   -43,   -43,   273,   -43,   -43,   268,   269,    93,
     -58,   285,   -57,   -57,   170,   185,   186,    67,    68,    86,
      87,    88,    21,    22,   264,   192,   193,    25,   130,   274,
     536,    72,    73,   -61,   257,   -61,   -61,    82,   -61,   -61,
     -17,   -61,   -61,    -2,   260,   267,     1,   524,   525,   526,
     527,   528,   529,   530,   -59,   -61,   -61,   -61,   277,   -61,
     -61,   -61,    83,   -61,   -61,   354,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   310,   -59,   -59,   -59,    91,   301,   -60,
     -56,   258,   273,   273,   273,   447,   259,   109,    -3,   146,
     355,    -3,   125,   107,   108,    77,   325,   195,   310,   -60,
     -60,   -60,    92,   285,   -58,   -58,   -94,   274,   274,   274,
     261,   -23,   151,   114,   196,   197,   198,    84,   -42,   264,
     -59,   262,   199,   200,   -51,   201,   202,   203,   -94,   212,
     272,    32,    33,   -60,   152,    -5,   -95,   263,    -5,   357,
      94,   -59,   -59,    89,   369,    90,   372,   213,    35,    36,
      37,   112,   -57,    94,   -60,   -60,    38,    39,   -95,    40,
      41,    42,   114,   354,   354,   354,   118,   275,   393,   128,
     396,   539,   309,   -57,   -57,   210,   149,   150,    79,    80,
      81,    -6,   -56,   119,    -6,   439,   114,   122,   355,   355,
     355,   353,   417,    -4,   420,   148,    -4,    70,   481,   483,
     258,   258,   258,   308,   -56,   259,   259,   259,   272,   272,
     272,   509,   438,   264,   258,   258,   -58,   230,   248,   259,
     259,   445,   130,   257,   449,   210,   252,   210,   356,   261,
     261,   261,   210,   260,   177,   178,   309,   -58,   -58,   151,
     262,   262,   262,   261,   261,   363,   364,   365,   144,   145,
     284,   -56,   151,   151,   262,   262,   263,   263,   263,   151,
     -53,   436,   286,   -59,   -59,   -59,    -7,   258,   258,    -7,
     263,   263,   259,   259,   455,   461,   286,   -60,   -60,   -60,
     477,   564,   128,    -8,   -13,   -14,    -8,   -13,   -14,   353,
     353,   353,   155,   156,   230,   266,   261,   261,   -32,   -31,
     -12,   -32,   -31,   -12,   475,   478,   479,   262,   262,   -36,
     -33,   -34,   -36,   -33,   -34,   165,   157,   -35,   506,   507,
     -35,   158,   159,   263,   263,   210,   441,   442,   443,   -52,
     166,   160,   264,   264,   264,   130,   161,   -16,   210,   278,
     279,   280,   257,   257,   257,   497,   264,   264,   267,   169,
     512,   -54,   260,   260,   260,   -55,   257,   257,   210,   302,
     303,   304,   -19,   -20,   182,   184,   260,   260,   -18,   -24,
     191,   562,   563,   114,   281,   282,   210,   326,   327,   328,
     -25,   543,   127,   546,   283,   251,   305,    32,   306,   307,
     329,   330,   331,   230,   358,   359,   -53,   360,   370,   264,
     264,   -52,   -54,   -55,    35,    36,    37,   366,   394,   257,
     257,   418,    38,    39,   518,    40,    41,    42,    -9,   260,
     260,   367,   390,   391,   210,   414,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     386,   387,   230,   415,   450,   451,   452,   453,   210,   454,
     210,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   410,   411,   230,   456,   457,   458,
     459,   460,   210,   462,   210,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   434,   435,
     463,   464,   465,   466,   469,   470,   472,   -82,    -9,   -82,
     -82,   210,   510,   -82,   210,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -11,   -82,   -82,   -82,   -10,   -82,   -82,   211,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -11,   -10,   485,
     537,   519,   -61,   175,   520,   544,   251,   540,    32,   311,
     312,   313,   314,   315,   316,   317,   541,   565,   566,   567,
     568,   -61,   -61,   -61,   -61,    35,    36,    37,    11,   569,
       0,   231,   249,    38,    39,     0,    40,    41,    42,   211,
       0,   211,   -83,     0,   -83,   -83,   211,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,   214,   504,   215,     0,   210,     0,
     210,     0,   515,   516,   517,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   217,   218,     0,     0,   231,     0,
     113,   219,   220,   230,   221,   222,   223,     0,     0,     0,
       0,   210,     0,   210,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   560,   561,   211,
       0,     0,     0,     0,     0,     0,   187,     0,     0,   265,
       0,   195,   211,   211,   211,   211,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   196,   197,
     198,     0,   211,   231,   231,   231,   199,   200,     0,   201,
     202,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     211,   249,   249,   249,   -63,     0,   -63,   -63,     0,   -63,
     -63,     0,   -63,   -63,   531,   532,   533,   231,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,     0,
     -63,   -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,   211,     0,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   231,     0,     0,     0,
       0,     0,   211,     0,   211,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,     0,     0,     0,     0,     0,   211,     0,   211,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,     0,     0,     0,     0,     0,     0,
     209,   -93,     0,   -93,   -93,   211,   -93,   -93,   211,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,
       0,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,     0,   229,   247,     0,     0,     0,     0,     0,     0,
     209,     0,   209,     0,     0,     0,     0,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     141,   142,   143,   -71,     0,   -71,   -71,     0,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   534,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   535,   -71,   -71,   -71,     0,   -71,
     -71,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,   276,   229,
       0,    77,     0,   195,     0,     0,     0,     0,     0,   505,
       0,     0,   211,     0,   211,     0,   505,   505,   505,     0,
     196,   197,   198,     0,     0,     0,     0,     0,   199,   200,
     209,   201,   202,   203,     0,     0,     0,   231,     0,     0,
       0,     0,     0,   209,     0,   211,     0,   211,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -66,     0,   -66,
     -66,   209,   -66,   -66,     0,   -66,   -66,   531,   532,   533,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   229,   -66,
     -66,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
       0,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   383,   384,   385,     0,     0,   229,     0,     0,
       0,     0,     0,   209,     0,   209,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   407,   408,   409,     0,
       0,   229,     0,     0,     0,     0,     0,   209,     0,   209,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     431,   432,   433,     0,     0,   -59,     0,   -59,   -59,   208,
     -59,   -59,     0,   -59,   -59,     0,   209,     0,     0,   209,
       0,     0,     0,     0,     0,     0,     0,   -59,   -59,   -59,
       0,   523,   -59,   -59,     0,   -59,   -59,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,     0,
       0,   228,   246,     0,     0,     0,     0,     0,     0,   208,
       0,   208,     0,     0,     0,     0,   208,     0,     0,     0,
       0,     0,   134,   135,   136,   137,   138,   139,   140,   -75,
       0,   -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,     0,     0,     0,     0,   -60,   228,   -60,
     -60,     0,   -60,   -60,     0,   -60,   -60,     0,     0,     0,
     503,     0,     0,   209,     0,   209,     0,     0,     0,   -60,
     -60,   -60,     0,   523,   -60,   -60,     0,   -60,   -60,   208,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,   229,     0,
       0,     0,   208,     0,     0,     0,   209,     0,   209,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   557,
     558,   559,   208,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -67,     0,   -67,   -67,
     208,   -67,   -67,     0,   -67,   -67,   531,   532,   533,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   228,   -67,   -67,
     -67,     0,   -67,   -67,   -67,     0,   -67,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   208,     0,
     208,   208,   208,   208,   376,   377,   378,   379,   380,   381,
     382,     0,     0,     0,     0,     0,   228,     0,     0,     0,
       0,     0,   208,     0,   208,   228,   228,   228,   400,   401,
     402,   403,   404,   405,   406,     0,     0,     0,   300,     0,
     228,    77,     0,   195,     0,     0,   208,   207,   208,   246,
     246,   246,   424,   425,   426,   427,   428,   429,   430,     0,
     196,   197,   198,     0,    77,     0,   195,     0,   199,   200,
       0,   201,   202,   203,     0,   208,     0,     0,   208,     0,
       0,     0,     0,   196,   197,   198,     0,     0,     0,   227,
     245,   199,   200,   120,   201,   202,   203,   207,     0,   207,
       0,     0,     0,     0,   207,     0,     0,     0,     0,   133,
     206,   -78,     0,   -78,   -78,     0,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
       0,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   226,   244,     0,     0,     0,     0,     0,     0,
     206,     0,   206,     0,     0,     0,   227,   206,     0,     0,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,     0,   -59,   -59,     0,
     -59,   -59,     0,   -59,   -59,     0,     0,   207,     0,   502,
       0,     0,   208,     0,   208,     0,     0,   -59,   -59,   -59,
     207,   334,   -59,   -59,     0,   -59,   -59,     0,   -59,   -59,
     -59,   -59,     0,   -59,   -59,     0,     0,   228,   324,   226,
     207,    77,   205,   195,     0,   208,     0,   208,   502,   502,
     502,   550,   551,   552,   553,   554,   555,   556,   207,     0,
     196,   197,   198,     0,     0,     0,     0,     0,   199,   200,
     206,   201,   202,   203,     0,   227,   287,   288,   289,   290,
     291,   292,   293,   206,   225,   243,     0,     0,   -61,   -61,
     -61,   -61,   205,     0,   205,   232,     0,   233,     0,   205,
       0,     0,   131,   206,   116,     0,   207,     0,   207,   207,
     207,   375,     0,     0,   234,   235,   236,     0,     0,     0,
       0,   206,   237,   238,   227,   239,   240,   241,     0,     0,
     207,     0,   207,   227,   227,   399,     0,     0,   226,     0,
       0,     0,     0,     0,   444,     0,     0,    77,   227,   195,
       0,     0,     0,     0,   207,     0,   207,   245,   245,   423,
       0,   225,     0,     0,     0,     0,   196,   197,   198,   206,
       0,   206,   206,   374,   199,   200,     0,   201,   202,   203,
       0,   204,   214,   207,   215,     0,   207,   226,     0,     0,
       0,     0,   205,   206,     0,   206,   226,   398,     0,     0,
       0,   216,   217,   218,     0,   205,     0,     0,   347,   219,
     220,   226,   221,   222,   223,     0,     0,   206,     0,   206,
     244,   422,     0,   224,   242,   205,     0,     0,     0,     0,
       0,   204,     0,   204,     0,     0,     0,     0,   204,   -62,
       0,   -62,   -62,   205,   -62,   -62,   206,   -62,   -62,   206,
       0,     0,     0,   524,   525,   526,   527,   528,   529,   530,
     225,   -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,
     -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   205,     0,   205,   373,   -83,   -83,   -83,   -83,     0,
     224,     0,     0,     0,     0,     0,     0,   501,     0,   225,
     207,     0,   207,     0,     0,   205,   -63,   205,   397,     0,
     102,   103,   104,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   204,     0,   225,     0,   227,   -63,   -63,   -63,   205,
       0,   205,   421,   207,   204,   207,   501,   501,   549,     0,
       0,     0,     0,     0,     0,     0,     0,   -60,     0,   -60,
     -60,     0,   -60,   -60,   204,   -60,   -60,     0,   205,     0,
     500,   205,     0,   206,     0,   206,     0,     0,     0,   -60,
     -60,   -60,   204,   334,   -60,   -60,     0,   -60,   -60,     0,
     -60,   -60,   -60,   -60,     0,   -60,   -60,     0,   226,   224,
       0,     0,     0,     0,     0,     0,   206,     0,   206,   500,
     548,   -57,     0,   -57,   -57,     0,   -57,   -57,     0,   -57,
     -57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     204,     0,   204,   -57,   -57,   -57,     0,     0,   333,   -57,
       0,   -57,   -57,     0,   -57,   -57,   -57,   -57,   224,   -57,
     -57,     0,   110,     0,   204,   212,   204,    32,    33,     0,
       0,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,    35,    36,    37,     0,   204,     0,
     204,     0,    38,    39,     0,    40,    41,    42,    43,     0,
      44,    45,   499,     0,    77,   205,   195,   205,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   204,     0,     0,
     204,     0,     0,   196,   197,   198,     0,     0,     0,     0,
     225,   199,   200,   123,   201,   202,   203,     0,   205,     0,
     205,   547,   -81,     0,   -81,   -81,     0,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,     0,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -79,     0,   -79,   -79,     0,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,     0,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,   -57,     0,   -57,   -57,     0,
     -57,   -57,     0,   -57,   -57,     0,     0,     0,     0,     0,
       0,   498,     0,     0,   204,     0,   204,   -57,   -57,   -57,
       0,     0,   522,   -57,     0,   -57,   -57,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,   204,   -80,   204,
     -80,   -80,     0,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -87,     0,
     -87,   -87,     0,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   -87,     0,   -87,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -85,     0,
     -85,   -85,     0,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -84,     0,
     -84,   -84,     0,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -74,     0,
     -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   534,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   535,
     -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -72,     0,
     -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   534,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   535,
     -72,   -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,
     -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   534,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   535,
     -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -76,     0,
     -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,
     -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -86,     0,
     -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -88,     0,
     -88,   -88,     0,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,     0,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -89,     0,
     -89,   -89,     0,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,   -89,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -90,     0,
     -90,   -90,     0,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -91,     0,
     -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,     0,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -92,     0,
     -92,   -92,     0,   -92,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,   -92,     0,   -92,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -82,     0,
     -82,   -82,     0,   323,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,     0,   -82,   -82,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -83,     0,
     -83,   -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,
       0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -93,     0,
     -93,   -93,     0,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -93,   -93,   -93,     0,   -93,   -93,
       0,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -71,     0,
     -71,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   345,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   346,
     -71,   -71,   -71,     0,   -71,   -71,   -71,     0,   -71,   -71,
       0,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -75,     0,
     -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,
       0,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -78,     0,
     -78,   -78,     0,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,
       0,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -81,     0,
     -81,   -81,     0,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,   -81,
       0,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -79,     0,
     -79,   -79,     0,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -80,     0,
     -80,   -80,     0,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,
       0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -87,     0,
     -87,   -87,     0,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   -87,     0,   -87,   -87,
       0,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -85,     0,
     -85,   -85,     0,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,
       0,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -84,     0,
     -84,   -84,     0,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -74,     0,
     -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   345,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   346,
     -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,
       0,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -72,     0,
     -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   345,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   346,
     -72,   -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,
       0,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -73,     0,
     -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   345,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   346,
     -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,   -73,
       0,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -76,     0,
     -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,   -76,
       0,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -77,     0,
     -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,   -77,
       0,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -86,     0,
     -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,   -86,
       0,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -88,     0,
     -88,   -88,     0,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,     0,   -88,   -88,
       0,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -89,     0,
     -89,   -89,     0,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,   -89,
       0,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -90,     0,
     -90,   -90,     0,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,   -90,
       0,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -91,     0,
     -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,     0,   -91,   -91,
       0,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -92,     0,
     -92,   -92,     0,   -92,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,   -92,     0,   -92,   -92,
       0,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -64,     0,
     -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   531,   532,
     533,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,
     -65,   -65,     0,   -65,   -65,     0,   -65,   -65,   531,   532,
     533,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -68,     0,
     -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   531,   532,
     533,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,
     -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   531,   532,
     533,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -69,     0,   -69,   -69,   -69,     0,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,
     -70,   -70,     0,   -70,   -70,     0,   -70,   -70,   531,   532,
     533,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -63,     0,
     -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   342,   343,
     344,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
     -63,   -63,   -63,     0,   -63,   -63,   -63,     0,   -63,   -63,
       0,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -66,     0,
     -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   342,   343,
     344,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -67,     0,
     -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   342,   343,
     344,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -64,     0,
     -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   342,   343,
     344,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,
       0,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -65,     0,
     -65,   -65,     0,   -65,   -65,     0,   -65,   -65,   342,   343,
     344,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,   -65,
       0,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -68,     0,
     -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   342,   343,
     344,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,   -68,
       0,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -69,     0,
     -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   342,   343,
     344,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -69,     0,   -69,   -69,   -69,     0,   -69,   -69,
       0,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -70,     0,
     -70,   -70,     0,   -70,   -70,     0,   -70,   -70,   342,   343,
     344,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,   -70,
       0,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -61,     0,
     -61,   -61,     0,   -61,   -61,     0,   -61,   -61,     0,     0,
       0,     0,   335,   336,   337,   338,   339,   340,   341,     0,
     -61,   -61,   -61,     0,   -61,   -61,   -61,     0,   -61,   -61,
       0,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -62,     0,
     -62,   -62,     0,   -62,   -62,     0,   -62,   -62,     0,     0,
       0,     0,   335,   336,   337,   338,   339,   340,   341,     0,
     -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,   -62,
       0,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -58,     0,
     -58,   -58,     0,   -58,   -58,     0,   -58,   -58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -58,   -58,   -58,     0,     0,   522,   -58,     0,   -58,   -58,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,
     -58,   -58,     0,   -58,   -58,     0,   -58,   -58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -58,   -58,   -58,     0,     0,   333,   -58,     0,   -58,   -58,
       0,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -56,     0,
     -56,   -56,     0,   -56,   -56,     0,   -56,   -56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -56,   -56,   -56,     0,     0,     0,   521,     0,   -56,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -37,     0,
     -37,   -37,     0,   -37,   -37,   -66,   -37,   -37,     0,   102,
     103,   104,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -37,   -37,   -37,     0,     0,   -66,   -66,   -66,   -37,   -37,
       0,   -37,   -37,   -37,   -37,    70,   -37,   -37,   -56,     0,
     -56,   -56,     0,   -56,   -56,     0,   -56,   -56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -56,   -56,   -56,     0,     0,     0,   332,     0,   -56,   -56,
       0,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -44,     0,
     -44,   -44,     0,   -44,   -44,   -67,   -44,   -44,     0,   102,
     103,   104,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -44,   -44,   -44,     0,     0,   -67,   -67,   -67,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -26,     0,
     -26,   -26,     0,   -26,   -26,   -64,   -26,   -26,     0,   102,
     103,   104,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -26,   -26,   -26,     0,     0,   -64,   -64,   -64,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -28,     0,
     -28,   -28,     0,   -28,   -28,   -65,   -28,   -28,     0,   102,
     103,   104,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -28,   -28,   -28,     0,     0,   -65,   -65,   -65,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -30,     0,
     -30,   -30,     0,   -30,   -30,   -68,   -30,   -30,     0,   102,
     103,   104,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -30,   -30,   -30,     0,     0,   -68,   -68,   -68,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -27,     0,
     -27,   -27,     0,   -27,   -27,   -69,   -27,   -27,     0,   102,
     103,   104,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -27,   -27,   -27,     0,     0,   -69,   -69,   -69,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -29,     0,
     -29,   -29,     0,   -29,   -29,   -70,   -29,   -29,     0,   102,
     103,   104,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -29,   -29,   -29,     0,     0,   -70,   -70,   -70,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -32,     0,
     -32,   -32,     0,   -32,   -32,   -61,   -32,   -32,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     -32,   -32,   -32,     0,     0,   -61,   -61,   -61,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -31,     0,
     -31,   -31,     0,   -31,   -31,   -62,   -31,   -31,     0,     0,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     -31,   -31,   -31,     0,     0,   -62,   -62,   -62,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -46,     0,
     -46,   -46,     0,   -46,   -46,     0,   -46,   -46,     0,     0,
       0,   287,   288,   289,   290,   291,   292,   293,     0,     0,
     -46,   -46,   -46,   -62,   -62,   -62,   -62,     0,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -45,     0,
     -45,   -45,     0,   -45,   -45,     0,   -45,   -45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -41,     0,
     -41,   -41,     0,   -41,   -41,     0,   -41,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,   -41,   -41,     0,     0,     0,     0,     0,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -36,     0,
     -36,   -36,     0,   -36,   -36,     0,   -36,   -36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,   -36,   -36,     0,     0,     0,     0,     0,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -33,     0,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -34,     0,
     -34,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -35,     0,
     -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -40,     0,
     -40,   -40,     0,   -40,   -40,     0,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -38,     0,
     -38,   -38,     0,   -38,   -38,     0,   -38,   -38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -49,     0,
     -49,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -49,   -49,   -49,     0,     0,     0,     0,     0,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,    -9,     0,
      -9,    -9,     0,    -9,    -9,     0,    -9,    -9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -9,    -9,    -9,     0,     0,     0,     0,     0,    -9,    -9,
       0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,   -39,     0,
     -39,   -39,     0,   -39,   -39,     0,   -39,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,     0,     0,     0,     0,     0,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -48,     0,
     -48,   -48,     0,   -48,   -48,     0,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -48,   -48,   -48,     0,     0,     0,     0,     0,   -48,   -48,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -11,     0,
     -11,   -11,     0,   -11,   -11,     0,   -11,   -11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -11,   -11,   -11,     0,     0,     0,     0,     0,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -10,     0,
     -10,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -10,   -10,   -10,     0,     0,     0,     0,     0,   -10,   -10,
       0,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -50,     0,
     -50,   -50,     0,   -50,   -50,     0,   -50,   -50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -50,   -50,   -50,     0,     0,     0,     0,     0,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -47,     0,
     -47,   -47,     0,   -47,   -47,     0,   -47,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,   -47,     0,     0,     0,     0,     0,   -47,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,    29,     0,
      30,    31,     0,    32,    33,     0,    34,   194,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,     0,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,   -44,     0,
     -44,   -44,     0,   -44,   -44,     0,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -44,   -44,   -44,     0,     0,     0,     0,     0,   -44,   -44,
       0,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -26,     0,
     -26,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -26,   -26,   -26,     0,     0,     0,     0,     0,   -26,   -26,
       0,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -28,     0,
     -28,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
       0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -30,     0,
     -30,   -30,     0,   -30,   -30,     0,   -30,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,   -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,
       0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -27,     0,
     -27,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,
       0,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -29,     0,
     -29,   -29,     0,   -29,   -29,     0,   -29,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,
       0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -46,     0,
     -46,   -46,     0,   -46,   -46,     0,   -46,   -46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -46,   -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,
       0,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -45,     0,
     -45,   -45,     0,   -45,   -45,     0,   -45,   -45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,
       0,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -41,     0,
     -41,   -41,     0,   -41,   -41,     0,   -41,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,   -41,   -41,     0,     0,     0,     0,     0,   -41,   -41,
       0,   -41,   -41,   -41,   -41,     0,   -41,   -41,    -9,     0,
      -9,    -9,     0,    -9,    -9,     0,    -9,    -9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -9,    -9,    -9,     0,     0,     0,     0,     0,    -9,    -9,
       0,    -9,    -9,    -9,    -9,     0,    -9,    -9,   -11,     0,
     -11,   -11,     0,   -11,   -11,     0,   -11,   -11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -11,   -11,   -11,     0,     0,     0,     0,     0,   -11,   -11,
       0,   -11,   -11,   -11,   -11,     0,   -11,   -11,   -10,     0,
     -10,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -10,   -10,   -10,     0,     0,     0,     0,     0,   -10,   -10,
       0,   -10,   -10,   -10,   -10,     0,   -10,   -10,   -40,     0,
     -40,   -40,     0,   -40,   -40,     0,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,   -40,
       0,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -38,     0,
     -38,   -38,     0,   -38,   -38,     0,   -38,   -38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -49,     0,
     -49,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -49,   -49,   -49,     0,     0,     0,     0,     0,   -49,   -49,
       0,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -39,     0,
     -39,   -39,     0,   -39,   -39,     0,   -39,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,     0,     0,     0,     0,     0,   -39,   -39,
       0,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -48,     0,
     -48,   -48,     0,   -48,   -48,     0,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -48,   -48,   -48,     0,     0,     0,     0,     0,   -48,   -48,
       0,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -50,     0,
     -50,   -50,     0,   -50,   -50,     0,   -50,   -50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -50,   -50,   -50,     0,     0,     0,     0,     0,   -50,   -50,
       0,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -47,     0,
     -47,   -47,     0,   -47,   -47,     0,   -47,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,   -47,     0,     0,     0,     0,     0,   -47,   -47,
       0,   -47,   -47,   -47,   -47,     0,   -47,   -47,   270,     0,
      30,    31,     0,    32,    33,     0,   271,   194,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,     0,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,    -7,     0,
      -7,    -7,     0,    -7,    -7,     0,    -7,    -7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -7,    -7,    -7,     0,     0,     0,     0,     0,    -7,    -7,
       0,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -8,     0,
      -8,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -8,    -8,    -8,     0,     0,     0,     0,     0,    -8,    -8,
       0,    -8,    -8,    -8,    -8,     0,    -8,    -8,   351,     0,
      30,    31,     0,    32,    33,     0,   352,   194,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,     0,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,   -32,     0,
     -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -31,     0,
     -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -36,     0,
     -36,   -36,     0,   -36,   -36,     0,   -36,   -36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,   -36,   -36,     0,     0,     0,     0,     0,   -36,   -36,
       0,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -33,     0,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -34,     0,
     -34,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,
       0,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -35,     0,
     -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   253,   -35,   -35,    31,     0,
      32,   254,     0,     0,   255,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,    37,
       0,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,   253,    44,   256,   212,     0,    32,   254,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,    37,     0,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,   253,
      44,   256,   476,     0,    32,   254,     0,     0,   255,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,    37,     0,     0,     0,     0,     0,    38,
      39,     0,    40,    41,    42,    43,   446,    44,   256,   251,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
     480,     0,     0,   251,     0,    32,     0,     0,    35,    36,
      37,     0,     0,     0,     0,     0,    38,    39,     0,    40,
      41,    42,    35,    36,    37,     0,     0,     0,     0,     0,
      38,    39,     0,    40,    41,    42,   508,     0,     0,   265,
       0,   195,     0,     0,     0,     0,     0,     0,     0,     0,
     511,     0,     0,    77,     0,   195,     0,     0,   196,   197,
     198,     0,     0,     0,     0,     0,   199,   200,     0,   201,
     202,   203,   196,   197,   198,   212,     0,    32,   254,     0,
     199,   200,     0,   201,   202,   203,     0,     0,     0,    77,
       0,   195,     0,     0,    35,    36,    37,     0,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,   196,   197,
     198,    77,     0,   195,     0,     0,   199,   200,   368,   201,
     202,   203,     0,     0,     0,   214,     0,   215,     0,     0,
     196,   197,   198,     0,     0,     0,     0,     0,   199,   200,
     371,   201,   202,   203,   216,   217,   218,    77,     0,   195,
       0,   388,   219,   220,     0,   221,   222,   223,     0,     0,
       0,    77,     0,   195,     0,     0,   196,   197,   198,     0,
       0,     0,     0,     0,   199,   200,   392,   201,   202,   203,
     196,   197,   198,   214,     0,   215,     0,     0,   199,   200,
     395,   201,   202,   203,     0,     0,     0,    77,     0,   195,
       0,     0,   216,   217,   218,     0,     0,     0,     0,   412,
     219,   220,     0,   221,   222,   223,   196,   197,   198,    77,
       0,   195,     0,     0,   199,   200,   416,   201,   202,   203,
       0,     0,     0,   212,     0,    32,     0,     0,   196,   197,
     198,     0,   437,     0,     0,     0,   199,   200,   419,   201,
     202,   203,    35,    36,    37,     0,     0,    77,     0,   195,
      38,    39,     0,    40,    41,    42,   448,     0,     0,     0,
       0,   486,     0,   487,     0,     0,   196,   197,   198,     0,
     488,     0,     0,     0,   199,   200,     0,   201,   202,   203,
     489,   490,   491,   214,     0,   215,     0,     0,   492,   493,
       0,   494,   495,   496,     0,     0,     0,    77,     0,   195,
       0,     0,   216,   217,   218,     0,     0,     0,     0,   538,
     219,   220,     0,   221,   222,   223,   196,   197,   198,    77,
       0,   195,     0,     0,   199,   200,   542,   201,   202,   203,
       0,     0,     0,   212,     0,    32,     0,     0,   196,   197,
     198,     0,     0,     0,     0,     0,   199,   200,   545,   201,
     202,   203,    35,    36,    37,   214,     0,   215,     0,     0,
      38,    39,     0,    40,    41,    42,     0,     0,     0,    77,
       0,   195,     0,     0,   216,   217,   218,     0,     0,     0,
       0,     0,   219,   220,     0,   221,   222,   223,   196,   197,
     198,   232,     0,   233,     0,     0,   199,   200,     0,   201,
     202,   203,     0,     0,     0,   486,     0,   487,     0,     0,
     234,   235,   236,     0,     0,     0,     0,     0,   237,   238,
       0,   239,   240,   241,   489,   490,   491,     0,     0,     0,
       0,     0,   492,   493,     0,   494,   495,   496,   299,     0,
     -82,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,   250,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,   361,   -82,
     -82,   -82,   -82,   250,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,    74,   -82,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,    75,   -82,
     -82,   -82,    74,   -82,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,   349,   -82,   -82,   -82,    74,   -82,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,   482,   -82,   -82,   -82,
      74,   -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,   -82,   -82,   -82,   -83,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -93,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,     0,     0,     0,     0,   -93,   -93,   -93,   -93,
     -71,     0,     0,   -71,   -71,   -71,   321,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   322,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -75,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -78,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -81,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -80,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -87,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -84,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -74,     0,     0,
     -74,   -74,   -74,   321,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   322,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
     -72,     0,     0,   -72,   -72,   -72,   321,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   322,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -73,     0,     0,   -73,   -73,   -73,   321,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   322,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,   -76,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -77,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -86,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,   -88,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -89,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,   -90,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -91,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,
       0,     0,     0,   -91,   -91,   -91,   -91,   -92,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -83,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -93,
     -83,   -83,   -83,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,     0,     0,   -71,   -93,
     -93,   -93,   -71,   -71,   -71,   105,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   106,     0,     0,     0,   -75,   -71,   -71,
     -71,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,   -78,   -75,   -75,   -75,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,   -81,   -78,   -78,   -78,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,   -79,   -81,   -81,   -81,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,   -80,   -79,   -79,   -79,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,   -87,   -80,   -80,   -80,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,   -85,   -87,   -87,   -87,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
     -84,   -85,   -85,   -85,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,   -74,
     -84,   -84,   -84,   -74,   -74,   -74,   105,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   106,     0,     0,     0,   -72,   -74,
     -74,   -74,   -72,   -72,   -72,   105,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   106,     0,     0,     0,   -73,   -72,   -72,
     -72,   -73,   -73,   -73,   105,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   106,     0,     0,     0,   -76,   -73,   -73,   -73,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,   -77,   -76,   -76,   -76,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,   -86,   -77,   -77,   -77,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,   -88,   -86,   -86,   -86,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,   -89,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,   -90,   -89,   -89,   -89,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
     -91,   -90,   -90,   -90,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,   -92,
     -91,   -91,   -91,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,   -92,
     -92,   -92,   -63,     0,     0,   318,   319,   320,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -66,     0,     0,   318,   319,
     320,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -67,     0,
       0,   318,   319,   320,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -64,     0,     0,   318,   319,   320,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -65,     0,     0,   318,   319,   320,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,   -68,     0,     0,
     318,   319,   320,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -69,     0,     0,   318,   319,   320,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -70,     0,     0,   318,   319,   320,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -62,
       0,     0,   -70,   -70,   -70,   -70,   311,   312,   313,   314,
     315,   316,   317,     0,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,     0,     0,     0,   -93,   -93,
     -93,   -93,   -71,   -71,   -71,   297,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   298,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,   -84,   -84,
     -84,   -84,   -74,   -74,   -74,   297,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   298,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -72,   -72,   -72,   297,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   298,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -73,   -73,   -73,   297,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   298,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,     0,   -91,   -91,
     -91,   -91,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,     0,     0,     0,   -92,   -92,
     -92,   -92,   294,   295,   296,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   294,   295,   296,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   294,   295,   296,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   294,   295,   296,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   294,   295,   296,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   294,   295,   296,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   294,   295,   296,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   294,   295,   296,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70
};

static const yytype_int16 yycheck[] =
{
      17,   165,   161,    20,   173,    32,     1,   161,    25,     4,
      90,     6,     8,     3,   148,   149,    71,     4,   182,     4,
       5,   250,     1,     9,     3,     9,     4,     9,    23,    24,
      25,   161,     4,     4,    30,   169,    31,    32,    45,    34,
      35,    36,   161,   177,    31,     0,     0,    74,    75,     3,
     184,    30,    38,    31,    38,    82,    38,    84,   161,    31,
      31,     6,    89,    90,     7,     8,     7,     8,     7,     8,
     299,     7,     7,     8,     7,     8,    10,     1,     6,     7,
       4,   161,     6,     7,   253,   165,    10,    30,     4,    30,
      30,    30,    28,    29,   323,    30,     4,    30,     7,    23,
      24,    25,   182,     6,     7,   160,   161,    31,    32,   164,
      34,    35,    36,    37,   194,    39,    40,     7,     8,    28,
      29,    28,    29,    30,   151,   180,   181,     3,     8,    46,
      47,    48,     4,     5,   161,   190,   191,    30,   165,   194,
      30,     4,     5,     1,   161,     3,     4,     6,     6,     7,
      30,     9,    10,     0,   161,   182,     3,    15,    16,    17,
      18,    19,    20,    21,     8,    23,    24,    25,   195,    27,
      28,    29,     6,    31,    32,   255,    34,    35,    36,    37,
      38,    39,    40,    27,    28,    29,    30,     7,   215,     8,
       7,   350,   272,   273,   274,   359,   350,     3,     0,     8,
     255,     3,     1,     4,     5,     4,   233,     6,    27,    28,
      29,    30,    29,    28,    29,    30,     8,   272,   273,   274,
     350,    30,     8,   250,    23,    24,    25,     6,     6,   256,
       7,   350,    31,    32,     6,    34,    35,    36,    30,     4,
     194,     6,     7,     7,    30,     0,     8,   350,     3,   256,
      27,    28,    29,     6,   281,     6,   283,     7,    23,    24,
      25,     4,     8,    27,    28,    29,    31,    32,    30,    34,
      35,    36,   299,   353,   354,   355,    30,   194,   305,   359,
     307,   510,    28,    29,    30,    32,     4,     5,    35,    36,
      37,     0,     8,    30,     3,   350,   323,     4,   353,   354,
     355,   255,   329,     0,   331,     4,     3,    38,   472,   478,
     469,   470,   471,    29,    30,   469,   470,   471,   272,   273,
     274,   485,   349,   350,   483,   484,     8,    74,    75,   483,
     484,   358,   359,   350,   361,    82,     7,    84,   255,   469,
     470,   471,    89,   350,     4,     5,    28,    29,    30,     8,
     469,   470,   471,   483,   484,   272,   273,   274,   105,   106,
      29,    30,     8,     8,   483,   484,   469,   470,   471,     8,
       7,    30,    27,    28,    29,    30,     0,   536,   537,     3,
     483,   484,   536,   537,    30,    30,    27,    28,    29,    30,
     470,    30,   472,     0,     0,     0,     3,     3,     3,   353,
     354,   355,    30,    30,   151,   485,   536,   537,     0,     0,
       0,     3,     3,     3,   469,   470,   471,   536,   537,     0,
       0,     0,     3,     3,     3,     7,    30,     0,   483,   484,
       3,    30,    30,   536,   537,   182,   353,   354,   355,     7,
       3,    30,   469,   470,   471,   472,    30,    30,   195,   196,
     197,   198,   469,   470,   471,   482,   483,   484,   485,     4,
     487,     7,   469,   470,   471,     7,   483,   484,   215,   216,
     217,   218,    30,    30,     7,     4,   483,   484,    30,    30,
      30,   536,   537,   510,     6,     6,   233,   234,   235,   236,
      30,   518,     1,   520,     6,     4,     6,     6,     6,     6,
       6,     6,     6,   250,     6,     6,    30,     7,     4,   536,
     537,    30,    30,    30,    23,    24,    25,    30,     4,   536,
     537,     4,    31,    32,     6,    34,    35,    36,     7,   536,
     537,    30,    30,    30,   281,    30,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,    30,    30,    30,    30,    30,   305,    30,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,    30,    30,    30,
      30,    30,   329,    30,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
      30,    30,    30,    30,    30,    30,     7,     1,    30,     3,
       4,   358,     6,     7,   361,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     7,    27,    28,    29,     7,    31,    32,    32,
      34,    35,    36,    37,    38,    39,    40,    30,    30,     7,
      30,     6,     8,     1,     6,     4,     4,    30,     6,    15,
      16,    17,    18,    19,    20,    21,    30,    30,    30,    30,
      30,    27,    28,    29,    30,    23,    24,    25,     3,    30,
      -1,    74,    75,    31,    32,    -1,    34,    35,    36,    82,
      -1,    84,     1,    -1,     3,     4,    89,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,     4,   482,     6,    -1,   485,    -1,
     487,    -1,   489,   490,   491,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,   151,    -1,
      30,    31,    32,   510,    34,    35,    36,    -1,    -1,    -1,
      -1,   518,    -1,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   182,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,
      -1,     6,   195,   196,   197,   198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,   215,   216,   217,   218,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,   234,   235,   236,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,   250,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,   281,    -1,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,    -1,    -1,    -1,
      -1,    -1,   305,    -1,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,    -1,    -1,    -1,    -1,    -1,   329,    -1,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,    -1,    -1,    -1,    -1,    -1,    -1,
      32,     1,    -1,     3,     4,   358,     6,     7,   361,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,   104,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,     1,   151,
      -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,   482,
      -1,    -1,   485,    -1,   487,    -1,   489,   490,   491,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
     182,    34,    35,    36,    -1,    -1,    -1,   510,    -1,    -1,
      -1,    -1,    -1,   195,    -1,   518,    -1,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,   233,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,   250,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      -1,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    -1,    -1,   299,    -1,    -1,
      -1,    -1,    -1,   305,    -1,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,    -1,
      -1,   323,    -1,    -1,    -1,    -1,    -1,   329,    -1,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    -1,    -1,     1,    -1,     3,     4,    32,
       6,     7,    -1,     9,    10,    -1,   358,    -1,    -1,   361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,   101,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   151,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
     482,    -1,    -1,   485,    -1,   487,    -1,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,   182,
      34,    35,    36,    37,    38,    39,    40,    -1,   510,    -1,
      -1,    -1,   195,    -1,    -1,    -1,   518,    -1,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
     233,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,   250,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,    -1,    -1,    -1,    -1,    -1,   299,    -1,    -1,    -1,
      -1,    -1,   305,    -1,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,    -1,    -1,    -1,     1,    -1,
     323,     4,    -1,     6,    -1,    -1,   329,    32,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    -1,
      23,    24,    25,    -1,     4,    -1,     6,    -1,    31,    32,
      -1,    34,    35,    36,    -1,   358,    -1,    -1,   361,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    74,
      75,    31,    32,    33,    34,    35,    36,    82,    -1,    84,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      32,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    84,    -1,    -1,    -1,   151,    89,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,   182,    -1,   482,
      -1,    -1,   485,    -1,   487,    -1,    -1,    23,    24,    25,
     195,    27,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    -1,    39,    40,    -1,    -1,   510,     1,   151,
     215,     4,    32,     6,    -1,   518,    -1,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   233,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
     182,    34,    35,    36,    -1,   250,    15,    16,    17,    18,
      19,    20,    21,   195,    74,    75,    -1,    -1,    27,    28,
      29,    30,    82,    -1,    84,     4,    -1,     6,    -1,    89,
      -1,    -1,    92,   215,    13,    -1,   281,    -1,   283,   284,
     285,   286,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,   233,    31,    32,   299,    34,    35,    36,    -1,    -1,
     305,    -1,   307,   308,   309,   310,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,     4,   323,     6,
      -1,    -1,    -1,    -1,   329,    -1,   331,   332,   333,   334,
      -1,   151,    -1,    -1,    -1,    -1,    23,    24,    25,   281,
      -1,   283,   284,   285,    31,    32,    -1,    34,    35,    36,
      -1,    32,     4,   358,     6,    -1,   361,   299,    -1,    -1,
      -1,    -1,   182,   305,    -1,   307,   308,   309,    -1,    -1,
      -1,    23,    24,    25,    -1,   195,    -1,    -1,    30,    31,
      32,   323,    34,    35,    36,    -1,    -1,   329,    -1,   331,
     332,   333,    -1,    74,    75,   215,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    89,     1,
      -1,     3,     4,   233,     6,     7,   358,     9,    10,   361,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
     250,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   281,    -1,   283,   284,    27,    28,    29,    30,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,   482,    -1,   299,
     485,    -1,   487,    -1,    -1,   305,     7,   307,   308,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,   182,    -1,   323,    -1,   510,    27,    28,    29,   329,
      -1,   331,   332,   518,   195,   520,   521,   522,   523,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,     7,   215,     9,    10,    -1,   358,    -1,
     482,   361,    -1,   485,    -1,   487,    -1,    -1,    -1,    23,
      24,    25,   233,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,    -1,    39,    40,    -1,   510,   250,
      -1,    -1,    -1,    -1,    -1,    -1,   518,    -1,   520,   521,
     522,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     281,    -1,   283,    23,    24,    25,    -1,    -1,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,   299,    39,
      40,    -1,     1,    -1,   305,     4,   307,     6,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,    -1,    23,    24,    25,    -1,   329,    -1,
     331,    -1,    31,    32,    -1,    34,    35,    36,    37,    -1,
      39,    40,   482,    -1,     4,   485,     6,   487,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,
     361,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
     510,    31,    32,    33,    34,    35,    36,    -1,   518,    -1,
     520,   521,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,   482,    -1,    -1,   485,    -1,   487,    23,    24,    25,
      -1,    -1,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,   510,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   518,     1,   520,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      23,    24,    25,    27,    28,    29,    30,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,     1,    39,    40,     4,    -1,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    37,     1,    39,    40,     4,    -1,     6,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    36,    37,     1,
      39,    40,     4,    -1,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    37,     1,    39,    40,     4,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    34,    35,    36,     1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    23,    24,    25,     4,    -1,     6,     7,    -1,
      31,    32,    -1,    34,    35,    36,    -1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    36,    23,    24,
      25,     4,    -1,     6,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    23,    24,    25,     4,    -1,     6,
      -1,    30,    31,    32,    -1,    34,    35,    36,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      23,    24,    25,     4,    -1,     6,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,     4,    -1,     6,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,    -1,    34,    35,    36,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,
      25,    -1,    13,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    23,    24,    25,    -1,    -1,     4,    -1,     6,
      31,    32,    -1,    34,    35,    36,    13,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    23,    24,    25,    -1,
      13,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      23,    24,    25,     4,    -1,     6,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    -1,    -1,    -1,     4,    -1,     6,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,    -1,    34,    35,    36,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    23,    24,    25,     4,    -1,     6,    -1,    -1,
      31,    32,    -1,    34,    35,    36,    -1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    36,    23,    24,
      25,     4,    -1,     6,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    36,     6,    -1,
       8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,     6,    27,
      28,    29,    30,    11,    12,    13,    14,    15,    16,    17,
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
       7,    27,    28,    29,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,     7,
      27,    28,    29,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,     8,    -1,    -1,    11,    12,    13,    -1,    15,
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
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,     8,
      -1,    -1,    27,    28,    29,    30,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
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
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    42,    43,    44,    45,    47,    49,     4,     5,
       0,    44,     6,     7,     4,     1,     3,    30,    48,     7,
      30,     4,     5,    10,    52,    30,    52,     8,     4,     1,
       3,     4,     6,     7,     9,    23,    24,    25,    31,    32,
      34,    35,    36,    37,    39,    40,    45,    46,    51,    52,
      53,    54,    55,    57,    58,    59,    60,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    52,     3,     8,     9,
      38,    56,     4,     5,     6,    26,     1,     4,    62,    69,
      69,    69,     6,     6,     6,    57,    53,    53,    53,     6,
       6,     7,    29,    28,    27,    15,    16,    17,    18,    19,
      20,    21,    11,    12,    13,    14,    22,     4,     5,     3,
       1,    51,     4,    30,    62,    71,    13,    62,    30,    30,
      33,    62,     4,    33,    62,     1,    62,     1,    46,    61,
      62,    64,    65,    66,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    68,    69,    69,     8,    50,     4,     4,
       5,     8,    30,     4,    31,    30,    30,    30,    30,    30,
      30,    30,     7,     8,    30,     7,     3,    50,    50,     4,
      62,    51,    46,    51,    51,     1,    61,     4,     5,    50,
      56,    30,     7,    50,     4,    51,    51,     1,    61,    50,
      30,    30,    51,    51,    10,     6,    23,    24,    25,    31,
      32,    34,    35,    36,    63,    64,    65,    66,    67,    68,
      69,    70,     4,     7,     4,     6,    23,    24,    25,    31,
      32,    34,    35,    36,    63,    64,    65,    66,    67,    68,
      69,    70,     4,     6,    23,    24,    25,    31,    32,    34,
      35,    36,    63,    64,    65,    66,    67,    68,    69,    70,
       6,     4,     7,     1,     7,    10,    40,    52,    54,    55,
      57,    58,    59,    60,    62,     4,    46,    62,     7,     8,
       1,     9,    45,    46,    51,    53,     1,    62,    69,    69,
      69,     6,     6,     6,    29,    28,    27,    15,    16,    17,
      18,    19,    20,    21,    11,    12,    13,    14,    22,     6,
       1,    62,    69,    69,    69,     6,     6,     6,    29,    28,
      27,    15,    16,    17,    18,    19,    20,    21,    11,    12,
      13,    14,    22,     6,     1,    62,    69,    69,    69,     6,
       6,     6,    29,    28,    27,    15,    16,    17,    18,    19,
      20,    21,    11,    12,    13,    14,    22,    30,    71,    26,
      56,     1,     9,    45,    46,    51,    53,    57,     6,     6,
       7,    26,     9,    53,    53,    53,    30,    30,    33,    62,
       4,    33,    62,    64,    65,    66,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    69,    69,    30,    71,
      30,    30,    33,    62,     4,    33,    62,    64,    65,    66,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      69,    69,    30,    71,    30,    30,    33,    62,     4,    33,
      62,    64,    65,    66,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    68,    69,    69,    30,    13,    62,    51,
       9,    53,    53,    53,     1,    62,     1,    61,    13,    62,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,     4,    31,    30,
      30,    30,     7,     4,    31,    51,     4,    46,    51,    51,
       1,    61,    26,    56,    30,     7,     4,     6,    13,    23,
      24,    25,    31,    32,    34,    35,    36,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    51,    51,     1,    61,
       6,     1,    62,     4,    31,    69,    69,    69,     6,     6,
       6,    29,    28,    27,    15,    16,    17,    18,    19,    20,
      21,    11,    12,    13,    14,    22,    30,    30,    30,    71,
      30,    30,    33,    62,     4,    33,    62,    64,    65,    66,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      69,    69,    51,    51,    30,    30,    30,    30,    30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    46,    47,    47,    47,    48,    48,    48,    48,    48,
      48,    49,    49,    50,    50,    50,    51,    51,    51,    51,
      51,    52,    53,    53,    53,    53,    53,    54,    54,    54,
      54,    54,    55,    56,    57,    57,    58,    59,    59,    59,
      59,    60,    61,    61,    61,    61,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     4,     3,
       4,     4,     5,     4,     5,     2,     6,     3,     8,     7,
       7,     2,     3,     0,     4,     5,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     2,     2,     5,     5,     7,
       5,     3,     1,     1,     1,     2,     2,     9,     7,     5,
       9,     1,     1,     1,     2,     2,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     2,
       2,     2,     1,     1,     3,     3,     4,     3,     4,     4,
       4,     4,     4,     1,     1,     3
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
#line 3586 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 62 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root, -1, false);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3595 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 66 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root, -1, false);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 3605 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 74 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 3613 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 77 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 3621 "src/parser.c"
    break;

  case 7: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 83 "src/parser.y"
                                     {
			char str[2*MAX_BUFFER_SIZE];
			if(!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			sprintf(str, "%s %s (scope %u)", (yyvsp[-2].string), (yyvsp[-1].string), scope->stack[0]);

			(yyval.state) = new_node(str, root, scope->stack[0], false);
		}
#line 3638 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 96 "src/parser.y"
                                          {
			char str[2*MAX_BUFFER_SIZE];
			
			if(!add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			sprintf(str,"%s LIST %s (scope %u)", (yyvsp[-3].string), (yyvsp[-1].string), scope->stack[0]);

			(yyval.state) = new_node(str, root, scope->stack[0], false);
		}
#line 3656 "src/parser.c"
    break;

  case 9: /* Definition: IDENTIFIER ATT Expression  */
#line 112 "src/parser.y"
                                          {
			(yyval.state) = new_node("=", root, scope->stack[0], false);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-2].string));

			add_child((yyval.state), new_node(str, root, scope->stack[0], true));
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
#line 3689 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT MIN NUM_CONST  */
#line 141 "src/parser.y"
                                             {
			(yyval.state) = new_node("=", root, scope->stack[0], false);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));

			add_child((yyval.state), new_node(str, root, scope->stack[0], true));
			sprintf(str, "-%lf", (yyvsp[0].num));

			add_child((yyval.state), new_node(str, root, scope->stack[0], false));

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
#line 3724 "src/parser.c"
    break;

  case 11: /* Definition: IDENTIFIER ATT MIN IDENTIFIER  */
#line 172 "src/parser.y"
                                              {
			(yyval.state) = new_node("=", root, scope->stack[0], false);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));

			add_child((yyval.state), new_node(str, root, scope->stack[0], true));
			add_child((yyval.state), new_node("-", root, scope->stack[0], false));

			add_child((yyval.state)->children[1], new_node((yyvsp[0].string), root, scope->stack[0], true));

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
#line 3767 "src/parser.c"
    break;

  case 12: /* FunctionDefinition: FunctionHead LP FunctionArgs RP CompStatement  */
#line 213 "src/parser.y"
                                                 {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false);

		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));

		decrease_depth_scope(scope);
	}
#line 3781 "src/parser.c"
    break;

  case 13: /* FunctionDefinition: FunctionHead LP RP CompStatement  */
#line 223 "src/parser.y"
                                        {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false);
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

		push_arg_to_arglist(s_table, "None", last_f);
	}
#line 3794 "src/parser.c"
    break;

  case 14: /* FunctionDefinition: FunctionHead LP error RP CompStatement  */
#line 232 "src/parser.y"
                                               {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false);
		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);
	}
#line 3805 "src/parser.c"
    break;

  case 15: /* FunctionArgs: TYPE IDENTIFIER  */
#line 241 "src/parser.y"
                        {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false);

		add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], false));

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, (yyvsp[-1].string), last_f);
	}
#line 3822 "src/parser.c"
    break;

  case 16: /* FunctionArgs: TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 254 "src/parser.y"
                                                      {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false);

		add_child((yyval.state), new_node((yyvsp[-5].string), root, scope->stack[0], false));
		add_child((yyval.state), new_node((yyvsp[-2].string), root, scope->stack[0], false));

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
#line 3848 "src/parser.c"
    break;

  case 17: /* FunctionArgs: TYPE LIST IDENTIFIER  */
#line 276 "src/parser.y"
                             {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false);

		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");
		add_child((yyval.state), new_node(str, root, scope->stack[0], false));

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), str, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, str, last_f);	
	}
#line 3869 "src/parser.c"
    break;

  case 18: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 293 "src/parser.y"
                                                                {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false);

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, (yyvsp[-7].string));
		strcat(arg_1," LIST ");
		add_child((yyval.state), new_node(arg_1, root, scope->stack[0], false));

		if(!add_row_symbol_table(s_table, (yyvsp[-5].string), arg_1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_1, last_f);

		char arg_2[MAX_BUFFER_SIZE];
		strcpy(arg_2, (yyvsp[-3].string));
		strcat(arg_2," LIST ");
		add_child((yyval.state), new_node(arg_2, root, scope->stack[0], false));

		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), arg_2, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_2, last_f);
	}
#line 3903 "src/parser.c"
    break;

  case 19: /* FunctionArgs: TYPE IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 323 "src/parser.y"
                                                           {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false);

		add_child((yyval.state), new_node((yyvsp[-6].string), root, scope->stack[0], false));
		if(!add_row_symbol_table(s_table, (yyvsp[-5].string), (yyvsp[-6].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, (yyvsp[-6].string), last_f);

		char arg_2[MAX_BUFFER_SIZE];
		strcpy(arg_2, (yyvsp[-3].string));
		strcat(arg_2," LIST ");
		add_child((yyval.state), new_node(arg_2, root, scope->stack[0], false));

		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), arg_2, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_2, last_f);
	}
#line 3933 "src/parser.c"
    break;

  case 20: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 349 "src/parser.y"
                                                           {
		(yyval.state) = new_node("FunctionParameters", root, scope->stack[0], false);

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, (yyvsp[-6].string));
		strcat(arg_1," LIST ");
		add_child((yyval.state), new_node(arg_1, root, scope->stack[0], false));

		if(!add_row_symbol_table(s_table, (yyvsp[-4].string), arg_1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-4].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_1, last_f);

		add_child((yyval.state), new_node((yyvsp[-2].string), root, scope->stack[0], false));

		if(!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f);
	}
#line 3964 "src/parser.c"
    break;

  case 21: /* FunctionHead: TYPE IDENTIFIER  */
#line 378 "src/parser.y"
                        {
		char str[MAX_BUFFER_SIZE];
		strcpy(str, (yyvsp[0].string));
		strcat(str, "()");

		(yyval.state) = new_node(str, root, scope->stack[0], false);

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, false))
		{
			printf("\033[91mSemantic error at line %d, column %d: Function %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);
	}
#line 3986 "src/parser.c"
    break;

  case 22: /* FunctionHead: TYPE LIST IDENTIFIER  */
#line 396 "src/parser.y"
                             {
		char f_name[MAX_BUFFER_SIZE];
		strcpy(f_name, (yyvsp[0].string));
		strcat(f_name, "()");

		(yyval.state) = new_node(f_name, root, scope->stack[0], false);

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
#line 4012 "src/parser.c"
    break;

  case 23: /* ParamList: %empty  */
#line 420 "src/parser.y"
             {
			(yyval.state) = new_node("ParamList", root, scope->stack[0], false);
		}
#line 4020 "src/parser.c"
    break;

  case 24: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 424 "src/parser.y"
                                              {
			(yyval.state) = new_node("ParamList", root, scope->stack[0], false);


			add_child((yyval.state), new_node((yyvsp[-2].string), root, scope->stack[0], false));
			add_child((yyval.state), (yyvsp[0].state));

			if (!add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			push_arg_to_arglist(s_table, (yyvsp[-2].string), last_f);
		}
#line 4040 "src/parser.c"
    break;

  case 25: /* ParamList: COM TYPE LIST IDENTIFIER ParamList  */
#line 440 "src/parser.y"
                                                   {
			(yyval.state) = new_node("ParamList", root, scope->stack[0], false);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");
			add_child((yyval.state), new_node(str, root, scope->stack[0], false));

			add_child((yyval.state), (yyvsp[0].state));


			if(!add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string));
				first_pass_sematic_error_found = true;
			}

			push_arg_to_arglist(s_table, str, last_f);
		}
#line 4064 "src/parser.c"
    break;

  case 26: /* Statement: CompStatement  */
#line 464 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 4070 "src/parser.c"
    break;

  case 27: /* Statement: JmpStatement  */
#line 465 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 4076 "src/parser.c"
    break;

  case 28: /* Statement: SelStatement  */
#line 466 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 4082 "src/parser.c"
    break;

  case 29: /* Statement: ItStatement  */
#line 467 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 4088 "src/parser.c"
    break;

  case 30: /* Statement: ExpStatement  */
#line 468 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 4094 "src/parser.c"
    break;

  case 31: /* CompStatement: LCB StatementExp  */
#line 473 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 4102 "src/parser.c"
    break;

  case 32: /* StatementExp: RCB  */
#line 479 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 4108 "src/parser.c"
    break;

  case 33: /* StatementExp: Declaration StatementExp  */
#line 480 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4118 "src/parser.c"
    break;

  case 34: /* StatementExp: Definition StatementExp  */
#line 485 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4128 "src/parser.c"
    break;

  case 35: /* StatementExp: Statement StatementExp  */
#line 490 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4138 "src/parser.c"
    break;

  case 36: /* StatementExp: error RCB  */
#line 495 "src/parser.y"
                          {yyerrok; (yyval.state) = NULL;}
#line 4144 "src/parser.c"
    break;

  case 37: /* SelStatement: IfHead LP Expression RP Statement  */
#line 500 "src/parser.y"
                                                  {
			(yyval.state) = new_node("IF", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4155 "src/parser.c"
    break;

  case 38: /* SelStatement: IfHead LP Expression RP Definition  */
#line 506 "src/parser.y"
                                                     {
			(yyval.state) = new_node("IF", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4166 "src/parser.c"
    break;

  case 39: /* SelStatement: IfHead LP Expression RP Statement ElseHead Statement  */
#line 513 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("IF_ELSE", root, scope->stack[0], false);

			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
		}
#line 4180 "src/parser.c"
    break;

  case 40: /* SelStatement: IfHead LP error RP Statement  */
#line 524 "src/parser.y"
                                         {
		(yyval.state) = new_node("IF", root, scope->stack[0], false);
		add_child((yyval.state), (yyvsp[0].state));
	}
#line 4189 "src/parser.c"
    break;

  case 41: /* SelStatement: error ElseHead Statement  */
#line 528 "src/parser.y"
                                     {(yyval.state)=NULL;decrease_depth_scope(scope);yyerrok;}
#line 4195 "src/parser.c"
    break;

  case 42: /* IfHead: IF  */
#line 531 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 4203 "src/parser.c"
    break;

  case 43: /* ElseHead: ELSE  */
#line 537 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 4212 "src/parser.c"
    break;

  case 44: /* ExpStatement: SEMI  */
#line 544 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 4218 "src/parser.c"
    break;

  case 45: /* ExpStatement: Expression SEMI  */
#line 545 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 4226 "src/parser.c"
    break;

  case 46: /* JmpStatement: RET ExpStatement  */
#line 551 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[0].state));

			if (!check_type_subtree((yyval.state), s_table, scope))
			{
				printf("\033[91mSemantic error at line %d, column %d: Incompatible return type.\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column);
				first_pass_sematic_error_found = true;
			}

		}
#line 4242 "src/parser.c"
    break;

  case 47: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 565 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4255 "src/parser.c"
    break;

  case 48: /* ItStatement: ForHead LP ExpAtt SEMI error RP Statement  */
#line 574 "src/parser.y"
                                                          {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
			yyerrok;
		}
#line 4268 "src/parser.c"
    break;

  case 49: /* ItStatement: ForHead LP error RP Statement  */
#line 583 "src/parser.y"
                                              {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[0].state));
			
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 4280 "src/parser.c"
    break;

  case 50: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI error RP Statement  */
#line 591 "src/parser.y"
                                                                      {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 4293 "src/parser.c"
    break;

  case 51: /* ForHead: FOR  */
#line 602 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 4301 "src/parser.c"
    break;

  case 52: /* ExpAtt: Expression  */
#line 608 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 4309 "src/parser.c"
    break;

  case 53: /* ExpAtt: Definition  */
#line 612 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 4317 "src/parser.c"
    break;

  case 54: /* ExpAtt: error SEMI  */
#line 616 "src/parser.y"
                   {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 4326 "src/parser.c"
    break;

  case 55: /* ExpAtt: error COM  */
#line 621 "src/parser.y"
                  {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 4335 "src/parser.c"
    break;

  case 56: /* Expression: LogicalOrExpression  */
#line 629 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 4341 "src/parser.c"
    break;

  case 57: /* LogicalOrExpression: LogicalAndExpression  */
#line 633 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 4347 "src/parser.c"
    break;

  case 58: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 634 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 4358 "src/parser.c"
    break;

  case 59: /* LogicalAndExpression: EqualityExpression  */
#line 643 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 4364 "src/parser.c"
    break;

  case 60: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 644 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4374 "src/parser.c"
    break;

  case 61: /* EqualityExpression: RelationalExpression  */
#line 652 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 4380 "src/parser.c"
    break;

  case 62: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 653 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4390 "src/parser.c"
    break;

  case 63: /* RelationalExpression: AdditiveExpression  */
#line 662 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 4396 "src/parser.c"
    break;

  case 64: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 663 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root, scope->stack[0], false);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 4406 "src/parser.c"
    break;

  case 65: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 668 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root, scope->stack[0], false);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4416 "src/parser.c"
    break;

  case 66: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 673 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root, scope->stack[0], false);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4426 "src/parser.c"
    break;

  case 67: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 678 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root, scope->stack[0], false);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4436 "src/parser.c"
    break;

  case 68: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 683 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root, scope->stack[0], false);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4446 "src/parser.c"
    break;

  case 69: /* RelationalExpression: RelationalExpression MAP AdditiveExpression  */
#line 688 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">>", root, scope->stack[0], false);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4456 "src/parser.c"
    break;

  case 70: /* RelationalExpression: RelationalExpression FIL AdditiveExpression  */
#line 693 "src/parser.y"
                                                        {
				(yyval.state) = new_node("<<", root, scope->stack[0], false);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4466 "src/parser.c"
    break;

  case 71: /* AdditiveExpression: MultiplicativeExpression  */
#line 701 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 4472 "src/parser.c"
    break;

  case 72: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 702 "src/parser.y"
                                                                 {
			(yyval.state) = new_node("+", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4482 "src/parser.c"
    break;

  case 73: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 707 "src/parser.y"
                                                        {
			(yyval.state) = new_node("-", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4492 "src/parser.c"
    break;

  case 74: /* AdditiveExpression: AdditiveExpression TWD MultiplicativeExpression  */
#line 713 "src/parser.y"
                                                          {
			(yyval.state) = new_node(":", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4502 "src/parser.c"
    break;

  case 75: /* MultiplicativeExpression: UnaryExpression  */
#line 721 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 4508 "src/parser.c"
    break;

  case 76: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 722 "src/parser.y"
                                                             {
			(yyval.state) = new_node("*", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4518 "src/parser.c"
    break;

  case 77: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 727 "src/parser.y"
                                                             {
			(yyval.state) = new_node("/", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4528 "src/parser.c"
    break;

  case 78: /* UnaryExpression: PrimaryExpression  */
#line 735 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 4534 "src/parser.c"
    break;

  case 79: /* UnaryExpression: TNR UnaryExpression  */
#line 736 "src/parser.y"
                                    {
			(yyval.state) = new_node("!", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4543 "src/parser.c"
    break;

  case 80: /* UnaryExpression: HD UnaryExpression  */
#line 740 "src/parser.y"
                                   {
			(yyval.state) = new_node("?", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4552 "src/parser.c"
    break;

  case 81: /* UnaryExpression: TR UnaryExpression  */
#line 744 "src/parser.y"
                                   {
			(yyval.state) = new_node("%", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4561 "src/parser.c"
    break;

  case 82: /* PrimaryExpression: IDENTIFIER  */
#line 750 "src/parser.y"
                           {
			(yyval.state) = new_node((yyvsp[0].string), root, scope->stack[0], true);
			if (!variable_was_declared(s_table, scope, (yyvsp[0].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", (yyvsp[0].string), (yylsp[0]).first_line, (yylsp[0]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
#line 4578 "src/parser.c"
    break;

  case 83: /* PrimaryExpression: NUM_CONST  */
#line 763 "src/parser.y"
                      {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", (yyvsp[0].num));
			(yyval.state) = new_node(str, root, scope->stack[0], false);
		}
#line 4588 "src/parser.c"
    break;

  case 84: /* PrimaryExpression: LP Expression RP  */
#line 769 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root, scope->stack[0], false); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4597 "src/parser.c"
    break;

  case 85: /* PrimaryExpression: LP error RP  */
#line 774 "src/parser.y"
                            {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 4606 "src/parser.c"
    break;

  case 86: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 779 "src/parser.y"
                                        {
			(yyval.state) = new_node("FunctionCall", root, scope->stack[0], false);
			add_child((yyval.state), new_node((yyvsp[-3].string), root, scope->stack[0], true));
			add_child((yyval.state), (yyvsp[-1].state));

			if (!variable_was_declared(s_table, scope, (yyvsp[-3].string))) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Function %s was not declared, at ln %d col %d.", (yyvsp[-3].string), (yylsp[-3]).first_line, (yylsp[-3]).first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
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
			}

		}
#line 4676 "src/parser.c"
    break;

  case 87: /* PrimaryExpression: IDENTIFIER LP RP  */
#line 844 "src/parser.y"
                                 {
			(yyval.state) = new_node("FunctionCall", root, scope->stack[0], false);
			add_child((yyval.state), new_node((yyvsp[-2].string), root, scope->stack[0], true));
			add_child((yyval.state), new_node("", root, scope->stack[0], false));

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
#line 4727 "src/parser.c"
    break;

  case 88: /* PrimaryExpression: WRITE LP STR RP  */
#line 890 "src/parser.y"
                                {
			(yyval.state) = new_node("write_call", root, scope->stack[0], false);
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], true));

		}
#line 4737 "src/parser.c"
    break;

  case 89: /* PrimaryExpression: WRITE LP Expression RP  */
#line 895 "src/parser.y"
                                   {
			(yyval.state) = new_node("write_call", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4746 "src/parser.c"
    break;

  case 90: /* PrimaryExpression: READ LP IDENTIFIER RP  */
#line 899 "src/parser.y"
                                      {
			(yyval.state) = new_node("read_call", root, scope->stack[0], false);
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], true));
		}
#line 4755 "src/parser.c"
    break;

  case 91: /* PrimaryExpression: WRITE_LN LP STR RP  */
#line 903 "src/parser.y"
                                    {
			(yyval.state) = new_node("write_ln_call", root, scope->stack[0], false);
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], false));
		}
#line 4764 "src/parser.c"
    break;

  case 92: /* PrimaryExpression: WRITE_LN LP Expression RP  */
#line 907 "src/parser.y"
                                           {
			(yyval.state) = new_node("write_ln_call", root, scope->stack[0], false);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4773 "src/parser.c"
    break;

  case 93: /* PrimaryExpression: NIL  */
#line 912 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root, scope->stack[0], false);}
#line 4779 "src/parser.c"
    break;

  case 94: /* Params: Expression  */
#line 916 "src/parser.y"
                   {
		(yyval.state) = new_node("Args", root, scope->stack[0], false);
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 4789 "src/parser.c"
    break;

  case 95: /* Params: Params COM Expression  */
#line 922 "src/parser.y"
                              {
		(yyval.state) = new_node("Args", root, scope->stack[0], false);
		add_child((yyval.state), (yyvsp[-2].state)); 
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 4800 "src/parser.c"
    break;


#line 4804 "src/parser.c"

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

#line 930 "src/parser.y"

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
