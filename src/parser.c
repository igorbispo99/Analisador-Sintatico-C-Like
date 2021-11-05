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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13744

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  814

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
       0,    64,    64,    68,    72,    80,    83,    89,   102,   117,
     124,   155,   191,   201,   210,   217,   227,   242,   272,   293,
     333,   368,   406,   424,   449,   453,   471,   499,   500,   501,
     502,   503,   508,   512,   518,   519,   524,   529,   534,   539,
     545,   552,   563,   567,   570,   576,   583,   584,   590,   604,
     614,   623,   632,   640,   651,   657,   661,   665,   670,   678,
     682,   683,   692,   693,   701,   702,   711,   712,   717,   722,
     727,   732,   737,   742,   747,   755,   756,   767,   781,   782,
     793,   807,   808,   814,   823,   834,   849,   854,   860,   865,
     870,   945,   993,   998,  1002,  1008,  1012,  1017,  1022,  1028
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

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-100)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,   350,     1,    85,    93,   207,   223,    15,   327,   269,
      11,  -189,   404,     8,    10,   421,   346,     9,  8830,   444,
     -13,   365,     8,    22,   446,  8830,    16,   373, 11229,     6,
    8871,   448, 10988, 10988, 10988, 11824, 11843, 11862,    39,    54,
      70,    78,    80,   130,  8830,  8830,  8830,  8912,   450,  8953,
      98,  8994,  9035,  9076,   106,   118,     7,    44,   177,   711,
    7765, 11881, 11900, 11919,     8,    72,   170,   454,     8,   477,
     489,  2526, 10139,   178,   204,  1307,   799,   182, 11179,   184,
   11938, 11957, 11976,  1617,   215,  2103,  9117,   491,   501,   502,
     475,   980,  9158, 10988, 10988, 10988, 11003, 11003, 11003, 11003,
   11003, 10988, 10988, 10988, 11003, 10988, 10988, 10988,   546,   239,
     103,   555,    14,  9199,   254, 11995,   163,   165, 11025,  9240,
   12014, 12033,   233,   271,   296,   318,   331,   335,   367,    51,
     403,   429,   449,   206,   193,  2377,  3073,  7806,  7847,  7888,
    7929,  8011, 12052, 12071,  7970,  8052, 12090, 12109,   376,   354,
   11040, 12128,  9281, 12147, 12166, 12185, 12204, 12223, 10139, 10177,
     453,   458, 10139,  1196,   232,   451,   391,   235,  9322,  9363,
     402,  9404,    57,   464,   469,   431,   232,   232,   474, 10139,
   10139,  1459,   418,   452,   460,   232,  9445,  9486,    75,   473,
     232,   505,   483, 10139, 10215,   485,   232,  9527,  9568,  9609,
     492,  9650,  9650,  9691,  1759, 11062, 11062, 11062, 13274, 13294,
   13314,   524,   534,   535,    -2,   173,   386,   509, 13714, 13334,
   13354, 13374,  3046,  9732,  3633,  1971, 11040, 11040, 11040, 11317,
   11340, 11363,   539,   541,   554,   224,   201,   152,   371,  2953,
   11386, 11409, 11432,  1036,  2697, 11025, 11025, 11025,  4279,  4320,
    4361,   556,   557,   558,  3490,  7641,  3163,  1820,  5222,  4402,
    4443,  4484,  2238, 11253, 11295,  2749, 11003, 11003, 11003, 12743,
   12761, 12779,   562,   568,   570, 12797, 12815, 12833,  9773, 11003,
   11003,    24,  7764,  9814,  2578,  7805,  7846,   571,  7887,  7928,
    7969,   572,   576,  3715,   559,   563,   565,   569,    23,  9855,
    9650,  9650,  9650,  9896,  9937,   573,   577, 13394, 13414, 13434,
    2148,   580,  2822, 11062, 11062, 11062, 11077, 11077, 11077, 11077,
   11077, 11062, 11062, 11062, 11077, 11062, 11062, 11062, 10470,   578,
     581, 11455, 11478, 11501, 10507,   594, 10522, 11040, 11040, 11040,
   11099, 11099, 11099, 11099, 11099, 11040, 11040, 11040, 11099, 11040,
   11040, 11040, 10544,   582,   584,  4525,  4566,  4607, 10559,   596,
   10581, 11025, 11025, 11025, 11114, 11114, 11114, 11114, 11114, 11025,
   11025, 11025, 11114, 11025, 11025, 11025, 13454,   236, 10596, 10618,
     586,   591, 12851, 12869, 12887, 10633,   597, 10655, 11003, 11003,
   12905, 12923,  9814, 10253,    40,  8010,  9814,  9814,  9814,  8051,
    8092,  2994,  3289,  8133, 10670,  9978, 10019, 10060, 10101, 13474,
   13494,   592,   593,   601,   602,   603,   243,   390,  1177,   129,
   10329, 11077, 11077, 11077,  8091,  8132,  8173,   579,   629,   630,
    1068,  8214,  8255,  8296,  8993,  9034,  9075,  9116,  2776, 13514,
   13534,  9157,  2846, 13554, 13574, 11524,   244, 11547, 11570,   607,
     608,   609,   612,   613,   219,   160,   979, 11204, 10344, 11099,
   11099, 11099, 12241, 12264, 12287,   638,   643,   645, 13139, 12310,
   12333, 12356, 13162, 13185, 13208, 13231,  1758, 11593, 11616, 13254,
    2269, 11639, 11662,  4648,   247,  4689,  4730,   624,   635,   636,
     637,   639,  7682,  3221,  2473,  6124, 10381, 11114, 11114, 11114,
    6165,  6206,  6247,   662,   664,   668,  7272,  6288,  6329,  6370,
    7313,  7354,  7395,  7436,  7518,  4771,  4812,  7477,  7559,  4853,
    4894, 13594, 10988,   595, 12941,   249, 12959, 12977,   651,   652,
     653,   654,   655, 12995, 13013,  8174,  8215,  8256,  8297,  8338,
    8379,   657,   674,    83,   698, 11062,   677, 13614, 13634, 13654,
   13674, 13694, 10692,   678,   679,  8337,  8378,  8419, 10707,   671,
   10729, 11077, 11077, 11077, 11077, 11685, 11708, 11731, 11754, 11777,
   11800, 10744,   680,   682, 12379, 12402, 12425, 10766,   713, 10781,
   11099, 11099, 11099, 11099,  4935,  4976,  5017,  5058,  5099,  5140,
   10803,   701,   712,  6411,  6452,  6493, 10818,   737, 10840, 11114,
   11114, 11114, 11114,   736, 13031, 13049, 13067, 13085, 13103, 13121,
   10253, 10291, 10253, 10396,   714,  8460,   250,  8501,  8542,   715,
     718,   719,   720,   721,  8583,  8624,  8665,  8706, 12448,   274,
   12471, 12494,   722,   724,   730,   740,   741, 12517, 12540, 12563,
   12586,  6534,   294,  6575,  6616,   742,   743,   748,   749,   750,
    6657,  6698,  6739,  6780,  8420, 11277,  8461,   402,  8502,   142,
     759,  8747,  8788,  8829,  8870,  8911,  8952, 12609, 12632, 12655,
   12678, 12701, 12724,  6821,  6862,  6903,  6944,  6985,  7026, 10855,
   10253, 10253, 10433,  1497, 10448, 11136, 11136, 11136, 11136,  1538,
    1579,  1713,   761,   775,   776,  8543,  7723,  3424,  1115,    91,
    5181,  2009,  2059,  3370,  8584,  8625,   162,   753, 10877,   754,
     757,  8666,  3554,  3595,  3676, 10892,   784, 10914, 11136, 11136,
   11136, 11151, 11151, 11151, 11151, 11151, 11136, 11136, 11136, 11151,
   11136, 11136, 11136, 10253, 10291,  3746,   295,  3787,  3828,   760,
     763,   764,   771,   772,  7600,  1862,   939,  2198, 10485, 11151,
   11151, 11151,  2656,  5263,  5304,   783,   785,   798,  2418,  5345,
    5386,  5427,  7067,  7108,  7149,  7190,  1267,  3869,  3910,  7231,
    1351,  3951,  3992,  8707,  8748,  8789,  4033,  4074,  4115,  4156,
    4197,  4238, 10929,   777,   778,  5468,  5509,  5550, 10951,   802,
   10966, 11151, 11151, 11151, 11151,  5591,   298,  5632,  5673,   781,
     786,   787,   788,   796,  5714,  5755,  5796,  5837,  5878,  5919,
    5960,  6001,  6042,  6083
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
    -189,  -189,  -189,   810,   183,   423,  -189,  -189,  -189,   186,
      66,    35,   627,  -137,  -124,  -164,   -20,  -115,   -93,    52,
    -161,  2219,  2958,  2759,  2558,  2028,  1597,  1085,   -29,   530,
    -188
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    44,    45,     6,    23,     7,   175,
      46,    47,    48,    49,    50,    72,    51,    52,    53,    54,
     131,    55,    56,    57,    58,    59,    60,    61,    62,    63,
     117
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     220,    11,   173,    80,    81,    82,   179,    77,     1,    17,
      78,    20,   204,    21,   -59,    16,    13,    64,    18,    25,
     189,    14,   286,    86,   202,    70,   202,   313,   -59,   205,
     206,   207,   405,   202,   392,   287,    93,   208,   209,   210,
      22,   211,   212,   213,   289,    83,   241,   260,    19,   537,
     202,   -60,    68,    71,   220,    71,   220,    67,   160,   161,
      84,   220,    71,    71,   160,   161,   290,   276,   276,   276,
     276,   276,    94,   -60,   377,   276,    85,   146,   147,    71,
     109,   162,   296,   297,   -44,    -2,   -54,   180,     1,   260,
     160,   161,   -64,    -3,   -64,   -64,    -3,   -64,   -64,   108,
     -64,   -64,   -16,   111,    90,   193,   721,   722,   723,   724,
     725,   149,    91,   612,   -64,   -64,   -64,   393,   -64,   -64,
     -64,   241,   -64,   -64,   -64,    92,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -18,   222,   552,    29,    30,   113,   288,
     446,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   160,
     161,   -85,   220,    32,    33,    34,   -85,   -85,   -85,   -85,
     -62,    35,    36,    37,   484,    38,    39,    40,   -63,   296,
     297,   -98,   681,   150,   110,   220,   307,   308,   309,   339,
     -62,   -62,   -62,     5,   -62,   223,     5,   339,   -63,   -63,
     -63,   525,   733,   -98,   285,   151,   220,   331,   332,   333,
     -63,   314,   -60,   -60,    95,   -62,   -62,    -5,   114,   -60,
      -5,   291,   120,   -61,   121,   220,   355,   356,   357,   124,
      95,   -63,   -63,    -6,   168,   170,    -6,   -61,   171,   338,
     -60,   -60,   -59,   241,    94,   -61,   220,   382,   383,   384,
     174,   544,   148,   -99,   150,   186,   187,   338,   -61,   -61,
     276,   276,   150,   337,   -59,   150,   286,   150,   150,   197,
     199,   278,   -24,   153,   400,   -99,   521,   302,   302,   287,
     -22,   314,   -61,   -61,   565,   -22,    15,   584,   289,   604,
     661,   220,   150,   220,   220,   220,   220,   432,   432,   432,
     432,   432,   220,   220,   220,   432,   220,   443,   444,   241,
     290,   154,   150,   150,   667,   220,   150,   220,   241,   241,
     241,   470,   470,   470,   470,   470,   241,   241,   241,   470,
     241,   481,   482,   241,   673,   776,   155,    -9,   808,   220,
      -9,   220,   260,   260,   260,   508,   508,   508,   508,   508,
     260,   260,   260,   508,   260,   519,   520,   -23,   156,   398,
     241,     8,   -23,    24,     9,    10,   220,   166,   220,   533,
     534,   157,   183,   184,   616,   158,   302,   302,   302,    65,
      66,   192,   220,   288,   203,   220,   195,    73,    74,   -64,
     164,   165,   200,   629,   300,   300,   340,   341,   342,   343,
     344,   220,   555,   556,   557,   177,   178,   159,   -64,   -64,
     -64,   -64,   642,   -39,    -4,   -39,   -39,    -4,   -39,   -39,
     -56,   -39,   -39,   315,   -62,   -62,   -62,   315,   -63,   -63,
     -63,    -7,   190,   191,    -7,   -39,   -39,   -39,   285,   220,
     574,   575,   576,   -39,   -39,   -39,   163,   -39,   -39,   -39,
     -39,    71,   -39,   -39,   -15,   291,    -8,   -15,   -34,    -8,
     -32,   -34,   660,   -32,   -13,   176,   -55,   -13,   398,   536,
     -57,   -17,   398,   398,   398,   -58,   396,   220,   593,   594,
     595,   181,   182,   286,   286,   286,   127,   -33,   185,    78,
     -33,   204,   -20,   300,   300,   300,   287,   287,   287,   -38,
     -21,   -35,   -38,   680,   -35,   289,   289,   289,   205,   206,
     207,   -36,   -37,   194,   -36,   -37,   208,   209,   210,   196,
     211,   212,   213,   -19,   130,   -25,   220,   290,   290,   290,
     736,   707,   -26,   241,   316,   317,   318,   319,   320,   220,
     310,   220,   432,   432,   626,   627,   -64,   -64,   -64,   -64,
     311,   312,   241,   286,   286,   334,   -14,   335,   220,   -14,
     220,   470,   470,   639,   640,   -12,   287,   287,   -12,   221,
     336,   241,   358,   359,   360,   289,   289,   220,   385,   220,
     508,   508,   652,   653,   386,   396,   387,   401,   402,   396,
     396,   396,   169,   403,   413,   558,   130,   290,   290,   -56,
     288,   288,   288,   -55,   796,   -57,   286,   286,   451,   -58,
     489,   530,   -10,   409,   294,   242,   261,   410,   447,   287,
     287,   448,   485,   221,   486,   221,   526,   198,   289,   289,
     221,   527,   547,   548,   301,   301,   277,   277,   277,   277,
     277,   549,   550,   551,   277,   559,   560,   566,   567,   568,
     290,   290,   569,   570,   577,   285,   285,   285,   261,   578,
     702,   579,    69,   220,   585,   220,   702,   712,   713,   714,
     288,   288,   291,   291,   291,   586,   587,   588,   596,   589,
     597,    87,    88,    89,   598,   621,   654,   657,   658,   241,
     242,   605,   606,   607,   608,   609,   220,   610,   220,   702,
     702,   702,   760,   760,   760,   760,   760,   702,   702,   702,
     760,   702,   771,   772,   611,   613,   397,   -10,   617,   618,
     630,   221,   631,   288,   288,   285,   285,   634,   -64,   220,
     785,   786,   787,   301,   301,   301,    96,    97,    98,    99,
     100,   643,   291,   291,   221,   221,   221,   221,   -64,   -64,
     -64,   647,   644,   -11,   -11,   662,   704,   705,   663,   664,
     665,   666,   668,   241,   669,   221,   242,   242,   242,   220,
     670,   220,   760,   760,   806,   807,   682,   715,   285,   285,
     671,   672,   674,   675,   221,   261,   261,   261,   676,   677,
     678,   716,   717,   734,   737,   291,   291,   738,   741,   788,
     777,   789,   242,   778,   779,   221,   277,   277,   277,   773,
     775,   780,   781,   243,   790,   244,   801,   797,   798,   277,
     277,   809,   118,    12,     0,   397,   810,   811,   812,   397,
     397,   397,   245,   246,   247,   130,   813,     0,   303,   304,
     248,   249,   250,     0,   251,   252,   253,     0,     0,     0,
     221,     0,   221,   221,   221,   221,   433,   433,   433,   433,
     433,   221,   221,   221,   433,   221,   221,   221,   242,     0,
       0,     0,     0,     0,   221,     0,   221,   242,   242,   242,
     471,   471,   471,   471,   471,   242,   242,   242,   471,   242,
     242,   242,   242,     0,     0,     0,     0,     0,   221,     0,
     221,   261,   261,   261,   509,   509,   509,   509,   509,   261,
     261,   261,   509,   261,   261,   261,     0,     0,     0,   242,
     399,     0,     0,     0,     0,   221,     0,   221,   277,   277,
       0,     0,     0,     0,     0,     0,     0,   406,   407,   408,
       0,   221,     0,     0,   221,     0,     0,     0,     0,     0,
     -65,     0,   -65,   -65,     0,   -65,   -65,     0,   -65,   -65,
     221,   433,   433,   433,   721,   722,   723,   724,   725,     0,
       0,     0,   -65,   -65,   -65,     0,   -65,   -65,   -65,     0,
     -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   129,     0,     0,   263,     0,    29,   -65,   221,   471,
     471,   471,     0,     0,   340,   341,   342,   343,   344,     0,
       0,     0,     0,    32,    33,    34,   -65,   -65,   -65,   -65,
       0,    35,    36,    37,     0,    38,    39,    40,     0,   535,
       0,     0,     0,   538,   539,   540,   221,   509,   509,   509,
       0,     0,     0,     0,   656,     0,   130,   -85,     0,   -85,
     -85,     0,   352,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,   -85,
       0,   -85,   -85,   -85,   -85,   221,   -85,   -85,     0,     0,
     561,   562,   242,   -69,   -69,   -69,   -69,   -69,   221,     0,
     221,   433,   433,   433,   433,   -69,   -69,   -69,   -69,     0,
       0,   242,     0,     0,     0,   294,     0,   221,     0,   221,
     471,   471,   471,   471,   219,     0,   -62,     0,   -62,   -62,
     242,   -62,   -62,     0,   -62,   -62,   221,     0,   221,   509,
     509,   509,   509,     0,     0,     0,     0,     0,   -62,   -62,
     -62,     0,   720,   -62,   -62,     0,   -62,   -62,   -62,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   774,     0,     0,
     240,   259,     0,     0,     0,     0,     0,     0,   219,     0,
     219,     0,     0,     0,     0,   219,     0,     0,     0,     0,
       0,   275,   275,   275,   275,   275,     0,   142,   143,   275,
       0,     0,   316,   317,   318,   319,   320,   172,     0,     0,
     263,     0,    29,   259,   -65,   -65,   -65,   -65,     0,   703,
       0,     0,   221,     0,   221,   703,   703,   703,   703,    32,
      33,    34,     0,     0,     0,     0,     0,    35,    36,    37,
       0,    38,    39,    40,     0,   240,     0,     0,   242,     0,
       0,     0,     0,     0,     0,   221,     0,   221,   703,   703,
     703,   761,   761,   761,   761,   761,   703,   703,   703,   761,
     703,   703,   703,     0,     0,     0,   219,     0,   -74,     0,
     -74,   -74,     0,   -74,   -74,     0,   -74,   -74,   221,   761,
     761,   761,   -74,   -74,   -74,   -74,   -74,     0,     0,   219,
     -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     219,   224,   242,   225,     0,     0,     0,     0,   221,     0,
     221,   761,   761,   761,   761,     0,     0,     0,     0,   219,
     226,   227,   228,     0,     0,     0,     0,   115,   229,   230,
     231,     0,   232,   233,   234,     0,     0,   240,     0,     0,
     219,     0,   -73,     0,   -73,   -73,     0,   -73,   -73,     0,
     -73,   -73,     0,     0,   390,   391,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,   -73,   -73,   -73,     0,   -73,   -73,
     -73,     0,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,   219,     0,   219,   219,   219,
     219,   431,   431,   431,   431,   431,   219,   439,   440,   431,
     219,     0,     0,   240,     0,     0,     0,     0,     0,   219,
       0,   219,   240,   240,   240,   469,   469,   469,   469,   469,
     240,   477,   478,   469,   240,     0,     0,   240,     0,     0,
       0,     0,     0,   219,     0,   219,   259,   259,   259,   507,
     507,   507,   507,   507,   259,   515,   516,   507,   259,     0,
     188,     0,     0,   293,   240,   204,     0,     0,     0,     0,
     219,     0,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,     0,   219,     0,     0,   219,
     208,   209,   210,     0,   211,   212,   213,     0,   -85,     0,
     -85,   -85,     0,   708,   -85,   219,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -86,
       0,   -86,   -86,   219,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,   219,   -87,   -87,     0,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,     0,
     -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,    78,     0,   204,     0,     0,   218,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,   240,     0,     0,
     205,   206,   207,   219,     0,   219,   624,   625,   208,   209,
     210,   122,   211,   212,   213,     0,   240,     0,     0,     0,
       0,     0,   219,     0,   219,   637,   638,     0,     0,     0,
       0,     0,   239,   258,     0,   240,     0,     0,     0,     0,
     218,   219,   218,   219,   650,   651,     0,   218,     0,     0,
       0,     0,     0,   136,   137,   138,   139,   140,     0,     0,
       0,   144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -97,   258,   -97,   -97,     0,   -97,
     -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,
     -97,   -97,   -97,     0,   -97,   -97,   -97,   239,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,     0,     0,     0,     0,     0,
     305,     0,     0,    78,   701,   204,   -74,   219,     0,   219,
     701,     0,     0,   -74,   -74,   -74,   -74,   -74,   218,     0,
       0,     0,   205,   206,   207,   -74,   -74,   -74,   -74,     0,
     208,   209,   210,   240,   211,   212,   213,     0,     0,     0,
     219,   218,   219,   701,   701,   701,   759,   759,   759,   759,
     759,   701,   767,   768,   759,   701,     0,     0,     0,     0,
       0,   -64,   218,   -64,   -64,     0,   -64,   -64,     0,   -64,
     -64,     0,     0,   219,     0,   364,   365,   366,   367,   368,
       0,   218,     0,   -64,   -64,   -64,     0,   -64,   -64,   -64,
       0,   -64,   -64,   -64,     0,   -64,   -64,   -64,   -64,   239,
     -64,   -64,   218,   -63,     0,   -63,   -63,   240,   -63,   -63,
       0,   -63,   -63,   219,     0,   219,   804,   805,     0,     0,
       0,     0,     0,     0,     0,   -63,   -63,   -63,     0,   720,
     -63,   -63,     0,   -63,   -63,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,   218,     0,   218,
     218,   218,   218,   430,   434,   435,   436,   437,   218,     0,
       0,   441,   218,     0,     0,   239,     0,     0,     0,     0,
       0,   218,     0,   218,   239,   239,   239,   468,   472,   473,
     474,   475,   239,     0,     0,   479,   239,     0,     0,   239,
       0,     0,     0,     0,     0,   218,     0,   218,   258,   258,
     258,   506,   510,   511,   512,   513,   258,     0,     0,   517,
     258,     0,   329,     0,     0,    78,   239,   204,     0,     0,
       0,     0,   218,     0,   218,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   206,   207,     0,   218,     0,
       0,   218,   208,   209,   210,     0,   211,   212,   213,     0,
     -75,     0,   -75,   -75,     0,   -75,   -75,   218,   -75,   -75,
     -75,   -75,   -75,   731,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   732,   -75,   -75,   -75,     0,   -75,   -75,   -75,     0,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,   218,     0,   217,     0,     0,
     -78,     0,   -78,   -78,     0,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   218,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   238,   257,     0,     0,    78,     0,   204,
       0,   217,     0,   217,     0,     0,     0,     0,   217,     0,
       0,     0,     0,   135,     0,     0,   205,   206,   207,   141,
       0,     0,     0,   145,   208,   209,   210,   125,   211,   212,
     213,     0,   218,     0,     0,     0,   257,     0,     0,   239,
       0,     0,    78,     0,   204,   218,     0,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   239,     0,
       0,   205,   206,   207,   218,     0,   218,     0,   238,   208,
     209,   210,   411,   211,   212,   213,     0,   239,     0,     0,
       0,     0,     0,   218,     0,   218,     0,     0,     0,   -85,
       0,   -85,   -85,     0,   782,   -85,     0,   -85,   -85,   217,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   217,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,   224,     0,   225,     0,     0,     0,    79,     0,
       0,     0,     0,   217,     0,     0,     0,     0,     0,     0,
       0,   226,   227,   228,     0,     0,     0,     0,   376,   229,
     230,   231,   217,   232,   233,   234,   700,   -73,     0,   218,
       0,   218,   700,     0,   -73,   -73,   -73,   -73,   -73,     0,
     238,     0,     0,   217,   116,   119,   -73,   -73,   -73,   -73,
       0,     0,   123,     0,   126,   239,     0,     0,     0,   128,
     132,     0,   218,     0,   218,   700,   700,   700,   758,   762,
     763,   764,   765,   700,     0,     0,   769,   700,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   217,     0,
     217,   217,   217,   418,     0,   218,     0,     0,     0,   438,
       0,     0,     0,   442,     0,     0,   238,     0,     0,     0,
       0,     0,   217,     0,   217,   238,   238,   456,     0,   167,
       0,     0,     0,   476,     0,     0,     0,   480,   292,   239,
     238,     0,   132,     0,   -65,   218,   217,   218,   217,   257,
     257,   494,    96,    97,    98,    99,   100,   514,     0,     0,
     295,   518,     0,     0,   -65,   -65,   -65,   238,     0,     0,
       0,     0,     0,   217,     0,   217,     0,     0,     0,   -69,
       0,   -69,   -69,   306,   -69,   -69,     0,   -69,   -69,   217,
     791,   792,   217,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,   -69,   -69,   -69,   330,   -69,   -69,   -69,   217,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,   354,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -65,     0,   -65,   -65,     0,   -65,
     -65,   116,   -65,   -65,   381,     0,   217,     0,   364,   365,
     366,   367,   368,     0,     0,     0,   -65,   -65,   -65,     0,
     -65,   -65,   -65,   292,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,     0,   -65,   -65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   -45,     0,   412,
     -45,   415,   -45,   -45,     0,     0,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,     0,   -45,
     -45,   -45,     0,   450,     0,   453,     0,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,     0,   -45,   -45,     0,     0,
       0,   116,     0,   217,     0,     0,     0,   488,     0,   491,
     238,     0,   222,     0,    29,   282,   217,   216,   217,     0,
       0,     0,     0,     0,     0,     0,     0,   523,   116,   238,
       0,    32,    33,    34,   529,   217,   532,   217,     0,    35,
      36,    37,   292,    38,    39,    40,     0,     0,   238,     0,
     542,   132,     0,   546,   217,     0,   217,     0,     0,     0,
       0,     0,     0,   237,   256,     0,     0,     0,     0,   554,
       0,   216,     0,   216,     0,     0,     0,     0,   216,     0,
       0,     0,   134,     0,     0,     0,     0,   -86,     0,   -86,
     -86,     0,   -86,   -86,     0,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   256,   573,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,     0,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   353,     0,
       0,    78,     0,   204,     0,     0,     0,   699,   237,     0,
     217,     0,   217,   699,     0,   592,     0,     0,     0,     0,
     205,   206,   207,     0,     0,     0,     0,     0,   208,   209,
     210,     0,   211,   212,   213,     0,   238,     0,     0,   216,
       0,   603,     0,   217,     0,   217,   699,   699,   746,     0,
     380,     0,     0,    78,   766,   204,     0,     0,   770,     0,
       0,     0,   216,     0,   614,     0,     0,     0,     0,     0,
       0,   116,   205,   206,   207,     0,   217,   620,     0,   623,
     208,   209,   210,   216,   211,   212,   213,     0,   215,     0,
     116,   -74,   -74,   -74,   -74,   -74,   633,     0,   636,     0,
       0,     0,   216,   -74,   -74,   -74,   -74,     0,     0,   116,
     238,     0,     0,     0,     0,   646,   217,   649,   217,     0,
     237,     0,     0,   216,     0,     0,    78,     0,   204,   292,
     292,   292,   132,     0,   236,   255,     0,     0,     0,     0,
       0,     0,   215,     0,   215,   205,   206,   207,     0,   215,
       0,     0,   133,   208,   209,   210,   414,   211,   212,   213,
       0,   -73,   -73,   -73,   -73,   -73,     0,     0,   216,     0,
     216,   216,   417,   -73,   -73,   -73,   -73,   255,     0,     0,
       0,     0,     0,     0,     0,     0,   237,     0,     0,     0,
       0,     0,   216,     0,   216,   237,   455,     0,   695,   292,
     292,   295,     0,   710,   711,     0,     0,     0,     0,   236,
     237,     0,     0,     0,     0,     0,   216,     0,   216,   256,
     493,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,   740,     0,   743,   237,     0,     0,
     215,     0,     0,   216,     0,   216,     0,     0,     0,     0,
       0,     0,   292,   292,     0,     0,     0,     0,     0,   216,
       0,   -66,   216,   215,   345,   346,   347,   784,   -66,   -66,
     -66,   -66,   -66,   348,   349,     0,     0,     0,   216,     0,
     -66,   -66,   -66,   -66,   215,     0,     0,   214,     0,     0,
       0,     0,     0,     0,     0,   541,     0,     0,    78,     0,
     204,   116,     0,   215,     0,     0,     0,   800,     0,   803,
       0,     0,     0,     0,     0,     0,   216,   205,   206,   207,
       0,   236,     0,     0,   215,   208,   209,   210,     0,   211,
     212,   213,     0,   235,   254,     0,     0,     0,     0,     0,
       0,   214,     0,   214,     0,     0,     0,     0,   214,     0,
       0,     0,    75,   -85,   216,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   215,
       0,   215,   416,   -85,   -85,   -85,   254,     0,     0,     0,
     -69,     0,     0,     0,     0,   279,   280,   236,   -69,   -69,
     -69,   -69,   -69,   215,     0,   215,   454,     0,     0,     0,
     -69,   -69,   -69,   216,     0,     0,     0,     0,   235,     0,
     237,   236,     0,     0,     0,     0,   216,   215,   216,   215,
     492,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,     0,     0,     0,     0,   216,     0,   216,   236,   214,
       0,     0,     0,     0,   215,     0,   215,     0,   237,     0,
       0,     0,     0,     0,   216,     0,   216,     0,     0,     0,
     215,     0,   214,   215,   -62,     0,   -62,   -62,     0,   -62,
     -62,     0,   -62,   -62,     0,     0,     0,     0,     0,   215,
       0,     0,     0,   214,     0,     0,   -62,   -62,   -62,     0,
     363,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,   -62,
     -62,   -62,   214,   -62,   -62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,     0,     0,
     235,     0,   -63,   214,   -63,   -63,     0,   -63,   -63,     0,
     -63,   -63,     0,     0,     0,     0,     0,   698,     0,     0,
     216,     0,   216,   698,   -63,   -63,   -63,     0,   363,   -63,
     -63,     0,   -63,   -63,   -63,   215,   -63,   -63,   -63,   -63,
       0,   -63,   -63,     0,     0,     0,   237,     0,   214,     0,
     214,     0,     0,   216,     0,   216,   698,   745,     0,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,     0,
     543,     0,   214,   263,   214,    29,     0,     0,     0,     0,
       0,     0,     0,     0,   215,     0,   216,     0,     0,     0,
     235,   236,    32,    33,    34,     0,   214,   215,   214,   215,
      35,    36,    37,     0,    38,    39,    40,     0,     0,     0,
     236,     0,     0,     0,     0,     0,   215,   235,   215,     0,
     237,     0,     0,   214,     0,   214,   216,     0,   216,   236,
       0,     0,     0,     0,     0,   215,     0,   215,     0,   214,
       0,     0,   214,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,     0,   -81,   -81,     0,   -81,   -81,   214,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
       0,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,   214,     0,     0,     0,
       0,     0,     0,     0,     0,   -60,     0,   -60,   -60,     0,
     -60,   -60,     0,   -60,   -60,     0,     0,     0,   697,     0,
       0,   215,     0,   215,   697,     0,     0,   -60,   -60,   -60,
       0,     0,   719,   -60,   214,   -60,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   236,     0,     0,
       0,     0,     0,     0,   215,     0,   215,   744,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -59,     0,   -59,   -59,     0,   -59,   -59,     0,   -59,
     -59,     0,     0,   214,     0,     0,     0,   215,     0,     0,
     235,     0,     0,   -59,   -59,   -59,   214,     0,   214,   361,
       0,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,   235,
     -59,   -59,     0,     0,     0,   214,     0,   214,     0,     0,
       0,   236,     0,     0,     0,     0,     0,   215,   235,   215,
       0,     0,     0,     0,   214,   -84,   214,   -84,   -84,     0,
     -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -82,     0,   -82,   -82,
       0,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   696,     0,   328,
     214,   -85,   214,   696,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,     0,     0,   235,     0,     0,     0,
       0,     0,     0,   214,     0,   214,     0,   -83,     0,   -83,
     -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   214,   -83,   -83,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,   262,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
     235,   404,   -85,   -85,   -85,   -85,   214,   -91,   214,   -91,
     -91,     0,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -91,     0,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -89,     0,
     -89,   -89,     0,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -88,
       0,   -88,   -88,     0,   -88,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,     0,   -88,
     -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -76,     0,   -76,   -76,     0,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   731,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   732,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -77,     0,   -77,   -77,     0,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   731,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   732,   -77,   -77,   -77,     0,   -77,   -77,   -77,
       0,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -79,     0,   -79,   -79,     0,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,     0,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -80,     0,   -80,   -80,     0,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -90,     0,   -90,   -90,     0,   -90,
     -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
     -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -92,     0,   -92,   -92,     0,
     -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
       0,   -92,   -92,   -92,     0,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -93,     0,   -93,   -93,
       0,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,     0,   -93,   -93,   -93,     0,   -93,   -93,   -93,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -94,     0,   -94,
     -94,     0,   -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,     0,   -94,   -94,   -94,     0,   -94,   -94,   -94,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -95,     0,
     -95,   -95,     0,   -95,   -95,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,     0,   -95,   -95,   -95,     0,   -95,   -95,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -96,
       0,   -96,   -96,     0,   -96,   -96,     0,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,     0,   -96,
     -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -86,     0,   -86,   -86,     0,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,     0,   -86,
     -86,   -87,     0,   -87,   -87,     0,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
       0,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -97,     0,   -97,   -97,     0,   -97,   -97,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,
     -97,     0,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,
       0,   -97,   -97,   -75,     0,   -75,   -75,     0,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   374,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   375,   -75,   -75,   -75,     0,   -75,
     -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,     0,   -75,   -75,   -78,     0,   -78,   -78,     0,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -81,     0,   -81,   -81,     0,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -84,     0,   -84,   -84,
       0,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,     0,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -82,     0,   -82,
     -82,     0,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -83,     0,
     -83,   -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,
     -83,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -91,
       0,   -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,     0,   -91,
     -91,   -91,     0,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -89,     0,   -89,   -89,     0,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,     0,
     -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -88,     0,   -88,   -88,     0,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,
       0,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -76,     0,   -76,   -76,     0,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   374,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   375,   -76,   -76,   -76,     0,   -76,   -76,
     -76,     0,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -77,     0,   -77,   -77,     0,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   374,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   375,   -77,   -77,   -77,     0,   -77,
     -77,   -77,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -79,     0,   -79,   -79,     0,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -80,     0,   -80,   -80,     0,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,   -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -90,     0,   -90,   -90,
       0,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,   -90,   -90,   -90,     0,   -90,   -90,   -90,     0,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -92,     0,   -92,
     -92,     0,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -92,     0,   -92,   -92,   -92,
       0,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -93,     0,
     -93,   -93,     0,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -93,   -93,   -93,     0,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -94,
       0,   -94,   -94,     0,   -94,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,     0,   -94,
     -94,   -94,     0,   -94,   -94,   -94,   -94,     0,   -94,   -94,
     -95,     0,   -95,   -95,     0,   -95,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,     0,
     -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,     0,   -95,
     -95,   -96,     0,   -96,   -96,     0,   -96,   -96,     0,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,
       0,   -96,   -96,   -96,     0,   -96,   -96,   -96,   -96,     0,
     -96,   -96,   -66,     0,   -66,   -66,     0,   -66,   -66,     0,
     -66,   -66,   726,   727,   728,     0,   -66,   -66,   -66,   -66,
     -66,   729,   730,     0,   -66,   -66,   -66,     0,   -66,   -66,
     -66,     0,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,     0,   -66,   -66,
       0,   -66,   -66,   369,   370,   371,     0,   -66,   -66,   -66,
     -66,   -66,   372,   373,     0,   -66,   -66,   -66,     0,   -66,
     -66,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -87,     0,   -87,   -87,     0,   -87,
     -87,     0,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -87,     0,   -87,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -97,     0,   -97,   -97,     0,
     -97,   -97,     0,   -97,   -97,     0,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,     0,     0,   -97,   -97,   -97,   -97,
       0,   -97,   -97,   -97,     0,   -97,   -97,   -97,     0,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -75,     0,   -75,   -75,
       0,   -75,   -75,     0,   -75,   -75,     0,   -75,   -75,   793,
     -75,   -75,   -75,   -75,   -75,     0,     0,   794,   -75,   -75,
     -75,     0,   -75,   -75,   -75,     0,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -78,     0,   -78,
     -78,     0,   -78,   -78,     0,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -81,     0,
     -81,   -81,     0,   -81,   -81,     0,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -84,
       0,   -84,   -84,     0,   -84,   -84,     0,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,
     -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -82,     0,   -82,   -82,     0,   -82,   -82,     0,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,     0,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,     0,   -83,   -83,     0,   -83,   -83,     0,   -83,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
       0,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -91,     0,   -91,   -91,     0,   -91,   -91,     0,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -91,     0,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -89,     0,   -89,   -89,     0,   -89,   -89,
       0,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -89,     0,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -88,     0,   -88,   -88,     0,   -88,
     -88,     0,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -88,     0,   -88,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -76,     0,   -76,   -76,     0,
     -76,   -76,     0,   -76,   -76,     0,   -76,   -76,   793,   -76,
     -76,   -76,   -76,   -76,     0,     0,   794,   -76,   -76,   -76,
       0,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -77,     0,   -77,   -77,
       0,   -77,   -77,     0,   -77,   -77,     0,   -77,   -77,   793,
     -77,   -77,   -77,   -77,   -77,     0,     0,   794,   -77,   -77,
     -77,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -79,     0,   -79,
     -79,     0,   -79,   -79,     0,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -80,     0,
     -80,   -80,     0,   -80,   -80,     0,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -90,
       0,   -90,   -90,     0,   -90,   -90,     0,   -90,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -92,     0,   -92,   -92,     0,   -92,   -92,     0,   -92,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
       0,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,     0,
     -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -93,     0,   -93,   -93,     0,   -93,   -93,     0,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,
       0,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -94,     0,   -94,   -94,     0,   -94,   -94,     0,
     -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,     0,     0,   -94,   -94,   -94,   -94,     0,   -94,   -94,
     -94,     0,   -94,   -94,   -94,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -95,     0,   -95,   -95,     0,   -95,   -95,
       0,   -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,     0,     0,   -95,   -95,   -95,   -95,     0,   -95,
     -95,   -95,     0,   -95,   -95,   -95,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -96,     0,   -96,   -96,     0,   -96,
     -96,     0,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,     0,     0,   -96,   -96,   -96,   -96,     0,
     -96,   -96,   -96,     0,   -96,   -96,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -85,     0,   -85,   -85,     0,
     590,   -85,     0,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -86,     0,   -86,   -86,
       0,   -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -87,     0,   -87,
     -87,     0,   -87,   -87,     0,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,     0,   -87,   -87,   -87,
       0,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -97,     0,
     -97,   -97,     0,   -97,   -97,     0,   -97,   -97,     0,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,   -97,
     -97,   -97,   -97,     0,   -97,   -97,   -97,     0,   -97,   -97,
     -97,     0,   -97,   -97,   -97,   -97,     0,   -97,   -97,   -75,
       0,   -75,   -75,     0,   -75,   -75,     0,   -75,   -75,     0,
     -75,   -75,   601,   -75,   -75,   -75,   -75,   -75,     0,     0,
     602,   -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -78,     0,   -78,   -78,     0,   -78,   -78,     0,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -81,     0,   -81,   -81,     0,   -81,   -81,     0,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
       0,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -84,     0,   -84,   -84,     0,   -84,   -84,     0,
     -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,     0,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -82,     0,   -82,   -82,     0,   -82,   -82,
       0,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -83,     0,   -83,   -83,     0,   -83,
     -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -91,     0,   -91,   -91,     0,
     -91,   -91,     0,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,     0,   -91,   -91,   -91,     0,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -89,     0,   -89,   -89,
       0,   -89,   -89,     0,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,     0,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -88,     0,   -88,
     -88,     0,   -88,   -88,     0,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   -88,     0,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -76,     0,
     -76,   -76,     0,   -76,   -76,     0,   -76,   -76,     0,   -76,
     -76,   601,   -76,   -76,   -76,   -76,   -76,     0,     0,   602,
     -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -77,
       0,   -77,   -77,     0,   -77,   -77,     0,   -77,   -77,     0,
     -77,   -77,   601,   -77,   -77,   -77,   -77,   -77,     0,     0,
     602,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -79,     0,   -79,   -79,     0,   -79,   -79,     0,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,     0,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -80,     0,   -80,   -80,     0,   -80,   -80,     0,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
       0,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -90,     0,   -90,   -90,     0,   -90,   -90,     0,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,     0,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
       0,   -90,   -90,   -92,     0,   -92,   -92,     0,   -92,   -92,
       0,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,     0,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,     0,   -92,   -92,   -93,     0,   -93,   -93,     0,   -93,
     -93,     0,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,   -93,   -93,   -93,   -93,     0,
     -93,   -93,   -93,     0,   -93,   -93,   -93,     0,   -93,   -93,
     -93,   -93,     0,   -93,   -93,   -94,     0,   -94,   -94,     0,
     -94,   -94,     0,   -94,   -94,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,     0,     0,   -94,   -94,   -94,   -94,
       0,   -94,   -94,   -94,     0,   -94,   -94,   -94,     0,   -94,
     -94,   -94,   -94,     0,   -94,   -94,   -95,     0,   -95,   -95,
       0,   -95,   -95,     0,   -95,   -95,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,     0,   -95,   -95,   -95,
     -95,     0,   -95,   -95,   -95,     0,   -95,   -95,   -95,     0,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -96,     0,   -96,
     -96,     0,   -96,   -96,     0,   -96,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,     0,   -96,   -96,
     -96,   -96,     0,   -96,   -96,   -96,     0,   -96,   -96,   -96,
       0,   -96,   -96,   -96,   -96,     0,   -96,   -96,   -70,     0,
     -70,   -70,     0,   -70,   -70,     0,   -70,   -70,     0,   791,
     792,     0,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
     -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -67,
       0,   -67,   -67,     0,   -67,   -67,     0,   -67,   -67,     0,
     791,   792,     0,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,   -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,
     -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -68,     0,   -68,   -68,     0,   -68,   -68,     0,   -68,   -68,
       0,   791,   792,     0,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,   -68,   -68,   -68,     0,   -68,   -68,   -68,     0,
     -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -71,     0,   -71,   -71,     0,   -71,   -71,     0,   -71,
     -71,     0,   791,   792,     0,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,   -71,   -71,   -71,     0,   -71,   -71,   -71,
       0,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -72,     0,   -72,   -72,     0,   -72,   -72,     0,
     -72,   -72,     0,   791,   792,     0,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,   -72,   -72,   -72,     0,   -72,   -72,
     -72,     0,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -69,     0,   -69,   -69,     0,   -69,   -69,
       0,   -69,   -69,     0,   599,   600,     0,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,   -69,   -69,   -69,     0,   -69,
     -69,   -69,     0,   -69,   -69,   -69,     0,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -70,     0,   -70,   -70,     0,   -70,
     -70,     0,   -70,   -70,     0,   599,   600,     0,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,   -70,   -70,   -70,     0,
     -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -67,     0,   -67,   -67,     0,
     -67,   -67,     0,   -67,   -67,     0,   599,   600,     0,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,   -67,   -67,   -67,
       0,   -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -68,     0,   -68,   -68,
       0,   -68,   -68,     0,   -68,   -68,     0,   599,   600,     0,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,   -68,   -68,
     -68,     0,   -68,   -68,   -68,     0,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -71,     0,   -71,
     -71,     0,   -71,   -71,     0,   -71,   -71,     0,   599,   600,
       0,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -71,
     -71,   -71,     0,   -71,   -71,   -71,     0,   -71,   -71,   -71,
       0,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -72,     0,
     -72,   -72,     0,   -72,   -72,     0,   -72,   -72,     0,   599,
     600,     0,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
     -72,   -72,   -72,     0,   -72,   -72,   -72,     0,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -74,
       0,   -74,   -74,     0,   -74,   -74,     0,   -74,   -74,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,   -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -73,     0,   -73,   -73,     0,   -73,   -73,     0,   -73,   -73,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,   -73,   -73,   -73,     0,   -73,   -73,   -73,     0,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -61,     0,   -61,   -61,     0,   -61,   -61,     0,   -61,
     -61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,   -61,   -61,     0,     0,   719,   -61,
       0,   -61,   -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -60,     0,   -60,   -60,     0,   -60,   -60,     0,
     -60,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -60,   -60,   -60,     0,     0,   362,
     -60,     0,   -60,   -60,   -60,     0,   -60,   -60,   -60,   -60,
       0,   -60,   -60,   -61,     0,   -61,   -61,     0,   -61,   -61,
       0,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -61,   -61,   -61,     0,     0,
     362,   -61,     0,   -61,   -61,   -61,     0,   -61,   -61,   -61,
     -61,     0,   -61,   -61,   -59,     0,   -59,   -59,     0,   -59,
     -59,     0,   -59,   -59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -59,   -59,   -59,     0,
       0,     0,   718,     0,   -59,   -59,   -59,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -46,     0,   -46,   -46,     0,
     -46,   -46,   -66,   -46,   -46,     0,   101,   102,   103,     0,
     -66,   -66,   -66,   -66,   -66,   104,   105,   -46,   -46,   -46,
       0,     0,   -66,   -66,   -66,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -27,     0,   -27,   -27,
       0,   -27,   -27,   -70,   -27,   -27,     0,     0,   279,   280,
       0,   -70,   -70,   -70,   -70,   -70,     0,     0,   -27,   -27,
     -27,     0,     0,   -70,   -70,   -70,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -29,     0,   -29,
     -29,     0,   -29,   -29,   -67,   -29,   -29,     0,     0,   279,
     280,     0,   -67,   -67,   -67,   -67,   -67,     0,     0,   -29,
     -29,   -29,     0,     0,   -67,   -67,   -67,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -31,     0,
     -31,   -31,     0,   -31,   -31,   -68,   -31,   -31,     0,     0,
     279,   280,     0,   -68,   -68,   -68,   -68,   -68,     0,     0,
     -31,   -31,   -31,     0,     0,   -68,   -68,   -68,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -28,
       0,   -28,   -28,     0,   -28,   -28,   -71,   -28,   -28,     0,
       0,   279,   280,     0,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -28,   -28,   -28,     0,     0,   -71,   -71,   -71,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -30,     0,   -30,   -30,     0,   -30,   -30,   -72,   -30,   -30,
       0,     0,   279,   280,     0,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -30,   -30,   -30,     0,     0,   -72,   -72,   -72,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -34,     0,   -34,   -34,     0,   -34,   -34,   -74,   -34,
     -34,     0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
     -74,     0,     0,   -34,   -34,   -34,     0,     0,   -74,   -74,
     -74,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -32,     0,   -32,   -32,     0,   -32,   -32,   -73,
     -32,   -32,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -32,   -32,   -32,     0,     0,   -73,
     -73,   -73,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -48,     0,   -48,   -48,     0,   -48,   -48,
       0,   -48,   -48,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,   -86,     0,   -48,   -48,   -48,   -86,   -86,
     -86,   -86,     0,   -48,   -48,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -47,     0,   -47,   -47,     0,   -47,
     -47,     0,   -47,   -47,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,   -87,     0,   -47,   -47,   -47,   -87,
     -87,   -87,   -87,     0,   -47,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -33,     0,   -33,   -33,     0,
     -33,   -33,     0,   -33,   -33,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,     0,     0,   -97,     0,   -33,   -33,   -33,
     -97,   -97,   -97,   -97,     0,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -43,     0,   -43,   -43,
       0,   -43,   -43,     0,   -43,   -43,   -75,   -75,   563,   -75,
     -75,   -75,   -75,   -75,     0,     0,   564,     0,   -43,   -43,
     -43,   -75,   -75,   -75,   -75,     0,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -38,     0,   -38,
     -38,     0,   -38,   -38,     0,   -38,   -38,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,   -78,     0,   -38,
     -38,   -38,   -78,   -78,   -78,   -78,     0,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -35,     0,
     -35,   -35,     0,   -35,   -35,     0,   -35,   -35,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,     0,
     -35,   -35,   -35,   -81,   -81,   -81,   -81,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -36,
       0,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,
       0,   -36,   -36,   -36,   -84,   -84,   -84,   -84,     0,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -37,     0,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
     -82,     0,   -37,   -37,   -37,   -82,   -82,   -82,   -82,     0,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -42,     0,   -42,   -42,     0,   -42,   -42,     0,   -42,
     -42,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,   -83,     0,   -42,   -42,   -42,   -83,   -83,   -83,   -83,
       0,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -40,     0,   -40,   -40,     0,   -40,   -40,     0,
     -40,   -40,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,     0,   -91,     0,   -40,   -40,   -40,   -91,   -91,   -91,
     -91,     0,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -52,     0,   -52,   -52,     0,   -52,   -52,
       0,   -52,   -52,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,   -89,     0,   -52,   -52,   -52,   -89,   -89,
     -89,   -89,     0,   -52,   -52,   -52,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -10,     0,   -10,   -10,     0,   -10,
     -10,     0,   -10,   -10,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,   -88,     0,   -10,   -10,   -10,   -88,
     -88,   -88,   -88,     0,   -10,   -10,   -10,     0,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -41,     0,   -41,   -41,     0,
     -41,   -41,     0,   -41,   -41,   -76,   -76,   563,   -76,   -76,
     -76,   -76,   -76,     0,     0,   564,     0,   -41,   -41,   -41,
     -76,   -76,   -76,   -76,     0,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -51,     0,   -51,   -51,
       0,   -51,   -51,     0,   -51,   -51,   -77,   -77,   563,   -77,
     -77,   -77,   -77,   -77,     0,     0,   564,     0,   -51,   -51,
     -51,   -77,   -77,   -77,   -77,     0,   -51,   -51,   -51,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -11,     0,   -11,
     -11,     0,   -11,   -11,     0,   -11,   -11,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -79,     0,   -11,
     -11,   -11,   -79,   -79,   -79,   -79,     0,   -11,   -11,   -11,
       0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -53,     0,
     -53,   -53,     0,   -53,   -53,     0,   -53,   -53,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,   -80,     0,
     -53,   -53,   -53,   -80,   -80,   -80,   -80,     0,   -53,   -53,
     -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -50,
       0,   -50,   -50,     0,   -50,   -50,     0,   -50,   -50,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,   -90,
       0,   -50,   -50,   -50,   -90,   -90,   -90,   -90,     0,   -50,
     -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -49,     0,   -49,   -49,     0,   -49,   -49,     0,   -49,   -49,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
     -92,     0,   -49,   -49,   -49,   -92,   -92,   -92,   -92,     0,
     -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,    26,     0,    27,    28,     0,    29,    30,     0,    31,
     201,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
       0,   -93,     0,    32,    33,    34,   -93,   -93,   -93,   -93,
       0,    35,    36,    37,     0,    38,    39,    40,    41,     0,
      42,    43,   -46,     0,   -46,   -46,     0,   -46,   -46,     0,
     -46,   -46,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
       0,     0,   -94,     0,   -46,   -46,   -46,   -94,   -94,   -94,
     -94,     0,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -27,     0,   -27,   -27,     0,   -27,   -27,
       0,   -27,   -27,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,     0,     0,   -95,     0,   -27,   -27,   -27,   -95,   -95,
     -95,   -95,     0,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -29,     0,   -29,   -29,     0,   -29,
     -29,     0,   -29,   -29,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,     0,     0,   -96,     0,   -29,   -29,   -29,   -96,
     -96,   -96,   -96,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -31,     0,   -31,   -31,     0,
     -31,   -31,     0,   -31,   -31,   561,   562,     0,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,   -31,   -31,   -31,
     -70,   -70,   -70,   -70,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -28,     0,   -28,   -28,
       0,   -28,   -28,     0,   -28,   -28,   561,   562,     0,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,   -28,   -28,
     -28,   -67,   -67,   -67,   -67,     0,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -30,     0,   -30,
     -30,     0,   -30,   -30,     0,   -30,   -30,   561,   562,     0,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,   -30,
     -30,   -30,   -68,   -68,   -68,   -68,     0,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -48,     0,
     -48,   -48,     0,   -48,   -48,     0,   -48,   -48,   561,   562,
       0,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
     -48,   -48,   -48,   -71,   -71,   -71,   -71,     0,   -48,   -48,
     -48,     0,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -47,
       0,   -47,   -47,     0,   -47,   -47,     0,   -47,   -47,   561,
     562,     0,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,   -47,   -47,   -47,   -72,   -72,   -72,   -72,     0,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -43,     0,   -43,   -43,     0,   -43,   -43,     0,   -43,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -43,   -43,   -43,     0,     0,     0,     0,     0,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,   -10,
     -10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -10,   -10,   -10,     0,     0,     0,     0,
       0,   -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,     0,
     -10,   -10,   -11,     0,   -11,   -11,     0,   -11,   -11,     0,
     -11,   -11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -11,   -11,   -11,     0,     0,     0,
       0,     0,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,
       0,   -11,   -11,   -42,     0,   -42,   -42,     0,   -42,   -42,
       0,   -42,   -42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,     0,     0,
       0,     0,     0,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -40,     0,   -40,   -40,     0,   -40,
     -40,     0,   -40,   -40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,   -40,   -40,     0,
       0,     0,     0,     0,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   -52,     0,   -52,   -52,     0,
     -52,   -52,     0,   -52,   -52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -52,   -52,   -52,
       0,     0,     0,     0,     0,   -52,   -52,   -52,     0,   -52,
     -52,   -52,   -52,     0,   -52,   -52,   -41,     0,   -41,   -41,
       0,   -41,   -41,     0,   -41,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,     0,     0,     0,     0,     0,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -51,     0,   -51,
     -51,     0,   -51,   -51,     0,   -51,   -51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -51,
     -51,   -51,     0,     0,     0,     0,     0,   -51,   -51,   -51,
       0,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -53,     0,
     -53,   -53,     0,   -53,   -53,     0,   -53,   -53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -53,   -53,   -53,     0,     0,     0,     0,     0,   -53,   -53,
     -53,     0,   -53,   -53,   -53,   -53,     0,   -53,   -53,   -50,
       0,   -50,   -50,     0,   -50,   -50,     0,   -50,   -50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -50,   -50,   -50,     0,     0,     0,     0,     0,   -50,
     -50,   -50,     0,   -50,   -50,   -50,   -50,     0,   -50,   -50,
     -49,     0,   -49,   -49,     0,   -49,   -49,     0,   -49,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -49,   -49,   -49,     0,     0,     0,     0,     0,
     -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,     0,   -49,
     -49,   298,     0,    27,    28,     0,    29,    30,     0,   299,
     201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,     0,     0,     0,     0,
       0,    35,    36,    37,     0,    38,    39,    40,    41,     0,
      42,    43,    -9,     0,    -9,    -9,     0,    -9,    -9,     0,
      -9,    -9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    -9,    -9,    -9,     0,     0,     0,
       0,     0,    -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,
       0,    -9,    -9,    -7,     0,    -7,    -7,     0,    -7,    -7,
       0,    -7,    -7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -7,    -7,    -7,     0,     0,
       0,     0,     0,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,     0,    -7,    -7,    -8,     0,    -8,    -8,     0,    -8,
      -8,     0,    -8,    -8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    -8,    -8,    -8,     0,
       0,     0,     0,     0,    -8,    -8,    -8,     0,    -8,    -8,
      -8,    -8,     0,    -8,    -8,   394,     0,    27,    28,     0,
      29,    30,     0,   395,   201,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
       0,     0,     0,     0,     0,    35,    36,    37,     0,    38,
      39,    40,    41,     0,    42,    43,   -34,     0,   -34,   -34,
       0,   -34,   -34,     0,   -34,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,   -34,
     -34,     0,     0,     0,     0,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -32,     0,   -32,
     -32,     0,   -32,   -32,     0,   -32,   -32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
     -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -33,     0,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -38,
       0,   -38,   -38,     0,   -38,   -38,     0,   -38,   -38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -35,     0,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,   -35,     0,     0,     0,     0,     0,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -36,     0,   -36,   -36,     0,   -36,   -36,     0,   -36,
     -36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -36,   -36,   -36,     0,     0,     0,     0,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -37,     0,   -37,   -37,     0,   -37,   -37,     0,
     -37,   -37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,   -37,     0,     0,     0,
       0,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     112,   -37,   -37,   222,     0,    29,    30,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,     0,     0,     0,     0,     0,
      35,    36,    37,     0,    38,    39,    40,    41,   281,    42,
      43,    28,     0,    29,   282,     0,     0,   283,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,     0,     0,     0,    35,    36,
      37,     0,    38,    39,    40,    41,   112,    42,   284,    28,
       0,    29,    30,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,    35,    36,    37,     0,
      38,    39,    40,    41,   281,    42,    43,   222,     0,    29,
     282,     0,     0,   283,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,     0,
       0,     0,     0,     0,    35,    36,    37,     0,    38,    39,
      40,    41,   281,    42,   284,   655,     0,    29,   282,     0,
       0,   283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,     0,     0,
       0,     0,    35,    36,    37,     0,    38,    39,    40,    41,
     553,    42,   284,    78,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   572,     0,     0,    78,     0,
     204,     0,   205,   206,   207,     0,     0,     0,     0,     0,
     208,   209,   210,     0,   211,   212,   213,   205,   206,   207,
       0,     0,     0,     0,     0,   208,   209,   210,     0,   211,
     212,   213,   591,     0,     0,    78,     0,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   659,     0,     0,
     263,     0,    29,     0,   205,   206,   207,     0,     0,     0,
       0,     0,   208,   209,   210,     0,   211,   212,   213,    32,
      33,    34,     0,     0,     0,     0,     0,    35,    36,    37,
       0,    38,    39,    40,   706,     0,     0,   293,     0,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   709,
       0,     0,    78,     0,   204,     0,   205,   206,   207,     0,
       0,     0,     0,     0,   208,   209,   210,     0,   211,   212,
     213,   205,   206,   207,   224,     0,   225,     0,     0,   208,
     209,   210,     0,   211,   212,   213,   783,     0,     0,    78,
       0,   204,     0,   226,   227,   228,     0,     0,     0,     0,
     445,   229,   230,   231,     0,   232,   233,   234,   205,   206,
     207,    78,     0,   204,     0,     0,   208,   209,   210,     0,
     211,   212,   213,     0,     0,     0,    78,     0,   204,     0,
     205,   206,   207,     0,     0,     0,     0,     0,   208,   209,
     210,   449,   211,   212,   213,   205,   206,   207,   224,     0,
     225,     0,     0,   208,   209,   210,   452,   211,   212,   213,
       0,     0,     0,    78,     0,   204,     0,   226,   227,   228,
       0,     0,     0,     0,   483,   229,   230,   231,     0,   232,
     233,   234,   205,   206,   207,    78,     0,   204,     0,     0,
     208,   209,   210,   487,   211,   212,   213,     0,     0,     0,
     222,     0,    29,     0,   205,   206,   207,     0,     0,   522,
       0,     0,   208,   209,   210,   490,   211,   212,   213,    32,
      33,    34,   224,     0,   225,     0,     0,    35,    36,    37,
       0,    38,    39,    40,     0,     0,     0,    78,     0,   204,
       0,   226,   227,   228,     0,     0,     0,     0,   524,   229,
     230,   231,     0,   232,   233,   234,   205,   206,   207,    78,
       0,   204,     0,     0,   208,   209,   210,   528,   211,   212,
     213,     0,     0,     0,    78,     0,   204,     0,   205,   206,
     207,     0,     0,   545,     0,     0,   208,   209,   210,   531,
     211,   212,   213,   205,   206,   207,   224,     0,   225,     0,
       0,   208,   209,   210,     0,   211,   212,   213,     0,     0,
       0,    78,     0,   204,     0,   226,   227,   228,     0,     0,
       0,     0,   615,   229,   230,   231,     0,   232,   233,   234,
     205,   206,   207,    78,     0,   204,     0,     0,   208,   209,
     210,   619,   211,   212,   213,     0,     0,     0,   224,     0,
     225,     0,   205,   206,   207,     0,     0,     0,     0,     0,
     208,   209,   210,   622,   211,   212,   213,   226,   227,   228,
      78,     0,   204,     0,   628,   229,   230,   231,     0,   232,
     233,   234,     0,     0,     0,    78,     0,   204,     0,   205,
     206,   207,     0,     0,     0,     0,     0,   208,   209,   210,
     632,   211,   212,   213,   205,   206,   207,   224,     0,   225,
       0,     0,   208,   209,   210,   635,   211,   212,   213,     0,
       0,     0,    78,     0,   204,     0,   226,   227,   228,     0,
       0,     0,     0,   641,   229,   230,   231,     0,   232,   233,
     234,   205,   206,   207,    78,     0,   204,     0,     0,   208,
     209,   210,   645,   211,   212,   213,     0,     0,     0,   683,
       0,   684,     0,   205,   206,   207,     0,     0,   685,     0,
       0,   208,   209,   210,   648,   211,   212,   213,   686,   687,
     688,   224,     0,   225,     0,     0,   689,   690,   691,     0,
     692,   693,   694,     0,     0,     0,    78,     0,   204,     0,
     226,   227,   228,     0,     0,     0,     0,   735,   229,   230,
     231,     0,   232,   233,   234,   205,   206,   207,    78,     0,
     204,     0,     0,   208,   209,   210,   739,   211,   212,   213,
       0,     0,     0,   224,     0,   225,     0,   205,   206,   207,
       0,     0,     0,     0,     0,   208,   209,   210,   742,   211,
     212,   213,   226,   227,   228,    78,     0,   204,     0,   795,
     229,   230,   231,     0,   232,   233,   234,     0,     0,     0,
      78,     0,   204,     0,   205,   206,   207,     0,     0,     0,
       0,     0,   208,   209,   210,   799,   211,   212,   213,   205,
     206,   207,   222,     0,    29,     0,     0,   208,   209,   210,
     802,   211,   212,   213,     0,     0,     0,   264,     0,   265,
       0,    32,    33,    34,     0,     0,     0,     0,     0,    35,
      36,    37,     0,    38,    39,    40,   266,   267,   268,   243,
       0,   244,     0,     0,   269,   270,   271,     0,   272,   273,
     274,     0,     0,     0,   224,     0,   225,     0,   245,   246,
     247,     0,     0,     0,     0,     0,   248,   249,   250,     0,
     251,   252,   253,   226,   227,   228,    78,     0,   204,     0,
       0,   229,   230,   231,     0,   232,   233,   234,     0,     0,
       0,   419,     0,   420,     0,   205,   206,   207,     0,     0,
       0,     0,     0,   208,   209,   210,     0,   211,   212,   213,
     421,   422,   423,   457,     0,   458,     0,     0,   424,   425,
     426,     0,   427,   428,   429,     0,     0,     0,   495,     0,
     496,     0,   459,   460,   461,     0,     0,     0,     0,     0,
     462,   463,   464,     0,   465,   466,   467,   497,   498,   499,
     683,     0,   684,     0,     0,   500,   501,   502,     0,   503,
     504,   505,     0,     0,     0,   747,     0,   748,     0,   686,
     687,   688,     0,     0,     0,     0,     0,   689,   690,   691,
       0,   692,   693,   694,   749,   750,   751,     0,     0,     0,
       0,     0,   752,   753,   754,   262,   755,   756,   757,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     571,     0,   -85,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,   -85,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,    75,   -85,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,    76,   -85,   -85,   -85,    75,
     -85,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,   378,
     -85,   -85,   -85,    75,   -85,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   379,   -85,   679,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,   -85,     0,     0,
       0,     0,   -85,   -85,   -85,   -86,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -87,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -97,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,     0,     0,     0,     0,
     -97,   -97,   -97,   -97,   -75,     0,     0,   -75,   -75,   -75,
     350,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   351,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -78,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -84,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,   -84,   -84,   -84,   -84,   -82,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -83,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   -91,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -89,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -88,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -76,     0,     0,   -76,   -76,   -76,   350,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   351,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -77,     0,     0,   -77,   -77,   -77,
     350,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   351,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -79,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -90,     0,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -92,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -93,
       0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,     0,     0,     0,   -93,   -93,
     -93,   -93,   -94,     0,     0,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,     0,
       0,   -94,   -94,   -94,   -94,   -95,     0,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       0,     0,     0,     0,   -95,   -95,   -95,   -95,   -96,     0,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,     0,     0,     0,     0,   -96,   -96,   -96,
     -96,   -86,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
     -87,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,   -97,
     -87,   -87,   -87,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,     0,     0,     0,   -75,   -97,
     -97,   -97,   -75,   -75,   -75,   106,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   107,     0,     0,     0,   -78,   -75,   -75,
     -75,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,   -81,   -78,   -78,   -78,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,   -84,   -81,   -81,   -81,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,   -82,   -84,   -84,   -84,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,   -83,   -82,   -82,   -82,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,   -91,   -83,   -83,   -83,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
       0,   -89,   -91,   -91,   -91,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
     -88,   -89,   -89,   -89,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,   -76,
     -88,   -88,   -88,   -76,   -76,   -76,   106,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   107,     0,     0,     0,   -77,   -76,
     -76,   -76,   -77,   -77,   -77,   106,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   107,     0,     0,     0,   -79,   -77,   -77,
     -77,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,   -80,   -79,   -79,   -79,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,   -90,   -80,   -80,   -80,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,   -92,   -90,   -90,   -90,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
       0,     0,     0,   -93,   -92,   -92,   -92,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
       0,     0,   -94,   -93,   -93,   -93,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
       0,   -95,   -94,   -94,   -94,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,
     -96,   -95,   -95,   -95,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,     0,     0,   -86,
     -96,   -96,   -96,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,   -86,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -87,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,   -87,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -97,     0,     0,     0,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,   -97,
       0,     0,     0,     0,   -97,   -97,   -97,   -97,   -75,     0,
       0,     0,   -75,   -75,   582,   -75,   -75,   -75,   -75,   -75,
       0,     0,   583,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -78,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,   -78,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -81,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -84,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,   -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,   -82,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -83,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,   -83,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -91,     0,     0,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
     -91,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   -89,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,   -89,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -88,     0,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,   -88,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -76,     0,     0,     0,   -76,
     -76,   582,   -76,   -76,   -76,   -76,   -76,     0,     0,   583,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -77,     0,
       0,     0,   -77,   -77,   582,   -77,   -77,   -77,   -77,   -77,
       0,     0,   583,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,   -79,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,   -80,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,   -80,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -90,     0,     0,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,   -90,     0,     0,     0,     0,   -90,   -90,   -90,   -90,
     -92,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,   -92,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -93,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,     0,   -93,     0,     0,
       0,     0,   -93,   -93,   -93,   -93,   -94,     0,     0,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
     -94,     0,     0,     0,     0,   -94,   -94,   -94,   -94,   -95,
       0,     0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,     0,     0,   -95,     0,     0,     0,     0,   -95,   -95,
     -95,   -95,   -96,     0,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,     0,   -96,     0,     0,     0,
     -86,   -96,   -96,   -96,   -96,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,   -86,     0,     0,   -87,     0,
     -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   -87,     0,     0,   -97,     0,   -87,   -87,
     -87,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,
       0,   -97,     0,     0,   -75,     0,   -97,   -97,   -97,   -75,
     -75,   388,   -75,   -75,   -75,   -75,   -75,     0,     0,   389,
       0,     0,   -78,     0,   -75,   -75,   -75,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,   -78,     0,     0,
     -81,     0,   -78,   -78,   -78,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,   -81,     0,     0,   -84,     0,
     -81,   -81,   -81,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,   -84,     0,     0,   -82,     0,   -84,   -84,
     -84,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -82,     0,     0,   -83,     0,   -82,   -82,   -82,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,   -83,
       0,     0,   -76,     0,   -83,   -83,   -83,   -76,   -76,   388,
     -76,   -76,   -76,   -76,   -76,     0,     0,   389,     0,     0,
     -77,     0,   -76,   -76,   -76,   -77,   -77,   388,   -77,   -77,
     -77,   -77,   -77,     0,     0,   389,     0,     0,   -91,     0,
     -77,   -77,   -77,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,   -91,     0,     0,   -89,     0,   -91,   -91,
     -91,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,   -89,     0,     0,   -88,     0,   -89,   -89,   -89,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,
       0,     0,   -79,     0,   -88,   -88,   -88,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -79,     0,     0,
     -80,     0,   -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,   -80,     0,     0,   -90,     0,
     -80,   -80,   -80,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,   -90,     0,     0,   -92,     0,   -90,   -90,
     -90,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
       0,   -92,     0,     0,   -93,     0,   -92,   -92,   -92,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,   -93,
       0,     0,   -94,     0,   -93,   -93,   -93,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,     0,     0,   -94,     0,     0,
     -95,     0,   -94,   -94,   -94,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,     0,     0,   -95,     0,     0,   -96,     0,
     -95,   -95,   -95,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,     0,     0,   -96,     0,     0,     0,   -69,   -96,   -96,
     -96,   580,   581,     0,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -70,     0,     0,     0,   580,   581,     0,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -67,     0,     0,     0,   580,   581,     0,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -68,     0,     0,     0,
     580,   581,     0,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -71,
       0,     0,     0,   580,   581,     0,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -72,     0,     0,     0,   580,   581,     0,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,     0,
       0,   -97,   -97,   -97,   -97,   -75,   -75,   -75,   326,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   327,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -76,   -76,   -76,   326,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   327,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -77,   -77,   -77,   326,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   327,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,   -90,   -90,   -90,   -90,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
       0,   -92,   -92,   -92,   -92,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,
       0,   -93,   -93,   -93,   -93,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,     0,
       0,   -94,   -94,   -94,   -94,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,
       0,   -95,   -95,   -95,   -95,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,     0,     0,
       0,   -96,   -96,   -96,   -96,   321,   322,   323,     0,   -66,
     -66,   -66,   -66,   -66,   324,   325,     0,     0,     0,     0,
       0,   -66,   -66,   -66,   -66
};

