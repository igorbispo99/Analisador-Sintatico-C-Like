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
#define YYLAST   8284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  597

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
       0,    55,    55,    59,    63,    71,    74,    77,    84,    96,
     113,   144,   154,   164,   175,   194,   210,   240,   259,   283,
     287,   300,   321,   322,   323,   324,   325,   326,   330,   336,
     337,   342,   347,   356,   362,   372,   378,   385,   386,   392,
     405,   416,   422,   426,   433,   435,   444,   445,   454,   455,
     463,   464,   473,   474,   479,   484,   489,   494,   499,   504,
     512,   513,   518,   526,   527,   532,   540,   541,   545,   549,
     555,   568,   574,   579,   596,   601,   605,   609,   613,   618,
     622,   624,   626,   628
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

#define YYPACT_NINF (-170)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-84)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      43,    53,   149,    10,   350,   372,   422,   444,     0,   171,
      25,  -170,   448,     6,   465,   216,   314,    38,     5,   496,
       4,    77,  4862,   500,    38,    86,    13,  4902,   328,  6039,
    1848,  4942,   510,    51,    51,    51,  6542,  6561,    87,   104,
     116,   120,   135,    84,  4862,  4862,  4862,  4982,   520,  5022,
     137,  5062,  5102,  5142,   139,    99,    23,    30,    85,  1785,
    2105,  6580,  6599,  6618,   524,   146,   161,   165,   175,   157,
    1886,  5989,   153,  6637,  6656,  6675,   357,   192,   566,  5182,
     582,   621,   644,  1848,  2228,  5222,  5804,  5804,  5804,  5804,
    5804,  5804,  5804,  5804,  5804,  5804,   194,  5819,  5819,  5819,
    5819,    91,   202,   195,   122,   132,   189,  5262,  6694,   184,
     225,   228,   256,   271,   276,   302,   308,   313,   166,  4223,
     142,  1978,  4263,  4303,  4343,  4383,  4423,  4463,  4503,   345,
    6713,  6732,  6751,  6770,   331,   336,   366,  5841,  6789,  6808,
    6827,  6846,  6865,  6884,   975,  2228,   354,    91,   200,  4142,
     364,    91,   383,   368,  2008,  2068,  5855,   369,    91,  5302,
     377,   381,  2068,  5342,  5382,  1848,    97,    97,    97,  7874,
    7894,   388,   390,   406,   315,   -11,    33,  5621,  8254,  7914,
    7934,  7954,  6087,  5422,  5944,  1848,   197,   197,   197,   881,
    6127,   410,   411,   412,   236,   210,    12,  1713,  1005,  6150,
    6173,  6196,   749,  1848,   253,   253,   253,  1053,  1683,   415,
     430,   440,  4182,  1952,  1343,  2184,   527,  2140,  2286,  2342,
     157,  6063,  6105,  1848,   333,   333,   333,  7335,  7353,   447,
     454,   455,  7371,  7389,  7407,  5462,  5804,  5804,  4222,  4262,
    5502,   667,  4302,  4342,   458,  4382,  4422,  4462,   463,   469,
    5964,   451,   452,  5542,  5382,  5382,  5382,  5582,   453,  7974,
    7994,  8014,   682,   482,   792,  5877,  5877,  5877,  5877,  5877,
    5877,  5877,  5877,  5877,  5877,   483,  1848,  1848,  1848,  1848,
     157,   462,  6219,  6242,  6265,   848,   489,  1092,  5891,  5891,
    5891,  5891,  5891,  5891,  5891,  5891,  5891,  5891,   501,  5841,
    5841,  5841,  5841,   157,   484,  2382,  2422,  2462,  1129,   511,
    1169,  5913,  5913,  5913,  5913,  5913,  5913,  5913,  5913,  5913,
    5913,   514,  1886,  1886,  1886,  1886,   207,  5819,   157,   492,
    7425,  7443,  7461,  1184,   522,  1302,  5804,  5804,  7479,  7497,
    4502,  5502,  5502,  5502,  4542,  4582,  1848,  2228,  4622,  1848,
    5622,  5662,  5702,  8034,   499,   502,   505,   535,   538,  4141,
    1848,   370,   370,   370,  4541,  4581,   551,   563,   567,    67,
    5301,  4621,  4661,  4701,   182,  5661,  5341,  5381,  5421,  5461,
    5501,  5541,  5581,   549,  8054,  8074,  8094,  8114,   248,  6288,
     554,   556,   557,   558,   562,  6014,  1848,   803,   803,   803,
    6902,  6925,   587,   597,   598,   282,  7677,  6948,  6971,  6994,
     128,  7854,  7700,  7723,  7746,  7769,  7792,  7815,  7838,   306,
    6311,  6334,  6357,  6380,   316,  2502,   585,   586,   593,   595,
     596,  2942,  1848,   952,   952,   952,  2982,  3022,   611,   632,
     640,  4102,  3742,  3062,  3102,  3142,  1438,  4062,  3782,  3822,
    3862,  3902,  3942,  3982,  4022,  5742,  2542,  2582,  2622,  2662,
    8134,   534,   317,  7515,   618,   619,   620,   631,   636,  7533,
    7551,  4662,  4702,  4742,   639,   663,   645,  8154,  8174,  8194,
    8214,  8234,   157,   648,  4741,  4781,  4821,  1387,   623,  1483,
    5877,  5877,  5877,  5877,  6403,  6426,  6449,  6472,  6495,  6518,
     157,   649,  7017,  7040,  7063,  1602,   676,  1618,  5891,  5891,
    5891,  5891,  2702,  2742,  2782,  2822,  2862,  2902,   157,   654,
    3182,  3222,  3262,  1762,   681,  1864,  5913,  5913,  5913,  5913,
    7569,  7587,  7605,  7623,  7641,  7659,   975,  2228,   318,  4861,
     659,   670,   674,   678,   679,  4901,  4941,  4981,  5021,   327,
    7086,   680,   691,   692,   693,   694,  7109,  7132,  7155,  7178,
     330,  3302,   695,   696,   697,   698,   699,  3342,  3382,  3422,
    3462,  5782,   690,  5061,  5101,  5141,  5181,  5221,  5261,  7201,
    7224,  7247,  7270,  7293,  7316,  3502,  3542,  3582,  3622,  3662,
    3702,   975,  5855,  4782,   700,   975,  4822
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
       0,     0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,   707,   100,   -80,  -170,  -170,  -170,   -53,
    -117,   -17,   -13,  -141,  -139,   141,   -42,  -136,  -128,  -116,
    -134,  1749,  1601,  1519,  1272,  1244,   958,   650,   340,   -20,
    -169
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    44,    45,     7,    18,     8,   135,
      46,    47,    48,    49,    50,   155,    51,    52,    53,    54,
     116,    55,   174,   175,   176,   177,   178,   179,   180,   181,
     106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    79,    63,   243,   115,   244,    13,    64,   246,    16,
      11,   150,    25,    73,    74,    75,   247,   266,   -46,   -46,
     -48,    66,   160,    63,    63,    63,    63,   149,   248,    15,
     -44,    80,    81,    82,   -13,    24,    17,   -46,   159,   290,
     -48,   -48,   -48,   -15,     1,   163,     2,   256,    22,   201,
     219,   326,    86,    -7,    -7,   182,    -7,    30,    87,   -46,
     267,   -48,   -48,   -48,    63,   115,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   251,    63,    63,    63,
      63,    26,    36,    37,   255,    38,    39,    40,   182,    65,
      30,    31,   -48,    76,   153,   266,   -47,   -47,   157,   134,
       6,    71,   245,   165,     6,   161,    85,    33,    34,    35,
      77,   388,    88,   -48,   -48,    36,    37,   201,    38,    39,
      40,   -19,    78,   343,    63,    63,   -35,   242,   169,   170,
     -83,   171,   172,   173,   424,    63,   -49,   256,   256,   256,
     -81,   -41,    63,    83,    63,    84,   259,   260,   261,   -49,
     101,   257,   -83,     9,    10,   290,   -49,   -49,   -49,   462,
     342,   184,   -81,   185,   102,   -80,   282,   283,   284,    88,
     -49,   -49,   183,   -47,   255,   255,   255,   -17,    14,   103,
     186,   187,   188,   108,   305,   306,   307,   -80,   189,   190,
     104,   191,   192,   193,    87,   -47,   111,   137,   129,   345,
     201,   184,   235,   185,   330,   331,   332,   136,   -82,   267,
     -49,   -49,   -49,   475,   139,   137,   234,   234,   -46,   138,
      63,    63,   -18,    19,   343,   343,   343,   344,   189,   190,
     -82,   191,   192,   193,    63,    63,    63,   460,   289,   -46,
     -46,   350,   351,   352,   -44,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   140,   137,   202,   141,   203,
     201,   342,   342,   342,   254,   288,   -44,   115,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   494,   201,
     201,   201,   201,   201,   207,   208,   142,   209,   210,   211,
     -47,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   143,   219,   219,   219,   219,   144,    63,   201,   -43,
     289,   -47,   -47,   538,   -45,   145,   234,   234,    20,    21,
     -42,    63,    63,    63,   137,   137,   137,    63,   471,   472,
     473,   549,    67,    68,   146,   137,   -45,   222,   137,   223,
     341,   484,   485,   486,   265,   -44,   512,   530,   573,   560,
      -2,     1,   -45,     2,   254,   254,   254,   579,   151,   152,
     585,    71,    62,   165,   227,   228,   -14,   229,   230,   231,
     147,   156,    -3,    -3,   359,    -3,   360,   502,   503,   504,
     166,   167,   168,    62,    62,    62,    62,   158,   169,   170,
     109,   171,   172,   173,   262,   243,   263,   244,   -16,   -20,
     246,   364,   365,   572,   366,   367,   368,   162,   247,   200,
     218,   -21,   264,   520,   521,   522,   285,   286,   287,   571,
     248,   308,    -5,    -5,    62,    -5,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   309,    62,    62,   132,
     133,   341,   341,   341,    -6,    -6,   310,    -6,    -4,    -4,
     243,    -4,   244,   333,   243,   246,   244,   115,   594,   246,
     334,   335,   201,   247,   346,    -8,    -8,   247,    -8,   347,
     373,   373,   373,   373,   593,   248,   348,   200,   596,   248,
     201,   -43,   -42,   353,    62,    62,   356,   383,   409,   409,
     409,   409,   389,   392,   245,    62,    -9,    -9,   201,    -9,
     -12,   -12,    62,   -12,    62,   419,   445,   445,   445,   445,
     -29,   -29,   251,   -29,   425,   428,    63,    63,   455,   242,
     -28,   -28,   463,   -28,   -11,   -11,   466,   -11,   -52,   477,
     -52,   -52,   478,   -52,   -52,   479,   -52,   -52,   321,   322,
     323,   -10,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   245,
     -52,   -52,   -52,   245,   -52,   -52,   -52,   487,   -52,   -52,
     200,   -52,   -52,   -52,   -52,   480,   -52,   -52,   481,   488,
      71,    63,   165,   489,   242,    63,   233,   233,   242,   -45,
      62,    62,   -30,   -30,   495,   -30,   496,   497,   498,   166,
     167,   168,   499,   505,    62,    62,    62,   169,   170,   112,
     171,   172,   173,   506,   507,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   513,   514,   523,   386,   387,
     200,   -31,   -31,   515,   -31,   516,   517,   542,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   524,   200,
     200,   422,   423,   200,   -32,   -32,   525,   -32,   531,   532,
     533,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   534,   218,   218,   458,   459,   535,    62,   200,   536,
     537,   182,    61,    30,   239,   -10,   469,   470,   539,   550,
     553,    62,    62,    62,   561,   564,    71,    62,   165,   574,
      33,    34,    35,    61,    61,    61,    61,   592,    36,    37,
     575,    38,    39,    40,   576,   166,   167,   168,   577,   578,
     580,    12,   591,   169,   170,   354,   171,   172,   173,   199,
     217,   581,   582,   583,   584,   586,   587,   588,   589,   590,
     595,     0,     0,     0,    61,     0,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,     0,   130,   131,     0,
     -70,     0,   -70,   -70,     0,   303,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,     0,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   199,   -70,   -70,
       0,     0,     0,     0,    61,    61,    71,     0,   165,     0,
       0,     0,     0,     0,     0,    61,     0,   395,     0,   396,
       0,     0,    61,     0,    61,   166,   167,   168,     0,     0,
       0,     0,   200,   169,   170,   357,   171,   172,   173,     0,
     372,   372,   547,   548,   400,   401,     0,   402,   403,   404,
     200,     0,     0,     0,     0,     0,     0,     0,   408,   408,
     558,   559,    71,     0,   165,     0,     0,     0,   200,     0,
       0,     0,     0,     0,     0,     0,   444,   444,   569,   570,
     199,   166,   167,   168,     0,     0,    62,    62,     0,   169,
     170,   390,   171,   172,   173,     0,   338,   339,     0,   -71,
      61,    61,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,    61,    61,    61,     0,   -71,   -71,
     -71,   -71,     0,     0,     0,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,     0,   384,   385,     0,     0,
     199,    62,     0,     0,     0,    62,     0,     0,   407,   407,
     407,   407,   407,   407,   407,   407,   407,   407,     0,   420,
     421,     0,     0,   199,     0,     0,   431,     0,   432,     0,
       0,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,     0,   456,   457,     0,     0,   238,    61,   199,   182,
      60,    30,   239,   436,   437,   240,   438,   439,   440,     0,
       0,    61,    61,    61,     0,     0,     0,    61,    33,    34,
      35,    60,    60,    60,    60,     0,    36,    37,     0,    38,
      39,    40,    41,   -52,    42,   241,   298,   299,   300,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   198,   216,     0,
       0,     0,   -52,   -52,   -52,   -52,     0,     0,     0,     0,
       0,     0,    60,     0,   119,   119,   119,   122,   123,   124,
     125,   126,   127,   128,   -71,     0,   -71,   -71,     0,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,
     -71,     0,   -71,   -71,     0,   198,    71,     0,   165,     0,
       0,     0,    60,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,   166,   167,   168,     0,     0,
      60,     0,    60,   169,   170,   393,   171,   172,   173,     0,
       0,     0,   199,    71,     0,   165,     0,     0,     0,     0,
     545,   546,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   166,   167,   168,     0,     0,     0,   556,   557,
     169,   170,   426,   171,   172,   173,     0,     0,   199,     0,
       0,     0,     0,    71,     0,   165,   567,   568,   198,     0,
       0,     0,     0,     0,     0,     0,    61,    61,    71,     0,
     165,     0,   166,   167,   168,     0,     0,     0,    60,    60,
     169,   170,   429,   171,   172,   173,     0,   166,   167,   168,
       0,     0,    60,    60,    60,   169,   170,   464,   171,   172,
     173,     0,     0,   370,   370,   370,   376,   377,   378,   379,
     380,   381,   382,     0,     0,     0,     0,     0,   198,     0,
       0,    61,     0,     0,     0,    61,   406,   406,   406,   412,
     413,   414,   415,   416,   417,   418,     0,     0,     0,     0,
       0,   198,     0,     0,     0,     0,    59,     0,     0,   442,
     442,   442,   448,   449,   450,   451,   452,   453,   454,     0,
       0,     0,     0,     0,     0,    60,   198,    59,    59,    59,
      59,     0,     0,     0,    58,     0,     0,     0,     0,    60,
      60,    60,     0,     0,     0,    60,    71,     0,   165,     0,
       0,     0,     0,   197,   215,    58,    58,    58,    58,     0,
       0,     0,     0,     0,     0,   166,   167,   168,    59,     0,
      59,    59,   121,   169,   170,   467,   171,   172,   173,     0,
       0,   196,   214,     0,   -48,     0,   -48,   -48,     0,   -48,
     -48,     0,   -48,   -48,     0,     0,    58,     0,    58,   120,
       0,     0,     0,     0,     0,     0,   -48,   -48,   -48,     0,
     313,   -48,   -48,     0,   -48,   -48,     0,   -48,   -48,   -48,
     -48,   197,   -48,   -48,     0,     0,     0,     0,    59,    59,
       0,    71,     0,   165,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,     0,    59,     0,    59,   196,
     166,   167,   168,     0,     0,     0,    58,    58,   169,   170,
     540,   171,   172,   173,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,    58,     0,    58,     0,     0,   -49,
     198,   -49,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,   -49,   -49,   -49,   197,   313,   -49,   -49,     0,   -49,
     -49,     0,   -49,   -49,   -49,   -49,   198,   -49,   -49,     0,
       0,     0,     0,     0,    59,    59,     0,    71,     0,   165,
       0,     0,   196,     0,    60,    60,     0,     0,    59,    59,
      59,     0,     0,     0,     0,     0,   166,   167,   168,     0,
       0,   375,    58,    58,   169,   170,   543,   171,   172,   173,
       0,     0,     0,     0,   197,     0,    58,    58,    58,     0,
       0,     0,   197,   197,   411,     0,     0,     0,   374,     0,
       0,    57,     0,     0,     0,     0,     0,   197,     0,    60,
       0,     0,   196,    60,     0,   215,   215,   447,     0,     0,
     196,   410,    57,    57,    57,    57,     0,     0,     0,     0,
       0,    59,   197,     0,     0,   196,     0,     0,     0,     0,
       0,     0,     0,   214,   446,    59,    59,    59,   195,   213,
       0,    59,     0,     0,     0,     0,     0,     0,     0,    58,
     196,     0,     0,    57,     0,   118,    71,     0,   165,     0,
       0,     0,     0,    58,    58,    58,     0,     0,     0,    58,
       0,     0,    71,    56,   165,   166,   167,   168,     0,     0,
       0,     0,     0,   169,   170,   551,   171,   172,   173,     0,
       0,   166,   167,   168,    56,    56,    56,    56,     0,   169,
     170,   554,   171,   172,   173,     0,   195,     0,     0,     0,
       0,     0,     0,    57,    57,     0,     0,     0,     0,     0,
     194,   212,     0,     0,    57,     0,     0,     0,     0,     0,
       0,    57,     0,    57,   -79,    56,   -79,   -79,     0,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,     0,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -50,   -79,   -79,     0,     0,   197,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   194,   195,
     -50,   -50,   -50,   -50,   197,    56,    56,     0,     0,     0,
       0,     0,     0,     0,   196,     0,    56,     0,     0,    57,
      57,     0,   197,    56,     0,    56,    71,     0,   165,     0,
       0,     0,   196,    57,    57,    57,     0,     0,     0,    72,
      59,    59,     0,     0,   369,   166,   167,   168,     0,     0,
     196,     0,   -50,   169,   170,   562,   171,   172,   173,   195,
      89,    90,    91,    92,    93,    94,    95,   405,    58,    58,
       0,     0,   -50,   -50,   -50,     0,     0,     0,   105,   107,
       0,   194,   195,     0,     0,   110,     0,   113,     0,     0,
     441,     0,   114,   117,     0,    59,     0,     0,     0,    59,
       0,    56,    56,     0,     0,     0,    57,   195,     0,     0,
       0,     0,    71,     0,   165,    56,    56,    56,     0,     0,
      57,    57,    57,    58,     0,     0,    57,    58,    71,     0,
     165,   166,   167,   168,     0,     0,     0,     0,     0,   169,
     170,   194,   171,   172,   173,     0,   148,   166,   167,   168,
     202,     0,   203,   249,   117,   169,   170,   565,   171,   172,
     173,     0,     0,     0,   194,   252,     0,     0,     0,   204,
     205,   206,     0,     0,   258,     0,     0,   207,   208,     0,
     209,   210,   211,     0,     0,     0,     0,     0,    56,   194,
       0,     0,     0,     0,   281,     0,     0,     0,     0,     0,
       0,     0,    56,    56,    56,     0,     0,     0,    56,     0,
       0,     0,   304,   -46,     0,   -46,   -46,     0,   -46,   -46,
       0,   -46,   -46,     0,     0,     0,     0,     0,     0,   105,
       0,     0,   329,     0,     0,   -46,   -46,   -46,     0,     0,
     312,   -46,     0,   -46,   -46,   -51,   -46,   -46,   -46,   -46,
     249,   -46,   -46,    89,    90,    91,    92,    93,    94,    95,
       0,   195,     0,     0,     0,   -51,   -51,   -51,     0,   -36,
       0,   355,   -36,   358,   -36,   -36,     0,     0,   -36,   195,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
       0,   -36,   -36,   -36,   391,     0,   394,   195,     0,   -36,
     -36,     0,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,
       0,     0,   105,     0,     0,    57,    57,   427,     0,   430,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,   182,     0,    30,    31,   461,   105,   164,     0,
       0,     0,   465,   194,   468,     0,     0,     0,     0,     0,
       0,    33,    34,    35,     0,   474,   117,     0,   476,    36,
      37,   194,    38,    39,    40,    41,     0,    42,    43,   483,
      57,     0,   -52,     0,    57,     0,    96,    97,    98,   194,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,     0,   -52,   -52,   -52,     0,     0,    56,    56,     0,
       0,   -60,     0,   -60,   -60,   501,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   324,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   325,   -60,   -60,   -60,     0,   -60,   -60,   -60,
       0,   -60,   -60,     0,   -60,   -60,   -60,   -60,     0,   -60,
     -60,   519,     0,     0,     0,   -50,     0,   -50,   -50,     0,
     -50,   -50,    56,   -50,   -50,     0,    56,     0,     0,   314,
     315,   316,   317,   318,   319,   320,     0,   -50,   -50,   -50,
       0,   -50,   -50,   -50,     0,   -50,   -50,     0,   -50,   -50,
     -50,   -50,     0,   -50,   -50,     0,     0,     0,     0,     0,
       0,   105,   221,     0,    30,     0,   541,     0,   544,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
       0,    33,    34,    35,   552,     0,   555,     0,     0,    36,
      37,     0,    38,    39,    40,     0,     0,   105,     0,     0,
       0,     0,   563,     0,   566,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,   117,   -63,     0,   -63,
     -63,     0,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -63,   -63,   -63,     0,   -63,   -63,     0,
     -63,   -63,   -63,   -63,     0,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     249,   252,     0,   -66,   249,   -66,   -66,     0,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -69,     0,   -69,   -69,     0,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -67,     0,   -67,   -67,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -68,     0,   -68,   -68,     0,   -68,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -72,     0,   -72,   -72,     0,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -61,     0,   -61,   -61,     0,   -61,   -61,
       0,   -61,   -61,   -61,   -61,   -61,   324,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   325,   -61,   -61,   -61,     0,   -61,
     -61,   -61,     0,   -61,   -61,     0,   -61,   -61,   -61,   -61,
       0,   -61,   -61,   -62,     0,   -62,   -62,     0,   -62,   -62,
       0,   -62,   -62,   -62,   -62,   -62,   324,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   325,   -62,   -62,   -62,     0,   -62,
     -62,   -62,     0,   -62,   -62,     0,   -62,   -62,   -62,   -62,
       0,   -62,   -62,   -64,     0,   -64,   -64,     0,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,
     -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -65,     0,   -65,   -65,     0,   -65,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   -65,     0,   -65,   -65,     0,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -73,     0,   -73,   -73,     0,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -74,     0,   -74,   -74,     0,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -75,     0,   -75,   -75,     0,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -76,     0,   -76,   -76,     0,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -77,     0,   -77,   -77,     0,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -78,     0,   -78,   -78,     0,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,     0,   -78,   -78,     0,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -70,     0,   -70,   -70,     0,   518,   -70,
       0,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,     0,   -70,   -70,     0,   -70,   -70,   -70,   -70,
       0,   -70,   -70,   -71,     0,   -71,   -71,     0,   -71,   -71,
       0,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,   -71,
       0,   -71,   -71,   -79,     0,   -79,   -79,     0,   -79,   -79,
       0,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,     0,   -79,   -79,     0,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -60,     0,   -60,   -60,     0,   -60,   -60,
       0,   -60,   -60,     0,   -60,   -60,   528,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   529,   -60,   -60,   -60,     0,   -60,
     -60,   -60,     0,   -60,   -60,     0,   -60,   -60,   -60,   -60,
       0,   -60,   -60,   -63,     0,   -63,   -63,     0,   -63,   -63,
       0,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -63,
     -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -66,     0,   -66,   -66,     0,   -66,   -66,
       0,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -69,     0,   -69,   -69,     0,   -69,   -69,
       0,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,     0,   -69,   -69,     0,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -67,     0,   -67,   -67,     0,   -67,   -67,
       0,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -68,     0,   -68,   -68,     0,   -68,   -68,
       0,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -72,     0,   -72,   -72,     0,   -72,   -72,
       0,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,     0,   -72,   -72,     0,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -61,     0,   -61,   -61,     0,   -61,   -61,
       0,   -61,   -61,     0,   -61,   -61,   528,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   529,   -61,   -61,   -61,     0,   -61,
     -61,   -61,     0,   -61,   -61,     0,   -61,   -61,   -61,   -61,
       0,   -61,   -61,   -62,     0,   -62,   -62,     0,   -62,   -62,
       0,   -62,   -62,     0,   -62,   -62,   528,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   529,   -62,   -62,   -62,     0,   -62,
     -62,   -62,     0,   -62,   -62,     0,   -62,   -62,   -62,   -62,
       0,   -62,   -62,   -64,     0,   -64,   -64,     0,   -64,   -64,
       0,   -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,
     -64,   -64,     0,   -64,   -64,     0,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -65,     0,   -65,   -65,     0,   -65,   -65,
       0,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   -65,     0,   -65,   -65,     0,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -73,     0,   -73,   -73,     0,   -73,   -73,
       0,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,     0,   -73,   -73,     0,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -74,     0,   -74,   -74,     0,   -74,   -74,
       0,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -75,     0,   -75,   -75,     0,   -75,   -75,
       0,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -76,     0,   -76,   -76,     0,   -76,   -76,
       0,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -77,     0,   -77,   -77,     0,   -77,   -77,
       0,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -78,     0,   -78,   -78,     0,   -78,   -78,
       0,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,     0,   -78,   -78,     0,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -52,     0,   -52,   -52,     0,   -52,   -52,
       0,   -52,   -52,     0,   526,   527,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,     0,   -52,   -52,   -52,     0,   -52,
     -52,   -52,     0,   -52,   -52,     0,   -52,   -52,   -52,   -52,
       0,   -52,   -52,   -55,     0,   -55,   -55,     0,   -55,   -55,
       0,   -55,   -55,     0,   526,   527,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,     0,   -55,   -55,   -55,     0,   -55,
     -55,   -55,     0,   -55,   -55,     0,   -55,   -55,   -55,   -55,
       0,   -55,   -55,   -56,     0,   -56,   -56,     0,   -56,   -56,
       0,   -56,   -56,     0,   526,   527,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,     0,   -56,   -56,   -56,     0,   -56,
     -56,   -56,     0,   -56,   -56,     0,   -56,   -56,   -56,   -56,
       0,   -56,   -56,   -53,     0,   -53,   -53,     0,   -53,   -53,
       0,   -53,   -53,     0,   526,   527,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   -53,   -53,   -53,     0,   -53,
     -53,   -53,     0,   -53,   -53,     0,   -53,   -53,   -53,   -53,
       0,   -53,   -53,   -54,     0,   -54,   -54,     0,   -54,   -54,
       0,   -54,   -54,     0,   526,   527,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,     0,   -54,
     -54,   -54,     0,   -54,   -54,     0,   -54,   -54,   -54,   -54,
       0,   -54,   -54,   -57,     0,   -57,   -57,     0,   -57,   -57,
       0,   -57,   -57,     0,   526,   527,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,     0,   -57,
     -57,   -57,     0,   -57,   -57,     0,   -57,   -57,   -57,   -57,
       0,   -57,   -57,   -58,     0,   -58,   -58,     0,   -58,   -58,
       0,   -58,   -58,     0,   526,   527,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,     0,   -58,
     -58,   -58,     0,   -58,   -58,     0,   -58,   -58,   -58,   -58,
       0,   -58,   -58,   -59,     0,   -59,   -59,     0,   -59,   -59,
       0,   -59,   -59,     0,   526,   527,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,     0,   -59,
     -59,   -59,     0,   -59,   -59,     0,   -59,   -59,   -59,   -59,
       0,   -59,   -59,   -51,     0,   -51,   -51,     0,   -51,   -51,
       0,   -51,   -51,     0,     0,     0,     0,   314,   315,   316,
     317,   318,   319,   320,     0,   -51,   -51,   -51,     0,   -51,
     -51,   -51,     0,   -51,   -51,     0,   -51,   -51,   -51,   -51,
       0,   -51,   -51,   -47,     0,   -47,   -47,     0,   -47,   -47,
       0,   -47,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -47,   -47,   -47,     0,     0,
     312,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -33,     0,   -33,   -33,   482,   -33,   -33,
       0,   -33,   -33,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,   -33,   -33,   -33,   -70,   -70,
     -70,   -70,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     154,   -33,   -33,   -44,     0,   -44,   -44,     0,   -44,   -44,
       0,   -44,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,   -44,   -44,     0,     0,
       0,   311,     0,   -44,   -44,     0,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -27,     0,   -27,   -27,     0,   -27,   -27,
     -52,   -27,   -27,     0,     0,   236,   237,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -27,   -27,   -27,     0,     0,
     -52,   -52,   -52,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -37,     0,   -37,   -37,     0,   -37,   -37,
     -55,   -37,   -37,     0,     0,   236,   237,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -37,   -37,   -37,     0,     0,
     -55,   -55,   -55,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -22,     0,   -22,   -22,     0,   -22,   -22,
     -56,   -22,   -22,     0,     0,   236,   237,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -22,   -22,   -22,     0,     0,
     -56,   -56,   -56,   -22,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -24,     0,   -24,   -24,     0,   -24,   -24,
     -53,   -24,   -24,     0,     0,   236,   237,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -24,   -24,   -24,     0,     0,
     -53,   -53,   -53,   -24,   -24,     0,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -26,     0,   -26,   -26,     0,   -26,   -26,
     -54,   -26,   -26,     0,     0,   236,   237,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -26,   -26,   -26,     0,     0,
     -54,   -54,   -54,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -23,     0,   -23,   -23,     0,   -23,   -23,
     -57,   -23,   -23,     0,     0,   236,   237,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -23,   -23,   -23,     0,     0,
     -57,   -57,   -57,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -25,     0,   -25,   -25,     0,   -25,   -25,
     -58,   -25,   -25,     0,     0,   236,   237,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -25,   -25,   -25,     0,     0,
     -58,   -58,   -58,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -29,     0,   -29,   -29,     0,   -29,   -29,
     -59,   -29,   -29,     0,     0,   236,   237,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -29,   -29,   -29,     0,     0,
     -59,   -59,   -59,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -28,     0,   -28,   -28,     0,   -28,   -28,
       0,   -28,   -28,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -28,   -28,   -28,   -71,   -71,
     -71,   -71,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -39,     0,   -39,   -39,     0,   -39,   -39,
       0,   -39,   -39,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -39,   -39,   -39,   -79,   -79,
     -79,   -79,     0,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -38,     0,   -38,   -38,     0,   -38,   -38,
       0,   -38,   -38,   -60,   -60,   492,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   493,     0,   -38,   -38,   -38,   -60,   -60,
     -60,   -60,     0,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -30,     0,   -30,   -30,     0,   -30,   -30,
       0,   -30,   -30,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -30,   -30,   -30,   -63,   -63,
     -63,   -63,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -31,     0,   -31,   -31,     0,   -31,   -31,
       0,   -31,   -31,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -31,   -31,   -31,   -66,   -66,
     -66,   -66,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -32,     0,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -32,   -32,   -32,   -69,   -69,
     -69,   -69,     0,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -34,     0,   -34,   -34,     0,   -34,   -34,
       0,   -34,   -34,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -34,   -34,   -34,   -67,   -67,
     -67,   -67,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -40,     0,   -40,   -40,     0,   -40,   -40,
       0,   -40,   -40,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -40,   -40,   -40,   -68,   -68,
     -68,   -68,     0,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,    27,     0,    28,    29,     0,    30,    31,
       0,    32,   164,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,    33,    34,    35,   -72,   -72,
     -72,   -72,     0,    36,    37,     0,    38,    39,    40,    41,
       0,    42,    43,   -27,     0,   -27,   -27,     0,   -27,   -27,
       0,   -27,   -27,   -61,   -61,   492,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   493,     0,   -27,   -27,   -27,   -61,   -61,
     -61,   -61,     0,   -27,   -27,     0,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -37,     0,   -37,   -37,     0,   -37,   -37,
       0,   -37,   -37,   -62,   -62,   492,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   493,     0,   -37,   -37,   -37,   -62,   -62,
     -62,   -62,     0,   -37,   -37,     0,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -22,     0,   -22,   -22,     0,   -22,   -22,
       0,   -22,   -22,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,   -22,   -22,   -22,   -64,   -64,
     -64,   -64,     0,   -22,   -22,     0,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -24,     0,   -24,   -24,     0,   -24,   -24,
       0,   -24,   -24,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -24,   -24,   -24,   -65,   -65,
     -65,   -65,     0,   -24,   -24,     0,   -24,   -24,   -24,   -24,
       0,   -24,   -24,   -26,     0,   -26,   -26,     0,   -26,   -26,
       0,   -26,   -26,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -26,   -26,   -26,   -73,   -73,
     -73,   -73,     0,   -26,   -26,     0,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -23,     0,   -23,   -23,     0,   -23,   -23,
       0,   -23,   -23,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -23,   -23,   -23,   -74,   -74,
     -74,   -74,     0,   -23,   -23,     0,   -23,   -23,   -23,   -23,
       0,   -23,   -23,   -25,     0,   -25,   -25,     0,   -25,   -25,
       0,   -25,   -25,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -25,   -25,   -25,   -75,   -75,
     -75,   -75,     0,   -25,   -25,     0,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -39,     0,   -39,   -39,     0,   -39,   -39,
       0,   -39,   -39,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -39,   -39,   -39,   -76,   -76,
     -76,   -76,     0,   -39,   -39,     0,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -38,     0,   -38,   -38,     0,   -38,   -38,
       0,   -38,   -38,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -38,   -38,   -38,   -77,   -77,
     -77,   -77,     0,   -38,   -38,     0,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -10,     0,   -10,   -10,     0,   -10,   -10,
       0,   -10,   -10,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -10,   -10,   -10,   -78,   -78,
     -78,   -78,     0,   -10,   -10,     0,   -10,   -10,   -10,   -10,
       0,   -10,   -10,   -34,     0,   -34,   -34,     0,   -34,   -34,
       0,   -34,   -34,   490,   491,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,     0,     0,   -34,   -34,   -34,   -52,   -52,
     -52,   -52,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -40,     0,   -40,   -40,     0,   -40,   -40,
       0,   -40,   -40,   490,   491,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,     0,     0,   -40,   -40,   -40,   -55,   -55,
     -55,   -55,     0,   -40,   -40,     0,   -40,   -40,   -40,   -40,
       0,   -40,   -40,    27,     0,    28,    29,     0,    30,    31,
       0,   253,   164,   490,   491,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,     0,     0,    33,    34,    35,   -56,   -56,
     -56,   -56,     0,    36,    37,     0,    38,    39,    40,    41,
       0,    42,    43,    -8,     0,    -8,    -8,     0,    -8,    -8,
       0,    -8,    -8,   490,   491,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,     0,     0,    -8,    -8,    -8,   -53,   -53,
     -53,   -53,     0,    -8,    -8,     0,    -8,    -8,    -8,    -8,
       0,    -8,    -8,    -9,     0,    -9,    -9,     0,    -9,    -9,
       0,    -9,    -9,   490,   491,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,     0,    -9,    -9,    -9,   -54,   -54,
     -54,   -54,     0,    -9,    -9,     0,    -9,    -9,    -9,    -9,
       0,    -9,    -9,    27,     0,    28,    29,     0,    30,    31,
       0,   340,   164,   490,   491,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,    33,    34,    35,   -57,   -57,
     -57,   -57,     0,    36,    37,     0,    38,    39,    40,    41,
       0,    42,    43,   -29,     0,   -29,   -29,     0,   -29,   -29,
       0,   -29,   -29,   490,   491,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,   -29,   -29,   -29,   -58,   -58,
     -58,   -58,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -28,     0,   -28,   -28,     0,   -28,   -28,
       0,   -28,   -28,   490,   491,     0,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,   -28,   -28,   -28,   -59,   -59,
     -59,   -59,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -30,     0,   -30,   -30,     0,   -30,   -30,
       0,   -30,   -30,     0,     0,     0,   268,   269,   270,   271,
     272,   273,   274,     0,     0,   -30,   -30,   -30,   -50,   -50,
     -50,   -50,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -31,     0,   -31,   -31,     0,   -31,   -31,
       0,   -31,   -31,     0,     0,     0,   268,   269,   270,   271,
     272,   273,   274,     0,     0,   -31,   -31,   -31,   -51,   -51,
     -51,   -51,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -32,     0,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,   -32,   -32,     0,     0,
       0,     0,     0,   -32,   -32,     0,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -45,     0,   -45,   -45,     0,   -45,   -45,
       0,   -45,   -45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -45,   -45,   -45,     0,     0,
       0,     0,     0,   -45,   -45,     0,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -33,     0,   -33,   -33,     0,   -33,   -33,
       0,   -33,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   222,     0,
     223,     0,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   182,     0,    30,     0,   224,   225,   226,
       0,     0,     0,     0,     0,   227,   228,     0,   229,   230,
     231,     0,    33,    34,    35,   184,     0,   185,     0,     0,
      36,    37,     0,    38,    39,    40,     0,     0,     0,   250,
       0,   165,     0,     0,   186,   187,   188,     0,     0,     0,
       0,     0,   189,   190,     0,   191,   192,   193,   166,   167,
     168,   359,     0,   360,     0,     0,   169,   170,     0,   171,
     172,   173,     0,     0,     0,   395,     0,   396,     0,     0,
     361,   362,   363,     0,     0,     0,     0,     0,   364,   365,
       0,   366,   367,   368,   397,   398,   399,   431,     0,   432,
       0,     0,   400,   401,     0,   402,   403,   404,     0,     0,
       0,     0,     0,     0,     0,     0,   433,   434,   435,     0,
       0,     0,     0,     0,   436,   437,     0,   438,   439,   440,
     280,     0,   -70,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
     220,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
     349,   -70,   -70,   -70,   -70,   220,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     500,     0,   -70,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,    69,   -70,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,    70,   -70,   -70,   -70,    69,
     -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,   327,
     -70,   -70,   -70,    69,   -70,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   328,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,   -70,   -70,   -70,   -79,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -60,     0,
       0,   -60,   -60,   -60,   301,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   302,     0,     0,     0,     0,   -60,   -60,   -60,
     -60,   -63,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,   -66,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -69,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -67,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -68,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -72,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -61,
       0,     0,   -61,   -61,   -61,   301,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   302,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -62,     0,     0,   -62,   -62,   -62,   301,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   302,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -64,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,   -65,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -73,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
     -73,   -73,   -73,   -73,   -74,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -75,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -76,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -77,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -78,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -71,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -79,   -71,
     -71,   -71,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,   -60,   -79,   -79,
     -79,   -60,   -60,   -60,    99,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   100,     0,     0,     0,   -63,   -60,   -60,   -60,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,   -66,   -63,   -63,   -63,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,   -69,   -66,   -66,   -66,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,   -67,   -69,   -69,   -69,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,   -68,   -67,   -67,   -67,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,   -72,   -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
     -61,   -72,   -72,   -72,   -61,   -61,   -61,    99,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   100,     0,     0,     0,   -62,
     -61,   -61,   -61,   -62,   -62,   -62,    99,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   100,     0,     0,     0,   -64,   -62,
     -62,   -62,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,   -65,   -64,   -64,
     -64,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,   -73,   -65,   -65,   -65,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,   -74,   -73,   -73,   -73,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,   -75,   -74,   -74,   -74,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,   -76,   -75,   -75,   -75,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,   -77,   -76,   -76,   -76,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,   -78,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
     -71,   -78,   -78,   -78,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -79,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -60,     0,     0,     0,
     -60,   -60,   510,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     511,     0,     0,     0,     0,   -60,   -60,   -60,   -60,   -63,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -69,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -67,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -68,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -72,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -61,     0,     0,
       0,   -61,   -61,   510,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   511,     0,     0,     0,     0,   -61,   -61,   -61,   -61,
     -62,     0,     0,     0,   -62,   -62,   510,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   511,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -64,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   -65,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -73,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -74,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -75,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -76,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -77,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -78,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,   -71,   -78,   -78,   -78,   -78,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -79,     0,   -71,   -71,   -71,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -60,     0,
     -79,   -79,   -79,   -60,   -60,   336,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   337,     0,     0,   -63,     0,   -60,   -60,
     -60,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,   -66,     0,   -63,   -63,   -63,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -69,     0,   -66,   -66,   -66,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
     -67,     0,   -69,   -69,   -69,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,   -68,     0,
     -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,   -61,     0,   -68,   -68,
     -68,   -61,   -61,   336,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   337,     0,     0,   -62,     0,   -61,   -61,   -61,   -62,
     -62,   336,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   337,
       0,     0,   -72,     0,   -62,   -62,   -62,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
     -64,     0,   -72,   -72,   -72,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   -65,     0,
     -64,   -64,   -64,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -73,     0,   -65,   -65,
     -65,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -74,     0,   -73,   -73,   -73,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -75,     0,   -74,   -74,   -74,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
     -76,     0,   -75,   -75,   -75,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,   -77,     0,
     -76,   -76,   -76,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,   -78,     0,   -77,   -77,
     -77,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,   -52,   -78,   -78,   -78,   508,
     509,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   -55,     0,
       0,     0,   508,   509,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -56,     0,     0,     0,   508,   509,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,     0,
     -56,   -56,   -56,   -56,   -53,     0,     0,     0,   508,   509,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -54,     0,     0,
       0,   508,   509,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
     -57,     0,     0,     0,   508,   509,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,     0,     0,     0,     0,     0,   -57,
     -57,   -57,   -57,   -58,     0,     0,     0,   508,   509,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,     0,
       0,     0,   -58,   -58,   -58,   -58,   -59,     0,     0,     0,
     508,   509,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
       0,     0,   -51,     0,     0,   -59,   -59,   -59,   -59,   291,
     292,   293,   294,   295,   296,   297,     0,     0,     0,     0,
       0,   -51,   -51,   -51,   -51,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -60,   -60,   -60,   278,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   279,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -61,   -61,   -61,   278,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   279,     0,     0,     0,
       0,   -61,   -61,   -61,   -61,   -62,   -62,   -62,   278,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   279,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   275,   276,   277,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,     0,
       0,   -52,   -52,   -52,   -52
};

