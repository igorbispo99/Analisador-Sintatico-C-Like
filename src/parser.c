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
#define YYLAST   9354

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  565

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
     454,   460,   461,   466,   471,   476,   481,   487,   494,   505,
     509,   512,   518,   525,   526,   532,   546,   555,   564,   572,
     583,   589,   593,   597,   605,   609,   610,   619,   620,   628,
     629,   638,   639,   644,   649,   654,   659,   664,   669,   677,
     678,   683,   689,   697,   698,   703,   711,   712,   716,   720,
     726,   739,   745,   750,   755,   820,   866,   871,   875,   879,
     883,   888,   892,   898
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

#define YYPACT_NINF (-246)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      63,   169,    26,    71,    72,    76,   131,    15,   249,    66,
    -246,   227,    12,   267,   310,   321,    93,    89,   290,     8,
     123,  5777,   291,    93,   133,   113,    -5,   347,   972,    33,
    5817,   296,  7376,  7376,  7376,  8126,  8145,   144,   158,   173,
     186,   202,   122,  5777,  5777,  5777,  5857,   307,  5897,   209,
    5937,  5977,  6017,   215,   218,    34,   171,   154,  2008,  4698,
    8164,  8183,  8202,   309,   349,   243,   331,  1110,  6974,   244,
     257,  1423,  1894,   236,  7524,   241,  8221,  8240,  8259,  1821,
     269,  2015,  6057,   333,   342,   343,   213,   468,  6097,  7376,
    7376,  7376,  7376,  7376,  7376,  7376,  7376,  7376,  7376,  7376,
    7376,  7376,  7376,  7376,   129,   271,   351,   263,  6137,   274,
    8278,   136,   141,    19,  6177,  8297,  8316,   265,   278,   302,
     332,   334,   335,   336,    13,   361,   379,   380,   200,   168,
    5058,  4778,  4818,  4858,  4898,  4938,  4978,  5018,  8335,  8354,
    8373,  8392,  8411,   294,   358,   129,   129,   385,  7398,  8430,
    6217,  6257,  8449,  8468,  8487,  8506,  8525,  6974,  7011,   383,
    6974,   506,   353,   362,   381,   129,   161,  6297,  6337,  4697,
    6377,    29,   403,   129,   408,   384,  6974,  6974,   520,   386,
     129,  6417,  6457,    55,   404,   405,  6974,  6974,  6497,  6537,
    6577,   914,  7412,  7412,  7412,  8744,  8764,   407,   427,   430,
     -12,   110,     1,  5096,  9184,  8784,  8804,  8824,  7597,  6617,
    7479,  1232,  7398,  7398,  7398,  7619,  7642,   431,   436,   437,
     234,   176,   159,  1500,  8547,  7665,  7688,  7711,  2857,  1400,
    7434,  7434,  7434,  2897,  2937,   439,   440,   452,  4737,  4577,
    1001,  4417,  4097,  2977,  3017,  3057,  2048,  7549,  6657,   263,
    4777,  6697,  7107,  4817,  4857,   454,  4897,  4937,  4977,   455,
     458,  7499,   441,   443,   447,    -3,  6737,  6577,  6577,  6577,
    6777,   448,   456,  8844,  8864,  8884,  7122,   472,  7144,  7412,
    7412,  7412,  7412,  7412,  7412,  7412,  7412,  7412,  7412,  7412,
    7412,  7412,  7412,  7412,  7158,   460,   464,  7734,  7757,  7780,
    7180,   481,  7194,  7398,  7398,  7398,  7398,  7398,  7398,  7398,
    7398,  7398,  7398,  7398,  7398,  7398,  7398,  7398,  7216,   465,
     471,  3097,  3137,  3177,  7230,   484,  7252,  7434,  7434,  7434,
    7434,  7434,  7434,  7434,  7434,  7434,  7434,  7434,  7434,  7434,
    7434,  7434,  8904,   205,  7266,  7048,    10,  5017,  6697,  6697,
    6697,  5057,  5097,  1463,  1547,  5137,  7290,  6817,  6857,  6897,
    6937,  8924,  8944,   478,   479,   483,   489,   490,   320,   259,
    5136,  9204,  9224,  9244,  9264,  9284,  9304,  9324,  8964,  8984,
    9004,  9024,  9044,  7803,   210,  7826,  7849,   493,   505,   509,
     516,   517,   194,   182,  8724,  8570,  8593,  8616,  8639,  8662,
    8685,  8708,  7872,  7895,  7918,  7941,  7964,  3217,   223,  3257,
    3297,   518,   523,   527,   528,   529,  4617,  1775,  4457,  4137,
    4177,  4217,  4257,  4297,  4337,  4377,  3337,  3377,  3417,  3457,
    3497,  9064,    20,   491,  5177,  5217,  5257,  5297,  5337,   530,
     531,   100,   504,    21,   532,  9084,  9104,  9124,  9144,  9164,
    7987,  8010,  8033,  8056,  8079,  8102,  3537,  3577,  3617,  3657,
    3697,  3737,   507,   556,  7048,  7085,  7048,  1616,   534,   535,
    5377,  7573,  5417,  4697,  5457,   103,   559,  7304,  7048,  7048,
    1660,    77,  1736,    23,  7448,  7448,  7448,   867,  1932,   561,
     563,   564,  5497,  4657,  4497,   662,  1191,  3777,  1972,  2097,
    2137,  5537,  5577,   111,   542,  7326,   544,   551,  5617,  5657,
    2177,  2217,  2257,  7340,   578,  7362,  7448,  7448,  7448,  7448,
    7448,  7448,  7448,  7448,  7448,  7448,  7448,  7448,  7448,  7448,
    7448,  7048,  7048,  2297,   235,  2337,  2377,   557,   558,   560,
     565,   569,  4537,   787,  1317,  3817,  3857,  3897,  3937,  3977,
    4017,  4057,  2417,  2457,  2497,  2537,  2577,  5697,  5737,  2617,
    2657,  2697,  2737,  2777,  2817
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
       0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,  -246,   533,    11,   -10,  -246,  -246,  -246,  -133,
     673,   -16,   -35,    18,   114,  -167,     2,   119,   177,   183,
    -156,   -26,  1584,  1540,  1399,  1231,  1084,   766,    91,   446,
    -245
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
      22,   343,   176,    75,    66,   172,   357,    63,    83,    84,
      85,     5,   163,   164,     5,    15,    24,   279,   -54,   435,
     159,    12,   184,   150,   462,   468,    10,   508,   281,   -57,
     -57,   -57,   175,    67,    73,    67,   159,    74,   -14,   191,
     179,   -54,    16,   160,    82,   111,   114,   185,    67,   384,
     151,   463,   469,   118,   509,   121,   192,   193,   194,   177,
     123,   127,   264,    89,   195,   196,     1,   197,   198,   199,
      14,    -2,    -3,   408,     1,    -3,    -5,   125,   -80,    -5,
     -80,   -80,   345,   505,   -80,   186,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,    21,   -80,   -80,   -80,   159,   -80,   -80,
     159,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   264,    23,
     206,    65,   166,    76,    77,    78,   208,    25,    29,    30,
     466,    -6,   260,   479,    -6,   127,    64,   143,   280,   -55,
     -55,   531,   253,   -16,   -92,    32,    33,    34,   168,   148,
      79,   125,   263,    35,    36,   270,    37,    38,    39,   -22,
     256,   -57,   226,   244,    80,   272,   -92,   -57,   262,   -93,
     206,   149,   206,     8,     9,   -58,   254,   206,   -55,    81,
     268,    91,   -57,   -57,   -55,   296,   305,   -57,   -57,   -57,
     -58,   -93,   -41,   141,   142,    91,   -58,   -58,   442,    90,
     -55,   267,   -56,   320,   304,   -55,   -55,   -56,   -50,   305,
     -58,   -58,   -58,   148,   122,    86,   351,    74,   148,   191,
     111,    87,   304,   -56,   -56,    88,   260,    -4,    90,   -56,
      -4,   148,   358,   359,   360,   431,   192,   193,   194,   226,
     450,   349,   -54,   148,   195,   196,   106,   197,   198,   199,
     364,   209,   367,   456,   352,   -20,    13,   268,   268,   268,
     534,   109,   348,   303,   -54,   559,   115,    -7,   111,   206,
      -7,   116,   255,   119,   388,   145,   391,   257,   267,   267,
     267,   248,   206,   273,   274,   275,   281,   -58,   -58,   -58,
      -8,   -13,   111,    -8,   -13,   152,   -31,   162,   412,   -31,
     415,    67,   206,   297,   298,   299,   478,   -30,   153,   -12,
     -30,   476,   -12,   436,   437,   438,   -21,    18,   433,   260,
     206,   321,   322,   323,   504,    19,    20,   440,   127,   253,
     444,   -35,   154,   -32,   -35,   258,   -32,   226,   349,   349,
     349,   259,   -33,   -34,   125,   -33,   -34,   256,   280,   -56,
     -56,    69,    70,   104,   105,   146,   147,   173,   174,   348,
     348,   348,   155,   254,   156,   157,   158,   206,   -52,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   381,   382,   226,   161,   -51,   -15,   165,
     -53,   206,   -18,   206,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   405,   406,   226,
     178,   -19,   180,   276,   -17,   206,   -23,   206,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   429,   430,   277,   187,   -24,   278,   300,   260,   260,
     260,   127,   301,   302,   206,   324,   325,   206,   253,   253,
     253,   492,   260,   260,   263,   472,   507,   125,   326,   255,
     353,   354,   253,   253,   257,   355,   256,   256,   256,   124,
     262,   -52,   247,   -51,    29,   207,   365,   -53,   361,   111,
     256,   256,   254,   254,   254,   389,   362,   538,   413,   541,
     385,    32,    33,    34,   386,   409,   254,   254,    -9,    35,
      36,   410,    37,    38,    39,   260,   260,   171,   445,   446,
     247,   467,    29,   447,   -11,   253,   253,   227,   245,   448,
     449,   183,   258,   451,   261,   207,   191,   207,   259,    32,
      33,    34,   207,   256,   256,   452,    11,    35,    36,   453,
      37,    38,    39,   192,   193,   194,   454,   455,   457,   254,
     254,   195,   196,   458,   197,   198,   199,   459,   460,   461,
     464,   465,    -9,   -10,   -11,   -10,   480,   513,   499,   514,
     515,   206,   532,   206,   535,   510,   511,   512,   255,   255,
     255,   536,   539,   257,   257,   257,     0,   560,   561,     0,
     562,     0,   255,   255,   227,   563,   226,   257,   257,   564,
       0,     0,     0,     0,   206,     0,   206,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     555,   556,     0,     0,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,   207,   207,
     207,   258,   258,   258,     0,   255,   255,   259,   259,   259,
     257,   257,     0,     0,     0,   258,   258,   207,   227,   227,
     227,   259,   259,   -57,     0,   -57,   -57,     0,   -57,   -57,
       0,   -57,   -57,     0,     0,   207,   245,   245,   245,     0,
       0,     0,     0,     0,     0,   -57,   -57,   -57,     0,   518,
     -57,   -57,   227,   -57,   -57,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,     0,     0,     0,   258,   258,
       0,     0,     0,     0,   259,   259,     0,     0,     0,     0,
       0,     0,   207,     0,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     227,   108,     0,     0,     0,     0,   207,     0,   207,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,     0,     0,     0,     0,     0,
     207,     0,   207,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   -58,     0,
     -58,   -58,     0,   -58,   -58,   205,   -58,   -58,     0,   207,
       0,     0,   207,     0,     0,     0,     0,     0,     0,     0,
     -58,   -58,   -58,     0,   518,   -58,   -58,     0,   -58,   -58,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
     167,   169,     0,   170,     0,     0,     0,   225,   243,     0,
       0,     0,     0,     0,     0,   205,     0,   205,     0,   181,
     182,     0,   205,     0,     0,     0,     0,     0,     0,   188,
     189,     0,     0,   269,     0,   138,   139,   140,   -81,     0,
     -81,   -81,     0,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,   225,   271,     0,     0,    74,     0,
     191,     0,     0,   500,   350,     0,   207,     0,   207,     0,
     500,   500,   500,     0,     0,     0,     0,   192,   193,   194,
     269,   269,   269,     0,   205,   195,   196,     0,   197,   198,
     199,   227,     0,     0,     0,     0,     0,   205,     0,   207,
       0,   207,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   205,    71,   -80,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   205,     0,     0,    72,   -80,
     -80,   -80,   -57,     0,   -57,   -57,     0,   -57,   -57,     0,
     -57,   -57,   225,     0,     0,     0,     0,     0,   434,     0,
       0,   350,   350,   350,   -57,   -57,   -57,     0,   329,   -57,
     -57,     0,   -57,   -57,     0,   -57,   -57,   -57,   -57,     0,
     -57,   -57,   205,     0,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   378,   379,   380,     0,     0,
     225,     0,     0,     0,     0,     0,   205,     0,   205,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   402,
     403,   404,     0,     0,   225,     0,     0,     0,     0,     0,
     205,     0,   205,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   426,   427,   428,     0,     0,     0,     0,
       0,   -42,     0,   204,   -42,     0,   -42,   -42,     0,   205,
     -42,     0,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -42,   -42,   -42,     0,   470,   473,   474,
       0,   -42,   -42,     0,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   501,   502,     0,     0,   224,   242,     0,     0,     0,
       0,     0,     0,   204,     0,   204,     0,     0,     0,     0,
     204,     0,     0,     0,     0,     0,   131,   132,   133,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -59,     0,   -59,   -59,     0,   -59,   -59,     0,
     -59,   -59,     0,     0,   557,   558,   519,   520,   521,   522,
     523,   524,   525,     0,   -59,   -59,   -59,     0,   -59,   -59,
     -59,     0,   -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   224,   295,     0,     0,    74,     0,   191,     0,
       0,     0,     0,   498,     0,     0,   205,     0,   205,     0,
       0,     0,     0,     0,     0,   192,   193,   194,     0,     0,
     203,     0,   204,   195,   196,     0,   197,   198,   199,     0,
       0,   225,     0,     0,     0,   204,     0,     0,     0,   205,
       0,   205,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   552,   553,   554,   204,     0,     0,     0,     0,
       0,     0,   223,   241,     0,     0,     0,     0,     0,     0,
     203,     0,   203,   204,     0,     0,     0,   203,   -60,     0,
     -60,   -60,   130,   -60,   -60,     0,   -60,   -60,     0,     0,
     224,     0,   519,   520,   521,   522,   523,   524,   525,     0,
     -60,   -60,   -60,     0,   -60,   -60,   -60,     0,   -60,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
     204,     0,   204,   204,   204,   204,   371,   372,   373,   374,
     375,   376,   377,     0,     0,     0,     0,     0,   224,   223,
       0,     0,     0,     0,   204,     0,   204,   224,   224,   224,
     395,   396,   397,   398,   399,   400,   401,     0,     0,     0,
       0,   319,   224,     0,    74,     0,   191,     0,   204,   203,
     204,   242,   242,   242,   419,   420,   421,   422,   423,   424,
     425,     0,   203,   192,   193,   194,     0,   210,   202,   211,
       0,   195,   196,     0,   197,   198,   199,   204,     0,     0,
     204,     0,   203,     0,     0,     0,   212,   213,   214,     0,
       0,     0,     0,   110,   215,   216,     0,   217,   218,   219,
     203,     0,     0,     0,   439,     0,     0,    74,     0,   191,
     222,   240,     0,     0,     0,     0,     0,   223,   202,     0,
     202,     0,     0,     0,     0,   202,   192,   193,   194,   129,
       0,     0,     0,     0,   195,   196,     0,   197,   198,   199,
       0,     0,     0,     0,     0,     0,     0,   203,   -59,   203,
     203,   203,   370,     0,     0,   306,   307,   308,   309,   310,
     311,   312,     0,     0,     0,   223,     0,   -59,   -59,   -59,
     -59,   203,     0,   203,   223,   223,   394,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   222,   441,   223,
       0,   247,     0,    29,     0,   203,     0,   203,   241,   241,
     418,   497,     0,     0,   204,     0,   204,     0,     0,   201,
      32,    33,    34,     0,     0,     0,     0,   202,    35,    36,
       0,    37,    38,    39,   203,     0,     0,   203,     0,   224,
     202,     0,     0,     0,     0,     0,     0,   204,     0,   204,
     497,   497,   497,   545,   546,   547,   548,   549,   550,   551,
     202,   221,   239,   200,     0,     0,     0,   475,     0,   201,
     247,   201,    29,     0,     0,     0,   201,     0,   202,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,     0,     0,     0,   222,     0,    35,    36,     0,
      37,    38,    39,     0,     0,   220,   238,     0,     0,     0,
       0,   503,     0,   200,   261,   200,   191,     0,     0,     0,
     200,     0,     0,     0,     0,   202,     0,   202,   202,   369,
       0,     0,     0,   192,   193,   194,     0,     0,   221,     0,
       0,   195,   196,   222,   197,   198,   199,     0,     0,   202,
       0,   202,   222,   393,     0,     0,     0,     0,   496,     0,
       0,   203,     0,   203,     0,     0,     0,   222,   201,     0,
       0,     0,     0,   202,     0,   202,   240,   417,     0,     0,
       0,   201,   220,     0,     0,     0,   223,   506,     0,     0,
      74,     0,   191,     0,   203,     0,   203,   496,   496,   544,
       0,   201,   202,     0,     0,   202,     0,     0,     0,   192,
     193,   194,   200,     0,     0,     0,     0,   195,   196,   201,
     197,   198,   199,     0,     0,   200,   -58,     0,   -58,   -58,
       0,   -58,   -58,     0,   -58,   -58,   221,     0,     0,     0,
       0,     0,     0,     0,     0,   200,     0,     0,   -58,   -58,
     -58,     0,   329,   -58,   -58,     0,   -58,   -58,     0,   -58,
     -58,   -58,   -58,   200,   -58,   -58,   201,     0,   201,   368,
       0,     0,     0,     0,     0,    74,     0,   191,     0,     0,
     220,     0,     0,     0,   221,     0,     0,     0,     0,     0,
     201,     0,   201,   392,   192,   193,   194,     0,     0,     0,
       0,     0,   195,   196,   117,   197,   198,   199,   221,     0,
     200,     0,   200,     0,   201,     0,   201,   416,     0,     0,
       0,     0,     0,     0,     0,     0,   495,     0,   220,   202,
       0,   202,     0,     0,   200,     0,   200,     0,     0,     0,
       0,     0,     0,   201,     0,     0,   201,     0,   228,     0,
     229,     0,   220,     0,   222,     0,     0,   113,   200,     0,
     200,     0,   202,     0,   202,   495,   543,   230,   231,   232,
       0,     0,     0,     0,     0,   233,   234,     0,   235,   236,
     237,     0,     0,   -91,     0,   -91,   -91,   200,   -91,   -91,
     200,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,
     -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -69,     0,   -69,   -69,     0,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   529,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   530,   -69,   -69,   -69,     0,   -69,
     -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -59,     0,   494,     0,    74,
     201,   191,   201,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   192,   193,
     194,     0,     0,     0,     0,   221,   195,   196,   120,   197,
     198,   199,   210,   201,   211,   201,   542,     0,     0,     0,
       0,   493,     0,     0,   200,     0,   200,     0,     0,     0,
       0,   212,   213,   214,     0,     0,     0,     0,   342,   215,
     216,     0,   217,   218,   219,     0,     0,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   200,   -73,   200,
     -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -76,     0,
     -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -79,     0,
     -79,   -79,     0,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -77,     0,
     -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -78,     0,
     -78,   -78,     0,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -85,     0,
     -85,   -85,     0,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -83,     0,
     -83,   -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -82,     0,
     -82,   -82,     0,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,     0,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -72,     0,
     -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   529,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   530,
     -72,   -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -70,     0,
     -70,   -70,     0,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   529,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   530,
     -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,
     -71,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   529,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   530,
     -71,   -71,   -71,     0,   -71,   -71,   -71,     0,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -74,     0,
     -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -75,     0,
     -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -84,     0,
     -84,   -84,     0,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -86,     0,
     -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,
     -87,   -87,     0,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   -87,     0,   -87,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -88,     0,
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
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -80,     0,
     -80,   -80,     0,   318,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,
       0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -81,     0,
     -81,   -81,     0,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,   -81,
       0,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -91,     0,
     -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,     0,   -91,   -91,
       0,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -69,     0,
     -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   340,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   341,
     -69,   -69,   -69,     0,   -69,   -69,   -69,     0,   -69,   -69,
       0,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -73,     0,
     -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,   -73,
       0,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -76,     0,
     -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,   -76,
       0,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -79,     0,
     -79,   -79,     0,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -77,     0,
     -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,   -77,
       0,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -78,     0,
     -78,   -78,     0,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,
       0,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -85,     0,
     -85,   -85,     0,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,
       0,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -83,     0,
     -83,   -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,
       0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -82,     0,
     -82,   -82,     0,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,     0,   -82,   -82,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -72,     0,
     -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   340,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   341,
     -72,   -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,
       0,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -70,     0,
     -70,   -70,     0,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   340,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   341,
     -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,   -70,
       0,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -71,     0,
     -71,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   340,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   341,
     -71,   -71,   -71,     0,   -71,   -71,   -71,     0,   -71,   -71,
       0,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -74,     0,
     -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,
       0,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -75,     0,
     -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,
       0,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -84,     0,
     -84,   -84,     0,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -86,     0,
     -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,   -86,
       0,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -87,     0,
     -87,   -87,     0,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   -87,     0,   -87,   -87,
       0,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -88,     0,
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
       0,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -61,     0,
     -61,   -61,     0,   -61,   -61,     0,   -61,   -61,   526,   527,
     528,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     -61,   -61,   -61,     0,   -61,   -61,   -61,     0,   -61,   -61,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -64,     0,
     -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   526,   527,
     528,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,
     -65,   -65,     0,   -65,   -65,     0,   -65,   -65,   526,   527,
     528,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -62,     0,
     -62,   -62,     0,   -62,   -62,     0,   -62,   -62,   526,   527,
     528,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
     -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,   -62,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -63,     0,
     -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   526,   527,
     528,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
     -63,   -63,   -63,     0,   -63,   -63,   -63,     0,   -63,   -63,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -66,     0,
     -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   526,   527,
     528,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,
     -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   526,   527,
     528,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,
     -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   526,   527,
     528,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -61,     0,
     -61,   -61,     0,   -61,   -61,     0,   -61,   -61,   337,   338,
     339,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     -61,   -61,   -61,     0,   -61,   -61,   -61,     0,   -61,   -61,
       0,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -64,     0,
     -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   337,   338,
     339,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,
       0,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -65,     0,
     -65,   -65,     0,   -65,   -65,     0,   -65,   -65,   337,   338,
     339,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,   -65,
       0,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -62,     0,
     -62,   -62,     0,   -62,   -62,     0,   -62,   -62,   337,   338,
     339,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
     -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,   -62,
       0,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -63,     0,
     -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   337,   338,
     339,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
     -63,   -63,   -63,     0,   -63,   -63,   -63,     0,   -63,   -63,
       0,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -66,     0,
     -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   337,   338,
     339,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -67,     0,
     -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   337,   338,
     339,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -68,     0,
     -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   337,   338,
     339,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,   -68,
       0,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -59,     0,
     -59,   -59,     0,   -59,   -59,     0,   -59,   -59,     0,     0,
       0,     0,   330,   331,   332,   333,   334,   335,   336,     0,
     -59,   -59,   -59,     0,   -59,   -59,   -59,     0,   -59,   -59,
       0,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -60,     0,
     -60,   -60,     0,   -60,   -60,     0,   -60,   -60,     0,     0,
       0,     0,   330,   331,   332,   333,   334,   335,   336,     0,
     -60,   -60,   -60,     0,   -60,   -60,   -60,     0,   -60,   -60,
       0,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -55,     0,
     -55,   -55,     0,   -55,   -55,     0,   -55,   -55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -55,   -55,   -55,     0,     0,   517,   -55,     0,   -55,   -55,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,     0,
     -56,   -56,     0,   -56,   -56,     0,   -56,   -56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -56,   -56,   -56,     0,     0,   517,   -56,     0,   -56,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -55,     0,
     -55,   -55,     0,   -55,   -55,     0,   -55,   -55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -55,   -55,   -55,     0,     0,   328,   -55,     0,   -55,   -55,
       0,   -55,   -55,   -55,   -55,     0,   -55,   -55,   -56,     0,
     -56,   -56,     0,   -56,   -56,     0,   -56,   -56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -56,   -56,   -56,     0,     0,   328,   -56,     0,   -56,   -56,
       0,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -54,     0,
     -54,   -54,     0,   -54,   -54,     0,   -54,   -54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -54,   -54,   -54,     0,     0,     0,   516,     0,   -54,   -54,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -36,     0,
     -36,   -36,     0,   -36,   -36,   -61,   -36,   -36,     0,    99,
     100,   101,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -36,   -36,   -36,     0,     0,   -61,   -61,   -61,   -36,   -36,
       0,   -36,   -36,   -36,   -36,    67,   -36,   -36,   -54,     0,
     -54,   -54,     0,   -54,   -54,     0,   -54,   -54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -54,   -54,   -54,     0,     0,     0,   327,     0,   -54,   -54,
       0,   -54,   -54,   -54,   -54,     0,   -54,   -54,   -43,     0,
     -43,   -43,     0,   -43,   -43,   -64,   -43,   -43,     0,    99,
     100,   101,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -43,   -43,   -43,     0,     0,   -64,   -64,   -64,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -25,     0,
     -25,   -25,     0,   -25,   -25,   -65,   -25,   -25,     0,    99,
     100,   101,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -25,   -25,   -25,     0,     0,   -65,   -65,   -65,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -27,     0,
     -27,   -27,     0,   -27,   -27,   -62,   -27,   -27,     0,    99,
     100,   101,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -27,   -27,   -27,     0,     0,   -62,   -62,   -62,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -29,     0,
     -29,   -29,     0,   -29,   -29,   -63,   -29,   -29,     0,    99,
     100,   101,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -29,   -29,   -29,     0,     0,   -63,   -63,   -63,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -26,     0,
     -26,   -26,     0,   -26,   -26,   -66,   -26,   -26,     0,    99,
     100,   101,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -26,   -26,   -26,     0,     0,   -66,   -66,   -66,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -28,     0,
     -28,   -28,     0,   -28,   -28,   -67,   -28,   -28,     0,    99,
     100,   101,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -28,   -28,   -28,     0,     0,   -67,   -67,   -67,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -31,     0,
     -31,   -31,     0,   -31,   -31,   -68,   -31,   -31,     0,    99,
     100,   101,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -31,   -31,   -31,     0,     0,   -68,   -68,   -68,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -30,     0,
     -30,   -30,     0,   -30,   -30,   -60,   -30,   -30,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,    98,
     -30,   -30,   -30,     0,     0,   -60,   -60,   -60,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -45,     0,
     -45,   -45,     0,   -45,   -45,     0,   -45,   -45,     0,     0,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
     -45,   -45,   -45,   -59,   -59,   -59,   -59,     0,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -44,     0,
     -44,   -44,     0,   -44,   -44,     0,   -44,   -44,     0,     0,
       0,   282,   283,   284,   285,   286,   287,   288,     0,     0,
     -44,   -44,   -44,   -60,   -60,   -60,   -60,     0,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -40,     0,
     -40,   -40,     0,   -40,   -40,     0,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -35,     0,
     -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -32,     0,
     -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -33,     0,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -34,     0,
     -34,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -39,     0,
     -39,   -39,     0,   -39,   -39,     0,   -39,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,     0,     0,     0,     0,     0,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -37,     0,
     -37,   -37,     0,   -37,   -37,     0,   -37,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -48,     0,
     -48,   -48,     0,   -48,   -48,     0,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -48,   -48,   -48,     0,     0,     0,     0,     0,   -48,   -48,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,    -9,     0,
      -9,    -9,     0,    -9,    -9,     0,    -9,    -9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -9,    -9,    -9,     0,     0,     0,     0,     0,    -9,    -9,
       0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,   -38,     0,
     -38,   -38,     0,   -38,   -38,     0,   -38,   -38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -47,     0,
     -47,   -47,     0,   -47,   -47,     0,   -47,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,   -47,     0,     0,     0,     0,     0,   -47,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -11,     0,
     -11,   -11,     0,   -11,   -11,     0,   -11,   -11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -11,   -11,   -11,     0,     0,     0,     0,     0,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -10,     0,
     -10,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -10,   -10,   -10,     0,     0,     0,     0,     0,   -10,   -10,
       0,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -49,     0,
     -49,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -49,   -49,   -49,     0,     0,     0,     0,     0,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -46,     0,
     -46,   -46,     0,   -46,   -46,     0,   -46,   -46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -46,   -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,    26,     0,
      27,    28,     0,    29,    30,     0,    31,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,     0,     0,     0,    35,    36,
       0,    37,    38,    39,    40,     0,    41,    42,   -43,     0,
     -43,   -43,     0,   -43,   -43,     0,   -43,   -43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,   -43,     0,     0,     0,     0,     0,   -43,   -43,
       0,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -25,     0,
     -25,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -25,   -25,   -25,     0,     0,     0,     0,     0,   -25,   -25,
       0,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -27,     0,
     -27,   -27,     0,   -27,   -27,     0,   -27,   -27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,
       0,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -29,     0,
     -29,   -29,     0,   -29,   -29,     0,   -29,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,
       0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -26,     0,
     -26,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -26,   -26,   -26,     0,     0,     0,     0,     0,   -26,   -26,
       0,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -28,     0,
     -28,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
       0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -45,     0,
     -45,   -45,     0,   -45,   -45,     0,   -45,   -45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,   -45,     0,     0,     0,     0,     0,   -45,   -45,
       0,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -44,     0,
     -44,   -44,     0,   -44,   -44,     0,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -44,   -44,   -44,     0,     0,     0,     0,     0,   -44,   -44,
       0,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -40,     0,
     -40,   -40,     0,   -40,   -40,     0,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,   -40,
       0,   -40,   -40,   -40,   -40,     0,   -40,   -40,    -9,     0,
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
       0,   -10,   -10,   -10,   -10,     0,   -10,   -10,   -39,     0,
     -39,   -39,     0,   -39,   -39,     0,   -39,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,     0,     0,     0,     0,     0,   -39,   -39,
       0,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -37,     0,
     -37,   -37,     0,   -37,   -37,     0,   -37,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -48,     0,
     -48,   -48,     0,   -48,   -48,     0,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -48,   -48,   -48,     0,     0,     0,     0,     0,   -48,   -48,
       0,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -38,     0,
     -38,   -38,     0,   -38,   -38,     0,   -38,   -38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,   -38,
       0,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -47,     0,
     -47,   -47,     0,   -47,   -47,     0,   -47,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,   -47,     0,     0,     0,     0,     0,   -47,   -47,
       0,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -49,     0,
     -49,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -49,   -49,   -49,     0,     0,     0,     0,     0,   -49,   -49,
       0,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -46,     0,
     -46,   -46,     0,   -46,   -46,     0,   -46,   -46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -46,   -46,   -46,     0,     0,     0,     0,     0,   -46,   -46,
       0,   -46,   -46,   -46,   -46,     0,   -46,   -46,   265,     0,
      27,    28,     0,    29,    30,     0,   266,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,     0,     0,     0,    35,    36,
       0,    37,    38,    39,    40,     0,    41,    42,    -7,     0,
      -7,    -7,     0,    -7,    -7,     0,    -7,    -7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -7,    -7,    -7,     0,     0,     0,     0,     0,    -7,    -7,
       0,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -8,     0,
      -8,    -8,     0,    -8,    -8,     0,    -8,    -8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -8,    -8,    -8,     0,     0,     0,     0,     0,    -8,    -8,
       0,    -8,    -8,    -8,    -8,     0,    -8,    -8,   346,     0,
      27,    28,     0,    29,    30,     0,   347,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,     0,     0,     0,    35,    36,
       0,    37,    38,    39,    40,     0,    41,    42,   -31,     0,
     -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -30,     0,
     -30,   -30,     0,   -30,   -30,     0,   -30,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,   -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,
       0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -35,     0,
     -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -32,     0,
     -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -33,     0,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -34,     0,
     -34,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   107,   -34,   -34,   208,     0,
      29,    30,     0,     0,   190,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
       0,     0,     0,     0,     0,    35,    36,     0,    37,    38,
      39,    40,   249,    41,    42,    28,     0,    29,   250,     0,
       0,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,     0,     0,
       0,     0,    35,    36,     0,    37,    38,    39,    40,   249,
      41,   252,   208,     0,    29,   250,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,     0,    37,    38,    39,    40,   249,    41,   252,   471,
       0,    29,   250,     0,     0,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,   208,     0,    29,   250,     0,    35,    36,     0,    37,
      38,    39,    40,     0,    41,   252,    74,     0,   191,     0,
      32,    33,    34,     0,     0,     0,     0,     0,    35,    36,
       0,    37,    38,    39,     0,   192,   193,   194,    74,     0,
     191,     0,     0,   195,   196,   363,   197,   198,   199,     0,
       0,     0,   210,     0,   211,     0,     0,   192,   193,   194,
       0,     0,     0,     0,     0,   195,   196,   366,   197,   198,
     199,   212,   213,   214,    74,     0,   191,     0,   383,   215,
     216,     0,   217,   218,   219,     0,     0,     0,    74,     0,
     191,     0,     0,   192,   193,   194,     0,     0,     0,     0,
       0,   195,   196,   387,   197,   198,   199,   192,   193,   194,
     210,     0,   211,     0,     0,   195,   196,   390,   197,   198,
     199,     0,     0,     0,    74,     0,   191,     0,     0,   212,
     213,   214,     0,     0,     0,     0,   407,   215,   216,     0,
     217,   218,   219,   192,   193,   194,    74,     0,   191,     0,
       0,   195,   196,   411,   197,   198,   199,     0,     0,     0,
     208,     0,    29,     0,     0,   192,   193,   194,     0,   432,
       0,     0,     0,   195,   196,   414,   197,   198,   199,    32,
      33,    34,     0,     0,    74,     0,   191,    35,    36,     0,
      37,    38,    39,   443,     0,     0,     0,     0,   481,     0,
     482,     0,     0,   192,   193,   194,     0,   483,     0,     0,
       0,   195,   196,     0,   197,   198,   199,   484,   485,   486,
     210,     0,   211,     0,     0,   487,   488,     0,   489,   490,
     491,     0,     0,     0,    74,     0,   191,     0,     0,   212,
     213,   214,     0,     0,     0,     0,   533,   215,   216,     0,
     217,   218,   219,   192,   193,   194,    74,     0,   191,     0,
       0,   195,   196,   537,   197,   198,   199,     0,     0,     0,
     208,     0,    29,     0,     0,   192,   193,   194,     0,     0,
       0,     0,     0,   195,   196,   540,   197,   198,   199,    32,
      33,    34,   210,     0,   211,     0,     0,    35,    36,     0,
      37,    38,    39,     0,     0,     0,    74,     0,   191,     0,
       0,   212,   213,   214,     0,     0,     0,     0,     0,   215,
     216,     0,   217,   218,   219,   192,   193,   194,   228,     0,
     229,     0,     0,   195,   196,     0,   197,   198,   199,     0,
       0,     0,   481,     0,   482,     0,     0,   230,   231,   232,
       0,     0,     0,     0,     0,   233,   234,     0,   235,   236,
     237,   484,   485,   486,     0,     0,     0,     0,     0,   487,
     488,     0,   489,   490,   491,   294,     0,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,   246,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,   356,   -80,   -80,   -80,   -80,
     246,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,    71,   -80,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,   344,   -80,   -80,   -80,    71,
     -80,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,   477,
     -80,   -80,   -80,    71,   -80,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,   -80,   -80,   -80,   -81,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -91,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,   -91,
     -91,   -91,   -91,   -69,     0,     0,   -69,   -69,   -69,   316,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   317,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -73,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -76,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -79,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -77,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -78,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -83,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -82,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -72,     0,     0,   -72,   -72,   -72,   316,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   317,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -70,     0,     0,   -70,   -70,   -70,   316,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   317,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -71,     0,     0,   -71,
     -71,   -71,   316,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     317,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -74,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -75,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -84,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -86,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -87,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -88,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -89,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -90,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,   -90,
     -90,   -90,   -90,   -81,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,   -91,   -81,   -81,   -81,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
       0,   -69,   -91,   -91,   -91,   -69,   -69,   -69,   102,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   103,     0,     0,     0,
     -73,   -69,   -69,   -69,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,   -76,
     -73,   -73,   -73,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,   -79,   -76,
     -76,   -76,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,   -77,   -79,   -79,
     -79,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,   -78,   -77,   -77,   -77,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,   -85,   -78,   -78,   -78,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,   -83,   -85,   -85,   -85,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,   -82,   -83,   -83,   -83,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,   -72,   -82,   -82,   -82,   -72,   -72,   -72,   102,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   103,     0,     0,
       0,   -70,   -72,   -72,   -72,   -70,   -70,   -70,   102,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   103,     0,     0,     0,
     -71,   -70,   -70,   -70,   -71,   -71,   -71,   102,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   103,     0,     0,     0,   -74,
     -71,   -71,   -71,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,   -75,   -74,
     -74,   -74,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,   -84,   -75,   -75,
     -75,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,   -86,   -84,   -84,   -84,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,   -87,   -86,   -86,   -86,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,   -88,   -87,   -87,   -87,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,   -89,   -88,   -88,   -88,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,     0,   -90,   -89,   -89,   -89,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,   -90,   -90,   -90,   -61,     0,     0,   313,   314,
     315,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,     0,     0,   -61,   -61,   -61,   -61,   -64,     0,
       0,   313,   314,   315,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -65,     0,     0,   313,   314,   315,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -62,     0,     0,   313,   314,   315,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,     0,   -62,   -62,   -62,   -62,   -63,     0,     0,
     313,   314,   315,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -66,     0,     0,   313,   314,   315,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   -67,     0,     0,   313,   314,   315,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -68,     0,     0,   313,
     314,   315,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -60,     0,     0,   -68,   -68,   -68,   -68,   306,
     307,   308,   309,   310,   311,   312,     0,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -69,   -69,   -69,   292,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   293,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -72,   -72,   -72,   292,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   293,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -70,   -70,   -70,   292,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   293,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -71,   -71,   -71,   292,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   293,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,   289,   290,   291,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,
       0,   -61,   -61,   -61,   -61,   289,   290,   291,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   289,   290,   291,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   289,   290,   291,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   289,   290,   291,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   289,   290,   291,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   289,   290,   291,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   289,   290,   291,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68
};