static const yytype_int16 yycheck[] =
{
      29,     0,   163,    32,    33,    34,   170,     1,     3,     1,
       4,     1,     6,     3,     7,     4,     1,    30,    10,    10,
     181,     6,   159,    43,    10,     9,    10,    29,    30,    23,
      24,    25,     9,    10,    10,   159,    29,    31,    32,    33,
      30,    35,    36,    37,   159,     6,    75,    76,    13,     9,
      10,     7,    30,    39,    83,    39,    85,    22,     7,     8,
       6,    90,    39,    39,     7,     8,   159,    96,    97,    98,
      99,   100,    28,    29,   262,   104,     6,   106,   107,    39,
       8,    30,     7,     8,     6,     0,     6,    30,     3,   118,
       7,     8,     1,     0,     3,     4,     3,     6,     7,    64,
       9,    10,    30,    68,     6,    30,    15,    16,    17,    18,
      19,     8,     6,    30,    23,    24,    25,   281,    27,    28,
      29,   150,    31,    32,    33,     7,    35,    36,    37,    38,
      39,    40,    41,    30,     4,     6,     6,     7,    72,   159,
     328,    12,    13,    14,    15,    16,    17,    18,    19,     7,
       8,    22,   181,    23,    24,    25,    27,    28,    29,    30,
       8,    31,    32,    33,   352,    35,    36,    37,     8,     7,
       8,     8,    30,     8,     4,   204,   205,   206,   207,    27,
      28,    29,    30,     0,     7,     7,     3,    27,    28,    29,
      30,   379,    30,    30,   159,    30,   225,   226,   227,   228,
       7,    28,    29,    30,    27,    28,    29,     0,     4,     8,
       3,   159,    30,     7,    30,   244,   245,   246,   247,     4,
      27,    28,    29,     0,   158,   159,     3,     8,   162,    28,
      29,    30,     8,   262,    28,    29,   265,   266,   267,   268,
       8,   402,     3,     8,     8,   179,   180,    28,    29,    30,
     279,   280,     8,    29,    30,     8,   393,     8,     8,   193,
     194,     7,    30,    30,   284,    30,    30,   201,   202,   393,
       1,    28,    29,    30,    30,     6,     7,    30,   393,    30,
      30,   310,     8,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     393,    30,     8,     8,    30,   334,     8,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,    30,    30,    30,     0,    30,   358,
       3,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,     1,    30,   283,
     379,     1,     6,     7,     4,     5,   385,     3,   387,   388,
     389,    30,   176,   177,   552,    30,   300,   301,   302,     4,
       5,   185,   401,   393,     1,   404,   190,     4,     5,     8,
       4,     5,   196,   571,   201,   202,    15,    16,    17,    18,
      19,   420,   421,   422,   423,     4,     5,    30,    27,    28,
      29,    30,   590,     1,     0,     3,     4,     3,     6,     7,
       7,     9,    10,    27,    28,    29,    30,    27,    28,    29,
      30,     0,     4,     5,     3,    23,    24,    25,   393,   458,
     459,   460,   461,    31,    32,    33,     7,    35,    36,    37,
      38,    39,    40,    41,     0,   393,     0,     3,     0,     3,
       0,     3,   613,     3,     0,     4,     7,     3,   392,   393,
       7,    30,   396,   397,   398,     7,   283,   496,   497,   498,
     499,     7,     3,   610,   611,   612,     1,     0,     4,     4,
       3,     6,    30,   300,   301,   302,   610,   611,   612,     0,
      30,     0,     3,   657,     3,   610,   611,   612,    23,    24,
      25,     0,     0,    30,     3,     3,    31,    32,    33,     4,
      35,    36,    37,    30,    91,    30,   545,   610,   611,   612,
     708,   682,    30,   552,    15,    16,    17,    18,    19,   558,
       6,   560,   561,   562,   563,   564,    27,    28,    29,    30,
       6,     6,   571,   680,   681,     6,     0,     6,   577,     3,
     579,   580,   581,   582,   583,     0,   680,   681,     3,    29,
       6,   590,     6,     6,     6,   680,   681,   596,     6,   598,
     599,   600,   601,   602,     6,   392,     6,     6,     6,   396,
     397,   398,   159,     7,     4,     6,   163,   680,   681,    30,
     610,   611,   612,    30,   782,    30,   733,   734,     4,    30,
       4,     4,     7,    30,   181,    75,    76,    30,    30,   733,
     734,    30,    30,    83,    30,    85,    30,   194,   733,   734,
      90,    30,    30,    30,   201,   202,    96,    97,    98,    99,
     100,    30,    30,    30,   104,     6,     6,    30,    30,    30,
     733,   734,    30,    30,     6,   610,   611,   612,   118,     6,
     679,     6,    25,   682,    30,   684,   685,   686,   687,   688,
     680,   681,   610,   611,   612,    30,    30,    30,     6,    30,
       6,    44,    45,    46,     6,     4,   610,   611,   612,   708,
     150,    30,    30,    30,    30,    30,   715,    30,   717,   718,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   731,   732,    30,     7,   283,    30,    30,    30,
      30,   181,    30,   733,   734,   680,   681,     4,     7,   748,
     749,   750,   751,   300,   301,   302,    15,    16,    17,    18,
      19,    30,   680,   681,   204,   205,   206,   207,    27,    28,
      29,     4,    30,     7,    30,    30,   680,   681,    30,    30,
      30,    30,    30,   782,    30,   225,   226,   227,   228,   788,
      30,   790,   791,   792,   793,   794,     7,     6,   733,   734,
      30,    30,    30,    30,   244,   245,   246,   247,    30,    30,
      30,     6,     6,    30,    30,   733,   734,    30,     4,     6,
      30,     6,   262,    30,    30,   265,   266,   267,   268,   733,
     734,    30,    30,     4,     6,     6,     4,    30,    30,   279,
     280,    30,    13,     3,    -1,   392,    30,    30,    30,   396,
     397,   398,    23,    24,    25,   402,    30,    -1,   201,   202,
      31,    32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,
     310,    -1,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,    -1,
      -1,    -1,    -1,    -1,   334,    -1,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,    -1,    -1,    -1,    -1,    -1,   358,    -1,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,    -1,    -1,    -1,   379,
     283,    -1,    -1,    -1,    -1,   385,    -1,   387,   388,   389,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,   301,   302,
      -1,   401,    -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
     420,   421,   422,   423,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,    -1,     4,    -1,     6,     8,   458,   459,
     460,   461,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    23,    24,    25,    27,    28,    29,    30,
      -1,    31,    32,    33,    -1,    35,    36,    37,    -1,   392,
      -1,    -1,    -1,   396,   397,   398,   496,   497,   498,   499,
      -1,    -1,    -1,    -1,   611,    -1,   613,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,   545,    40,    41,    -1,    -1,
      12,    13,   552,    15,    16,    17,    18,    19,   558,    -1,
     560,   561,   562,   563,   564,    27,    28,    29,    30,    -1,
      -1,   571,    -1,    -1,    -1,   682,    -1,   577,    -1,   579,
     580,   581,   582,   583,    29,    -1,     1,    -1,     3,     4,
     590,     6,     7,    -1,     9,    10,   596,    -1,   598,   599,
     600,   601,   602,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,   734,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,    -1,   102,   103,   104,
      -1,    -1,    15,    16,    17,    18,    19,     1,    -1,    -1,
       4,    -1,     6,   118,    27,    28,    29,    30,    -1,   679,
      -1,    -1,   682,    -1,   684,   685,   686,   687,   688,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    -1,   150,    -1,    -1,   708,    -1,
      -1,    -1,    -1,    -1,    -1,   715,    -1,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,    -1,    -1,    -1,   181,    -1,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,   748,   749,
     750,   751,    15,    16,    17,    18,    19,    -1,    -1,   204,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
     225,     4,   782,     6,    -1,    -1,    -1,    -1,   788,    -1,
     790,   791,   792,   793,   794,    -1,    -1,    -1,    -1,   244,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    -1,   262,    -1,    -1,
     265,    -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,   279,   280,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,   310,    -1,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,   334,
      -1,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,   358,    -1,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,    -1,
       1,    -1,    -1,     4,   379,     6,    -1,    -1,    -1,    -1,
     385,    -1,   387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,   401,    -1,    -1,   404,
      31,    32,    33,    -1,    35,    36,    37,    -1,     1,    -1,
       3,     4,    -1,     6,     7,   420,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
      -1,     3,     4,   458,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,   496,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     4,    -1,     6,    -1,    -1,    29,    -1,    -1,    -1,
     545,    -1,    -1,    -1,    -1,    -1,    -1,   552,    -1,    -1,
      23,    24,    25,   558,    -1,   560,   561,   562,    31,    32,
      33,    34,    35,    36,    37,    -1,   571,    -1,    -1,    -1,
      -1,    -1,   577,    -1,   579,   580,   581,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,   590,    -1,    -1,    -1,    -1,
      83,   596,    85,   598,   599,   600,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,   118,     3,     4,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,   150,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     4,   679,     6,     8,   682,    -1,   684,
     685,    -1,    -1,    15,    16,    17,    18,    19,   181,    -1,
      -1,    -1,    23,    24,    25,    27,    28,    29,    30,    -1,
      31,    32,    33,   708,    35,    36,    37,    -1,    -1,    -1,
     715,   204,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,    -1,    -1,    -1,    -1,
      -1,     1,   225,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,   748,    -1,    15,    16,    17,    18,    19,
      -1,   244,    -1,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,   262,
      40,    41,   265,     1,    -1,     3,     4,   782,     6,     7,
      -1,     9,    10,   788,    -1,   790,   791,   792,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,   310,    -1,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,    -1,
      -1,   324,   325,    -1,    -1,   328,    -1,    -1,    -1,    -1,
      -1,   334,    -1,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,    -1,    -1,   348,   349,    -1,    -1,   352,
      -1,    -1,    -1,    -1,    -1,   358,    -1,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,    -1,    -1,   372,
     373,    -1,     1,    -1,    -1,     4,   379,     6,    -1,    -1,
      -1,    -1,   385,    -1,   387,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,   401,    -1,
      -1,   404,    31,    32,    33,    -1,    35,    36,    37,    -1,
       1,    -1,     3,     4,    -1,     6,     7,   420,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,   458,    -1,    29,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,   496,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    75,    76,    -1,    -1,     4,    -1,     6,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    23,    24,    25,   101,
      -1,    -1,    -1,   105,    31,    32,    33,    34,    35,    36,
      37,    -1,   545,    -1,    -1,    -1,   118,    -1,    -1,   552,
      -1,    -1,     4,    -1,     6,   558,    -1,   560,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   571,    -1,
      -1,    23,    24,    25,   577,    -1,   579,    -1,   150,    31,
      32,    33,    34,    35,    36,    37,    -1,   590,    -1,    -1,
      -1,    -1,    -1,   596,    -1,   598,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,   181,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,   204,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,   244,    35,    36,    37,   679,     8,    -1,   682,
      -1,   684,   685,    -1,    15,    16,    17,    18,    19,    -1,
     262,    -1,    -1,   265,    75,    76,    27,    28,    29,    30,
      -1,    -1,    83,    -1,    85,   708,    -1,    -1,    -1,    90,
      91,    -1,   715,    -1,   717,   718,   719,   720,   721,   722,
     723,   724,   725,   726,    -1,    -1,   729,   730,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   310,    -1,
     312,   313,   314,   315,    -1,   748,    -1,    -1,    -1,   321,
      -1,    -1,    -1,   325,    -1,    -1,   328,    -1,    -1,    -1,
      -1,    -1,   334,    -1,   336,   337,   338,   339,    -1,   150,
      -1,    -1,    -1,   345,    -1,    -1,    -1,   349,   159,   782,
     352,    -1,   163,    -1,     7,   788,   358,   790,   360,   361,
     362,   363,    15,    16,    17,    18,    19,   369,    -1,    -1,
     181,   373,    -1,    -1,    27,    28,    29,   379,    -1,    -1,
      -1,    -1,    -1,   385,    -1,   387,    -1,    -1,    -1,     1,
      -1,     3,     4,   204,     6,     7,    -1,     9,    10,   401,
      12,    13,   404,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,   225,    27,    28,    29,   420,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
       7,   262,     9,    10,   265,    -1,   458,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,   284,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   496,    -1,    -1,     1,    -1,   310,
       4,   312,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    23,
      24,    25,    -1,   334,    -1,   336,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,   352,    -1,   545,    -1,    -1,    -1,   358,    -1,   360,
     552,    -1,     4,    -1,     6,     7,   558,    29,   560,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,   379,   571,
      -1,    23,    24,    25,   385,   577,   387,   579,    -1,    31,
      32,    33,   393,    35,    36,    37,    -1,    -1,   590,    -1,
     401,   402,    -1,   404,   596,    -1,   598,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,   420,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,   118,   458,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    -1,   679,   150,    -1,
     682,    -1,   684,   685,    -1,   496,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    -1,   708,    -1,    -1,   181,
      -1,   522,    -1,   715,    -1,   717,   718,   719,   720,    -1,
       1,    -1,    -1,     4,   726,     6,    -1,    -1,   730,    -1,
      -1,    -1,   204,    -1,   545,    -1,    -1,    -1,    -1,    -1,
      -1,   552,    23,    24,    25,    -1,   748,   558,    -1,   560,
      31,    32,    33,   225,    35,    36,    37,    -1,    29,    -1,
     571,    15,    16,    17,    18,    19,   577,    -1,   579,    -1,
      -1,    -1,   244,    27,    28,    29,    30,    -1,    -1,   590,
     782,    -1,    -1,    -1,    -1,   596,   788,   598,   790,    -1,
     262,    -1,    -1,   265,    -1,    -1,     4,    -1,     6,   610,
     611,   612,   613,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    23,    24,    25,    -1,    90,
      -1,    -1,    93,    31,    32,    33,    34,    35,    36,    37,
      -1,    15,    16,    17,    18,    19,    -1,    -1,   310,    -1,
     312,   313,   314,    27,    28,    29,    30,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,
      -1,    -1,   334,    -1,   336,   337,   338,    -1,   679,   680,
     681,   682,    -1,   684,   685,    -1,    -1,    -1,    -1,   150,
     352,    -1,    -1,    -1,    -1,    -1,   358,    -1,   360,   361,
     362,    -1,    -1,    -1,    -1,    -1,    -1,   708,    -1,    -1,
      -1,    -1,    -1,    -1,   715,    -1,   717,   379,    -1,    -1,
     181,    -1,    -1,   385,    -1,   387,    -1,    -1,    -1,    -1,
      -1,    -1,   733,   734,    -1,    -1,    -1,    -1,    -1,   401,
      -1,     8,   404,   204,    11,    12,    13,   748,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,   420,    -1,
      27,    28,    29,    30,   225,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,    -1,
       6,   782,    -1,   244,    -1,    -1,    -1,   788,    -1,   790,
      -1,    -1,    -1,    -1,    -1,    -1,   458,    23,    24,    25,
      -1,   262,    -1,    -1,   265,    31,    32,    33,    -1,    35,
      36,    37,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    -1,     6,     7,   496,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   310,
      -1,   312,   313,    27,    28,    29,   118,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,   328,    15,    16,
      17,    18,    19,   334,    -1,   336,   337,    -1,    -1,    -1,
      27,    28,    29,   545,    -1,    -1,    -1,    -1,   150,    -1,
     552,   352,    -1,    -1,    -1,    -1,   558,   358,   560,   360,
     361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   571,
      -1,    -1,    -1,    -1,    -1,   577,    -1,   579,   379,   181,
      -1,    -1,    -1,    -1,   385,    -1,   387,    -1,   590,    -1,
      -1,    -1,    -1,    -1,   596,    -1,   598,    -1,    -1,    -1,
     401,    -1,   204,   404,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,   420,
      -1,    -1,    -1,   225,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,   244,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,    -1,    -1,
     262,    -1,     1,   265,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,   679,    -1,    -1,
     682,    -1,   684,   685,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,   496,    35,    36,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,   708,    -1,   310,    -1,
     312,    -1,    -1,   715,    -1,   717,   718,   719,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,
       1,    -1,   334,     4,   336,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   545,    -1,   748,    -1,    -1,    -1,
     352,   552,    23,    24,    25,    -1,   358,   558,   360,   560,
      31,    32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,
     571,    -1,    -1,    -1,    -1,    -1,   577,   379,   579,    -1,
     782,    -1,    -1,   385,    -1,   387,   788,    -1,   790,   590,
      -1,    -1,    -1,    -1,    -1,   596,    -1,   598,    -1,   401,
      -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,     7,   420,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,   679,    -1,
      -1,   682,    -1,   684,   685,    -1,    -1,    23,    24,    25,
      -1,    -1,    28,    29,   496,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,   708,    -1,    -1,
      -1,    -1,    -1,    -1,   715,    -1,   717,   718,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,   545,    -1,    -1,    -1,   748,    -1,    -1,
     552,    -1,    -1,    23,    24,    25,   558,    -1,   560,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,   571,
      40,    41,    -1,    -1,    -1,   577,    -1,   579,    -1,    -1,
      -1,   782,    -1,    -1,    -1,    -1,    -1,   788,   590,   790,
      -1,    -1,    -1,    -1,   596,     1,   598,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,   679,    -1,     6,
     682,     8,   684,   685,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,   708,    -1,    -1,    -1,
      -1,    -1,    -1,   715,    -1,   717,    -1,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,   748,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
     782,    26,    27,    28,    29,    30,   788,     1,   790,     3,
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
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
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
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
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
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,     1,    -1,     3,     4,    -1,
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
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     7,
       9,    10,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    23,    24,    25,    -1,    -1,    27,
      28,    29,    31,    32,    33,    -1,    35,    36,    37,    38,
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
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    23,    24,    25,    27,    28,    29,    30,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
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
       7,    -1,     9,    10,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    23,    24,    25,    27,
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
       3,     4,    -1,     6,     7,    -1,     9,    10,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      23,    24,    25,    27,    28,    29,    30,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
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
       1,    40,    41,     4,    -1,     6,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,     1,    40,
      41,     4,    -1,     6,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,     1,    40,    41,     4,
      -1,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,     1,    40,    41,     4,    -1,     6,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,     1,    40,    41,     4,    -1,     6,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
       1,    40,    41,     4,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,    -1,
       6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,     1,    -1,    -1,     4,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
       4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,     1,    -1,    -1,     4,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    23,    24,    25,     4,    -1,     6,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,     1,    -1,    -1,     4,
      -1,     6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    23,    24,
      25,     4,    -1,     6,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    -1,    -1,    -1,     4,    -1,     6,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    23,    24,    25,     4,    -1,
       6,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    23,    24,    25,     4,    -1,     6,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
       4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,    13,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    23,
      24,    25,     4,    -1,     6,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    -1,    -1,    -1,     4,    -1,     6,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,
      25,    -1,    -1,    13,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    23,    24,    25,     4,    -1,     6,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      23,    24,    25,     4,    -1,     6,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,     4,    -1,
       6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    23,    24,    25,
       4,    -1,     6,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    23,    24,    25,     4,    -1,     6,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    23,    24,    25,     4,    -1,     6,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,     4,
      -1,     6,    -1,    23,    24,    25,    -1,    -1,    13,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    23,    24,
      25,     4,    -1,     6,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    -1,    -1,    -1,     4,    -1,     6,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    23,    24,    25,     4,    -1,
       6,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    23,    24,    25,     4,    -1,     6,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,
       4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    23,
      24,    25,     4,    -1,     6,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,     4,    -1,     6,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    23,    24,    25,     4,    -1,     6,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      23,    24,    25,     4,    -1,     6,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    -1,    -1,    -1,     4,    -1,
       6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    23,    24,    25,
       4,    -1,     6,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,     6,    35,    36,    37,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       6,    -1,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,     6,
       7,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,     6,     7,    26,    27,    28,    29,    12,    13,    14,
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
      -1,    -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,     8,
      -1,    -1,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,     8,    -1,    -1,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    43,    44,    45,    46,    48,    50,     1,     4,
       5,     0,    45,     1,     6,     7,     4,     1,    10,    53,
       1,     3,    30,    49,     7,    10,     1,     3,     4,     6,
       7,     9,    23,    24,    25,    31,    32,    33,    35,    36,
      37,    38,    40,    41,    46,    47,    52,    53,    54,    55,
      56,    58,    59,    60,    61,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    30,     4,     5,    53,    30,    54,
       9,    39,    57,     4,     5,     6,    26,     1,     4,    63,
      70,    70,    70,     6,     6,     6,    58,    54,    54,    54,
       6,     6,     7,    29,    28,    27,    15,    16,    17,    18,
      19,    11,    12,    13,    20,    21,    14,    22,    53,     8,
       4,    53,     1,    52,     4,    30,    63,    72,    13,    63,
      30,    30,    34,    63,     4,    34,    63,     1,    63,     1,
      47,    62,    63,    65,    66,    67,    68,    68,    68,    68,
      68,    67,    69,    69,    68,    67,    70,    70,     3,     8,
       8,    30,    63,    30,    30,    30,    30,    30,    30,    30,
       7,     8,    30,     7,     4,     5,     3,    63,    52,    47,
      52,    52,     1,    62,     8,    51,     4,     4,     5,    57,
      30,     7,     3,    51,    51,     4,    52,    52,     1,    62,
       4,     5,    51,    30,    30,    51,     4,    52,    47,    52,
      51,    10,    10,     1,     6,    23,    24,    25,    31,    32,
      33,    35,    36,    37,    64,    65,    66,    67,    68,    69,
      70,    71,     4,     7,     4,     6,    23,    24,    25,    31,
      32,    33,    35,    36,    37,    64,    65,    66,    67,    68,
      69,    70,    71,     4,     6,    23,    24,    25,    31,    32,
      33,    35,    36,    37,    64,    65,    66,    67,    68,    69,
      70,    71,     6,     4,     4,     6,    23,    24,    25,    31,
      32,    33,    35,    36,    37,    69,    70,    71,     7,    12,
      13,     1,     7,    10,    41,    53,    55,    56,    58,    59,
      60,    61,    63,     4,    47,    63,     7,     8,     1,     9,
      46,    47,    52,    54,    54,     1,    63,    70,    70,    70,
       6,     6,     6,    29,    28,    27,    15,    16,    17,    18,
      19,    11,    12,    13,    20,    21,    14,    22,     6,     1,
      63,    70,    70,    70,     6,     6,     6,    29,    28,    27,
      15,    16,    17,    18,    19,    11,    12,    13,    20,    21,
      14,    22,     6,     1,    63,    70,    70,    70,     6,     6,
       6,    29,    28,    27,    15,    16,    17,    18,    19,    11,
      12,    13,    20,    21,    14,    22,    30,    72,    26,     6,
       1,    63,    70,    70,    70,     6,     6,     6,    14,    22,
      69,    69,    10,    57,     1,     9,    46,    47,    52,    54,
      58,     6,     6,     7,    26,     9,    54,    54,    54,    30,
      30,    34,    63,     4,    34,    63,    65,    66,    67,     4,
       6,    23,    24,    25,    31,    32,    33,    35,    36,    37,
      68,    69,    70,    71,    68,    68,    68,    68,    67,    69,
      69,    68,    67,    70,    70,    30,    72,    30,    30,    34,
      63,     4,    34,    63,    65,    66,    67,     4,     6,    23,
      24,    25,    31,    32,    33,    35,    36,    37,    68,    69,
      70,    71,    68,    68,    68,    68,    67,    69,    69,    68,
      67,    70,    70,    30,    72,    30,    30,    34,    63,     4,
      34,    63,    65,    66,    67,     4,     6,    23,    24,    25,
      31,    32,    33,    35,    36,    37,    68,    69,    70,    71,
      68,    68,    68,    68,    67,    69,    69,    68,    67,    70,
      70,    30,    13,    63,    30,    72,    30,    30,    34,    63,
       4,    34,    63,    70,    70,    54,    52,     9,    54,    54,
      54,     1,    63,     1,    62,    13,    63,    30,    30,    30,
      30,    30,     6,     1,    63,    70,    70,    70,     6,     6,
       6,    12,    13,    14,    22,    30,    30,    30,    30,    30,
      30,     6,     1,    63,    70,    70,    70,     6,     6,     6,
      12,    13,    14,    22,    30,    30,    30,    30,    30,    30,
       6,     1,    63,    70,    70,    70,     6,     6,     6,    12,
      13,    14,    22,    63,    30,    30,    30,    30,    30,    30,
      30,    30,    30,     7,    63,    30,    72,    30,    30,    34,
      63,     4,    34,    63,    69,    69,    70,    70,    30,    72,
      30,    30,    34,    63,     4,    34,    63,    69,    69,    70,
      70,    30,    72,    30,    30,    34,    63,     4,    34,    63,
      69,    69,    70,    70,    52,     4,    47,    52,    52,     1,
      62,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    26,
      57,    30,     7,     4,     6,    13,    23,    24,    25,    31,
      32,    33,    35,    36,    37,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    52,    52,     1,    62,     6,     1,
      63,    63,    70,    70,    70,     6,     6,     6,    29,    28,
      27,    15,    16,    17,    18,    19,    11,    12,    13,    20,
      21,    14,    22,    30,    30,    30,    72,    30,    30,    34,
      63,     4,    34,    63,    65,    66,    67,     4,     6,    23,
      24,    25,    31,    32,    33,    35,    36,    37,    68,    69,
      70,    71,    68,    68,    68,    68,    67,    69,    69,    68,
      67,    70,    70,    52,    47,    52,    30,    30,    30,    30,
      30,    30,     6,     1,    63,    70,    70,    70,     6,     6,
       6,    12,    13,    14,    22,    30,    72,    30,    30,    34,
      63,     4,    34,    63,    69,    69,    70,    70,    30,    30,
      30,    30,    30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    46,
      47,    47,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    50,    50,    51,    51,    51,    52,    52,    52,
      52,    52,    53,    53,    54,    54,    54,    54,    54,    55,
      55,    55,    55,    55,    56,    57,    58,    58,    59,    60,
      60,    60,    60,    60,    61,    62,    62,    62,    62,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    70,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     4,     2,
       3,     4,     5,     4,     5,     3,     2,     6,     3,     8,
       7,     7,     2,     3,     0,     4,     5,     1,     1,     1,
       1,     1,     2,     3,     1,     2,     2,     2,     2,     5,
       5,     7,     5,     3,     1,     1,     1,     2,     2,     9,
       9,     7,     5,     9,     1,     1,     1,     2,     2,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     2,     2,     2,     1,     1,     1,     3,     3,
       4,     3,     4,     4,     4,     4,     4,     1,     1,     3
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
#line 64 "src/parser.y"
                  {;}
#line 4540 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 68 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root, -1, false, "-");
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4549 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 72 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root, -1, false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 4559 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 80 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 4567 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 83 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 4575 "src/parser.c"
    break;

  case 7: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 89 "src/parser.y"
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
#line 4592 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 102 "src/parser.y"
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
#line 4612 "src/parser.c"
    break;

  case 9: /* Declaration: TYPE error  */
#line 117 "src/parser.y"
                             {
			yyerrok;
			(yyval.state)=NULL;
		}
#line 4621 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT Expression  */
#line 124 "src/parser.y"
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
#line 4656 "src/parser.c"
    break;

  case 11: /* Definition: IDENTIFIER ATT MIN Expression  */
#line 155 "src/parser.y"
                                               {
			char* exp_type = get_type_var((yyvsp[-3].string), s_table, scope, true);

			(yyval.state) = new_node("=", root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), false, exp_type);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, (yyvsp[-3].string));

			add_child((yyval.state), new_node(str, root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), true, exp_type));
			add_child((yyval.state), new_node("-", root, get_scope_symbol(s_table, (yyvsp[-3].string), scope, true), false, (yyvsp[0].state)->type));

			add_child((yyval.state)->children[1], (yyvsp[0].state));

			if (!variable_was_declared(s_table, scope, (yyvsp[-3].string))) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", (yyvsp[-3].string), (yylsp[-3]).first_line, (yylsp[-3]).first_column);

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
#line 4693 "src/parser.c"
    break;

  case 12: /* FunctionDefinition: FunctionHead LP FunctionArgs RP CompStatement  */