static const yytype_int16 yycheck[] =
{
      17,    43,    22,   144,    84,   144,     6,    24,   144,     3,
       0,   145,     8,    33,    34,    35,   144,    28,    29,    30,
       8,     8,   156,    43,    44,    45,    46,   144,   144,     4,
       7,    44,    45,    46,    30,    30,    30,     7,   155,    27,
      28,    29,    30,    30,     1,   162,     3,   164,    10,    69,
      70,   220,    29,     0,     1,     4,     3,     6,    28,    29,
      27,    28,    29,    30,    84,   145,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,   156,    97,    98,    99,
     100,     4,    31,    32,   164,    34,    35,    36,     4,     3,
       6,     7,     7,     6,   147,    28,    29,    30,   151,     8,
       0,     4,   144,     6,     4,   158,     7,    23,    24,    25,
       6,   280,    27,    28,    29,    31,    32,   137,    34,    35,
      36,    30,     6,   240,   144,   145,     6,   144,    31,    32,
       8,    34,    35,    36,   303,   155,     8,   254,   255,   256,
       8,     6,   162,     6,   164,     6,   166,   167,   168,     7,
       4,   164,    30,     4,     5,    27,    28,    29,    30,   328,
     240,     4,    30,     6,     3,     8,   186,   187,   188,    27,
      28,    29,     7,     7,   254,   255,   256,     6,     7,     4,
      23,    24,    25,    30,   204,   205,   206,    30,    31,    32,
      33,    34,    35,    36,    28,    29,     4,     8,     4,   241,
     220,     4,     7,     6,   224,   225,   226,     5,     8,    27,
      28,    29,    30,   347,    30,     8,   236,   237,     8,    30,
     240,   241,     6,     7,   341,   342,   343,   240,    31,    32,
      30,    34,    35,    36,   254,   255,   256,    30,    28,    29,
      30,   254,   255,   256,     8,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,    30,     8,     4,    30,     6,
     280,   341,   342,   343,   164,    29,    30,   347,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,    30,   299,
     300,   301,   302,   303,    31,    32,    30,    34,    35,    36,
       8,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,    30,   322,   323,   324,   325,    30,   327,   328,     7,
      28,    29,    30,   482,     8,     7,   336,   337,     4,     5,
       7,   341,   342,   343,     8,     8,     8,   347,   341,   342,
     343,   500,     4,     5,     3,     8,    30,     4,     8,     6,
     240,   361,   362,   363,    29,    30,    30,    30,    30,   518,
       0,     1,     7,     3,   254,   255,   256,    30,     4,     5,
      30,     4,    22,     6,    31,    32,    30,    34,    35,    36,
       4,     7,     0,     1,     4,     3,     6,   397,   398,   399,
      23,    24,    25,    43,    44,    45,    46,     4,    31,    32,
      33,    34,    35,    36,     6,   536,     6,   536,    30,    30,
     536,    31,    32,   537,    34,    35,    36,    30,   536,    69,
      70,    30,     6,   433,   434,   435,     6,     6,     6,   536,
     536,     6,     0,     1,    84,     3,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     6,    97,    98,    99,
     100,   341,   342,   343,     0,     1,     6,     3,     0,     1,
     591,     3,   591,     6,   595,   591,   595,   537,   592,   595,
       6,     6,   482,   591,     6,     0,     1,   595,     3,     6,
     490,   491,   492,   493,   591,   591,     7,   137,   595,   595,
     500,    30,    30,    30,   144,   145,     4,     4,   508,   509,
     510,   511,    30,     4,   536,   155,     0,     1,   518,     3,
       0,     1,   162,     3,   164,     4,   526,   527,   528,   529,
       0,     1,   592,     3,    30,     4,   536,   537,     4,   536,
       0,     1,    30,     3,     0,     1,     4,     3,     1,    30,
       3,     4,    30,     6,     7,    30,     9,    10,    11,    12,
      13,     7,    15,    16,    17,    18,    19,    20,    21,   591,
      23,    24,    25,   595,    27,    28,    29,     6,    31,    32,
     220,    34,    35,    36,    37,    30,    39,    40,    30,     6,
       4,   591,     6,     6,   591,   595,   236,   237,   595,    30,
     240,   241,     0,     1,    30,     3,    30,    30,    30,    23,
      24,    25,    30,     6,   254,   255,   256,    31,    32,    33,
      34,    35,    36,     6,     6,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,    30,    30,     6,   278,   279,
     280,     0,     1,    30,     3,    30,    30,     4,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,     6,   299,
     300,   301,   302,   303,     0,     1,     6,     3,    30,    30,
      30,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,    30,   322,   323,   324,   325,    30,   327,   328,    30,
       7,     4,    22,     6,     7,    30,   336,   337,    30,    30,
       4,   341,   342,   343,    30,     4,     4,   347,     6,    30,
      23,    24,    25,    43,    44,    45,    46,     7,    31,    32,
      30,    34,    35,    36,    30,    23,    24,    25,    30,    30,
      30,     4,   571,    31,    32,    33,    34,    35,    36,    69,
      70,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    98,    -1,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    -1,    34,    35,    36,    37,   137,    39,    40,
      -1,    -1,    -1,    -1,   144,   145,     4,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,   155,    -1,     4,    -1,     6,
      -1,    -1,   162,    -1,   164,    23,    24,    25,    -1,    -1,
      -1,    -1,   482,    31,    32,    33,    34,    35,    36,    -1,
     490,   491,   492,   493,    31,    32,    -1,    34,    35,    36,
     500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   508,   509,
     510,   511,     4,    -1,     6,    -1,    -1,    -1,   518,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   526,   527,   528,   529,
     220,    23,    24,    25,    -1,    -1,   536,   537,    -1,    31,
      32,    33,    34,    35,    36,    -1,   236,   237,    -1,     8,
     240,   241,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,   254,   255,   256,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,    -1,   276,   277,    -1,    -1,
     280,   591,    -1,    -1,    -1,   595,    -1,    -1,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,    -1,   299,
     300,    -1,    -1,   303,    -1,    -1,     4,    -1,     6,    -1,
      -1,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,    -1,   322,   323,    -1,    -1,     1,   327,   328,     4,
      22,     6,     7,    31,    32,    10,    34,    35,    36,    -1,
      -1,   341,   342,   343,    -1,    -1,    -1,   347,    23,    24,
      25,    43,    44,    45,    46,    -1,    31,    32,    -1,    34,
      35,    36,    37,     8,    39,    40,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    69,    70,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,    -1,    39,    40,    -1,   137,     4,    -1,     6,    -1,
      -1,    -1,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    23,    24,    25,    -1,    -1,
     162,    -1,   164,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,   482,     4,    -1,     6,    -1,    -1,    -1,    -1,
     490,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     500,    -1,    23,    24,    25,    -1,    -1,    -1,   508,   509,
      31,    32,    33,    34,    35,    36,    -1,    -1,   518,    -1,
      -1,    -1,    -1,     4,    -1,     6,   526,   527,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   536,   537,     4,    -1,
       6,    -1,    23,    24,    25,    -1,    -1,    -1,   240,   241,
      31,    32,    33,    34,    35,    36,    -1,    23,    24,    25,
      -1,    -1,   254,   255,   256,    31,    32,    33,    34,    35,
      36,    -1,    -1,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,    -1,    -1,    -1,    -1,    -1,   280,    -1,
      -1,   591,    -1,    -1,    -1,   595,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,    -1,    22,    -1,    -1,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    43,    44,    45,
      46,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,   341,
     342,   343,    -1,    -1,    -1,   347,     4,    -1,     6,    -1,
      -1,    -1,    -1,    69,    70,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    84,    -1,
      86,    87,    88,    31,    32,    33,    34,    35,    36,    -1,
      -1,    69,    70,    -1,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    84,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,   137,    39,    40,    -1,    -1,    -1,    -1,   144,   145,
      -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,   164,   137,
      23,    24,    25,    -1,    -1,    -1,   144,   145,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,   164,    -1,    -1,     1,
     482,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,    -1,
      -1,    23,    24,    25,   220,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,   518,    39,    40,    -1,
      -1,    -1,    -1,    -1,   240,   241,    -1,     4,    -1,     6,
      -1,    -1,   220,    -1,   536,   537,    -1,    -1,   254,   255,
     256,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,   267,   240,   241,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,   280,    -1,   254,   255,   256,    -1,
      -1,    -1,   288,   289,   290,    -1,    -1,    -1,   266,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,   303,    -1,   591,
      -1,    -1,   280,   595,    -1,   311,   312,   313,    -1,    -1,
     288,   289,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,   303,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   311,   312,   341,   342,   343,    69,    70,
      -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
     328,    -1,    -1,    84,    -1,    86,     4,    -1,     6,    -1,
      -1,    -1,    -1,   341,   342,   343,    -1,    -1,    -1,   347,
      -1,    -1,     4,    22,     6,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    23,    24,    25,    43,    44,    45,    46,    -1,    31,
      32,    33,    34,    35,    36,    -1,   137,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   145,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,   164,     1,    84,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,     8,    39,    40,    -1,    -1,   482,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,   137,   220,
      27,    28,    29,    30,   500,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   482,    -1,   155,    -1,    -1,   240,
     241,    -1,   518,   162,    -1,   164,     4,    -1,     6,    -1,
      -1,    -1,   500,   254,   255,   256,    -1,    -1,    -1,    30,
     536,   537,    -1,    -1,   265,    23,    24,    25,    -1,    -1,
     518,    -1,     7,    31,    32,    33,    34,    35,    36,   280,
      15,    16,    17,    18,    19,    20,    21,   288,   536,   537,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    69,    70,
      -1,   220,   303,    -1,    -1,    76,    -1,    78,    -1,    -1,
     311,    -1,    83,    84,    -1,   591,    -1,    -1,    -1,   595,
      -1,   240,   241,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,     4,    -1,     6,   254,   255,   256,    -1,    -1,
     341,   342,   343,   591,    -1,    -1,   347,   595,     4,    -1,
       6,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,   280,    34,    35,    36,    -1,   137,    23,    24,    25,
       4,    -1,     6,   144,   145,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,   303,   156,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,   165,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,   327,   328,
      -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   341,   342,   343,    -1,    -1,    -1,   347,    -1,
      -1,    -1,   203,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,    -1,   223,    -1,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    31,    32,     7,    34,    35,    36,    37,
     241,    39,    40,    15,    16,    17,    18,    19,    20,    21,
      -1,   482,    -1,    -1,    -1,    27,    28,    29,    -1,     1,
      -1,   262,     4,   264,     6,     7,    -1,    -1,    10,   500,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,
      -1,    23,    24,    25,   285,    -1,   287,   518,    -1,    31,
      32,    -1,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,   303,    -1,    -1,   536,   537,   308,    -1,   310,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,    -1,     6,     7,   327,   328,    10,    -1,
      -1,    -1,   333,   482,   335,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,   346,   347,    -1,   349,    31,
      32,   500,    34,    35,    36,    37,    -1,    39,    40,   360,
     591,    -1,     7,    -1,   595,    -1,    11,    12,    13,   518,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,    -1,   536,   537,    -1,
      -1,     1,    -1,     3,     4,   396,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    -1,    39,
      40,   432,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,     7,   591,     9,    10,    -1,   595,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,   482,     4,    -1,     6,    -1,   487,    -1,   489,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,
      -1,    23,    24,    25,   505,    -1,   507,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    -1,    -1,   518,    -1,    -1,
      -1,    -1,   523,    -1,   525,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   536,   537,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     591,   592,    -1,     1,   595,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,     6,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
       7,     9,    10,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    23,    24,    25,    -1,    -1,
      27,    28,    29,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
       7,     9,    10,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    23,    24,    25,    -1,    -1,
      27,    28,    29,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
       7,     9,    10,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    23,    24,    25,    -1,    -1,
      27,    28,    29,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
       7,     9,    10,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    23,    24,    25,    -1,    -1,
      27,    28,    29,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
       7,     9,    10,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    23,    24,    25,    -1,    -1,
      27,    28,    29,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
       7,     9,    10,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    23,    24,    25,    -1,    -1,
      27,    28,    29,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
       7,     9,    10,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    23,    24,    25,    -1,    -1,
      27,    28,    29,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
       7,     9,    10,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    23,    24,    25,    -1,    -1,
      27,    28,    29,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    23,    24,    25,    27,    28,
      29,    30,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,     4,    -1,
       6,    -1,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    39,    40,     4,    -1,     6,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    -1,    23,    24,    25,     4,    -1,     6,    -1,    -1,
      31,    32,    -1,    34,    35,    36,    -1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    36,    23,    24,
      25,     4,    -1,     6,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    23,    24,    25,     4,    -1,     6,
      -1,    -1,    31,    32,    -1,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,
       6,    -1,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
       6,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,     6,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       6,    -1,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,     6,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,     6,     7,    -1,    27,    28,    29,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
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
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
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
      -1,    -1,     7,    27,    28,    29,    30,    12,    13,    14,
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
      17,    18,    19,    20,    21,    22,    -1,    -1,     7,    -1,
      27,    28,    29,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,     7,    -1,    27,    28,
      29,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,     8,    27,    28,    29,    12,
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
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     8,    -1,    -1,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,
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
      22,     4,     3,     4,    33,    62,    71,    62,    30,    33,
      62,     4,    33,    62,    62,    46,    61,    62,    64,    67,
      65,    66,    67,    67,    67,    67,    67,    67,    67,     4,
      68,    68,    69,    69,     8,    50,     5,     8,    30,    30,
      30,    30,    30,    30,    30,     7,     3,     4,    62,    51,
      61,     4,     5,    50,    38,    56,     7,    50,     4,    51,
      61,    50,    30,    51,    10,     6,    23,    24,    25,    31,
      32,    34,    35,    36,    63,    64,    65,    66,    67,    68,
      69,    70,     4,     7,     4,     6,    23,    24,    25,    31,
      32,    34,    35,    36,    63,    64,    65,    66,    67,    68,
      69,    70,     4,     6,    23,    24,    25,    31,    32,    34,
      35,    36,    63,    64,    65,    66,    67,    68,    69,    70,
       6,     4,     4,     6,    23,    24,    25,    31,    32,    34,
      35,    36,    68,    69,    70,     7,    12,    13,     1,     7,
      10,    40,    52,    54,    55,    57,    58,    59,    60,    62,
       4,    46,    62,     9,    45,    46,    51,    53,    62,    70,
      70,    70,     6,     6,     6,    29,    28,    27,    15,    16,
      17,    18,    19,    20,    21,    11,    12,    13,    14,    22,
       6,    62,    70,    70,    70,     6,     6,     6,    29,    28,
      27,    15,    16,    17,    18,    19,    20,    21,    11,    12,
      13,    14,    22,     6,    62,    70,    70,    70,     6,     6,
       6,    29,    28,    27,    15,    16,    17,    18,    19,    20,
      21,    11,    12,    13,    14,    22,    71,    26,     6,    62,
      70,    70,    70,     6,     6,     6,    14,    22,    68,    68,
       9,    45,    46,    51,    53,    57,     6,     6,     7,    26,
      53,    53,    53,    30,    33,    62,     4,    33,    62,     4,
       6,    23,    24,    25,    31,    32,    34,    35,    36,    64,
      67,    68,    69,    70,    65,    66,    67,    67,    67,    67,
      67,    67,    67,     4,    68,    68,    69,    69,    71,    30,
      33,    62,     4,    33,    62,     4,     6,    23,    24,    25,
      31,    32,    34,    35,    36,    64,    67,    68,    69,    70,
      65,    66,    67,    67,    67,    67,    67,    67,    67,     4,
      68,    68,    69,    69,    71,    30,    33,    62,     4,    33,
      62,     4,     6,    23,    24,    25,    31,    32,    34,    35,
      36,    64,    67,    68,    69,    70,    65,    66,    67,    67,
      67,    67,    67,    67,    67,     4,    68,    68,    69,    69,
      30,    62,    71,    30,    33,    62,     4,    33,    62,    69,
      69,    53,    53,    53,    62,    61,    62,    30,    30,    30,
      30,    30,     6,    62,    70,    70,    70,     6,     6,     6,
      12,    13,    14,    22,    30,    30,    30,    30,    30,    30,
       6,    62,    70,    70,    70,     6,     6,     6,    12,    13,
      14,    22,    30,    30,    30,    30,    30,    30,     6,    62,
      70,    70,    70,     6,     6,     6,    12,    13,    14,    22,
      30,    30,    30,    30,    30,    30,    30,     7,    71,    30,
      33,    62,     4,    33,    62,    68,    68,    69,    69,    71,
      30,    33,    62,     4,    33,    62,    68,    68,    69,    69,
      71,    30,    33,    62,     4,    33,    62,    68,    68,    69,
      69,    51,    61,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    56,     7,    51,    61,    30,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    45,    45,
      46,    47,    47,    48,    48,    48,    48,    49,    49,    50,
      50,    50,    51,    51,    51,    51,    51,    51,    52,    53,
      53,    53,    53,    54,    54,    55,    56,    57,    57,    58,
      59,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    68,    68,    68,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    71,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     4,
       3,     5,     4,     2,     6,     3,     8,     2,     3,     0,
       4,     5,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     2,     5,     7,     1,     1,     1,     2,     2,
       9,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       1,     1,     3,     4,     4,     4,     4,     4,     4,     1,
       0,     1,     3,     1
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
#line 55 "src/parser.y"
                  {;}
#line 3378 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 59 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3387 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 63 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 3397 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 71 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 3405 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 74 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 3413 "src/parser.c"
    break;

  case 7: /* GlobalDec: error  */
#line 77 "src/parser.y"
                        {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 3422 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 84 "src/parser.y"
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
#line 3438 "src/parser.c"
    break;

  case 9: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 96 "src/parser.y"
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
#line 3457 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT Expression  */
#line 113 "src/parser.y"
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
#line 3490 "src/parser.c"
    break;

  case 11: /* FunctionDefinition: FunctionHead LP FunctionArgs RP CompStatement  */
#line 144 "src/parser.y"
                                                 {
		(yyval.state) = new_node("FunctionDefinition", root);

		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));

		decrease_depth_scope(scope);
	}