static const yytype_int16 yycheck[] =
{
      16,   246,   169,    29,     9,   161,     9,    23,    43,    44,
      45,     0,   145,   146,     3,     3,     8,    29,    30,     9,
       7,     6,   178,     4,     4,     4,     0,     4,    27,    28,
      29,    30,   165,    38,     1,    38,     7,     4,    30,     6,
     173,     7,    30,    30,    42,    71,    72,   180,    38,   294,
      31,    31,    31,    79,    31,    81,    23,    24,    25,    30,
      86,    87,     7,    29,    31,    32,     3,    34,    35,    36,
       4,     0,     0,   318,     3,     3,     0,    87,     1,     3,
       3,     4,   249,     6,     7,    30,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    10,    27,    28,    29,     7,    31,    32,
       7,    34,    35,    36,    37,    38,    39,    40,     7,    30,
      29,     8,   148,    32,    33,    34,     4,     4,     6,     7,
      30,     0,   158,    30,     3,   161,     3,     8,    28,    29,
      30,    30,   158,    30,     8,    23,    24,    25,   158,     8,
       6,   161,   178,    31,    32,   190,    34,    35,    36,    30,
     158,     7,    71,    72,     6,   191,    30,     8,   178,     8,
      79,    30,    81,     4,     5,     7,   158,    86,     7,     6,
     190,    27,    28,    29,     8,   211,    27,    28,    29,    30,
       8,    30,     6,   102,   103,    27,    28,    29,   354,    28,
      29,   190,     8,   229,    28,    29,    30,     7,     6,    27,
      28,    29,    30,     8,     1,     6,   251,     4,     8,     6,
     246,     6,    28,    29,    30,     7,   252,     0,    28,    29,
       3,     8,   267,   268,   269,    30,    23,    24,    25,   148,
      30,   251,     8,     8,    31,    32,     3,    34,    35,    36,
     276,     7,   278,    30,   252,     6,     7,   267,   268,   269,
     505,     4,   251,    29,    30,    30,    30,     0,   294,   178,
       3,    30,   158,     4,   300,     4,   302,   158,   267,   268,
     269,     7,   191,   192,   193,   194,    27,    28,    29,    30,
       0,     0,   318,     3,     3,    30,     0,     3,   324,     3,
     326,    38,   211,   212,   213,   214,   473,     0,    30,     0,
       3,   467,     3,   348,   349,   350,     6,     7,   344,   345,
     229,   230,   231,   232,   480,     4,     5,   353,   354,   345,
     356,     0,    30,     0,     3,   158,     3,   246,   348,   349,
     350,   158,     0,     0,   354,     3,     3,   345,    28,    29,
      30,     4,     5,     4,     5,     4,     5,     4,     5,   348,
     349,   350,    30,   345,    30,    30,    30,   276,     7,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,     7,     7,    30,     4,
       7,   300,    30,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
       7,    30,     4,     6,    30,   324,    30,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,     6,    30,    30,     6,     6,   464,   465,
     466,   467,     6,     6,   353,     6,     6,   356,   464,   465,
     466,   477,   478,   479,   480,   465,   482,   467,     6,   345,
       6,     6,   478,   479,   345,     7,   464,   465,   466,     1,
     480,    30,     4,    30,     6,    29,     4,    30,    30,   505,
     478,   479,   464,   465,   466,     4,    30,   513,     4,   515,
      30,    23,    24,    25,    30,    30,   478,   479,     7,    31,
      32,    30,    34,    35,    36,   531,   532,     1,    30,    30,
       4,     7,     6,    30,     7,   531,   532,    71,    72,    30,
      30,     1,   345,    30,     4,    79,     6,    81,   345,    23,
      24,    25,    86,   531,   532,    30,     3,    31,    32,    30,
      34,    35,    36,    23,    24,    25,    30,    30,    30,   531,
     532,    31,    32,    30,    34,    35,    36,    30,    30,    30,
      30,    30,    30,     7,    30,    30,     7,     6,   477,     6,
       6,   480,    30,   482,    30,   484,   485,   486,   464,   465,
     466,    30,     4,   464,   465,   466,    -1,    30,    30,    -1,
      30,    -1,   478,   479,   148,    30,   505,   478,   479,    30,
      -1,    -1,    -1,    -1,   513,    -1,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,   192,   193,
     194,   464,   465,   466,    -1,   531,   532,   464,   465,   466,
     531,   532,    -1,    -1,    -1,   478,   479,   211,   212,   213,
     214,   478,   479,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,   246,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,   531,   532,
      -1,    -1,    -1,    -1,   531,   532,    -1,    -1,    -1,    -1,
      -1,    -1,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,    68,    -1,    -1,    -1,    -1,   300,    -1,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,    -1,    -1,    -1,    -1,    -1,
     324,    -1,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,     1,    -1,
       3,     4,    -1,     6,     7,    29,     9,    10,    -1,   353,
      -1,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
     157,   158,    -1,   160,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,   176,
     177,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,   186,
     187,    -1,    -1,   190,    -1,    99,   100,   101,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,   148,     1,    -1,    -1,     4,    -1,
       6,    -1,    -1,   477,   251,    -1,   480,    -1,   482,    -1,
     484,   485,   486,    -1,    -1,    -1,    -1,    23,    24,    25,
     267,   268,   269,    -1,   178,    31,    32,    -1,    34,    35,
      36,   505,    -1,    -1,    -1,    -1,    -1,   191,    -1,   513,
      -1,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   211,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   229,    -1,    -1,    26,    27,
      28,    29,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,   246,    -1,    -1,    -1,    -1,    -1,   345,    -1,
      -1,   348,   349,   350,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    -1,
      39,    40,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,    -1,    -1,
     294,    -1,    -1,    -1,    -1,    -1,   300,    -1,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,    -1,    -1,   318,    -1,    -1,    -1,    -1,    -1,
     324,    -1,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    29,     4,    -1,     6,     7,    -1,   353,
      10,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,   464,   465,   466,
      -1,    31,    32,    -1,    34,    35,    36,    37,    -1,    39,
      40,   478,   479,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,   531,   532,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,   148,     1,    -1,    -1,     4,    -1,     6,    -1,
      -1,    -1,    -1,   477,    -1,    -1,   480,    -1,   482,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      29,    -1,   178,    31,    32,    -1,    34,    35,    36,    -1,
      -1,   505,    -1,    -1,    -1,   191,    -1,    -1,    -1,   513,
      -1,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   211,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,   229,    -1,    -1,    -1,    86,     1,    -1,
       3,     4,    91,     6,     7,    -1,     9,    10,    -1,    -1,
     246,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,    -1,    -1,    -1,    -1,    -1,   294,   148,
      -1,    -1,    -1,    -1,   300,    -1,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,    -1,    -1,    -1,
      -1,     1,   318,    -1,     4,    -1,     6,    -1,   324,   178,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,    -1,   191,    23,    24,    25,    -1,     4,    29,     6,
      -1,    31,    32,    -1,    34,    35,    36,   353,    -1,    -1,
     356,    -1,   211,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    34,    35,    36,
     229,    -1,    -1,    -1,     1,    -1,    -1,     4,    -1,     6,
      71,    72,    -1,    -1,    -1,    -1,    -1,   246,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    23,    24,    25,    90,
      -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   276,     8,   278,
     279,   280,   281,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,   294,    -1,    27,    28,    29,
      30,   300,    -1,   302,   303,   304,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,     1,   318,
      -1,     4,    -1,     6,    -1,   324,    -1,   326,   327,   328,
     329,   477,    -1,    -1,   480,    -1,   482,    -1,    -1,    29,
      23,    24,    25,    -1,    -1,    -1,    -1,   178,    31,    32,
      -1,    34,    35,    36,   353,    -1,    -1,   356,    -1,   505,
     191,    -1,    -1,    -1,    -1,    -1,    -1,   513,    -1,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     211,    71,    72,    29,    -1,    -1,    -1,     1,    -1,    79,
       4,    81,     6,    -1,    -1,    -1,    86,    -1,   229,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,   246,    -1,    31,    32,    -1,
      34,    35,    36,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,     1,    -1,    79,     4,    81,     6,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,   276,    -1,   278,   279,   280,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,   148,    -1,
      -1,    31,    32,   294,    34,    35,    36,    -1,    -1,   300,
      -1,   302,   303,   304,    -1,    -1,    -1,    -1,   477,    -1,
      -1,   480,    -1,   482,    -1,    -1,    -1,   318,   178,    -1,
      -1,    -1,    -1,   324,    -1,   326,   327,   328,    -1,    -1,
      -1,   191,   148,    -1,    -1,    -1,   505,     1,    -1,    -1,
       4,    -1,     6,    -1,   513,    -1,   515,   516,   517,   518,
      -1,   211,   353,    -1,    -1,   356,    -1,    -1,    -1,    23,
      24,    25,   178,    -1,    -1,    -1,    -1,    31,    32,   229,
      34,    35,    36,    -1,    -1,   191,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,   246,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,   229,    39,    40,   276,    -1,   278,   279,
      -1,    -1,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,
     246,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,
     300,    -1,   302,   303,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,   318,    -1,
     276,    -1,   278,    -1,   324,    -1,   326,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,   294,   480,
      -1,   482,    -1,    -1,   300,    -1,   302,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,   356,    -1,     4,    -1,
       6,    -1,   318,    -1,   505,    -1,    -1,    13,   324,    -1,
     326,    -1,   513,    -1,   515,   516,   517,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    -1,    -1,     1,    -1,     3,     4,   353,     6,     7,
     356,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,     7,    -1,   477,    -1,     4,
     480,     6,   482,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    23,    24,
      25,    -1,    -1,    -1,    -1,   505,    31,    32,    33,    34,
      35,    36,     4,   513,     6,   515,   516,    -1,    -1,    -1,
      -1,   477,    -1,    -1,   480,    -1,   482,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,   505,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   513,     1,   515,
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
      -1,    34,    35,    36,    37,    38,    39,    40,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,     1,    -1,
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
       3,     4,    -1,     6,     7,     7,     9,    10,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
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
      -1,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,     4,    -1,     6,     7,    -1,    31,    32,    -1,    34,
      35,    36,    37,    -1,    39,    40,     4,    -1,     6,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    -1,    23,    24,    25,     4,    -1,
       6,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    23,    24,    25,     4,    -1,     6,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    -1,    -1,     4,    -1,
       6,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    23,    24,    25,
       4,    -1,     6,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,
      34,    35,    36,    23,    24,    25,     4,    -1,     6,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
       4,    -1,     6,    -1,    -1,    23,    24,    25,    -1,    13,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    23,
      24,    25,    -1,    -1,     4,    -1,     6,    31,    32,    -1,
      34,    35,    36,    13,    -1,    -1,    -1,    -1,     4,    -1,
       6,    -1,    -1,    23,    24,    25,    -1,    13,    -1,    -1,
      -1,    31,    32,    -1,    34,    35,    36,    23,    24,    25,
       4,    -1,     6,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,
      34,    35,    36,    23,    24,    25,     4,    -1,     6,    -1,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
       4,    -1,     6,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    23,
      24,    25,     4,    -1,     6,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    -1,    -1,    -1,     4,    -1,     6,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    23,    24,    25,     4,    -1,
       6,    -1,    -1,    31,    32,    -1,    34,    35,    36,    -1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    36,     6,    -1,     8,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,     6,    27,    28,    29,    30,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
       6,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,     6,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,     8,    -1,    -1,
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
       8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     7,    -1,    -1,    -1,    11,    12,    13,
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
      21,    22,    -1,    -1,    -1,     7,    27,    28,    29,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,     7,    27,    28,    29,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,     7,    27,    28,    29,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,     7,    27,    28,    29,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,     8,    -1,    -1,    11,    12,
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
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
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
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30
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
      51,     1,    61,     4,     5,    50,    56,    30,     7,    50,
       4,    51,    51,     1,    61,    50,    30,    30,    51,    51,
      10,     6,    23,    24,    25,    31,    32,    34,    35,    36,
      63,    64,    65,    66,    67,    68,    69,    70,     4,     7,
       4,     6,    23,    24,    25,    31,    32,    34,    35,    36,
      63,    64,    65,    66,    67,    68,    69,    70,     4,     6,
      23,    24,    25,    31,    32,    34,    35,    36,    63,    64,
      65,    66,    67,    68,    69,    70,     6,     4,     7,     1,
       7,    10,    40,    52,    54,    55,    57,    58,    59,    60,
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
      69,    30,    13,    62,    51,     9,    53,    53,    53,     1,
      62,     1,    61,    13,    62,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,     4,    31,    30,    30,    30,     7,     4,    31,
      51,     4,    46,    51,    51,     1,    61,    26,    56,    30,
       7,     4,     6,    13,    23,    24,    25,    31,    32,    34,
      35,    36,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    51,    51,     1,    61,     6,     1,    62,     4,    31,
      69,    69,    69,     6,     6,     6,    29,    28,    27,    15,
      16,    17,    18,    19,    20,    21,    11,    12,    13,    14,
      22,    30,    30,    30,    71,    30,    30,    33,    62,     4,
      33,    62,    64,    65,    66,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    69,    69,    51,    51,    30,
      30,    30,    30,    30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      49,    49,    50,    50,    50,    51,    51,    51,    51,    51,
      52,    53,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    55,    56,    57,    57,    58,    59,    59,    59,    59,
      60,    61,    61,    61,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    68,    68,    68,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     4,     3,
       4,     4,     5,     4,     2,     6,     3,     8,     7,     7,
       2,     3,     0,     4,     5,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     2,     5,     5,     7,     5,
       3,     1,     1,     1,     2,     2,     9,     7,     5,     9,
       1,     1,     1,     2,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       1,     1,     3,     3,     4,     3,     4,     4,     4,     4,
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
#line 58 "src/parser.y"
                  {;}
#line 3586 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 62 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3595 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 66 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root);
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
#line 3637 "src/parser.c"
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
#line 3656 "src/parser.c"
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
#line 3689 "src/parser.c"
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
#line 3724 "src/parser.c"
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
#line 3767 "src/parser.c"
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
#line 3781 "src/parser.c"
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
#line 3794 "src/parser.c"
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
#line 3809 "src/parser.c"
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
#line 3832 "src/parser.c"
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
#line 3852 "src/parser.c"
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
#line 3884 "src/parser.c"
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
#line 3915 "src/parser.c"
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
#line 3946 "src/parser.c"
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
#line 3969 "src/parser.c"
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
#line 3995 "src/parser.c"
    break;

  case 22: /* ParamList: %empty  */
#line 407 "src/parser.y"
             {
			(yyval.state) = new_node("ParamList", root);
		}
#line 4003 "src/parser.c"
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
#line 4020 "src/parser.c"
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
#line 4041 "src/parser.c"
    break;

  case 25: /* Statement: CompStatement  */
#line 445 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 4047 "src/parser.c"
    break;

  case 26: /* Statement: JmpStatement  */
#line 446 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 4053 "src/parser.c"
    break;

  case 27: /* Statement: SelStatement  */
#line 447 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 4059 "src/parser.c"
    break;

  case 28: /* Statement: ItStatement  */
#line 448 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 4065 "src/parser.c"
    break;

  case 29: /* Statement: ExpStatement  */
#line 449 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 4071 "src/parser.c"
    break;

  case 30: /* CompStatement: LCB StatementExp  */
#line 454 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 4079 "src/parser.c"
    break;

  case 31: /* StatementExp: RCB  */
#line 460 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 4085 "src/parser.c"
    break;

  case 32: /* StatementExp: Declaration StatementExp  */
#line 461 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4095 "src/parser.c"
    break;

  case 33: /* StatementExp: Definition StatementExp  */
#line 466 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4105 "src/parser.c"
    break;

  case 34: /* StatementExp: Statement StatementExp  */
#line 471 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4115 "src/parser.c"
    break;

  case 35: /* StatementExp: error RCB  */
#line 476 "src/parser.y"
                          {yyerrok; (yyval.state) = NULL;}
#line 4121 "src/parser.c"
    break;

  case 36: /* SelStatement: IfHead LP Expression RP Statement  */
#line 481 "src/parser.y"
                                                  {
			(yyval.state) = new_node("IF", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4132 "src/parser.c"
    break;

  case 37: /* SelStatement: IfHead LP Expression RP Definition  */
#line 487 "src/parser.y"
                                                     {
			(yyval.state) = new_node("IF", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4143 "src/parser.c"
    break;

  case 38: /* SelStatement: IfHead LP Expression RP Statement ElseHead Statement  */
#line 494 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("IF_ELSE", root);

			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
		}
#line 4157 "src/parser.c"
    break;

  case 39: /* SelStatement: IfHead LP error RP Statement  */
#line 505 "src/parser.y"
                                         {
		(yyval.state) = new_node("IF", root);
		add_child((yyval.state), (yyvsp[0].state));
	}
#line 4166 "src/parser.c"
    break;

  case 40: /* SelStatement: error ElseHead Statement  */
#line 509 "src/parser.y"
                                     {(yyval.state)=NULL;decrease_depth_scope(scope);yyerrok;}
#line 4172 "src/parser.c"
    break;

  case 41: /* IfHead: IF  */
#line 512 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 4180 "src/parser.c"
    break;

  case 42: /* ElseHead: ELSE  */
#line 518 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 4189 "src/parser.c"
    break;

  case 43: /* ExpStatement: SEMI  */
#line 525 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 4195 "src/parser.c"
    break;

  case 44: /* ExpStatement: Expression SEMI  */
#line 526 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 4203 "src/parser.c"
    break;

  case 45: /* JmpStatement: RET ExpStatement  */
#line 532 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root);
			add_child((yyval.state), (yyvsp[0].state));

			if (!check_type_subtree((yyval.state), s_table, scope))
			{
				printf("\033[91mSemantic error at line %d, column %d: Incompatible return type.\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column);
				first_pass_sematic_error_found = true;
			}

		}
#line 4219 "src/parser.c"
    break;

  case 46: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 546 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 4232 "src/parser.c"
    break;

  case 47: /* ItStatement: ForHead LP ExpAtt SEMI error RP Statement  */
#line 555 "src/parser.y"
                                                          {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
			yyerrok;
		}
#line 4245 "src/parser.c"
    break;

  case 48: /* ItStatement: ForHead LP error RP Statement  */
#line 564 "src/parser.y"
                                              {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[0].state));
			
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 4257 "src/parser.c"
    break;

  case 49: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI error RP Statement  */
#line 572 "src/parser.y"
                                                                      {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 4270 "src/parser.c"
    break;

  case 50: /* ForHead: FOR  */
#line 583 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 4278 "src/parser.c"
    break;

  case 51: /* ExpAtt: Expression  */
#line 589 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 4286 "src/parser.c"
    break;

  case 52: /* ExpAtt: Definition  */
#line 593 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 4294 "src/parser.c"
    break;

  case 53: /* ExpAtt: error SEMI  */
#line 597 "src/parser.y"
                   {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 4303 "src/parser.c"
    break;

  case 54: /* Expression: LogicalOrExpression  */
#line 605 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 4309 "src/parser.c"
    break;

  case 55: /* LogicalOrExpression: LogicalAndExpression  */
#line 609 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 4315 "src/parser.c"
    break;

  case 56: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 610 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 4326 "src/parser.c"
    break;

  case 57: /* LogicalAndExpression: EqualityExpression  */
#line 619 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 4332 "src/parser.c"
    break;

  case 58: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 620 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4342 "src/parser.c"
    break;

  case 59: /* EqualityExpression: RelationalExpression  */
#line 628 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 4348 "src/parser.c"
    break;

  case 60: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 629 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4358 "src/parser.c"
    break;

  case 61: /* RelationalExpression: AdditiveExpression  */
#line 638 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 4364 "src/parser.c"
    break;

  case 62: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 639 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 4374 "src/parser.c"
    break;

  case 63: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 644 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4384 "src/parser.c"
    break;

  case 64: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 649 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4394 "src/parser.c"
    break;

  case 65: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 654 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4404 "src/parser.c"
    break;

  case 66: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 659 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4414 "src/parser.c"
    break;

  case 67: /* RelationalExpression: RelationalExpression MAP AdditiveExpression  */
#line 664 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">>", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4424 "src/parser.c"
    break;

  case 68: /* RelationalExpression: RelationalExpression FIL AdditiveExpression  */
#line 669 "src/parser.y"
                                                        {
				(yyval.state) = new_node("<<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4434 "src/parser.c"
    break;

  case 69: /* AdditiveExpression: MultiplicativeExpression  */
#line 677 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 4440 "src/parser.c"
    break;

  case 70: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 678 "src/parser.y"
                                                                 {
			(yyval.state) = new_node("+", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4450 "src/parser.c"
    break;

  case 71: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 683 "src/parser.y"
                                                        {
			(yyval.state) = new_node("-", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4460 "src/parser.c"
    break;

  case 72: /* AdditiveExpression: AdditiveExpression TWD MultiplicativeExpression  */
#line 689 "src/parser.y"
                                                          {
			(yyval.state) = new_node(":", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4470 "src/parser.c"
    break;

  case 73: /* MultiplicativeExpression: UnaryExpression  */
#line 697 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 4476 "src/parser.c"
    break;

  case 74: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 698 "src/parser.y"
                                                             {
			(yyval.state) = new_node("*", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4486 "src/parser.c"
    break;

  case 75: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 703 "src/parser.y"
                                                             {
			(yyval.state) = new_node("/", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4496 "src/parser.c"
    break;

  case 76: /* UnaryExpression: PrimaryExpression  */
#line 711 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 4502 "src/parser.c"
    break;

  case 77: /* UnaryExpression: TNR UnaryExpression  */
#line 712 "src/parser.y"
                                    {
			(yyval.state) = new_node("!", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4511 "src/parser.c"
    break;

  case 78: /* UnaryExpression: HD UnaryExpression  */
#line 716 "src/parser.y"
                                   {
			(yyval.state) = new_node("?", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4520 "src/parser.c"
    break;

  case 79: /* UnaryExpression: TR UnaryExpression  */
#line 720 "src/parser.y"
                                   {
			(yyval.state) = new_node("%", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4529 "src/parser.c"
    break;

  case 80: /* PrimaryExpression: IDENTIFIER  */
#line 726 "src/parser.y"
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
#line 4546 "src/parser.c"
    break;

  case 81: /* PrimaryExpression: NUM_CONST  */
#line 739 "src/parser.y"
                      {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", (yyvsp[0].num));
			(yyval.state) = new_node(str, root);
		}
#line 4556 "src/parser.c"
    break;

  case 82: /* PrimaryExpression: LP Expression RP  */
#line 745 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4565 "src/parser.c"
    break;

  case 83: /* PrimaryExpression: LP error RP  */
#line 750 "src/parser.y"
                            {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 4574 "src/parser.c"
    break;

  case 84: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 755 "src/parser.y"
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
#line 4644 "src/parser.c"
    break;

  case 85: /* PrimaryExpression: IDENTIFIER LP RP  */
#line 820 "src/parser.y"
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
#line 4695 "src/parser.c"
    break;

  case 86: /* PrimaryExpression: WRITE LP STR RP  */
#line 866 "src/parser.y"
                                {
			(yyval.state) = new_node("write_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));

		}
#line 4705 "src/parser.c"
    break;

  case 87: /* PrimaryExpression: WRITE LP Expression RP  */
#line 871 "src/parser.y"
                                   {
			(yyval.state) = new_node("write_call", root);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4714 "src/parser.c"
    break;

  case 88: /* PrimaryExpression: READ LP IDENTIFIER RP  */
#line 875 "src/parser.y"
                                      {
			(yyval.state) = new_node("read_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));
		}
#line 4723 "src/parser.c"
    break;

  case 89: /* PrimaryExpression: WRITE_LN LP STR RP  */
#line 879 "src/parser.y"
                                    {
			(yyval.state) = new_node("write_ln_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));
		}
#line 4732 "src/parser.c"
    break;

  case 90: /* PrimaryExpression: WRITE_LN LP Expression RP  */
#line 883 "src/parser.y"
                                           {
			(yyval.state) = new_node("write_ln_call", root);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4741 "src/parser.c"
    break;

  case 91: /* PrimaryExpression: NIL  */
#line 888 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root);}
#line 4747 "src/parser.c"
    break;

  case 92: /* Params: Expression  */
#line 892 "src/parser.y"
                   {
		(yyval.state) = new_node("Args", root);
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 4757 "src/parser.c"
    break;

  case 93: /* Params: Params COM Expression  */
#line 898 "src/parser.y"
                              {
		(yyval.state) = new_node("Args", root);
		add_child((yyval.state), (yyvsp[-2].state)); 
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 4768 "src/parser.c"
    break;


#line 4772 "src/parser.c"

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

#line 906 "src/parser.y"

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
