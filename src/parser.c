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
#define YYLAST   13427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  812

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
     613,   622,   630,   641,   647,   651,   655,   660,   668,   672,
     673,   682,   683,   691,   692,   701,   702,   707,   712,   717,
     722,   727,   732,   737,   745,   746,   757,   771,   772,   783,
     797,   798,   804,   813,   824,   839,   844,   850,   855,   860,
     935,   983,   988,   992,   998,  1002,  1007,  1012,  1018
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

#define YYPACT_NINF (-172)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,   349,    11,   148,   179,   210,   376,    15,   400,   263,
      58,  -172,   406,    14,     7,   444,   377,    92,  8891,   475,
      63,    13,    14,    79,   487,  8891,    -3,   384, 11014,     8,
    8932,   502, 10791, 10791, 10791,  2931, 11633, 11652,   105,   128,
     130,   144,   158,   134,  8891,  8891,  8891,  8973,   503,  9014,
     172,  9055,  9096,  9137,   181,   147,     6,    72,   177,  2265,
    8072, 11671, 11690, 11709,    14,    30,   189,   520,    14,   521,
     526,  2438, 10159,   218,   247,   800,   979,   178, 10989,   223,
   11728, 11747, 11766,  1304,   264,  1614,  9178,   535,   537,   545,
      49,    91,  9219, 10791, 10791, 10791, 10813, 10813, 10813, 10813,
   10813, 10791, 10791, 10791, 10813, 10791, 10791, 10791,   556,   322,
      68,   561,    10,  9260,   339, 11785,    83,   100, 10828,  9301,
   11804, 11823,   270,   326,   330,   347,   356,   357,   371,    80,
     345,   409,   410,    76,   219,  3093,   436,  8113,  8154,  8195,
    8236,  8318, 11842, 11861,  8277,  8359, 11880, 11899,    21,   420,
   10850, 11918,  9342, 11937, 11956, 11975, 11994, 12013, 10159, 10197,
     428,   438, 10159,   476,   117,   442,    47,   203,  9383,  9424,
     401,  9465,    99,   451,   456,   440,   117,   117,   467, 10159,
   10159,   705,   139,   446,   453,   117,  9506,  9547,   112,   459,
     117,   477,   461, 10159, 10159,   465,   117,  9588,  9629,   474,
    9670,  9670,  9711,  1194, 10865, 10865, 10865, 12957, 12977, 12997,
     504,   508,   519,   133,   366,   385,  1175, 13397, 13017, 13037,
   13057, 11086,  9752,  3818,  1456, 10850, 10850, 10850, 11126, 11149,
   11172,   533,   538,   540,    88,   232,   191,   990, 12035, 11195,
   11218, 11241,  4340,  1713, 10828, 10828, 10828,  4381,  4422,  4463,
     551,   559,   567,  3675,  7907,  2896,  7661,  5283,  4504,  4545,
    4586,  2165, 11038, 11104,  1751, 10813, 10813, 10813, 12560, 12578,
   12596,   571,   572,   573, 12614, 12632, 12650,  9793, 10813, 10813,
      20,   778,  9834,  3219,  2300,  3379,   574,  3501,  8030,  8071,
     575,   560,  3899,   497,   553,   555,   568,    19,  9875,  9670,
    9670,  9670,  9916,  9957,   576,   580, 13077, 13097, 13117,  3328,
     593,  3546, 10865, 10865, 10865, 10887, 10887, 10887, 10887, 10887,
   10865, 10865, 10865, 10887, 10865, 10865, 10865,  3124,   581,   583,
   11264, 11287, 11310,  3580,   598, 10295, 10850, 10850, 10850, 10902,
   10902, 10902, 10902, 10902, 10850, 10850, 10850, 10902, 10850, 10850,
   10850, 10311,   587,   588,  4627,  4668,  4709, 10333,   599, 10348,
   10828, 10828, 10828, 10924, 10924, 10924, 10924, 10924, 10828, 10828,
   10828, 10924, 10828, 10828, 10828, 13137,   204, 10382, 10397,   590,
     591, 12668, 12686, 12704, 10419,   618, 10434, 10813, 10813, 12722,
   12740,  9834, 10235,    55,  8112,  9834,  9834,  9834,  8153,  8194,
    2008,  2481,  8235, 10468,  9998, 10039, 10080, 10121, 13157, 13177,
     594,   600,   601,   602,   604,   546,   392,  3708,  8029,  2496,
   10887, 10887, 10887,  8398,  8439,  8480,   617,   629,   630,  9300,
    8521,  8562,  8603,  9341,  9382,  9423,  9464,  9546, 13197, 13217,
    9505,  9587, 13237, 13257, 11333,   244, 11356, 11379,   607,   608,
     611,   612,   613,   248,   201,  1066,   906,  2582, 10902, 10902,
   10902, 12058, 12081, 12104,   642,   644,   645,   173, 12127, 12150,
   12173,  2146,  2191,  2378,  3159,  2574, 11402, 11425,  3418,  2798,
   11448, 11471,  4750,   249,  4791,  4832,   631,   632,   633,   634,
     635,  7948,  3279,  7702,  6226,  2632, 10924, 10924, 10924,  6267,
    6308,  6349,   660,   661,   662,  7374,  6390,  6431,  6472,  7415,
    7456,  7497,  7538,  7743,  4873,  4914,  7579,  7784,  4955,  4996,
   13277, 10791,   664, 12758,   273, 12776, 12794,   643,   647,   650,
     652,   653, 12812, 12830,  8276,  8317,  8358,  8399,  8440,  8481,
     656,   673,   125,   665, 10865,   674, 13297, 13317, 13337, 13357,
   13377, 10483,   675,   677,  8644,  8685,  8726, 10505,   704, 10520,
   10887, 10887, 10887, 10887, 11494, 11517, 11540, 11563, 11586, 11609,
   10542,   686,   687, 12196, 12219, 12242, 10557,   720, 10579, 10902,
   10902, 10902, 10902,  5037,  5078,  5119,  5160,  5201,  5242, 10594,
     695,   696,  6513,  6554,  6595, 10616,   723, 10631, 10924, 10924,
   10924, 10924,   724, 12848, 12866, 12884, 12902, 12920, 12938, 10235,
   10273, 10235,  2731,   709,  8767,   293,  8808,  8849,   713,   716,
     717,   718,   719,  8890,  8931,  8972,  9013, 12265,   294, 12288,
   12311,   722,   728,   734,   735,   736, 12334, 12357, 12380, 12403,
    6636,   297,  6677,  6718,   739,   740,   741,   746,   747,  6759,
    6800,  6841,  6882,  8522, 11062,  8563,   401,  8604,   138,   743,
    9054,  9095,  9136,  9177,  9218,  9259, 12426, 12449, 12472, 12495,
   12518, 12541,  6923,  6964,  7005,  7046,  7087,  7128, 10665, 10235,
   10235,  2799,  1027,  2848, 10939, 10939, 10939, 10939,  1494,  1535,
    1576,   772,   774,   777,  8645,  7989,  7825,  1113,   937,  1816,
    1891,  2046,  2096,  8686,  8727,   153,   756, 10680,   759,   761,
    8768,  2238,  2534,  3036, 10702,   788, 10717, 10939, 10939, 10939,
   10961, 10961, 10961, 10961, 10961, 10939, 10939, 10939, 10961, 10939,
   10939, 10939, 10235, 10235,  3739,   318,  3780,  3861,   769,   770,
     775,   782,   790,  7866,  1664,  1265,  2671,  2985, 10961, 10961,
   10961,  5324,  5365,  5406,   815,   816,   820,  3617,  5447,  5488,
    5529,  7169,  7210,  7251,  7292,  1348,  3930,  3971,  7333,  7620,
    4012,  4053,  8809,  8850,  4094,  4135,  4176,  4217,  4258,  4299,
   10739,   797,   798,  5570,  5611,  5652, 10754,   825, 10776, 10961,
   10961, 10961, 10961,  5693,   321,  5734,  5775,   804,   809,   827,
     828,   829,  5816,  5857,  5898,  5939,  5980,  6021,  6062,  6103,
    6144,  6185
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
       0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,   857,   681,   -28,  -172,  -172,  -172,   185,
      65,    35,   197,  -137,  -125,  -168,   -20,  -117,   -93,   -10,
    -162,  2418,  3144,  2881,  2780,  2065,  1635,  1083,   -29,   529,
    -171
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
     219,   173,   179,    80,    81,    82,    70,   201,    20,    77,
      21,    11,    78,   -58,   203,    17,    13,    65,    66,   189,
     201,    14,   285,    86,    18,   164,   165,     1,   404,   201,
     391,   204,   205,   206,   286,    93,    71,    22,   109,   207,
     208,   209,   288,   210,   211,   212,   240,   259,    19,    71,
     127,   177,   178,    78,   219,   203,   219,    67,    71,    71,
     -16,   219,    16,   130,   536,   201,   289,   275,   275,   275,
     275,   275,   204,   205,   206,   275,   149,   146,   147,   -59,
     207,   208,   209,   -60,   210,   211,   212,   160,   161,   259,
     376,   -97,   129,    64,    71,   262,   -58,    29,   -18,   108,
      94,   -59,    25,   111,    94,   -60,   160,   161,   150,    68,
     162,    83,   392,   -97,    32,    33,    34,   336,   -58,   295,
     296,   240,    35,    36,    37,   174,    38,    39,    40,   180,
     151,   169,   160,   161,    84,   130,    85,   113,   221,   287,
      29,    30,   193,   190,   191,   160,   161,   -24,    -2,   290,
     -44,     1,   219,   293,    92,   611,   445,    32,    33,    34,
     295,   296,   312,   -58,   -53,    35,    36,    37,   680,    38,
      39,    40,   300,   300,   219,   306,   307,   308,    90,    -3,
     483,   -68,    -3,   732,   -61,   579,   580,    91,   -68,   -68,
     -68,   -68,   -68,   110,   284,   219,   330,   331,   332,   -61,
     -68,   -68,   -68,   -68,    95,   -61,   -61,   524,   120,   -62,
      -5,   -98,   150,    -5,   219,   354,   355,   356,   338,   -61,
     -61,   -61,    69,   168,   170,   222,   -62,   171,   338,   -62,
     -62,   -62,   240,   -98,   520,   219,   381,   382,   383,   543,
     -59,    87,    88,    89,   186,   187,    95,   -62,   -62,   275,
     275,   114,   150,   121,   396,   285,   -60,   150,   197,   198,
     337,   -59,   -59,   399,   -22,   301,   301,   286,   124,   -22,
      15,   300,   300,   300,   564,   288,   337,   -60,   -60,   583,
     219,   150,   219,   219,   219,   219,   431,   431,   431,   431,
     431,   219,   219,   219,   431,   219,   442,   443,   240,   289,
     153,   150,   150,   603,   219,   150,   219,   240,   240,   240,
     469,   469,   469,   469,   469,   240,   240,   240,   469,   240,
     480,   481,   240,   660,   666,   148,   150,   672,   219,   150,
     219,   259,   259,   259,   507,   507,   507,   507,   507,   259,
     259,   259,   507,   259,   518,   519,   277,   397,   774,   240,
       8,   806,   -55,     9,    10,   219,   154,   219,   532,   533,
     155,   183,   184,   396,   301,   301,   301,   396,   396,   396,
     192,   219,   287,   130,   219,   195,    -6,   156,   -23,    -6,
     615,   199,   290,   -23,    24,   202,   157,   158,    73,    74,
     219,   554,   555,   556,   313,   -59,   -59,   302,   303,   628,
      -9,   159,   -39,    -9,   -39,   -39,    -4,   -39,   -39,    -4,
     -39,   -39,   314,   -61,   -61,   -61,   163,   -54,   641,   314,
     -62,   -62,   -62,   166,   -39,   -39,   -39,   284,   219,   573,
     574,   575,   -39,   -39,   -39,   -56,   -39,   -39,   -39,   -39,
      71,   -39,   -39,   -68,    -7,   -57,   176,    -7,   278,   279,
     659,   -68,   -68,   -68,   -68,   -68,   397,   535,   181,   182,
     397,   397,   397,   -68,   -68,   -68,   219,   592,   593,   594,
     -17,   185,   285,   285,   285,   -15,   -20,   172,   -15,   398,
     262,   196,    29,   -21,   286,   286,   286,    -8,   679,   194,
      -8,   -19,   288,   288,   288,   -25,   405,   406,   407,    32,
      33,    34,   -34,   -32,   -26,   -34,   -32,    35,    36,    37,
     309,    38,    39,    40,   310,   219,   289,   289,   289,   706,
     -13,   -33,   240,   -13,   -33,   311,   -38,   -55,   219,   -38,
     219,   431,   431,   625,   626,   -35,   735,   -36,   -35,   333,
     -36,   240,   285,   285,   334,   -37,   335,   219,   -37,   219,
     469,   469,   638,   639,   286,   286,   -14,   357,   220,   -14,
     240,   -12,   288,   288,   -12,   358,   219,   402,   219,   507,
     507,   651,   652,   359,   313,   -60,   -60,   384,   385,   386,
     400,   401,   655,   -54,   130,   -56,   289,   289,   534,   287,
     287,   287,   537,   538,   539,   285,   285,   412,   -57,   290,
     290,   290,   450,   488,   241,   260,   408,   286,   286,   794,
     409,   446,   220,   447,   220,   288,   288,   484,   485,   220,
     525,   526,   529,   557,   546,   276,   276,   276,   276,   276,
     547,   548,   549,   276,   550,   558,   559,   565,   566,   289,
     289,   567,   568,   569,   284,   284,   284,   260,   576,   701,
     577,   578,   219,   293,   219,   701,   711,   712,   713,   287,
     287,   584,   585,   586,   587,   588,   595,   596,   597,   290,
     290,   -10,   612,   604,   653,   656,   657,   605,   240,   241,
     606,     5,   607,   608,     5,   219,   609,   219,   701,   701,
     701,   759,   759,   759,   759,   759,   701,   701,   701,   759,
     701,   770,   771,   610,   -10,   616,   188,   617,   620,   292,
     220,   203,   287,   287,   284,   284,   629,   630,   219,   783,
     784,   785,   290,   290,   633,   642,   643,   646,   204,   205,
     206,   -11,   220,   220,   220,   220,   207,   208,   209,   -11,
     210,   211,   212,   661,   703,   704,   662,   663,   664,   665,
     681,   240,   667,   220,   241,   241,   241,   219,   668,   219,
     759,   759,   804,   805,   669,   670,   671,   284,   284,   673,
     674,   675,   220,   260,   260,   260,   676,   677,   714,   -46,
     715,   -46,   -46,   716,   -46,   -46,   733,   -46,   -46,   736,
     241,   737,   740,   220,   276,   276,   276,   772,   773,   775,
     776,   -46,   -46,   -46,   223,   777,   224,   276,   276,   -46,
     -46,   -46,   778,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     779,   786,   787,   225,   226,   227,   788,   795,   796,   799,
     115,   228,   229,   230,   807,   231,   232,   233,   220,   808,
     220,   220,   220,   220,   432,   432,   432,   432,   432,   220,
     220,   220,   432,   220,   220,   220,   241,   809,   810,   811,
      12,     0,   220,     0,   220,   241,   241,   241,   470,   470,
     470,   470,   470,   241,   241,   241,   470,   241,   241,   241,
     241,   299,   299,     0,     0,     0,   220,     0,   220,   260,
     260,   260,   508,   508,   508,   508,   508,   260,   260,   260,
     508,   260,   260,   260,     0,     0,     0,   241,     0,     0,
       0,     0,   570,   220,   -84,   220,   276,   276,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,   220,
       0,     0,   220,   -84,   -84,   -84,   -84,     0,   -63,     0,
     -63,   -63,     0,   -63,   -63,     0,   -63,   -63,   220,   432,
     432,   432,   720,   721,   722,   723,   724,     0,     0,     0,
     -63,   -63,   -63,   395,   -63,   -63,   -63,     0,   -63,   -63,
     -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
     299,   299,   299,   242,     0,   243,   220,   470,   470,   470,
       0,     0,   118,     0,     0,     0,     0,     0,   -63,     0,
       0,     0,   244,   245,   246,   339,   340,   341,   342,   343,
     247,   248,   249,     0,   250,   251,   252,   -63,   -63,   -63,
     -63,     0,     0,     0,   220,   508,   508,   508,   -84,     0,
     -84,   -84,     0,   707,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,   395,   220,   -64,     0,   395,   395,   395,     0,
     241,   339,   340,   341,   342,   343,   220,     0,   220,   432,
     432,   432,   432,   -64,   -64,   -64,   -64,     0,     0,   241,
       0,     0,     0,     0,     0,   220,     0,   220,   470,   470,
     470,   470,   218,     0,   -61,     0,   -61,   -61,   241,   -61,
     -61,     0,   -61,   -61,   220,     0,   220,   508,   508,   508,
     508,     0,     0,     0,     0,     0,   -61,   -61,   -61,     0,
     719,   -61,   -61,     0,   -61,   -61,   -61,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,   239,   258,
       0,     0,     0,     0,     0,     0,   218,     0,   218,     0,
       0,     0,     0,   218,     0,     0,     0,     0,     0,   274,
     274,   274,   274,   274,     0,   142,   143,   274,     0,     0,
     315,   316,   317,   318,   319,   304,     0,     0,    78,     0,
     203,   258,   -63,   -63,   -63,   -63,     0,   702,     0,     0,
     220,     0,   220,   702,   702,   702,   702,   204,   205,   206,
       0,     0,     0,     0,     0,   207,   208,   209,     0,   210,
     211,   212,     0,   239,     0,     0,   241,     0,     0,     0,
       0,     0,     0,   220,     0,   220,   702,   702,   702,   760,
     760,   760,   760,   760,   702,   702,   702,   760,   702,   702,
     702,     0,     0,     0,   218,     0,   -64,     0,   -64,   -64,
       0,   -64,   -64,     0,   -64,   -64,   220,   760,   760,   760,
     720,   721,   722,   723,   724,     0,   218,     0,   -64,   -64,
     -64,     0,   -64,   -64,   -64,     0,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   218,    78,   241,
     203,     0,     0,     0,     0,   220,     0,   220,   760,   760,
     760,   760,     0,     0,     0,     0,   218,   204,   205,   206,
       0,     0,     0,     0,     0,   207,   208,   209,   122,   210,
     211,   212,     0,     0,   239,     0,     0,   218,     0,   -73,
       0,   -73,   -73,     0,   -73,   -73,     0,   -73,   -73,     0,
       0,   389,   390,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,   -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,   218,     0,   218,   218,   218,   218,   430,   430,
     430,   430,   430,   218,   438,   439,   430,   218,     0,     0,
     239,     0,     0,     0,     0,     0,   218,     0,   218,   239,
     239,   239,   468,   468,   468,   468,   468,   239,   476,   477,
     468,   239,     0,     0,   239,     0,     0,     0,     0,     0,
     218,     0,   218,   258,   258,   258,   506,   506,   506,   506,
     506,   258,   514,   515,   506,   258,     0,   328,     0,     0,
      78,   239,   203,     0,     0,     0,     0,   218,     0,   218,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   204,
     205,   206,     0,   218,     0,     0,   218,   207,   208,   209,
       0,   210,   211,   212,     0,   -85,     0,   -85,   -85,     0,
     -85,   -85,   218,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,     0,   -86,   -86,
     218,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -96,   218,   -96,
     -96,     0,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,     0,   -96,   -96,   -96,     0,   -96,   -96,   -96,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,    78,     0,
     203,     0,     0,     0,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,   239,     0,     0,   204,   205,   206,
     218,     0,   218,   623,   624,   207,   208,   209,   125,   210,
     211,   212,     0,   239,     0,     0,     0,     0,     0,   218,
       0,   218,   636,   637,   217,   -62,     0,   -62,   -62,     0,
     -62,   -62,   239,   -62,   -62,     0,     0,     0,   218,     0,
     218,   649,   650,     0,     0,     0,     0,   -62,   -62,   -62,
       0,   719,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
     238,   257,     0,     0,   352,     0,     0,    78,   217,   203,
     217,     0,     0,     0,     0,   217,     0,     0,     0,     0,
       0,   136,   137,   138,   139,   140,   204,   205,   206,   144,
       0,     0,     0,     0,   207,   208,   209,     0,   210,   211,
     212,     0,   379,   257,     0,    78,     0,   203,     0,     0,
       0,   700,     0,     0,   218,     0,   218,   700,     0,     0,
       0,     0,     0,     0,   204,   205,   206,     0,     0,     0,
       0,     0,   207,   208,   209,   238,   210,   211,   212,     0,
     239,     0,     0,     0,     0,     0,     0,   218,     0,   218,
     700,   700,   700,   758,   758,   758,   758,   758,   700,   766,
     767,   758,   700,     0,     0,     0,   217,   -65,     0,   -65,
     -65,     0,   -65,   -65,     0,   -65,   -65,   725,   726,   727,
     218,   -65,   -65,   -65,   -65,   -65,   728,   729,   217,   -65,
     -65,   -65,     0,   -65,   -65,   -65,     0,   -65,   -65,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   217,
       0,     0,     0,   239,     0,     0,     0,     0,     0,   218,
       0,   218,   802,   803,     0,     0,     0,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,     0,   -74,   -74,   238,   -74,   -74,   217,
     -74,   -74,   -74,   -74,   -74,   730,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   731,   -74,   -74,   -74,     0,   -74,   -74,
     -74,     0,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,   217,   217,   217,   217,
     429,   433,   434,   435,   436,   217,     0,     0,   440,   217,
       0,     0,   238,     0,     0,     0,     0,     0,   217,     0,
     217,   238,   238,   238,   467,   471,   472,   473,   474,   238,
       0,     0,   478,   238,     0,     0,   238,     0,     0,     0,
       0,     0,   217,     0,   217,   257,   257,   257,   505,   509,
     510,   511,   512,   257,     0,     0,   516,   257,     0,   540,
       0,     0,    78,   238,   203,     0,     0,     0,     0,   217,
       0,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   205,   206,     0,   217,     0,     0,   217,   207,
     208,   209,     0,   210,   211,   212,     0,   -77,     0,   -77,
     -77,     0,   -77,   -77,   217,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,   217,     0,   216,     0,     0,   -80,     0,   -80,
     -80,     0,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     217,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     237,   256,     0,     0,     0,     0,     0,     0,   216,     0,
     216,     0,     0,     0,   -69,   216,     0,     0,   579,   580,
     135,   -69,   -69,   -69,   -69,   -69,   141,     0,     0,   223,
     145,   224,     0,   -69,   -69,   -69,   -69,     0,     0,   217,
       0,     0,     0,   256,     0,     0,   238,     0,   225,   226,
     227,     0,   217,     0,   217,   375,   228,   229,   230,   -66,
     231,   232,   233,   579,   580,   238,   -66,   -66,   -66,   -66,
     -66,   217,     0,   217,     0,   237,     0,     0,   -66,   -66,
     -66,   -66,     0,     0,   238,     0,     0,     0,     0,     0,
     217,     0,   217,     0,     0,     0,     0,     0,     0,   -83,
       0,   -83,   -83,     0,   -83,   -83,   216,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   216,   -83,
     -83,   -83,   -63,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   216,
       0,     0,   -63,   -63,   -63,     0,     0,     0,     0,     0,
       0,   -27,     0,   -27,   -27,     0,   -27,   -27,   216,   -27,
     -27,     0,     0,   699,     0,     0,   217,     0,   217,   699,
       0,     0,     0,   -27,   -27,   -27,   237,     0,     0,   216,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   238,     0,     0,     0,     0,     0,     0,   217,
       0,   217,   699,   699,   699,   757,   761,   762,   763,   764,
     699,     0,     0,   768,   699,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,     0,   216,   216,   216,   417,
       0,     0,   217,     0,     0,   437,   -67,     0,     0,   441,
     579,   580,   237,   -67,   -67,   -67,   -67,   -67,   216,     0,
     216,   237,   237,   455,     0,   -67,   -67,   -67,   -67,   475,
       0,     0,     0,   479,     0,   238,   237,     0,     0,     0,
       0,   217,   216,   217,   216,   256,   256,   493,     0,     0,
       0,     0,     0,   513,     0,     0,     0,   517,     0,   -45,
       0,     0,   -45,   237,   -45,   -45,     0,    79,   -45,   216,
       0,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -45,   -45,   -45,     0,   216,     0,     0,   216,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,     0,   -45,   -45,
       0,     0,   542,     0,   216,   262,     0,    29,     0,     0,
       0,     0,     0,   116,   119,     0,     0,   552,     0,     0,
      78,   123,   203,   126,    32,    33,    34,     0,   128,   132,
       0,     0,    35,    36,    37,     0,    38,    39,    40,   204,
     205,   206,   216,     0,     0,     0,     0,   207,   208,   209,
       0,   210,   211,   212,     0,   -81,   152,   -81,   -81,     0,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     216,   -81,   -81,   -81,     0,   -81,   -81,   -81,   167,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   291,     0,     0,
       0,   132,   -73,   571,     0,     0,    78,     0,   203,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,   294,
       0,   -73,   -73,   -73,   -73,   204,   205,   206,     0,   216,
       0,     0,     0,   207,   208,   209,   237,   210,   211,   212,
       0,   305,   216,     0,   216,     0,     0,     0,     0,     0,
       0,     0,     0,   590,     0,   237,    78,     0,   203,     0,
       0,   216,   329,   216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   204,   205,   206,     0,     0,
     216,   353,   216,   207,   208,   209,     0,   210,   211,   212,
       0,     0,   -84,     0,   -84,   -84,     0,   780,   -84,   116,
     -84,   -84,   380,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   291,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   411,     0,   414,
       0,     0,   658,     0,     0,   262,     0,    29,     0,     0,
       0,     0,     0,   698,     0,   116,   216,     0,   216,   698,
       0,   449,     0,   452,    32,    33,    34,     0,     0,     0,
       0,     0,    35,    36,    37,     0,    38,    39,    40,   116,
       0,     0,   237,     0,     0,   487,     0,   490,     0,   216,
       0,   216,   698,   698,   745,     0,     0,     0,     0,     0,
     765,     0,     0,     0,   769,   522,   116,     0,     0,     0,
     705,     0,   528,   292,   531,   203,   -72,     0,     0,   215,
     291,     0,   216,   -72,   -72,   -72,   -72,   -72,   541,   132,
       0,   545,   204,   205,   206,   -72,   -72,   -72,   -72,     0,
     207,   208,   209,     0,   210,   211,   212,   553,     0,     0,
       0,     0,     0,     0,     0,   237,     0,     0,     0,   708,
       0,   216,    78,   216,   203,   236,   255,     0,     0,     0,
       0,     0,     0,   215,     0,   215,     0,     0,     0,     0,
     215,   204,   205,   206,   134,   572,     0,     0,     0,   207,
     208,   209,     0,   210,   211,   212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -61,   255,   -61,
     -61,     0,   -61,   -61,     0,   -61,   -61,     0,     0,     0,
     214,     0,     0,   591,     0,     0,     0,     0,     0,   -61,
     -61,   -61,     0,   362,   -61,   -61,     0,   -61,   -61,   -61,
     236,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -85,   602,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,   235,   254,   -85,   -85,
     -85,   215,   613,     0,   214,     0,   214,     0,     0,   116,
       0,   214,     0,     0,   133,   619,     0,   622,     0,     0,
       0,     0,     0,   215,     0,     0,   781,     0,   116,    78,
       0,   203,     0,     0,   632,     0,   635,     0,     0,   254,
       0,     0,     0,     0,   215,     0,     0,   116,   204,   205,
     206,     0,     0,   645,     0,   648,   207,   208,   209,     0,
     210,   211,   212,   215,     0,     0,     0,   291,   291,   291,
     132,   235,     0,     0,     0,     0,     0,   -82,     0,   -82,
     -82,   236,   -82,   -82,   215,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   214,   -82,   -82,   -82,     0,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,   214,     0,     0,     0,     0,   215,
       0,   215,   215,   416,     0,     0,   694,   291,   291,   294,
     -64,   709,   710,     0,     0,   214,     0,   236,    96,    97,
      98,    99,   100,   215,     0,   215,   236,   454,     0,     0,
     -64,   -64,   -64,     0,   214,   116,     0,     0,   223,     0,
     224,   236,   739,     0,   742,     0,     0,   215,     0,   215,
     255,   492,   235,     0,     0,   214,     0,   225,   226,   227,
     291,   291,     0,     0,   444,   228,   229,   230,   236,   231,
     232,   233,     0,     0,   215,   782,   215,   -70,     0,     0,
       0,   579,   580,   213,   -70,   -70,   -70,   -70,   -70,     0,
     215,     0,     0,   215,     0,     0,   -70,   -70,   -70,   -70,
     214,     0,   214,   415,     0,     0,     0,     0,   116,   215,
       0,     0,     0,     0,   798,     0,   801,     0,   235,     0,
       0,     0,     0,     0,   214,     0,   214,   453,     0,   234,
     253,     0,     0,   221,     0,    29,   281,   213,     0,   213,
       0,     0,   235,     0,   213,     0,     0,   215,   214,     0,
     214,   491,    32,    33,    34,     0,     0,     0,     0,     0,
      35,    36,    37,     0,    38,    39,    40,     0,     0,   235,
       0,     0,   253,     0,     0,   214,     0,   214,     0,     0,
       0,     0,     0,     0,     0,   215,     0,     0,     0,     0,
     -62,   214,   -62,   -62,   214,   -62,   -62,     0,   -62,   -62,
       0,     0,     0,     0,   234,     0,     0,     0,     0,     0,
     214,     0,   -62,   -62,   -62,     0,   362,   -62,   -62,     0,
     -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,     0,   -62,
     -62,     0,     0,     0,   215,   213,     0,     0,     0,     0,
       0,   236,    78,     0,   203,     0,     0,   215,   214,   215,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
     236,   204,   205,   206,     0,     0,   215,     0,   215,   207,
     208,   209,   410,   210,   211,   212,     0,     0,   213,   236,
       0,     0,     0,     0,     0,   215,   214,   215,     0,     0,
     -29,     0,   -29,   -29,     0,   -29,   -29,   213,   -29,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   234,     0,     0,   213,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,   214,   -71,     0,     0,     0,
     579,   580,   235,   -71,   -71,   -71,   -71,   -71,   214,     0,
     214,     0,     0,     0,     0,   -71,   -71,   -71,   -71,     0,
       0,   235,     0,   213,     0,   213,     0,   214,   697,   214,
       0,   215,     0,   215,   697,     0,     0,     0,     0,     0,
     235,   234,     0,     0,     0,     0,   214,   213,   214,   213,
       0,     0,     0,     0,     0,     0,     0,   236,     0,     0,
       0,     0,     0,     0,   215,   234,   215,   697,   744,     0,
       0,   213,   -31,   213,   -31,   -31,     0,   -31,   -31,     0,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   234,     0,   -31,   -31,   -31,   215,   213,     0,
     213,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   213,     0,     0,   213,     0,     0,
      78,     0,   203,     0,     0,     0,     0,     0,     0,   696,
     236,     0,   214,   213,   214,   696,   215,     0,   215,   204,
     205,   206,     0,     0,     0,     0,     0,   207,   208,   209,
     413,   210,   211,   212,    78,     0,   203,     0,   235,     0,
       0,     0,     0,     0,     0,   214,     0,   214,   743,     0,
       0,   213,     0,   204,   205,   206,     0,     0,     0,     0,
       0,   207,   208,   209,   448,   210,   211,   212,   -68,     0,
     -68,   -68,     0,   -68,   -68,     0,   -68,   -68,   214,   789,
     790,     0,   -68,   -68,   -68,   -68,   -68,     0,     0,   213,
     -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,   235,     0,     0,     0,     0,     0,   214,     0,   214,
       0,     0,     0,     0,     0,     0,   -58,     0,   -58,   -58,
       0,   -58,   -58,     0,   -58,   -58,     0,     0,   213,     0,
       0,     0,     0,     0,     0,   234,     0,     0,   -58,   -58,
     -58,   213,     0,   213,   360,     0,   -58,   -58,   -58,     0,
     -58,   -58,   -58,   -58,   234,   -58,   -58,     0,     0,     0,
     213,     0,   213,   315,   316,   317,   318,   319,     0,     0,
       0,     0,     0,   234,     0,   -64,   -64,   -64,   -64,   213,
     -90,   213,   -90,   -90,     0,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,     0,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -88,     0,   -88,   -88,     0,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,
       0,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   695,     0,   327,   213,   -84,   213,   695,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,     0,
       0,   234,     0,     0,     0,     0,     0,     0,   213,     0,
     213,     0,   -87,     0,   -87,   -87,     0,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,
     -87,   213,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,   261,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,   234,   403,   -84,   -84,   -84,   -84,
     213,   -75,   213,   -75,   -75,     0,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   730,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   731,   -75,   -75,   -75,     0,   -75,   -75,   -75,
       0,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,   -76,   -76,     0,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   730,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   731,   -76,   -76,   -76,     0,   -76,   -76,
     -76,     0,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -78,     0,   -78,   -78,     0,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -79,     0,   -79,   -79,     0,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -89,     0,   -89,   -89,     0,
     -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -91,     0,   -91,   -91,
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
     -95,     0,   -95,   -95,     0,   -95,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,     0,
     -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -84,     0,   -84,   -84,     0,   351,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
       0,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -85,     0,   -85,   -85,     0,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,     0,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   -86,     0,   -86,   -86,     0,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,
     -86,   -86,     0,   -86,   -86,   -86,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -96,     0,   -96,   -96,     0,   -96,
     -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,
     -96,   -96,   -96,     0,   -96,   -96,   -96,     0,   -96,   -96,
     -96,   -96,     0,   -96,   -96,   -74,     0,   -74,   -74,     0,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   373,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   374,   -74,   -74,   -74,
       0,   -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -77,     0,   -77,   -77,
       0,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -80,     0,   -80,
     -80,     0,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,   -80,
       0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -83,     0,
     -83,   -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,
     -83,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -81,
       0,   -81,   -81,     0,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -82,     0,   -82,   -82,     0,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,     0,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -90,     0,   -90,   -90,     0,   -90,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,
       0,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,     0,
     -90,   -90,   -88,     0,   -88,   -88,     0,   -88,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,
     -88,     0,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -87,     0,   -87,   -87,     0,   -87,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -87,     0,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -75,     0,   -75,   -75,     0,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   373,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   374,   -75,   -75,   -75,     0,
     -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -76,     0,   -76,   -76,     0,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   373,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   374,   -76,   -76,   -76,
       0,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -78,     0,   -78,   -78,
       0,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -79,     0,   -79,
     -79,     0,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -89,     0,
     -89,   -89,     0,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -91,
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
       0,   -94,   -94,   -95,     0,   -95,   -95,     0,   -95,   -95,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,
     -95,   -95,     0,   -95,   -95,   -95,     0,   -95,   -95,   -95,
     -95,     0,   -95,   -95,   -65,     0,   -65,   -65,     0,   -65,
     -65,     0,   -65,   -65,   368,   369,   370,     0,   -65,   -65,
     -65,   -65,   -65,   371,   372,     0,   -65,   -65,   -65,     0,
     -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -85,     0,   -85,   -85,     0,
     -85,   -85,     0,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -86,     0,   -86,   -86,
       0,   -86,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -96,     0,   -96,
     -96,     0,   -96,   -96,     0,   -96,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,     0,   -96,   -96,
     -96,   -96,     0,   -96,   -96,   -96,     0,   -96,   -96,   -96,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -74,     0,
     -74,   -74,     0,   -74,   -74,     0,   -74,   -74,     0,   -74,
     -74,   791,   -74,   -74,   -74,   -74,   -74,     0,     0,   792,
     -74,   -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -77,
       0,   -77,   -77,     0,   -77,   -77,     0,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -80,     0,   -80,   -80,     0,   -80,   -80,     0,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,     0,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -83,     0,   -83,   -83,     0,   -83,   -83,     0,   -83,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
       0,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -81,     0,   -81,   -81,     0,   -81,   -81,     0,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,     0,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -82,     0,   -82,   -82,     0,   -82,   -82,
       0,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -90,     0,   -90,   -90,     0,   -90,
     -90,     0,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,   -90,   -90,   -90,   -90,     0,
     -90,   -90,   -90,     0,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -88,     0,   -88,   -88,     0,
     -88,   -88,     0,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,     0,   -88,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -87,     0,   -87,   -87,
       0,   -87,   -87,     0,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -87,     0,   -87,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -75,     0,   -75,
     -75,     0,   -75,   -75,     0,   -75,   -75,     0,   -75,   -75,
     791,   -75,   -75,   -75,   -75,   -75,     0,     0,   792,   -75,
     -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,
     -76,   -76,     0,   -76,   -76,     0,   -76,   -76,     0,   -76,
     -76,   791,   -76,   -76,   -76,   -76,   -76,     0,     0,   792,
     -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -78,
       0,   -78,   -78,     0,   -78,   -78,     0,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -79,     0,   -79,   -79,     0,   -79,   -79,     0,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,     0,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -89,     0,   -89,   -89,     0,   -89,   -89,     0,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
       0,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -91,     0,   -91,   -91,     0,   -91,   -91,     0,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -91,     0,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -92,     0,   -92,   -92,     0,   -92,   -92,
       0,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,     0,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -93,     0,   -93,   -93,     0,   -93,
     -93,     0,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,   -93,   -93,   -93,   -93,     0,
     -93,   -93,   -93,     0,   -93,   -93,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -94,     0,   -94,   -94,     0,
     -94,   -94,     0,   -94,   -94,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,     0,     0,   -94,   -94,   -94,   -94,
       0,   -94,   -94,   -94,     0,   -94,   -94,   -94,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -95,     0,   -95,   -95,
       0,   -95,   -95,     0,   -95,   -95,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,     0,   -95,   -95,   -95,
     -95,     0,   -95,   -95,   -95,     0,   -95,   -95,   -95,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -84,     0,   -84,
     -84,     0,   589,   -84,     0,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,   -84,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -85,     0,
     -85,   -85,     0,   -85,   -85,     0,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -86,
       0,   -86,   -86,     0,   -86,   -86,     0,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,     0,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -96,     0,   -96,   -96,     0,   -96,   -96,     0,   -96,   -96,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,
       0,   -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,     0,
     -96,   -96,   -96,     0,   -96,   -96,   -96,   -96,     0,   -96,
     -96,   -74,     0,   -74,   -74,     0,   -74,   -74,     0,   -74,
     -74,     0,   -74,   -74,   600,   -74,   -74,   -74,   -74,   -74,
       0,     0,   601,   -74,   -74,   -74,     0,   -74,   -74,   -74,
       0,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -77,     0,   -77,   -77,     0,   -77,   -77,     0,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -80,     0,   -80,   -80,     0,   -80,   -80,
       0,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -83,     0,   -83,   -83,     0,   -83,
     -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -81,     0,   -81,   -81,     0,
     -81,   -81,     0,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,     0,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -82,     0,   -82,   -82,
       0,   -82,   -82,     0,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -90,     0,   -90,
     -90,     0,   -90,   -90,     0,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,   -90,   -90,
     -90,   -90,     0,   -90,   -90,   -90,     0,   -90,   -90,   -90,
       0,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -88,     0,
     -88,   -88,     0,   -88,   -88,     0,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,     0,   -88,   -88,
     -88,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -87,
       0,   -87,   -87,     0,   -87,   -87,     0,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,     0,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,
     -75,     0,   -75,   -75,     0,   -75,   -75,     0,   -75,   -75,
       0,   -75,   -75,   600,   -75,   -75,   -75,   -75,   -75,     0,
       0,   601,   -75,   -75,   -75,     0,   -75,   -75,   -75,     0,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -76,     0,   -76,   -76,     0,   -76,   -76,     0,   -76,
     -76,     0,   -76,   -76,   600,   -76,   -76,   -76,   -76,   -76,
       0,     0,   601,   -76,   -76,   -76,     0,   -76,   -76,   -76,
       0,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -78,     0,   -78,   -78,     0,   -78,   -78,     0,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   -78,   -78,   -78,   -78,     0,   -78,   -78,
     -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -79,     0,   -79,   -79,     0,   -79,   -79,
       0,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -89,     0,   -89,   -89,     0,   -89,
     -89,     0,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,     0,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,     0,   -89,   -89,   -91,     0,   -91,   -91,     0,
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
     -94,     0,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -95,
       0,   -95,   -95,     0,   -95,   -95,     0,   -95,   -95,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,     0,   -95,
     -95,   -95,     0,   -95,   -95,   -95,   -95,     0,   -95,   -95,
     -69,     0,   -69,   -69,     0,   -69,   -69,     0,   -69,   -69,
       0,   789,   790,     0,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,
     -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -66,     0,   -66,   -66,     0,   -66,   -66,     0,   -66,
     -66,     0,   789,   790,     0,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,   -66,   -66,   -66,     0,   -66,   -66,   -66,
       0,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -67,     0,   -67,   -67,     0,   -67,   -67,     0,
     -67,   -67,     0,   789,   790,     0,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,   -67,   -67,   -67,     0,   -67,   -67,
     -67,     0,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -70,     0,   -70,   -70,     0,   -70,   -70,
       0,   -70,   -70,     0,   789,   790,     0,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,   -70,   -70,   -70,     0,   -70,
     -70,   -70,     0,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -71,     0,   -71,   -71,     0,   -71,
     -71,     0,   -71,   -71,     0,   789,   790,     0,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,   -71,   -71,   -71,     0,
     -71,   -71,   -71,     0,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -68,     0,   -68,   -68,     0,
     -68,   -68,     0,   -68,   -68,     0,   598,   599,     0,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,   -68,   -68,   -68,
       0,   -68,   -68,   -68,     0,   -68,   -68,   -68,     0,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -69,     0,   -69,   -69,
       0,   -69,   -69,     0,   -69,   -69,     0,   598,   599,     0,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,   -69,   -69,
     -69,     0,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -66,     0,   -66,
     -66,     0,   -66,   -66,     0,   -66,   -66,     0,   598,   599,
       0,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,   -66,
     -66,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,   -66,
       0,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -67,     0,
     -67,   -67,     0,   -67,   -67,     0,   -67,   -67,     0,   598,
     599,     0,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
     -67,   -67,   -67,     0,   -67,   -67,   -67,     0,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -70,
       0,   -70,   -70,     0,   -70,   -70,     0,   -70,   -70,     0,
     598,   599,     0,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,   -70,   -70,   -70,     0,   -70,   -70,   -70,     0,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,     0,   -70,   -70,
     -71,     0,   -71,   -71,     0,   -71,   -71,     0,   -71,   -71,
       0,   598,   599,     0,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,   -71,   -71,   -71,     0,   -71,   -71,   -71,     0,
     -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -72,     0,   -72,   -72,     0,   -72,   -72,     0,   -72,
     -72,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,   -72,   -72,   -72,     0,   -72,   -72,   -72,
       0,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -63,     0,   -63,   -63,     0,   -63,   -63,     0,
     -63,   -63,     0,     0,     0,     0,   363,   364,   365,   366,
     367,     0,     0,     0,   -63,   -63,   -63,     0,   -63,   -63,
     -63,     0,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -64,     0,   -64,   -64,     0,   -64,   -64,
       0,   -64,   -64,     0,     0,     0,     0,   363,   364,   365,
     366,   367,     0,     0,     0,   -64,   -64,   -64,     0,   -64,
     -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,   -64,
     -64,     0,   -64,   -64,   -73,     0,   -73,   -73,     0,   -73,
     -73,     0,   -73,   -73,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,   -73,   -73,   -73,     0,
     -73,   -73,   -73,     0,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -72,     0,   -72,   -72,     0,
     -72,   -72,     0,   -72,   -72,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,   -72,   -72,   -72,
       0,   -72,   -72,   -72,     0,   -72,   -72,   -72,     0,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -59,     0,   -59,   -59,
       0,   -59,   -59,     0,   -59,   -59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -59,   -59,
     -59,     0,     0,   718,   -59,     0,   -59,   -59,   -59,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -60,     0,   -60,
     -60,     0,   -60,   -60,     0,   -60,   -60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -60,
     -60,   -60,     0,     0,   718,   -60,     0,   -60,   -60,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -59,     0,
     -59,   -59,     0,   -59,   -59,     0,   -59,   -59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -59,   -59,   -59,     0,     0,   361,   -59,     0,   -59,   -59,
     -59,     0,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -60,
       0,   -60,   -60,     0,   -60,   -60,     0,   -60,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -60,   -60,   -60,     0,     0,   361,   -60,     0,   -60,
     -60,   -60,     0,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -58,     0,   -58,   -58,     0,   -58,   -58,     0,   -58,   -58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -58,   -58,   -58,     0,     0,     0,   717,     0,
     -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -28,     0,   -28,   -28,   551,   -28,   -28,     0,   -28,
     -28,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,   -84,     0,   -28,   -28,   -28,   -84,   -84,   -84,   -84,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -30,     0,   -30,   -30,     0,   -30,   -30,   -65,
     -30,   -30,     0,   101,   102,   103,     0,   -65,   -65,   -65,
     -65,   -65,   104,   105,   -30,   -30,   -30,     0,     0,   -65,
     -65,   -65,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -34,     0,   -34,   -34,     0,   -34,   -34,
     -69,   -34,   -34,     0,     0,   278,   279,     0,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -34,   -34,   -34,     0,     0,
     -69,   -69,   -69,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -32,     0,   -32,   -32,     0,   -32,
     -32,   -66,   -32,   -32,     0,     0,   278,   279,     0,   -66,
     -66,   -66,   -66,   -66,     0,     0,   -32,   -32,   -32,     0,
       0,   -66,   -66,   -66,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -48,     0,   -48,   -48,     0,
     -48,   -48,   -67,   -48,   -48,     0,     0,   278,   279,     0,
     -67,   -67,   -67,   -67,   -67,     0,     0,   -48,   -48,   -48,
       0,     0,   -67,   -67,   -67,   -48,   -48,   -48,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -47,     0,   -47,   -47,
       0,   -47,   -47,   -70,   -47,   -47,     0,     0,   278,   279,
       0,   -70,   -70,   -70,   -70,   -70,     0,     0,   -47,   -47,
     -47,     0,     0,   -70,   -70,   -70,   -47,   -47,   -47,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -33,     0,   -33,
     -33,     0,   -33,   -33,   -71,   -33,   -33,     0,     0,   278,
     279,     0,   -71,   -71,   -71,   -71,   -71,     0,     0,   -33,
     -33,   -33,     0,     0,   -71,   -71,   -71,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -43,     0,
     -43,   -43,     0,   -43,   -43,   -73,   -43,   -43,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,     0,     0,
     -43,   -43,   -43,     0,     0,   -73,   -73,   -73,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -38,
       0,   -38,   -38,     0,   -38,   -38,   -72,   -38,   -38,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,     0,
       0,   -38,   -38,   -38,     0,     0,   -72,   -72,   -72,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -35,     0,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
     -85,     0,   -35,   -35,   -35,   -85,   -85,   -85,   -85,     0,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -36,     0,   -36,   -36,     0,   -36,   -36,     0,   -36,
     -36,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,   -86,     0,   -36,   -36,   -36,   -86,   -86,   -86,   -86,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -37,     0,   -37,   -37,     0,   -37,   -37,     0,
     -37,   -37,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
       0,     0,   -96,     0,   -37,   -37,   -37,   -96,   -96,   -96,
     -96,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -42,     0,   -42,   -42,     0,   -42,   -42,
       0,   -42,   -42,   -74,   -74,   562,   -74,   -74,   -74,   -74,
     -74,     0,     0,   563,     0,   -42,   -42,   -42,   -74,   -74,
     -74,   -74,     0,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -40,     0,   -40,   -40,     0,   -40,
     -40,     0,   -40,   -40,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,   -77,     0,   -40,   -40,   -40,   -77,
     -77,   -77,   -77,     0,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -51,     0,   -51,   -51,     0,
     -51,   -51,     0,   -51,   -51,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,   -80,     0,   -51,   -51,   -51,
     -80,   -80,   -80,   -80,     0,   -51,   -51,   -51,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -10,     0,   -10,   -10,
       0,   -10,   -10,     0,   -10,   -10,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,   -83,     0,   -10,   -10,
     -10,   -83,   -83,   -83,   -83,     0,   -10,   -10,   -10,     0,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -41,     0,   -41,
     -41,     0,   -41,   -41,     0,   -41,   -41,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,   -81,     0,   -41,
     -41,   -41,   -81,   -81,   -81,   -81,     0,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -50,     0,
     -50,   -50,     0,   -50,   -50,     0,   -50,   -50,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -82,     0,
     -50,   -50,   -50,   -82,   -82,   -82,   -82,     0,   -50,   -50,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -11,
       0,   -11,   -11,     0,   -11,   -11,     0,   -11,   -11,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,   -90,
       0,   -11,   -11,   -11,   -90,   -90,   -90,   -90,     0,   -11,
     -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -52,     0,   -52,   -52,     0,   -52,   -52,     0,   -52,   -52,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
     -88,     0,   -52,   -52,   -52,   -88,   -88,   -88,   -88,     0,
     -52,   -52,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -49,     0,   -49,   -49,     0,   -49,   -49,     0,   -49,
     -49,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,   -87,     0,   -49,   -49,   -49,   -87,   -87,   -87,   -87,
       0,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,    26,     0,    27,    28,     0,    29,    30,     0,
      31,   200,   -75,   -75,   562,   -75,   -75,   -75,   -75,   -75,
       0,     0,   563,     0,    32,    33,    34,   -75,   -75,   -75,
     -75,     0,    35,    36,    37,     0,    38,    39,    40,    41,
       0,    42,    43,   -46,     0,   -46,   -46,     0,   -46,   -46,
       0,   -46,   -46,   -76,   -76,   562,   -76,   -76,   -76,   -76,
     -76,     0,     0,   563,     0,   -46,   -46,   -46,   -76,   -76,
     -76,   -76,     0,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -27,     0,   -27,   -27,     0,   -27,
     -27,     0,   -27,   -27,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,   -78,     0,   -27,   -27,   -27,   -78,
     -78,   -78,   -78,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -29,     0,   -29,   -29,     0,
     -29,   -29,     0,   -29,   -29,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,   -79,     0,   -29,   -29,   -29,
     -79,   -79,   -79,   -79,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -31,     0,   -31,   -31,
       0,   -31,   -31,     0,   -31,   -31,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,   -89,     0,   -31,   -31,
     -31,   -89,   -89,   -89,   -89,     0,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -28,     0,   -28,
     -28,     0,   -28,   -28,     0,   -28,   -28,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,   -91,     0,   -28,
     -28,   -28,   -91,   -91,   -91,   -91,     0,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -30,     0,
     -30,   -30,     0,   -30,   -30,     0,   -30,   -30,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,     0,   -92,     0,
     -30,   -30,   -30,   -92,   -92,   -92,   -92,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -48,
       0,   -48,   -48,     0,   -48,   -48,     0,   -48,   -48,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,   -93,
       0,   -48,   -48,   -48,   -93,   -93,   -93,   -93,     0,   -48,
     -48,   -48,     0,   -48,   -48,   -48,   -48,     0,   -48,   -48,
     -47,     0,   -47,   -47,     0,   -47,   -47,     0,   -47,   -47,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
     -94,     0,   -47,   -47,   -47,   -94,   -94,   -94,   -94,     0,
     -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -43,     0,   -43,   -43,     0,   -43,   -43,     0,   -43,
     -43,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
       0,   -95,     0,   -43,   -43,   -43,   -95,   -95,   -95,   -95,
       0,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,
     -10,   -10,   560,   561,     0,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,   -10,   -10,   -10,   -68,   -68,   -68,
     -68,     0,   -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,
       0,   -10,   -10,   -11,     0,   -11,   -11,     0,   -11,   -11,
       0,   -11,   -11,   560,   561,     0,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,   -11,   -11,   -11,   -69,   -69,
     -69,   -69,     0,   -11,   -11,   -11,     0,   -11,   -11,   -11,
     -11,     0,   -11,   -11,   -42,     0,   -42,   -42,     0,   -42,
     -42,     0,   -42,   -42,   560,   561,     0,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,   -42,   -42,   -42,   -66,
     -66,   -66,   -66,     0,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,     0,   -42,   -42,   -40,     0,   -40,   -40,     0,
     -40,   -40,     0,   -40,   -40,   560,   561,     0,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -40,   -40,   -40,
     -67,   -67,   -67,   -67,     0,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -51,     0,   -51,   -51,
       0,   -51,   -51,     0,   -51,   -51,   560,   561,     0,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,   -51,   -51,
     -51,   -70,   -70,   -70,   -70,     0,   -51,   -51,   -51,     0,
     -51,   -51,   -51,   -51,     0,   -51,   -51,   -41,     0,   -41,
     -41,     0,   -41,   -41,     0,   -41,   -41,   560,   561,     0,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,   -41,
     -41,   -41,   -71,   -71,   -71,   -71,     0,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -50,     0,
     -50,   -50,     0,   -50,   -50,     0,   -50,   -50,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
     -50,   -50,   -50,   -73,   -73,   -73,   -73,     0,   -50,   -50,
     -50,     0,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -52,
       0,   -52,   -52,     0,   -52,   -52,     0,   -52,   -52,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,   -52,   -52,   -52,   -72,   -72,   -72,   -72,     0,   -52,
     -52,   -52,     0,   -52,   -52,   -52,   -52,     0,   -52,   -52,
     -49,     0,   -49,   -49,     0,   -49,   -49,     0,   -49,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -49,   -49,   -49,     0,     0,     0,     0,     0,
     -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,     0,   -49,
     -49,   297,     0,    27,    28,     0,    29,    30,     0,   298,
     200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      -8,    -8,     0,    -8,    -8,   393,     0,    27,    28,     0,
      29,    30,     0,   394,   200,     0,     0,     0,     0,     0,
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
     112,   -37,   -37,   221,     0,    29,    30,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,     0,     0,     0,     0,     0,
      35,    36,    37,     0,    38,    39,    40,    41,   280,    42,
      43,    28,     0,    29,   281,     0,     0,   282,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,     0,     0,     0,     0,    35,    36,
      37,     0,    38,    39,    40,    41,   280,    42,   283,   221,
       0,    29,   281,     0,     0,   282,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,    35,    36,    37,     0,
      38,    39,    40,    41,   280,    42,   283,   654,     0,    29,
     281,     0,     0,   282,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    78,
       0,   203,     0,     0,    35,    36,    37,     0,    38,    39,
      40,    41,     0,    42,   283,   223,     0,   224,   204,   205,
     206,     0,     0,     0,     0,     0,   207,   208,   209,   451,
     210,   211,   212,     0,   225,   226,   227,    78,     0,   203,
       0,   482,   228,   229,   230,     0,   231,   232,   233,     0,
       0,     0,    78,     0,   203,     0,   204,   205,   206,     0,
       0,     0,     0,     0,   207,   208,   209,   486,   210,   211,
     212,   204,   205,   206,     0,     0,     0,     0,     0,   207,
     208,   209,   489,   210,   211,   212,   221,     0,    29,     0,
       0,     0,     0,     0,     0,   521,     0,     0,     0,     0,
       0,   223,     0,   224,     0,    32,    33,    34,     0,     0,
       0,     0,     0,    35,    36,    37,     0,    38,    39,    40,
     225,   226,   227,    78,     0,   203,     0,   523,   228,   229,
     230,     0,   231,   232,   233,     0,     0,     0,    78,     0,
     203,     0,   204,   205,   206,     0,     0,     0,     0,     0,
     207,   208,   209,   527,   210,   211,   212,   204,   205,   206,
       0,     0,     0,     0,     0,   207,   208,   209,   530,   210,
     211,   212,    78,     0,   203,     0,     0,     0,     0,     0,
       0,   544,     0,     0,     0,     0,     0,   223,     0,   224,
       0,   204,   205,   206,     0,     0,     0,     0,     0,   207,
     208,   209,     0,   210,   211,   212,   225,   226,   227,    78,
       0,   203,     0,   614,   228,   229,   230,     0,   231,   232,
     233,     0,     0,     0,    78,     0,   203,     0,   204,   205,
     206,     0,     0,     0,     0,     0,   207,   208,   209,   618,
     210,   211,   212,   204,   205,   206,   223,     0,   224,     0,
       0,   207,   208,   209,   621,   210,   211,   212,     0,     0,
       0,    78,     0,   203,     0,   225,   226,   227,     0,     0,
       0,     0,   627,   228,   229,   230,     0,   231,   232,   233,
     204,   205,   206,    78,     0,   203,     0,     0,   207,   208,
     209,   631,   210,   211,   212,     0,     0,     0,   223,     0,
     224,     0,   204,   205,   206,     0,     0,     0,     0,     0,
     207,   208,   209,   634,   210,   211,   212,   225,   226,   227,
      78,     0,   203,     0,   640,   228,   229,   230,     0,   231,
     232,   233,     0,     0,     0,    78,     0,   203,     0,   204,
     205,   206,     0,     0,     0,     0,     0,   207,   208,   209,
     644,   210,   211,   212,   204,   205,   206,     0,     0,     0,
       0,     0,   207,   208,   209,   647,   210,   211,   212,   682,
       0,   683,     0,     0,     0,     0,     0,     0,   684,     0,
       0,     0,     0,     0,   223,     0,   224,     0,   685,   686,
     687,     0,     0,     0,     0,     0,   688,   689,   690,     0,
     691,   692,   693,   225,   226,   227,    78,     0,   203,     0,
     734,   228,   229,   230,     0,   231,   232,   233,     0,     0,
       0,    78,     0,   203,     0,   204,   205,   206,     0,     0,
       0,     0,     0,   207,   208,   209,   738,   210,   211,   212,
     204,   205,   206,   223,     0,   224,     0,     0,   207,   208,
     209,   741,   210,   211,   212,     0,     0,     0,    78,     0,
     203,     0,   225,   226,   227,     0,     0,     0,     0,   793,
     228,   229,   230,     0,   231,   232,   233,   204,   205,   206,
      78,     0,   203,     0,     0,   207,   208,   209,   797,   210,
     211,   212,     0,     0,     0,   221,     0,    29,     0,   204,
     205,   206,     0,     0,     0,     0,     0,   207,   208,   209,
     800,   210,   211,   212,    32,    33,    34,   263,     0,   264,
       0,     0,    35,    36,    37,     0,    38,    39,    40,     0,
       0,     0,   242,     0,   243,     0,   265,   266,   267,     0,
       0,     0,     0,     0,   268,   269,   270,     0,   271,   272,
     273,   244,   245,   246,   223,     0,   224,     0,     0,   247,
     248,   249,     0,   250,   251,   252,     0,     0,     0,    78,
       0,   203,     0,   225,   226,   227,     0,     0,     0,     0,
       0,   228,   229,   230,     0,   231,   232,   233,   204,   205,
     206,   418,     0,   419,     0,     0,   207,   208,   209,     0,
     210,   211,   212,     0,     0,     0,   456,     0,   457,     0,
     420,   421,   422,     0,     0,     0,     0,     0,   423,   424,
     425,     0,   426,   427,   428,   458,   459,   460,   494,     0,
     495,     0,     0,   461,   462,   463,     0,   464,   465,   466,
       0,     0,     0,   682,     0,   683,     0,   496,   497,   498,
       0,     0,     0,     0,     0,   499,   500,   501,     0,   502,
     503,   504,   685,   686,   687,   746,     0,   747,     0,     0,
     688,   689,   690,     0,   691,   692,   693,     0,     0,     0,
       0,     0,     0,     0,   748,   749,   750,     0,     0,     0,
       0,     0,   751,   752,   753,   261,   754,   755,   756,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
      75,   -84,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
      76,   -84,   -84,   -84,    75,   -84,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,   377,   -84,   -84,   -84,    75,   -84,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,   678,   -84,
     -84,   -84,    75,   -84,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     378,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -84,     0,     0,     0,
       0,   -84,   -84,   -84,   -85,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -86,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     -96,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,     0,     0,     0,     0,   -96,
     -96,   -96,   -96,   -74,     0,     0,   -74,   -74,   -74,   349,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   350,     0,     0,
       0,     0,   -74,   -74,   -74,   -74,   -77,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -80,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -83,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -81,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -82,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -90,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -88,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -87,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -75,     0,     0,   -75,   -75,   -75,   349,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   350,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -76,     0,     0,   -76,   -76,   -76,   349,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   350,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -78,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -79,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -89,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -91,     0,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,     0,     0,     0,   -91,   -91,   -91,   -91,   -92,     0,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,     0,     0,     0,   -92,   -92,   -92,
     -92,   -93,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,     0,
     -93,   -93,   -93,   -93,   -94,     0,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,
       0,     0,     0,   -94,   -94,   -94,   -94,   -95,     0,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,     0,     0,     0,     0,   -95,   -95,   -95,   -95,
     -86,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,   -96,
     -86,   -86,   -86,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,     0,     0,     0,   -74,   -96,
     -96,   -96,   -74,   -74,   -74,   106,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   107,     0,     0,     0,   -77,   -74,   -74,
     -74,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,   -80,   -77,   -77,   -77,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,   -83,   -80,   -80,   -80,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,   -81,   -83,   -83,   -83,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,   -82,   -81,   -81,   -81,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,   -90,   -82,   -82,   -82,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,   -88,   -90,   -90,   -90,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
     -87,   -88,   -88,   -88,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,   -75,
     -87,   -87,   -87,   -75,   -75,   -75,   106,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   107,     0,     0,     0,   -76,   -75,
     -75,   -75,   -76,   -76,   -76,   106,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   107,     0,     0,     0,   -78,   -76,   -76,
     -76,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,   -79,   -78,   -78,   -78,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,   -89,   -79,   -79,   -79,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,   -91,   -89,   -89,   -89,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,     0,     0,   -92,   -91,   -91,   -91,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
       0,     0,   -93,   -92,   -92,   -92,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,   -94,   -93,   -93,   -93,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,     0,
     -95,   -94,   -94,   -94,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,     0,
     -95,   -95,   -95,   -65,     0,     0,   344,   345,   346,     0,
     -65,   -65,   -65,   -65,   -65,   347,   348,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -85,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -86,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,   -86,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -96,     0,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,     0,   -96,     0,     0,     0,
       0,   -96,   -96,   -96,   -96,   -74,     0,     0,     0,   -74,
     -74,   581,   -74,   -74,   -74,   -74,   -74,     0,     0,   582,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -77,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   -77,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -80,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,   -80,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -83,     0,     0,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,   -83,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -81,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,   -81,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,   -82,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -90,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,   -90,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -88,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -87,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   -87,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -75,     0,     0,     0,   -75,   -75,   581,   -75,
     -75,   -75,   -75,   -75,     0,     0,   582,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,   -76,
     -76,   581,   -76,   -76,   -76,   -76,   -76,     0,     0,   582,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -78,     0,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -78,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -79,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,   -79,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,   -89,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,   -89,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -91,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,
       0,   -91,     0,     0,     0,     0,   -91,   -91,   -91,   -91,
     -92,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,   -92,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -93,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,     0,   -93,     0,     0,
       0,     0,   -93,   -93,   -93,   -93,   -94,     0,     0,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
     -94,     0,     0,     0,     0,   -94,   -94,   -94,   -94,   -95,
       0,     0,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,     0,     0,   -95,     0,     0,     0,   -85,   -95,   -95,
     -95,   -95,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,   -85,     0,     0,   -86,     0,   -85,   -85,   -85,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
     -86,     0,     0,   -96,     0,   -86,   -86,   -86,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,     0,   -96,     0,
       0,   -74,     0,   -96,   -96,   -96,   -74,   -74,   387,   -74,
     -74,   -74,   -74,   -74,     0,     0,   388,     0,     0,   -77,
       0,   -74,   -74,   -74,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,   -77,     0,     0,   -80,     0,   -77,
     -77,   -77,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,   -80,     0,     0,   -83,     0,   -80,   -80,   -80,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
     -83,     0,     0,   -81,     0,   -83,   -83,   -83,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,     0,
       0,   -82,     0,   -81,   -81,   -81,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,   -82,     0,     0,   -75,
       0,   -82,   -82,   -82,   -75,   -75,   387,   -75,   -75,   -75,
     -75,   -75,     0,     0,   388,     0,     0,   -76,     0,   -75,
     -75,   -75,   -76,   -76,   387,   -76,   -76,   -76,   -76,   -76,
       0,     0,   388,     0,     0,   -90,     0,   -76,   -76,   -76,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
     -90,     0,     0,   -88,     0,   -90,   -90,   -90,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,   -88,     0,
       0,   -87,     0,   -88,   -88,   -88,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,   -87,     0,     0,   -78,
       0,   -87,   -87,   -87,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,   -78,     0,     0,   -79,     0,   -78,
     -78,   -78,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,   -79,     0,     0,   -89,     0,   -79,   -79,   -79,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
     -89,     0,     0,   -91,     0,   -89,   -89,   -89,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,   -91,     0,
       0,   -92,     0,   -91,   -91,   -91,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,     0,   -92,     0,     0,   -93,
       0,   -92,   -92,   -92,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,     0,     0,   -93,     0,     0,   -94,     0,   -93,
     -93,   -93,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
       0,     0,   -94,     0,     0,   -95,     0,   -94,   -94,   -94,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
     -95,     0,     0,     0,     0,   -95,   -95,   -95,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
       0,     0,     0,     0,   -96,   -96,   -96,   -96,   -74,   -74,
     -74,   325,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   326,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,   -81,   -81,   -81,   -81,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,     0,     0,   -90,   -90,   -90,   -90,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -75,   -75,
     -75,   325,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   326,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -76,   -76,
     -76,   325,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   326,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,   -78,   -78,   -78,   -78,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,     0,     0,     0,   -91,   -91,   -91,   -91,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
       0,     0,     0,     0,   -92,   -92,   -92,   -92,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,     0,     0,   -93,   -93,   -93,   -93,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
       0,     0,     0,     0,   -94,   -94,   -94,   -94,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       0,     0,     0,     0,   -95,   -95,   -95,   -95,   320,   321,
     322,     0,   -65,   -65,   -65,   -65,   -65,   323,   324,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -65
};