#line 3504 "src/parser.c"
    break;

  case 12: /* FunctionDefinition: FunctionHead LP RP CompStatement  */
#line 154 "src/parser.y"
                                        {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

	}
#line 3516 "src/parser.c"
    break;

  case 13: /* FunctionArgs: TYPE IDENTIFIER  */
#line 164 "src/parser.y"
                        {
		(yyval.state) = new_node("FunctionParameters", root);

		if(!add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string));
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, (yyvsp[-1].string), last_f);
	}
#line 3531 "src/parser.c"
    break;

  case 14: /* FunctionArgs: TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 175 "src/parser.y"
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
#line 3554 "src/parser.c"
    break;

  case 15: /* FunctionArgs: TYPE LIST IDENTIFIER  */
#line 194 "src/parser.y"
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
#line 3574 "src/parser.c"
    break;

  case 16: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 210 "src/parser.y"
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
#line 3606 "src/parser.c"
    break;

  case 17: /* FunctionHead: TYPE IDENTIFIER  */
#line 240 "src/parser.y"
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
#line 3629 "src/parser.c"
    break;

  case 18: /* FunctionHead: TYPE LIST IDENTIFIER  */
#line 259 "src/parser.y"
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
#line 3655 "src/parser.c"
    break;

  case 19: /* ParamList: %empty  */