#line 191 "src/parser.y"
                                                 {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false, "-");

		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));

		decrease_depth_scope(scope);
	}
#line 4707 "src/parser.c"
    break;

  case 13: /* FunctionDefinition: FunctionHead LP RP CompStatement  */
#line 201 "src/parser.y"
                                        {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false, "-");
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

		push_arg_to_arglist(s_table, "-", last_f, true);
	}
#line 4720 "src/parser.c"
    break;

  case 14: /* FunctionDefinition: FunctionHead LP error RP CompStatement  */
#line 210 "src/parser.y"
                                               {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false, "-");
		add_child((yyval.state), (yyvsp[-4].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);
		yyerrok;
	}
#line 4732 "src/parser.c"
    break;

  case 15: /* FunctionDefinition: FunctionHead error CompStatement  */
#line 217 "src/parser.y"
                                           {
		(yyval.state) = new_node("FunctionDefinition", root, scope->stack[0], false, "-");
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);
		yyerrok;
	}
#line 4744 "src/parser.c"
    break;

  case 16: /* FunctionArgs: TYPE IDENTIFIER  */
#line 227 "src/parser.y"
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
#line 4763 "src/parser.c"
    break;

  case 17: /* FunctionArgs: TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 242 "src/parser.y"
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
#line 4797 "src/parser.c"
    break;

  case 18: /* FunctionArgs: TYPE LIST IDENTIFIER  */