static const yytype_int16 yycheck[] =
{
      29,   163,   170,    32,    33,    34,     9,    10,     1,     1,
       3,     0,     4,     7,     6,     1,     1,     4,     5,   181,
      10,     6,   159,    43,    10,     4,     5,     3,     9,    10,
      10,    23,    24,    25,   159,    29,    39,    30,     8,    31,
      32,    33,   159,    35,    36,    37,    75,    76,    13,    39,
       1,     4,     5,     4,    83,     6,    85,    22,    39,    39,
      30,    90,     4,    91,     9,    10,   159,    96,    97,    98,
      99,   100,    23,    24,    25,   104,     8,   106,   107,     7,
      31,    32,    33,     7,    35,    36,    37,     7,     8,   118,
     261,     8,     1,    30,    39,     4,     8,     6,    30,    64,
      28,    29,    10,    68,    28,    29,     7,     8,     8,    30,
      30,     6,   280,    30,    23,    24,    25,    29,    30,     7,
       8,   150,    31,    32,    33,     8,    35,    36,    37,    30,
      30,   159,     7,     8,     6,   163,     6,    72,     4,   159,
       6,     7,    30,     4,     5,     7,     8,    30,     0,   159,
       6,     3,   181,   181,     7,    30,   327,    23,    24,    25,
       7,     8,    29,    30,     6,    31,    32,    33,    30,    35,
      36,    37,   200,   201,   203,   204,   205,   206,     6,     0,
     351,     8,     3,    30,     7,    12,    13,     6,    15,    16,
      17,    18,    19,     4,   159,   224,   225,   226,   227,     8,
      27,    28,    29,    30,    27,    28,    29,   378,    30,     8,
       0,     8,     8,     3,   243,   244,   245,   246,    27,    28,
      29,    30,    25,   158,   159,     7,     7,   162,    27,    28,
      29,    30,   261,    30,    30,   264,   265,   266,   267,   401,
       8,    44,    45,    46,   179,   180,    27,    28,    29,   278,
     279,     4,     8,    30,   282,   392,     8,     8,   193,   194,
      28,    29,    30,   283,     1,   200,   201,   392,     4,     6,
       7,   299,   300,   301,    30,   392,    28,    29,    30,    30,
     309,     8,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   392,
      30,     8,     8,    30,   333,     8,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,    30,    30,     3,     8,    30,   357,     8,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,     7,   282,    30,   378,
       1,    30,     7,     4,     5,   384,    30,   386,   387,   388,
      30,   176,   177,   391,   299,   300,   301,   395,   396,   397,
     185,   400,   392,   401,   403,   190,     0,    30,     1,     3,
     551,   196,   392,     6,     7,     1,    30,    30,     4,     5,
     419,   420,   421,   422,    28,    29,    30,   200,   201,   570,
       0,    30,     1,     3,     3,     4,     0,     6,     7,     3,
       9,    10,    27,    28,    29,    30,     7,     7,   589,    27,
      28,    29,    30,     3,    23,    24,    25,   392,   457,   458,
     459,   460,    31,    32,    33,     7,    35,    36,    37,    38,
      39,    40,    41,     7,     0,     7,     4,     3,    12,    13,
     612,    15,    16,    17,    18,    19,   391,   392,     7,     3,
     395,   396,   397,    27,    28,    29,   495,   496,   497,   498,
      30,     4,   609,   610,   611,     0,    30,     1,     3,   282,
       4,     4,     6,    30,   609,   610,   611,     0,   656,    30,
       3,    30,   609,   610,   611,    30,   299,   300,   301,    23,
      24,    25,     0,     0,    30,     3,     3,    31,    32,    33,
       6,    35,    36,    37,     6,   544,   609,   610,   611,   681,
       0,     0,   551,     3,     3,     6,     0,    30,   557,     3,
     559,   560,   561,   562,   563,     0,   707,     0,     3,     6,
       3,   570,   679,   680,     6,     0,     6,   576,     3,   578,
     579,   580,   581,   582,   679,   680,     0,     6,    29,     3,
     589,     0,   679,   680,     3,     6,   595,     7,   597,   598,
     599,   600,   601,     6,    28,    29,    30,     6,     6,     6,
       6,     6,   610,    30,   612,    30,   679,   680,   391,   609,
     610,   611,   395,   396,   397,   732,   733,     4,    30,   609,
     610,   611,     4,     4,    75,    76,    30,   732,   733,   780,
      30,    30,    83,    30,    85,   732,   733,    30,    30,    90,
      30,    30,     4,     6,    30,    96,    97,    98,    99,   100,
      30,    30,    30,   104,    30,     6,     6,    30,    30,   732,
     733,    30,    30,    30,   609,   610,   611,   118,     6,   678,
       6,     6,   681,   681,   683,   684,   685,   686,   687,   679,
     680,    30,    30,    30,    30,    30,     6,     6,     6,   679,
     680,     7,     7,    30,   609,   610,   611,    30,   707,   150,
      30,     0,    30,    30,     3,   714,    30,   716,   717,   718,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   731,    30,    30,    30,     1,    30,     4,     4,
     181,     6,   732,   733,   679,   680,    30,    30,   747,   748,
     749,   750,   732,   733,     4,    30,    30,     4,    23,    24,
      25,     7,   203,   204,   205,   206,    31,    32,    33,    30,
      35,    36,    37,    30,   679,   680,    30,    30,    30,    30,
       7,   780,    30,   224,   225,   226,   227,   786,    30,   788,
     789,   790,   791,   792,    30,    30,    30,   732,   733,    30,
      30,    30,   243,   244,   245,   246,    30,    30,     6,     1,
       6,     3,     4,     6,     6,     7,    30,     9,    10,    30,
     261,    30,     4,   264,   265,   266,   267,   732,   733,    30,
      30,    23,    24,    25,     4,    30,     6,   278,   279,    31,
      32,    33,    30,    35,    36,    37,    38,    39,    40,    41,
      30,     6,     6,    23,    24,    25,     6,    30,    30,     4,
      30,    31,    32,    33,    30,    35,    36,    37,   309,    30,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,    30,    30,    30,
       3,    -1,   333,    -1,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   200,   201,    -1,    -1,    -1,   357,    -1,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,    -1,    -1,    -1,   378,    -1,    -1,
      -1,    -1,     6,   384,     8,   386,   387,   388,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,   400,
      -1,    -1,   403,    27,    28,    29,    30,    -1,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,   419,   420,
     421,   422,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      23,    24,    25,   282,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
     299,   300,   301,     4,    -1,     6,   457,   458,   459,   460,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    23,    24,    25,    15,    16,    17,    18,    19,
      31,    32,    33,    -1,    35,    36,    37,    27,    28,    29,
      30,    -1,    -1,    -1,   495,   496,   497,   498,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,   391,   544,     8,    -1,   395,   396,   397,    -1,
     551,    15,    16,    17,    18,    19,   557,    -1,   559,   560,
     561,   562,   563,    27,    28,    29,    30,    -1,    -1,   570,
      -1,    -1,    -1,    -1,    -1,   576,    -1,   578,   579,   580,
     581,   582,    29,    -1,     1,    -1,     3,     4,   589,     6,
       7,    -1,     9,    10,   595,    -1,   597,   598,   599,   600,
     601,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,    -1,   102,   103,   104,    -1,    -1,
      15,    16,    17,    18,    19,     1,    -1,    -1,     4,    -1,
       6,   118,    27,    28,    29,    30,    -1,   678,    -1,    -1,
     681,    -1,   683,   684,   685,   686,   687,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    -1,   150,    -1,    -1,   707,    -1,    -1,    -1,
      -1,    -1,    -1,   714,    -1,   716,   717,   718,   719,   720,
     721,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,    -1,    -1,    -1,   181,    -1,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,   747,   748,   749,   750,
      15,    16,    17,    18,    19,    -1,   203,    -1,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,   224,     4,   780,
       6,    -1,    -1,    -1,    -1,   786,    -1,   788,   789,   790,
     791,   792,    -1,    -1,    -1,    -1,   243,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,   261,    -1,    -1,   264,    -1,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,   278,   279,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,   309,    -1,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,    -1,    -1,
     327,    -1,    -1,    -1,    -1,    -1,   333,    -1,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,
     357,    -1,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,    -1,     1,    -1,    -1,
       4,   378,     6,    -1,    -1,    -1,    -1,   384,    -1,   386,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,   400,    -1,    -1,   403,    31,    32,    33,
      -1,    35,    36,    37,    -1,     1,    -1,     3,     4,    -1,
       6,     7,   419,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,     1,    -1,     3,     4,
     457,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,     1,   495,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     4,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,   544,    -1,    -1,
      -1,    -1,    -1,    -1,   551,    -1,    -1,    23,    24,    25,
     557,    -1,   559,   560,   561,    31,    32,    33,    34,    35,
      36,    37,    -1,   570,    -1,    -1,    -1,    -1,    -1,   576,
      -1,   578,   579,   580,    29,     1,    -1,     3,     4,    -1,
       6,     7,   589,     9,    10,    -1,    -1,    -1,   595,    -1,
     597,   598,   599,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,     1,    -1,    -1,     4,    83,     6,
      85,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,    23,    24,    25,   104,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    -1,     1,   118,    -1,     4,    -1,     6,    -1,    -1,
      -1,   678,    -1,    -1,   681,    -1,   683,   684,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,   150,    35,    36,    37,    -1,
     707,    -1,    -1,    -1,    -1,    -1,    -1,   714,    -1,   716,
     717,   718,   719,   720,   721,   722,   723,   724,   725,   726,
     727,   728,   729,    -1,    -1,    -1,   181,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
     747,    15,    16,    17,    18,    19,    20,    21,   203,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,   224,
      -1,    -1,    -1,   780,    -1,    -1,    -1,    -1,    -1,   786,
      -1,   788,   789,   790,    -1,    -1,    -1,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,   261,     6,     7,   264,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    -1,    -1,   323,   324,
      -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,   333,    -1,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      -1,    -1,   347,   348,    -1,    -1,   351,    -1,    -1,    -1,
      -1,    -1,   357,    -1,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,    -1,    -1,   371,   372,    -1,     1,
      -1,    -1,     4,   378,     6,    -1,    -1,    -1,    -1,   384,
      -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,   400,    -1,    -1,   403,    31,
      32,    33,    -1,    35,    36,    37,    -1,     1,    -1,     3,
       4,    -1,     6,     7,   419,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,   457,    -1,    29,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
     495,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    -1,    -1,    -1,     8,    90,    -1,    -1,    12,    13,
      95,    15,    16,    17,    18,    19,   101,    -1,    -1,     4,
     105,     6,    -1,    27,    28,    29,    30,    -1,    -1,   544,
      -1,    -1,    -1,   118,    -1,    -1,   551,    -1,    23,    24,
      25,    -1,   557,    -1,   559,    30,    31,    32,    33,     8,
      35,    36,    37,    12,    13,   570,    15,    16,    17,    18,
      19,   576,    -1,   578,    -1,   150,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,   589,    -1,    -1,    -1,    -1,    -1,
     595,    -1,   597,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,     7,   181,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,   203,    31,
      32,    33,     7,    35,    36,    37,    38,    39,    40,    41,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,     7,   243,     9,
      10,    -1,    -1,   678,    -1,    -1,   681,    -1,   683,   684,
      -1,    -1,    -1,    23,    24,    25,   261,    -1,    -1,   264,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,   707,    -1,    -1,    -1,    -1,    -1,    -1,   714,
      -1,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,    -1,    -1,   728,   729,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,   311,   312,   313,   314,
      -1,    -1,   747,    -1,    -1,   320,     8,    -1,    -1,   324,
      12,    13,   327,    15,    16,    17,    18,    19,   333,    -1,
     335,   336,   337,   338,    -1,    27,    28,    29,    30,   344,
      -1,    -1,    -1,   348,    -1,   780,   351,    -1,    -1,    -1,
      -1,   786,   357,   788,   359,   360,   361,   362,    -1,    -1,
      -1,    -1,    -1,   368,    -1,    -1,    -1,   372,    -1,     1,
      -1,    -1,     4,   378,     6,     7,    -1,    29,    10,   384,
      -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,   400,    -1,    -1,   403,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
      -1,    -1,     1,    -1,   419,     4,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,     1,    -1,    -1,
       4,    83,     6,    85,    23,    24,    25,    -1,    90,    91,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    23,
      24,    25,   457,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    -1,     1,   118,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     495,    27,    28,    29,    -1,    31,    32,    33,   150,    35,
      36,    37,    38,    39,    40,    41,    -1,   159,    -1,    -1,
      -1,   163,     8,     1,    -1,    -1,     4,    -1,     6,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,   181,
      -1,    27,    28,    29,    30,    23,    24,    25,    -1,   544,
      -1,    -1,    -1,    31,    32,    33,   551,    35,    36,    37,
      -1,   203,   557,    -1,   559,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,   570,     4,    -1,     6,    -1,
      -1,   576,   224,   578,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   589,    23,    24,    25,    -1,    -1,
     595,   243,   597,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,   261,
       9,    10,   264,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      29,   283,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,   311,
      -1,    -1,     1,    -1,    -1,     4,    -1,     6,    -1,    -1,
      -1,    -1,    -1,   678,    -1,   327,   681,    -1,   683,   684,
      -1,   333,    -1,   335,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,   351,
      -1,    -1,   707,    -1,    -1,   357,    -1,   359,    -1,   714,
      -1,   716,   717,   718,   719,    -1,    -1,    -1,    -1,    -1,
     725,    -1,    -1,    -1,   729,   377,   378,    -1,    -1,    -1,
       1,    -1,   384,     4,   386,     6,     8,    -1,    -1,    29,
     392,    -1,   747,    15,    16,    17,    18,    19,   400,   401,
      -1,   403,    23,    24,    25,    27,    28,    29,    30,    -1,
      31,    32,    33,    -1,    35,    36,    37,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   780,    -1,    -1,    -1,     1,
      -1,   786,     4,   788,     6,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,
      90,    23,    24,    25,    94,   457,    -1,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   118,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      29,    -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    -1,    31,    32,    33,
     150,    35,    36,    37,    38,    -1,    40,    41,     7,   521,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    75,    76,    27,    28,
      29,   181,   544,    -1,    83,    -1,    85,    -1,    -1,   551,
      -1,    90,    -1,    -1,    93,   557,    -1,   559,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,     1,    -1,   570,     4,
      -1,     6,    -1,    -1,   576,    -1,   578,    -1,    -1,   118,
      -1,    -1,    -1,    -1,   224,    -1,    -1,   589,    23,    24,
      25,    -1,    -1,   595,    -1,   597,    31,    32,    33,    -1,
      35,    36,    37,   243,    -1,    -1,    -1,   609,   610,   611,
     612,   150,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,   261,     6,     7,   264,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   181,    27,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,   309,
      -1,   311,   312,   313,    -1,    -1,   678,   679,   680,   681,
       7,   683,   684,    -1,    -1,   224,    -1,   327,    15,    16,
      17,    18,    19,   333,    -1,   335,   336,   337,    -1,    -1,
      27,    28,    29,    -1,   243,   707,    -1,    -1,     4,    -1,
       6,   351,   714,    -1,   716,    -1,    -1,   357,    -1,   359,
     360,   361,   261,    -1,    -1,   264,    -1,    23,    24,    25,
     732,   733,    -1,    -1,    30,    31,    32,    33,   378,    35,
      36,    37,    -1,    -1,   384,   747,   386,     8,    -1,    -1,
      -1,    12,    13,    29,    15,    16,    17,    18,    19,    -1,
     400,    -1,    -1,   403,    -1,    -1,    27,    28,    29,    30,
     309,    -1,   311,   312,    -1,    -1,    -1,    -1,   780,   419,
      -1,    -1,    -1,    -1,   786,    -1,   788,    -1,   327,    -1,
      -1,    -1,    -1,    -1,   333,    -1,   335,   336,    -1,    75,
      76,    -1,    -1,     4,    -1,     6,     7,    83,    -1,    85,
      -1,    -1,   351,    -1,    90,    -1,    -1,   457,   357,    -1,
     359,   360,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    -1,    -1,   378,
      -1,    -1,   118,    -1,    -1,   384,    -1,   386,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,
       1,   400,     3,     4,   403,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
     419,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,   544,   181,    -1,    -1,    -1,    -1,
      -1,   551,     4,    -1,     6,    -1,    -1,   557,   457,   559,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
     570,    23,    24,    25,    -1,    -1,   576,    -1,   578,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,   224,   589,
      -1,    -1,    -1,    -1,    -1,   595,   495,   597,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,   243,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,   261,    -1,    -1,   264,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,   544,     8,    -1,    -1,    -1,
      12,    13,   551,    15,    16,    17,    18,    19,   557,    -1,
     559,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,   570,    -1,   309,    -1,   311,    -1,   576,   678,   578,
      -1,   681,    -1,   683,   684,    -1,    -1,    -1,    -1,    -1,
     589,   327,    -1,    -1,    -1,    -1,   595,   333,   597,   335,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   707,    -1,    -1,
      -1,    -1,    -1,    -1,   714,   351,   716,   717,   718,    -1,
      -1,   357,     1,   359,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   378,    -1,    23,    24,    25,   747,   384,    -1,
     386,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,   400,    -1,    -1,   403,    -1,    -1,
       4,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,   678,
     780,    -1,   681,   419,   683,   684,   786,    -1,   788,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,     4,    -1,     6,    -1,   707,    -1,
      -1,    -1,    -1,    -1,    -1,   714,    -1,   716,   717,    -1,
      -1,   457,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,   747,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,   495,
      23,    24,    25,    -1,    27,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,   780,    -1,    -1,    -1,    -1,    -1,   786,    -1,   788,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,   544,    -1,
      -1,    -1,    -1,    -1,    -1,   551,    -1,    -1,    23,    24,
      25,   557,    -1,   559,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,   570,    40,    41,    -1,    -1,    -1,
     576,    -1,   578,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,   589,    -1,    27,    28,    29,    30,   595,
       1,   597,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,   678,    -1,     6,   681,     8,   683,   684,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,   707,    -1,    -1,    -1,    -1,    -1,    -1,   714,    -1,
     716,    -1,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,   747,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,   780,    26,    27,    28,    29,    30,
     786,     1,   788,     3,     4,    -1,     6,     7,    -1,     9,
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
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
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
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
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
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
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
      38,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,     1,    -1,     3,     4,    -1,
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
      12,    13,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,     1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    28,    29,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
       1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,     1,    -1,     3,     4,     6,     6,     7,    -1,     9,
      10,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    23,    24,    25,    27,    28,    29,    30,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,     1,    -1,     3,     4,    -1,     6,     7,     7,
       9,    10,    -1,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    23,    24,    25,    -1,    -1,    27,
      28,    29,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
       7,     9,    10,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    23,    24,    25,    -1,    -1,
      27,    28,    29,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,     1,    -1,     3,     4,    -1,     6,
       7,     7,     9,    10,    -1,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    23,    24,    25,    -1,
      -1,    27,    28,    29,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,     1,    -1,     3,     4,    -1,
       6,     7,     7,     9,    10,    -1,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    23,    24,    25,
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
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      23,    24,    25,    -1,    -1,    27,    28,    29,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,     1,
      -1,     3,     4,    -1,     6,     7,     7,     9,    10,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    23,    24,    25,    -1,    -1,    27,    28,    29,    31,
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
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
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
       6,     7,    -1,     9,    10,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    23,    24,    25,
      27,    28,    29,    30,    -1,    31,    32,    33,    -1,    35,
      36,    37,    38,    -1,    40,    41,     1,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    23,    24,
      25,    27,    28,    29,    30,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    -1,    23,
      24,    25,    27,    28,    29,    30,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    40,    41,     1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      23,    24,    25,    27,    28,    29,    30,    -1,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    40,    41,     1,
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
       9,    10,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    23,    24,    25,    27,    28,    29,
      30,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,     1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    23,    24,    25,    27,    28,
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
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,     4,
      -1,     6,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    40,    41,     4,    -1,     6,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    -1,    23,    24,    25,     4,    -1,     6,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      -1,    -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,     4,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      23,    24,    25,     4,    -1,     6,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    -1,    -1,     4,    -1,
       6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    23,    24,    25,     4,
      -1,     6,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    23,    24,    25,     4,    -1,     6,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      23,    24,    25,     4,    -1,     6,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,     4,    -1,
       6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    23,    24,    25,
       4,    -1,     6,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,     4,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    23,    24,    25,     4,    -1,     6,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    -1,
      -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      23,    24,    25,     4,    -1,     6,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,     4,    -1,
       6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    23,    24,    25,
       4,    -1,     6,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,     4,    -1,     6,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    23,    24,    25,     4,    -1,     6,
      -1,    -1,    31,    32,    33,    -1,    35,    36,    37,    -1,
      -1,    -1,     4,    -1,     6,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,
      37,    23,    24,    25,     4,    -1,     6,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,     4,
      -1,     6,    -1,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    23,    24,
      25,     4,    -1,     6,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    -1,    -1,    -1,     4,    -1,     6,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    23,    24,    25,     4,    -1,
       6,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,     4,    -1,     6,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,    35,
      36,    37,    23,    24,    25,     4,    -1,     6,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,     6,    35,    36,    37,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,     6,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,     6,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
       6,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
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
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,     8,    -1,    -1,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
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
      19,    -1,    -1,    22,    -1,    -1,    -1,     7,    27,    28,
      29,    30,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    -1,     7,    -1,    27,    28,    29,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    -1,     7,    -1,    27,
      28,    29,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    -1,     7,    -1,    27,    28,    29,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30
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
       4,     5,    51,    30,    30,    51,     4,    52,    52,    51,
      10,    10,     1,     6,    23,    24,    25,    31,    32,    33,
      35,    36,    37,    64,    65,    66,    67,    68,    69,    70,
      71,     4,     7,     4,     6,    23,    24,    25,    31,    32,
      33,    35,    36,    37,    64,    65,    66,    67,    68,    69,
      70,    71,     4,     6,    23,    24,    25,    31,    32,    33,
      35,    36,    37,    64,    65,    66,    67,    68,    69,    70,
      71,     6,     4,     4,     6,    23,    24,    25,    31,    32,
      33,    35,    36,    37,    69,    70,    71,     7,    12,    13,
       1,     7,    10,    41,    53,    55,    56,    58,    59,    60,
      61,    63,     4,    47,    63,     7,     8,     1,     9,    46,
      47,    52,    54,    54,     1,    63,    70,    70,    70,     6,
       6,     6,    29,    28,    27,    15,    16,    17,    18,    19,
      11,    12,    13,    20,    21,    14,    22,     6,     1,    63,
      70,    70,    70,     6,     6,     6,    29,    28,    27,    15,
      16,    17,    18,    19,    11,    12,    13,    20,    21,    14,
      22,     6,     1,    63,    70,    70,    70,     6,     6,     6,
      29,    28,    27,    15,    16,    17,    18,    19,    11,    12,
      13,    20,    21,    14,    22,    30,    72,    26,     6,     1,
      63,    70,    70,    70,     6,     6,     6,    14,    22,    69,
      69,    10,    57,     1,     9,    46,    47,    52,    54,    58,
       6,     6,     7,    26,     9,    54,    54,    54,    30,    30,
      34,    63,     4,    34,    63,    65,    66,    67,     4,     6,
      23,    24,    25,    31,    32,    33,    35,    36,    37,    68,
      69,    70,    71,    68,    68,    68,    68,    67,    69,    69,
      68,    67,    70,    70,    30,    72,    30,    30,    34,    63,
       4,    34,    63,    65,    66,    67,     4,     6,    23,    24,
      25,    31,    32,    33,    35,    36,    37,    68,    69,    70,
      71,    68,    68,    68,    68,    67,    69,    69,    68,    67,
      70,    70,    30,    72,    30,    30,    34,    63,     4,    34,
      63,    65,    66,    67,     4,     6,    23,    24,    25,    31,
      32,    33,    35,    36,    37,    68,    69,    70,    71,    68,
      68,    68,    68,    67,    69,    69,    68,    67,    70,    70,
      30,    13,    63,    30,    72,    30,    30,    34,    63,     4,
      34,    63,    70,    70,    54,    52,     9,    54,    54,    54,
       1,    63,     1,    62,    13,    63,    30,    30,    30,    30,
      30,     6,     1,    63,    70,    70,    70,     6,     6,     6,
      12,    13,    14,    22,    30,    30,    30,    30,    30,    30,
       6,     1,    63,    70,    70,    70,     6,     6,     6,    12,
      13,    14,    22,    30,    30,    30,    30,    30,    30,     6,
       1,    63,    70,    70,    70,     6,     6,     6,    12,    13,
      14,    22,    63,    30,    30,    30,    30,    30,    30,    30,
      30,    30,     7,    63,    30,    72,    30,    30,    34,    63,
       4,    34,    63,    69,    69,    70,    70,    30,    72,    30,
      30,    34,    63,     4,    34,    63,    69,    69,    70,    70,
      30,    72,    30,    30,    34,    63,     4,    34,    63,    69,
      69,    70,    70,    52,     4,    47,    52,    52,     1,    62,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    26,    57,
      30,     7,     4,     6,    13,    23,    24,    25,    31,    32,
      33,    35,    36,    37,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    52,    52,     1,    62,     6,     1,    63,
      63,    70,    70,    70,     6,     6,     6,    29,    28,    27,
      15,    16,    17,    18,    19,    11,    12,    13,    20,    21,
      14,    22,    30,    30,    30,    72,    30,    30,    34,    63,
       4,    34,    63,    65,    66,    67,     4,     6,    23,    24,
      25,    31,    32,    33,    35,    36,    37,    68,    69,    70,
      71,    68,    68,    68,    68,    67,    69,    69,    68,    67,
      70,    70,    52,    52,    30,    30,    30,    30,    30,    30,
       6,     1,    63,    70,    70,    70,     6,     6,     6,    12,
      13,    14,    22,    30,    72,    30,    30,    34,    63,     4,
      34,    63,    69,    69,    70,    70,    30,    30,    30,    30,
      30,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    46,
      47,    47,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    50,    50,    51,    51,    51,    52,    52,    52,
      52,    52,    53,    53,    54,    54,    54,    54,    54,    55,
      55,    55,    55,    55,    56,    57,    58,    58,    59,    60,
      60,    60,    60,    61,    62,    62,    62,    62,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     4,     2,
       3,     4,     5,     4,     5,     3,     2,     6,     3,     8,
       7,     7,     2,     3,     0,     4,     5,     1,     1,     1,
       1,     1,     2,     3,     1,     2,     2,     2,     2,     5,
       5,     7,     5,     3,     1,     1,     1,     2,     2,     9,
       7,     5,     9,     1,     1,     1,     2,     2,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     2,     2,     2,     1,     1,     1,     3,     3,     4,
       3,     4,     4,     4,     4,     4,     1,     1,     3
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
#line 4476 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 68 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root, -1, false, "-");
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 4485 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 72 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root, -1, false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 4495 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 80 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 4503 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 83 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 4511 "src/parser.c"
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
#line 4528 "src/parser.c"
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
#line 4548 "src/parser.c"
    break;

  case 9: /* Declaration: TYPE error  */
#line 117 "src/parser.y"
                             {
			yyerrok;
			(yyval.state)=NULL;
		}
#line 4557 "src/parser.c"
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
#line 4592 "src/parser.c"
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
#line 4629 "src/parser.c"
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
#line 4643 "src/parser.c"
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
#line 4656 "src/parser.c"
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
#line 4668 "src/parser.c"
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
#line 4680 "src/parser.c"
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
#line 4699 "src/parser.c"
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
#line 4733 "src/parser.c"
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
#line 4758 "src/parser.c"
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
#line 4802 "src/parser.c"
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
#line 4841 "src/parser.c"
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
#line 4881 "src/parser.c"
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
#line 4903 "src/parser.c"
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
#line 4930 "src/parser.c"
    break;

  case 24: /* ParamList: %empty  */
#line 449 "src/parser.y"
             {
			(yyval.state) = NULL;
		}
#line 4938 "src/parser.c"
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
#line 4960 "src/parser.c"
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
#line 4988 "src/parser.c"
    break;

  case 27: /* Statement: CompStatement  */
#line 499 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 4994 "src/parser.c"
    break;

  case 28: /* Statement: JmpStatement  */
#line 500 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 5000 "src/parser.c"
    break;

  case 29: /* Statement: SelStatement  */
#line 501 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 5006 "src/parser.c"
    break;

  case 30: /* Statement: ItStatement  */
#line 502 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 5012 "src/parser.c"
    break;

  case 31: /* Statement: ExpStatement  */
#line 503 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 5018 "src/parser.c"
    break;

  case 32: /* CompStatement: LCB StatementExp  */
#line 508 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 5026 "src/parser.c"
    break;

  case 33: /* CompStatement: error LCB StatementExp  */
#line 512 "src/parser.y"
                                       {
			(yyval.state) = (yyvsp[0].state);
		}
#line 5034 "src/parser.c"
    break;

  case 34: /* StatementExp: RCB  */
#line 518 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 5040 "src/parser.c"
    break;

  case 35: /* StatementExp: Declaration StatementExp  */
#line 519 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5050 "src/parser.c"
    break;

  case 36: /* StatementExp: Definition StatementExp  */
#line 524 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5060 "src/parser.c"
    break;

  case 37: /* StatementExp: Statement StatementExp  */
#line 529 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5070 "src/parser.c"
    break;

  case 38: /* StatementExp: error RCB  */
#line 534 "src/parser.y"
                    {yyerrok; (yyval.state)=NULL;}
#line 5076 "src/parser.c"
    break;

  case 39: /* SelStatement: IfHead LP Expression RP Statement  */
#line 539 "src/parser.y"
                                                  {
			(yyval.state) = new_node("IF", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 5087 "src/parser.c"
    break;

  case 40: /* SelStatement: IfHead LP Expression RP Definition  */
#line 545 "src/parser.y"
                                                     {
			(yyval.state) = new_node("IF", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
		}
#line 5098 "src/parser.c"
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
#line 5112 "src/parser.c"
    break;

  case 42: /* SelStatement: IfHead LP error RP Statement  */
#line 563 "src/parser.y"
                                         {
		(yyval.state) = new_node("IF", root, scope->stack[0], false, "-");
		add_child((yyval.state), (yyvsp[0].state));
	}
#line 5121 "src/parser.c"
    break;

  case 43: /* SelStatement: error ElseHead Statement  */
#line 567 "src/parser.y"
                                     {(yyval.state)=NULL;decrease_depth_scope(scope);yyerrok;}
#line 5127 "src/parser.c"
    break;

  case 44: /* IfHead: IF  */
#line 570 "src/parser.y"
           {
		increase_depth_scope(scope);
	}
#line 5135 "src/parser.c"
    break;

  case 45: /* ElseHead: ELSE  */
#line 576 "src/parser.y"
             {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
	}
#line 5144 "src/parser.c"
    break;

  case 46: /* ExpStatement: SEMI  */
#line 583 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 5150 "src/parser.c"
    break;

  case 47: /* ExpStatement: Expression SEMI  */
#line 584 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 5158 "src/parser.c"
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
#line 5174 "src/parser.c"
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
#line 5187 "src/parser.c"
    break;

  case 50: /* ItStatement: ForHead LP ExpAtt SEMI error RP Statement  */
#line 613 "src/parser.y"
                                                          {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));

			decrease_depth_scope(scope);
			yyerrok;
		}
#line 5200 "src/parser.c"
    break;

  case 51: /* ItStatement: ForHead LP error RP Statement  */
#line 622 "src/parser.y"
                                              {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[0].state));
			
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 5212 "src/parser.c"
    break;

  case 52: /* ItStatement: ForHead LP ExpAtt SEMI ExpAtt SEMI error RP Statement  */
#line 630 "src/parser.y"
                                                                      {
			(yyval.state) = new_node("FOR", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[0].state));
			decrease_depth_scope(scope);
			yyerrok;
		}