#line 283 "src/parser.y"
             {
			(yyval.state) = new_node("ParamList", root);
		}
#line 3663 "src/parser.c"
    break;

  case 20: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 287 "src/parser.y"
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
#line 3680 "src/parser.c"
    break;

  case 21: /* ParamList: COM TYPE LIST IDENTIFIER ParamList  */
#line 300 "src/parser.y"
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
#line 3701 "src/parser.c"
    break;

  case 22: /* Statement: CompStatement  */
#line 321 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 3707 "src/parser.c"
    break;

  case 23: /* Statement: JmpStatement  */
#line 322 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 3713 "src/parser.c"
    break;

  case 24: /* Statement: SelStatement  */
#line 323 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 3719 "src/parser.c"
    break;

  case 25: /* Statement: ItStatement  */
#line 324 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 3725 "src/parser.c"
    break;

  case 26: /* Statement: ExpStatement  */
#line 325 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 3731 "src/parser.c"
    break;

  case 27: /* Statement: error  */
#line 326 "src/parser.y"
                      {yyerrok; (yyval.state) = NULL;}
#line 3737 "src/parser.c"
    break;

  case 28: /* CompStatement: LCB StatementExp  */
#line 330 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 3745 "src/parser.c"
    break;

  case 29: /* StatementExp: RCB  */