#line 272 "src/parser.y"
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
#line 4822 "src/parser.c"
    break;

  case 19: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 293 "src/parser.y"
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
#line 4866 "src/parser.c"
    break;

  case 20: /* FunctionArgs: TYPE IDENTIFIER COM TYPE LIST IDENTIFIER ParamList  */
#line 333 "src/parser.y"
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
#line 4905 "src/parser.c"
    break;

  case 21: /* FunctionArgs: TYPE LIST IDENTIFIER COM TYPE IDENTIFIER ParamList  */
#line 368 "src/parser.y"
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
#line 4945 "src/parser.c"
    break;

  case 22: /* FunctionHead: TYPE IDENTIFIER  */
#line 406 "src/parser.y"
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
#line 4967 "src/parser.c"
    break;

  case 23: /* FunctionHead: TYPE LIST IDENTIFIER  */
#line 424 "src/parser.y"
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
#line 4994 "src/parser.c"
    break;

  case 24: /* ParamList: %empty  */
#line 449 "src/parser.y"
             {
			(yyval.state) = NULL;
		}
#line 5002 "src/parser.c"
    break;

  case 25: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 453 "src/parser.y"
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
#line 5024 "src/parser.c"
    break;

  case 26: /* ParamList: COM TYPE LIST IDENTIFIER ParamList  */