#line 5225 "src/parser.c"
    break;

  case 53: /* ForHead: FOR  */
#line 641 "src/parser.y"
                    {
			increase_depth_scope(scope);
		}
#line 5233 "src/parser.c"
    break;

  case 54: /* ExpAtt: Expression  */
#line 647 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 5241 "src/parser.c"
    break;

  case 55: /* ExpAtt: Definition  */
#line 651 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 5249 "src/parser.c"
    break;

  case 56: /* ExpAtt: error SEMI  */
#line 655 "src/parser.y"
                   {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 5258 "src/parser.c"
    break;

  case 57: /* ExpAtt: error COM  */
#line 660 "src/parser.y"
                  {
		yyerrok;
		(yyval.state) = NULL;
	}
#line 5267 "src/parser.c"
    break;

  case 58: /* Expression: LogicalOrExpression  */
#line 668 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 5273 "src/parser.c"
    break;

  case 59: /* LogicalOrExpression: LogicalAndExpression  */
#line 672 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 5279 "src/parser.c"
    break;

  case 60: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 673 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root, scope->stack[0], false, "int");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 5290 "src/parser.c"
    break;

  case 61: /* LogicalAndExpression: EqualityExpression  */
#line 682 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 5296 "src/parser.c"
    break;

  case 62: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 683 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root, scope->stack[0], false, "int");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5306 "src/parser.c"
    break;

  case 63: /* EqualityExpression: RelationalExpression  */