#line 336 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 3751 "src/parser.c"
    break;

  case 30: /* StatementExp: Declaration StatementExp  */
#line 337 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3761 "src/parser.c"
    break;

  case 31: /* StatementExp: Definition StatementExp  */
#line 342 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3771 "src/parser.c"
    break;

  case 32: /* StatementExp: Statement StatementExp  */
#line 347 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3781 "src/parser.c"
    break;

  case 33: /* SelStatement: IfHead LP Expression RP Statement  */
#line 356 "src/parser.y"
                                                  {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3792 "src/parser.c"
    break;

  case 34: /* SelStatement: IfHead LP Expression RP Statement ElseHead Statement  */
#line 362 "src/parser.y"
                                                                     {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3804 "src/parser.c"
    break;

  case 35: /* IfHead: IF  */
#line 372 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 3812 "src/parser.c"
    break;

  case 36: /* ElseHead: ELSE  */
#line 378 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 3821 "src/parser.c"
    break;

  case 37: /* ExpStatement: SEMI  */
#line 385 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 3827 "src/parser.c"
    break;

  case 38: /* ExpStatement: Expression SEMI  */
#line 386 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 3835 "src/parser.c"
    break;

  case 39: /* JmpStatement: RET ExpStatement  */
#line 392 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root);
			add_child((yyval.state), (yyvsp[0].state));

			if (!check_type_subtree((yyval.state), s_table, scope))
			{
				printf("\033[91mSemantic error at line %d, column %d: Incompatible return type.\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column);
				first_pass_sematic_error_found = true;
			}
		}
#line 3850 "src/parser.c"
    break;

  case 40: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 405 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 3863 "src/parser.c"
    break;

  case 41: /* ForHead: FOR  */
#line 416 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 3871 "src/parser.c"
    break;

  case 42: /* ExpAtt: Expression  */
#line 422 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 3879 "src/parser.c"
    break;

  case 43: /* ExpAtt: Definition  */
#line 426 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 3887 "src/parser.c"
    break;

  case 44: /* Expression: LogicalOrExpression  */
#line 433 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 3893 "src/parser.c"
    break;

  case 45: /* Expression: AdditiveExpression TWD IDENTIFIER  */
#line 435 "src/parser.y"
                                                    {
			(yyval.state) = new_node(":", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), new_node((yyvsp[0].string), root));

		}
#line 3904 "src/parser.c"
    break;

  case 46: /* LogicalOrExpression: LogicalAndExpression  */
#line 444 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 3910 "src/parser.c"
    break;

  case 47: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 445 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 3921 "src/parser.c"
    break;

  case 48: /* LogicalAndExpression: EqualityExpression  */
#line 454 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 3927 "src/parser.c"
    break;

  case 49: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 455 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3937 "src/parser.c"
    break;

  case 50: /* EqualityExpression: RelationalExpression  */
#line 463 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 3943 "src/parser.c"
    break;

  case 51: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 464 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 3953 "src/parser.c"
    break;

  case 52: /* RelationalExpression: AdditiveExpression  */
#line 473 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 3959 "src/parser.c"
    break;

  case 53: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 474 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 3969 "src/parser.c"
    break;

  case 54: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 479 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3979 "src/parser.c"
    break;

  case 55: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 484 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3989 "src/parser.c"
    break;

  case 56: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 489 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 3999 "src/parser.c"
    break;

  case 57: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 494 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4009 "src/parser.c"
    break;

  case 58: /* RelationalExpression: RelationalExpression MAP AdditiveExpression  */
#line 499 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">>", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4019 "src/parser.c"
    break;

  case 59: /* RelationalExpression: RelationalExpression FIL AdditiveExpression  */
#line 504 "src/parser.y"
                                                        {
				(yyval.state) = new_node("<<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 4029 "src/parser.c"
    break;

  case 60: /* AdditiveExpression: MultiplicativeExpression  */
#line 512 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 4035 "src/parser.c"
    break;

  case 61: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 513 "src/parser.y"
                                                                 {
			(yyval.state) = new_node("+", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4045 "src/parser.c"
    break;

  case 62: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 518 "src/parser.y"
                                                        {
			(yyval.state) = new_node("-", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4055 "src/parser.c"
    break;

  case 63: /* MultiplicativeExpression: UnaryExpression  */
#line 526 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 4061 "src/parser.c"
    break;

  case 64: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 527 "src/parser.y"
                                                             {
			(yyval.state) = new_node("*", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4071 "src/parser.c"
    break;

  case 65: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 532 "src/parser.y"
                                                             {
			(yyval.state) = new_node("/", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4081 "src/parser.c"
    break;

  case 66: /* UnaryExpression: PrimaryExpression  */
#line 540 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 4087 "src/parser.c"
    break;

  case 67: /* UnaryExpression: TNR PrimaryExpression  */
#line 541 "src/parser.y"
                                      {
			(yyval.state) = new_node("!", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4096 "src/parser.c"
    break;

  case 68: /* UnaryExpression: HD PrimaryExpression  */
#line 545 "src/parser.y"
                                     {
			(yyval.state) = new_node("?", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4105 "src/parser.c"
    break;

  case 69: /* UnaryExpression: TR PrimaryExpression  */
#line 549 "src/parser.y"
                                     {
			(yyval.state) = new_node("%", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 4114 "src/parser.c"
    break;

  case 70: /* PrimaryExpression: IDENTIFIER  */
#line 555 "src/parser.y"
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
#line 4131 "src/parser.c"
    break;

  case 71: /* PrimaryExpression: NUM_CONST  */
#line 568 "src/parser.y"
                      {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", (yyvsp[0].num));
			(yyval.state) = new_node(str, root);
		}
#line 4141 "src/parser.c"
    break;

  case 72: /* PrimaryExpression: LP Expression RP  */
#line 574 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4150 "src/parser.c"
    break;

  case 73: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 579 "src/parser.y"
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

		}
#line 4171 "src/parser.c"
    break;

  case 74: /* PrimaryExpression: WRITE LP STR RP  */
#line 596 "src/parser.y"
                                {
			(yyval.state) = new_node("write_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));

		}
#line 4181 "src/parser.c"
    break;

  case 75: /* PrimaryExpression: WRITE LP Expression RP  */
#line 601 "src/parser.y"
                                   {
			(yyval.state) = new_node("write_call", root);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4190 "src/parser.c"
    break;

  case 76: /* PrimaryExpression: READ LP IDENTIFIER RP  */
#line 605 "src/parser.y"
                                      {
			(yyval.state) = new_node("read_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));
		}
#line 4199 "src/parser.c"
    break;

  case 77: /* PrimaryExpression: WRITE_LN LP STR RP  */
#line 609 "src/parser.y"
                                    {
			(yyval.state) = new_node("write_ln_call", root);
			add_child((yyval.state), new_node((yyvsp[-1].string), root));
		}
#line 4208 "src/parser.c"
    break;

  case 78: /* PrimaryExpression: WRITE_LN LP Expression RP  */
#line 613 "src/parser.y"
                                           {
			(yyval.state) = new_node("write_ln_call", root);
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 4217 "src/parser.c"
    break;

  case 79: /* PrimaryExpression: NIL  */
#line 618 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root);}
#line 4223 "src/parser.c"
    break;

  case 80: /* Params: %empty  */
#line 622 "src/parser.y"
               {(yyval.state) = new_node("Args", root);}
#line 4229 "src/parser.c"
    break;

  case 81: /* Params: Expression  */
#line 624 "src/parser.y"
                   {(yyval.state) = new_node("Args", root); add_child((yyval.state), (yyvsp[0].state));}
#line 4235 "src/parser.c"
    break;

  case 82: /* Params: Params COM Expression  */
#line 626 "src/parser.y"
                              {(yyval.state) = new_node("Args", root); add_child((yyval.state), (yyvsp[-2].state));  add_child((yyval.state), (yyvsp[0].state));}
#line 4241 "src/parser.c"
    break;

  case 83: /* Params: STR  */
#line 628 "src/parser.y"
            {(yyval.state) = new_node("Args", root); add_child((yyval.state), new_node((yyvsp[0].string), root));}
#line 4247 "src/parser.c"
    break;


#line 4251 "src/parser.c"

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

#line 632 "src/parser.y"

int yydebug = 1;

syntax_tree* parse(char* filename) {
    root = new_syntax_tree();
	s_table = new_symbol_table();
	scope = new_scope_stack();
	last_f = 0;
	first_pass_sematic_error_found = false;

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