#line 471 "src/parser.y"
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
#line 5052 "src/parser.c"
    break;

  case 27: /* Statement: CompStatement  */
#line 499 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 5058 "src/parser.c"
    break;

  case 28: /* Statement: JmpStatement  */
#line 500 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 5064 "src/parser.c"
    break;

  case 29: /* Statement: SelStatement  */
#line 501 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 5070 "src/parser.c"
    break;

  case 30: /* Statement: ItStatement  */
#line 502 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 5076 "src/parser.c"
    break;

  case 31: /* Statement: ExpStatement  */
#line 503 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 5082 "src/parser.c"
    break;

  case 32: /* CompStatement: LCB StatementExp  */
#line 508 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 5090 "src/parser.c"
    break;

  case 33: /* CompStatement: error LCB StatementExp  */
#line 512 "src/parser.y"
                                       {
			(yyval.state) = (yyvsp[0].state);
		}
#line 5098 "src/parser.c"
    break;

  case 34: /* StatementExp: RCB  */
#line 518 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 5104 "src/parser.c"
    break;

  case 35: /* StatementExp: Declaration StatementExp  */
#line 519 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5114 "src/parser.c"
    break;

  case 36: /* StatementExp: Definition StatementExp  */
#line 524 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5124 "src/parser.c"
    break;

  case 37: /* StatementExp: Statement StatementExp  */