#line 691 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 5312 "src/parser.c"
    break;

  case 64: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 692 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root, scope->stack[0], false, "int");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 5322 "src/parser.c"
    break;

  case 65: /* RelationalExpression: AdditiveExpression  */
#line 701 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 5328 "src/parser.c"
    break;

  case 66: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 702 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 5338 "src/parser.c"
    break;

  case 67: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 707 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5348 "src/parser.c"
    break;

  case 68: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 712 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5358 "src/parser.c"
    break;

  case 69: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 717 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5368 "src/parser.c"
    break;

  case 70: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 722 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5378 "src/parser.c"
    break;

  case 71: /* RelationalExpression: AdditiveExpression MAP AdditiveExpression  */
#line 727 "src/parser.y"
                                                      {
				(yyval.state) = new_node(">>", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5388 "src/parser.c"
    break;

  case 72: /* RelationalExpression: AdditiveExpression FIL RelationalExpression  */
#line 732 "src/parser.y"
                                                        {
				(yyval.state) = new_node("<<", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 5398 "src/parser.c"
    break;

  case 73: /* RelationalExpression: AdditiveExpression TWD RelationalExpression  */
#line 737 "src/parser.y"
                                                      {
			(yyval.state) = new_node(":", root, scope->stack[0], false, "float LIST ");
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 5408 "src/parser.c"
    break;

  case 74: /* AdditiveExpression: MultiplicativeExpression  */
#line 745 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 5414 "src/parser.c"
    break;

  case 75: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 746 "src/parser.y"
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
#line 5430 "src/parser.c"
    break;

  case 76: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 757 "src/parser.y"
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
#line 5446 "src/parser.c"
    break;

  case 77: /* MultiplicativeExpression: UnaryExpression  */
#line 771 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 5452 "src/parser.c"
    break;

  case 78: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 772 "src/parser.y"
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
#line 5468 "src/parser.c"
    break;

  case 79: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 783 "src/parser.y"
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
#line 5484 "src/parser.c"
    break;

  case 80: /* UnaryExpression: PrimaryExpression  */
#line 797 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 5490 "src/parser.c"
    break;

  case 81: /* UnaryExpression: TNR UnaryExpression  */
#line 798 "src/parser.y"
                                    {

			(yyval.state) = new_node("!", root, scope->stack[0], false,  (yyvsp[0].state)->type);
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 5501 "src/parser.c"
    break;

  case 82: /* UnaryExpression: HD UnaryExpression  */
#line 804 "src/parser.y"
                                   {
			if (equal_to((yyvsp[0].state)->type, "float LIST ")) {
				(yyval.state) = new_node("?", root, scope->stack[0], false, "float");
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("?", root, scope->stack[0], false, "int");
				add_child((yyval.state), (yyvsp[0].state));
			}
		}
#line 5515 "src/parser.c"
    break;

  case 83: /* UnaryExpression: TR UnaryExpression  */
#line 813 "src/parser.y"
                                   {
			if (equal_to((yyvsp[0].state)->type, "float LIST ")) {
				(yyval.state) = new_node("%", root, scope->stack[0], false, "float LIST ");
				add_child((yyval.state), (yyvsp[0].state));
			} else {
				(yyval.state) = new_node("%", root, scope->stack[0], false, "int LIST ");
				add_child((yyval.state), (yyvsp[0].state));
			}
		}
#line 5529 "src/parser.c"
    break;

  case 84: /* PrimaryExpression: IDENTIFIER  */
#line 824 "src/parser.y"
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
#line 5548 "src/parser.c"
    break;

  case 85: /* PrimaryExpression: NUM_CONST_INT  */
#line 839 "src/parser.y"
                          {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%ld", (yyvsp[0].num_int));
			(yyval.state) = new_node(str, root, scope->stack[0], false, "int");
		}
#line 5558 "src/parser.c"
    break;

  case 86: /* PrimaryExpression: NUM_CONST_FLOAT  */
#line 844 "src/parser.y"
                            {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", (yyvsp[0].num_float));
			(yyval.state) = new_node(str, root, scope->stack[0], false, "float");
		}
#line 5568 "src/parser.c"
    break;

  case 87: /* PrimaryExpression: LP Expression RP  */
#line 850 "src/parser.y"
                                 {
			(yyval.state) = new_node("PrimaryExpression", root, scope->stack[0], false, (yyvsp[-1].state)->type); 
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 5577 "src/parser.c"
    break;

  case 88: /* PrimaryExpression: LP error RP  */
#line 855 "src/parser.y"
                            {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 5586 "src/parser.c"
    break;

  case 89: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 860 "src/parser.y"
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
#line 5666 "src/parser.c"
    break;

  case 90: /* PrimaryExpression: IDENTIFIER LP RP  */
#line 935 "src/parser.y"
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
#line 5719 "src/parser.c"
    break;

  case 91: /* PrimaryExpression: WRITE LP STR RP  */
#line 983 "src/parser.y"
                                {
			(yyval.state) = new_node("write_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], true, "String"));

		}
#line 5729 "src/parser.c"
    break;

  case 92: /* PrimaryExpression: WRITE LP Expression RP  */
#line 988 "src/parser.y"
                                   {
			(yyval.state) = new_node("write_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 5738 "src/parser.c"
    break;

  case 93: /* PrimaryExpression: READ LP IDENTIFIER RP  */
#line 992 "src/parser.y"
                                      {
			char* exp_type = get_type_var((yyvsp[-1].string), s_table, scope, true);

			(yyval.state) = new_node("read_call", root, scope->stack[0], false, exp_type);
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], true, exp_type));
		}
#line 5749 "src/parser.c"
    break;

  case 94: /* PrimaryExpression: WRITE_LN LP STR RP  */
#line 998 "src/parser.y"
                                    {
			(yyval.state) = new_node("write_ln_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), new_node((yyvsp[-1].string), root, scope->stack[0], false, "String"));
		}
#line 5758 "src/parser.c"
    break;

  case 95: /* PrimaryExpression: WRITE_LN LP Expression RP  */
#line 1002 "src/parser.y"
                                           {
			(yyval.state) = new_node("write_ln_call", root, scope->stack[0], false, "-");
			add_child((yyval.state), (yyvsp[-1].state));
		}
#line 5767 "src/parser.c"
    break;

  case 96: /* PrimaryExpression: NIL  */
#line 1007 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root, scope->stack[0], false, "float LIST ");}
#line 5773 "src/parser.c"
    break;

  case 97: /* Params: Expression  */
#line 1012 "src/parser.y"
                   {
		(yyval.state) = new_node("Args", root, scope->stack[0], false, (yyvsp[0].state)->type);
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 5783 "src/parser.c"
    break;

  case 98: /* Params: Params COM Expression  */
#line 1018 "src/parser.y"
                              {
		(yyval.state) = new_node("Args", root, scope->stack[0], false, (yyvsp[0].state)->type);
		add_child((yyval.state), (yyvsp[-2].state)); 
		add_child((yyval.state), (yyvsp[0].state));
		push_param_to_paramlist(s_table, check_type_subtree((yyvsp[0].state), s_table, scope), &args_last_f, &args_count);
	}
#line 5794 "src/parser.c"
    break;


#line 5798 "src/parser.c"

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

#line 1026 "src/parser.y"

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