#line 529 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5134 "src/parser.c"
    break;

  case 38: /* StatementExp: error RCB  */
#line 534 "src/parser.y"
                    {yyerrok; (yyval.state)=NULL;}
#line 5140 "src/parser.c"
    break;

  case 39: /* SelStatement: IfHead LP Expression RP Statement  */
#line 539 "src/parser.y"
                                                  {
			(yyval.state) = new_node("IF", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 5151 "src/parser.c"
    break;

  case 40: /* SelStatement: IfHead LP Expression RP Definition  */
#line 545 "src/parser.y"
                                                     {
			(yyval.state) = new_node("IF", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 5162 "src/parser.c"
    break;

  case 41: /* SelStatement: IfHead LP Expression RP Statement ElseHead Statement  */
#line 552 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("IF_ELSE", root, scope->stack[0], false, "-");

			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
		}
#line 5176 "src/parser.c"
    break;

  case 42: /* SelStatement: IfHead LP error RP Statement  */
#line 563 "src/parser.y"
                                         {
		(yyval.state) = new_node("IF", root, scope->stack[0], false, "-");
		add_child((yyval.state), (yyvsp[0].state));
	}
#line 5185 "src/parser.c"
    break;

  case 43: /* SelStatement: error ElseHead Statement  */
#line 567 "src/parser.y"
                                     {(yyval.state)=NULL;decrease_depth_scope(scope);yyerrok;}
#line 5191 "src/parser.c"
    break;

  case 44: /* IfHead: IF  */
#line 570 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 5199 "src/parser.c"
    break;

  case 45: /* ElseHead: ELSE  */
#line 576 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 5208 "src/parser.c"
    break;

  case 46: /* ExpStatement: SEMI  */
#line 583 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 5214 "src/parser.c"
    break;

  case 47: /* ExpStatement: Expression SEMI  */
#line 584 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 5222 "src/parser.c"
    break;

  case 48: /* JmpStatement: RET ExpStatement  */
#line 590 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root, scope->stack[0], false, (yyvsp[0].state)->type);
			add_child((yyval.state), (yyvsp[0].state));

			if (!check_type_subtree((yyval.state), s_table, scope))
			{
				printf("\033[91mSemantic error at line %d, column %d: Incompatible return type.\033[0m\n", (yylsp[0]).first_line, (yylsp[0]).first_column);
				first_pass_sematic_error_found = true;
			}

		}
#line 5238 "src/parser.c"
    break;

  case 49: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 604 "src/parser.y"
                                                                       {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 5251 "src/parser.c"
    break;

  case 50: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Definition  */
#line 614 "src/parser.y"
                                                                        {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 5264 "src/parser.c"
    break;

  case 51: /* ItStatement: ForHead LP ExpAtt SEMI error RP Statement  */
#line 623 "src/parser.y"
                                                          {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
			yyerrok;
		}
#line 5277 "src/parser.c"
    break;

  case 52: /* ItStatement: ForHead LP error RP Statement  */
#line 632 "src/parser.y"
                                              {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[0].state));
			
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 5289 "src/parser.c"
    break;

  case 53: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI error RP Statement  */
#line 640 "src/parser.y"
                                                                      {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 5302 "src/parser.c"
    break;

  case 54: /* ForHead: FOR  */
#line 651 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 5310 "src/parser.c"
    break;

  case 55: /* ExpAtt: Expression  */
#line 657 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 5318 "src/parser.c"
    break;

  case 56: /* ExpAtt: Definition  */
#line 661 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 5326 "src/parser.c"
    break;

  case 57: /* ExpAtt: error SEMI  */
#line 665 "src/parser.y"
                   {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 5335 "src/parser.c"
    break;

  case 58: /* ExpAtt: error COM  */
#line 670 "src/parser.y"
                  {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 5344 "src/parser.c"
    break;

  case 59: /* Expression: LogicalOrExpression  */
#line 678 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 5350 "src/parser.c"
    break;

  case 60: /* LogicalOrExpression: LogicalAndExpression  */
#line 682 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 5356 "src/parser.c"
    break;

  case 61: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 683 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root, scope->stack[0], false, "int");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 5367 "src/parser.c"
    break;

  case 62: /* LogicalAndExpression: EqualityExpression  */
#line 692 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 5373 "src/parser.c"
    break;

  case 63: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 693 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root, scope->stack[0], false, "int");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5383 "src/parser.c"
    break;

  case 64: /* EqualityExpression: RelationalExpression  */
#line 701 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 5389 "src/parser.c"
    break;

  case 65: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 702 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root, scope->stack[0], false, "int");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5399 "src/parser.c"
    break;

  case 66: /* RelationalExpression: AdditiveExpression  */
#line 711 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 5405 "src/parser.c"
    break;

  case 67: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 712 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 5415 "src/parser.c"
    break;

  case 68: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 717 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5425 "src/parser.c"
    break;

  case 69: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 722 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5435 "src/parser.c"
    break;

  case 70: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 727 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5445 "src/parser.c"
    break;

  case 71: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 732 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5455 "src/parser.c"
    break;

  case 72: /* RelationalExpression: AdditiveExpression MAP AdditiveExpression  */
#line 737 "src/parser.y"
                                                      {
				(yyval.state) = new_node(">>", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5465 "src/parser.c"
    break;

  case 73: /* RelationalExpression: AdditiveExpression FIL RelationalExpression  */
#line 742 "src/parser.y"
                                                        {
				(yyval.state) = new_node("<<", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5475 "src/parser.c"
    break;

  case 74: /* RelationalExpression: AdditiveExpression TWD RelationalExpression  */
#line 747 "src/parser.y"
                                                      {
			(yyval.state) = new_node(":", root, scope->stack[0], false, "float LIST ");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 5485 "src/parser.c"
    break;

  case 75: /* AdditiveExpression: MultiplicativeExpression  */
#line 755 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 5491 "src/parser.c"
    break;

  case 76: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 756 "src/parser.y"
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
#line 5507 "src/parser.c"
    break;

  case 77: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 767 "src/parser.y"
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
#line 5523 "src/parser.c"
    break;

  case 78: /* MultiplicativeExpression: UnaryExpression  */
#line 781 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 5529 "src/parser.c"
    break;

  case 79: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 782 "src/parser.y"
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
#line 5545 "src/parser.c"
    break;

  case 80: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 793 "src/parser.y"
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
#line 5561 "src/parser.c"
    break;

  case 81: /* UnaryExpression: PrimaryExpression  */
#line 807 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 5567 "src/parser.c"
    break;

  case 82: /* UnaryExpression: TNR UnaryExpression  */
#line 808 "src/parser.y"
                                    {

			(yyval.state) = new_node("!", root, scope->stack[0], false,  (yyvsp[0].state)->type);
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 5578 "src/parser.c"
    break;

  case 83: /* UnaryExpression: HD UnaryExpression  */
#line 814 "src/parser.y"
                                   {
			if (equal_to((yyvsp[0].state)->type, "float LIST ")) {
				(yyval.state) = new_node("?", root, scope->stack[0], false, "float");
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("?", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[0].state));
			}
		}
#line 5592 "src/parser.c"
    break;

  case 84: /* UnaryExpression: TR UnaryExpression  */
#line 823 "src/parser.y"
                                   {
			if (equal_to((yyvsp[0].state)->type, "float LIST ")) {
				(yyval.state) = new_node("%", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("%", root, scope->stack[0], false, "int LIST ");
				add_child((yyval.state), (yyvsp[0].state));
			}
		}
#line 5606 "src/parser.c"
    break;

  case 85: /* PrimaryExpression: IDENTIFIER  */
#line 834 "src/parser.y"
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
#line 5625 "src/parser.c"
    break;

  case 86: /* PrimaryExpression: NUM_CONST_INT  */
#line 849 "src/parser.y"
                          {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%ld", (yyvsp[0].num_int));
			(yyval.state) = new_node(str, root, scope->stack[0], false, "int");
		}
#line 5635 "src/parser.c"
    break;

  case 87: /* PrimaryExpression: NUM_CONST_FLOAT  */
#line 854 "src/parser.y"
                            {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", (yyvsp[0].num_float));
			(yyval.state) = new_node(str, root, scope->stack[0], false, "float");
		}
#line 5645 "src/parser.c"
    break;

  case 88: /* PrimaryExpression: LP Expression RP  */
#line 860 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root, scope->stack[0], false, (yyvsp[-1].state)->type); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 5654 "src/parser.c"
    break;

  case 89: /* PrimaryExpression: LP error RP  */
#line 865 "src/parser.y"
                            {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 5663 "src/parser.c"
    break;

  case 90: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 870 "src/parser.y"
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
#line 5743 "src/parser.c"
    break;

  case 91: /* PrimaryExpression: IDENTIFIER LP RP  */
#line 945 "src/parser.y"
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
#line 5796 "src/parser.c"
    break;

  case 92: /* PrimaryExpression: WRITE LP STR RP  */
#line 993 "src/parser.y"
                                {
			(yyval.state) = new_node("write_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], true, "String"));

		}
#line 5806 "src/parser.c"
    break;

  case 93: /* PrimaryExpression: WRITE LP Expression RP  */
#line 998 "src/parser.y"
                                   {
			(yyval.state) = new_node("write_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 5815 "src/parser.c"
    break;

  case 94: /* PrimaryExpression: READ LP IDENTIFIER RP  */
#line 1002 "src/parser.y"
                                      {
			char* exp_type = get_type_var((yyvsp[-1].string), s_table, scope, true);

			(yyval.state) = new_node("read_call", root, scope->stack[0], false, exp_type);
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], true, exp_type));
		}
#line 5826 "src/parser.c"
    break;

  case 95: /* PrimaryExpression: WRITE_LN LP STR RP  */
#line 1008 "src/parser.y"
                                    {
			(yyval.state) = new_node("write_ln_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], false, "String"));
		}
#line 5835 "src/parser.c"
    break;

  case 96: /* PrimaryExpression: WRITE_LN LP Expression RP  */
#line 1012 "src/parser.y"
                                           {
			(yyval.state) = new_node("write_ln_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 5844 "src/parser.c"
    break;

  case 97: /* PrimaryExpression: NIL  */
#line 1017 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root, scope->stack[0], false, "float LIST ");}
#line 5850 "src/parser.c"
    break;

  case 98: /* Params: Expression  */
#line 1022 "src/parser.y"
                   {
		(yyval.state) = new_node("Args", root, scope->stack[0], false, (yyvsp[0].state)->type);
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 5860 "src/parser.c"
    break;

  case 99: /* Params: Params COM Expression  */
#line 1028 "src/parser.y"
                              {
		(yyval.state) = new_node("Args", root, scope->stack[0], false, (yyvsp[0].state)->type);
		add_child((yyval.state), (yyvsp[-2].state)); 
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 5871 "src/parser.c"
    break;


#line 5875 "src/parser.c"

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

#line 1036 "src/parser.y"

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
