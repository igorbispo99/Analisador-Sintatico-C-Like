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
  YYSYMBOL_FunctionHead = 44,              /* FunctionHead  */
  YYSYMBOL_ParamList = 45,                 /* ParamList  */
  YYSYMBOL_Statement = 46,                 /* Statement  */
  YYSYMBOL_CompStatement = 47,             /* CompStatement  */
  YYSYMBOL_StatementExp = 48,              /* StatementExp  */
  YYSYMBOL_SelStatement = 49,              /* SelStatement  */
  YYSYMBOL_ExpStatement = 50,              /* ExpStatement  */
  YYSYMBOL_JmpStatement = 51,              /* JmpStatement  */
  YYSYMBOL_ItStatement = 52,               /* ItStatement  */
  YYSYMBOL_ExpAtt = 53,                    /* ExpAtt  */
  YYSYMBOL_Expression = 54,                /* Expression  */
  YYSYMBOL_LogicalOrExpression = 55,       /* LogicalOrExpression  */
  YYSYMBOL_LogicalAndExpression = 56,      /* LogicalAndExpression  */
  YYSYMBOL_EqualityExpression = 57,        /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 58,      /* RelationalExpression  */
  YYSYMBOL_AdditiveExpression = 59,        /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 60,  /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 61,           /* UnaryExpression  */
  YYSYMBOL_PrimaryExpression = 62,         /* PrimaryExpression  */
  YYSYMBOL_Params = 63                     /* Params  */
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
#define YYLAST   4469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  346

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
       0,    53,    53,    57,    61,    69,    72,    75,    82,    91,
     102,   114,   124,   132,   149,   163,   183,   187,   197,   198,
     199,   200,   201,   202,   206,   212,   213,   218,   223,   231,
     236,   245,   246,   252,   259,   268,   272,   279,   283,   284,
     293,   294,   302,   303,   311,   312,   317,   322,   327,   332,
     340,   341,   346,   354,   355,   360,   365,   370,   375,   380,
     388,   389,   393,   399,   400,   405,   406,   407,   411,   413,
     415
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
  "Declaration", "Definition", "FunctionDefinition", "FunctionHead",
  "ParamList", "Statement", "CompStatement", "StatementExp",
  "SelStatement", "ExpStatement", "JmpStatement", "ItStatement", "ExpAtt",
  "Expression", "LogicalOrExpression", "LogicalAndExpression",
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

#define YYPACT_NINF (-177)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   246,    14,     9,   375,   399,   446,   463,    47,    88,
      32,  -177,   475,     1,   483,    93,    57,    46,   487,    13,
    2359,   556,    65,    46,  2372,   126,   904,   385,  2408,   563,
      10,    10,  3450,  3469,    85,    97,   373,  2359,  2359,  2359,
    2421,   631,  2457,  2470,  2506,  2519,   107,    18,    43,    38,
    1121,   763,  3488,  3507,  3526,   116,   654,   121,   142,   102,
     546,  2987,   108,  3545,  3564,   385,   549,  2555,   660,   689,
     716,  2568,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   617,   617,   617,   617,   617,   617,   617,    67,   159,
     127,   185,  2604,  3583,   137,   170,   176,   179,   184,   122,
    3965,   877,  1054,  3906,  3924,  3942,  3602,  3621,  3640,  3659,
    3678,  3697,  3716,  3735,   171,   160,   620,  3754,  1024,   549,
     188,    46,   190,   175,   232,    67,   720,  2911,   634,   186,
    2617,   191,  2911,  2653,  2666,   385,    26,    26,  3984,  4004,
     129,    -2,   354,  4423,  4323,  4024,  4044,  4064,  3036,  2702,
    2942,   385,    31,    31,  3058,  3081,    30,   134,   224,   452,
    3772,  3104,  3127,  3150,   584,   385,    92,    92,  1152,  1188,
      45,   112,   669,   426,  1764,  1224,  1260,  1296,   102,  3012,
    2715,   332,  2016,  2751,   195,   244,   389,  2029,  2065,  2078,
    2114,  2127,   248,  2962,   243,   263,  2764,  2666,  2666,  2666,
    2800,   264,  4084,  4104,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     102,   285,  3173,  3196,   620,   620,   620,   620,   620,   620,
     620,   620,   620,   620,   620,   620,   620,   620,   620,   620,
     102,   290,  1332,  1368,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   546,   546,   546,   546,
     194,   617,  2163,  2751,  2751,  2751,  2176,   385,   549,  2212,
    2225,   385,  2813,  2849,  2862,  4124,    56,   358,  4439,  4342,
    4361,  4380,  4399,  4418,  4144,  4164,  4184,  4204,  4224,  4244,
    4264,  4284,   214,  3219,   167,   321,  3948,  3795,  3818,  3841,
    3864,  3887,  3242,  3265,  3288,  3311,  3334,  3357,  3380,  3403,
     218,  1404,   984,  1098,  1980,  1800,  1836,  1872,  1908,  1944,
    1440,  1476,  1512,  1548,  1584,  1620,  1656,  1692,  4304,   267,
    2261,  2274,  2310,   292,   310,   294,  3426,  1728,  1024,   549,
    2898,   319,   634,   300,  1024,  2323
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
       0,     0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,  -177,  -177,   328,   161,   209,  -177,  -177,   215,  -110,
     -17,   -27,  -115,   -13,  -113,  -111,   -99,   -26,   736,   876,
     818,   734,   609,   502,   287,    52,  -176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    37,    38,     7,     8,   115,    39,
      40,    41,    42,    43,    44,    45,    96,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    91
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    62,   260,   188,    16,   190,    56,   191,   123,    11,
      68,    69,    70,     1,   148,     2,    27,   130,     9,    10,
     124,    22,   133,    67,   199,   -37,   205,   -38,   -38,   131,
      61,    17,   135,    90,    92,   150,    15,   151,   -37,    94,
      97,    32,    33,    23,   292,   -40,   -37,    72,   -37,   -37,
     -38,   -37,   -37,    13,   -37,   -37,    20,   138,   139,   224,
     -37,    19,   154,   155,   310,    74,   -40,   -40,    55,   -37,
     -37,    73,   -38,   265,   244,   114,   -37,   -37,   -37,   147,
     -37,   -37,    63,    64,   205,   -39,   -39,   199,   199,   199,
     122,    65,   192,    97,   -14,    14,   164,   -16,   165,   -15,
      18,   187,   195,    66,   126,   189,   150,   200,   151,   201,
     -68,   163,   177,   -38,    71,   -38,   -38,   147,   -38,   -38,
      88,   -38,   -38,   168,   169,   221,   152,   153,   149,   -41,
      57,    58,   -68,   154,   155,   -69,   -38,   -38,    93,   241,
     245,   -38,   -38,   -38,   -38,   -38,    89,   -38,   -38,    74,
     -41,   -41,    90,   265,   265,   265,   266,   -69,   204,   -37,
     192,     6,   225,   -38,   -38,     6,   180,   118,   163,   334,
     272,   273,   274,   269,   120,   -39,   -29,   -36,   -29,   -29,
     147,   -29,   -29,   119,   -29,   -29,   -35,   147,   202,   203,
     121,   -39,   125,   116,    90,   225,   -39,   -39,   -70,   -29,
     -29,   267,   116,   147,   222,   223,   -29,   -29,   -29,   127,
     -29,   -29,    73,   -39,    90,   117,   -17,   147,   242,   243,
     -70,   132,   116,   188,   328,   190,   116,   191,   340,   188,
     163,   190,   -40,   191,   345,   329,   330,   331,   332,   128,
     341,   333,    97,   343,   336,   335,    -7,    -7,   337,    -7,
     268,   226,   -40,   -40,   -40,   270,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   163,   -36,   -10,    95,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   -35,   275,   197,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   192,    97,   146,   293,   195,   339,   192,   147,
     311,   187,   338,   147,   -10,   189,   342,   187,    95,   -41,
     344,   189,    12,   -23,     0,   -23,   -23,   194,   -23,   -23,
     129,   -23,   -23,   198,   263,     0,   162,   176,   226,   -41,
     -41,   -41,   146,     0,     0,     0,   -23,   -23,   197,   197,
     197,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,   108,
     109,   110,   111,   112,   113,    -2,     1,   148,     2,    27,
      28,   206,   -40,   -40,   -40,   206,   -41,   -41,   -41,    61,
       0,   135,   264,   148,   147,    27,   182,    30,    31,    -3,
      -3,     0,    -3,   162,    32,    33,   198,   198,   198,   136,
     137,     0,     0,    30,    31,   146,   138,   139,     0,     0,
      32,    33,   146,     0,   263,   263,   263,   -42,     0,   -42,
     -42,     0,   -42,   -42,     0,   -42,   -42,     0,   146,     0,
       0,   247,   248,   249,   250,   251,    -5,    -5,     0,    -5,
     -42,   -42,   146,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,    -6,    -6,   162,    -6,   227,   228,   229,
     230,   231,   264,   264,   264,    -4,    -4,    95,    -4,   -42,
     -42,   -42,   -42,    -8,    -8,     0,    -8,    -9,    -9,     0,
      -9,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   286,   287,   288,   289,   290,   291,   162,     0,     0,
       0,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   304,   305,   306,   307,   308,   309,   162,     0,   145,
       0,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   322,   323,   324,   325,   326,   327,     0,    95,     0,
     164,   194,   165,   179,   146,    27,   -12,   -12,   146,   -12,
       0,   161,   175,   -25,   -25,     0,   -25,   145,     0,     0,
     166,   167,     0,    30,    31,     0,     0,   168,   169,     0,
      32,    33,   106,   107,     0,   -63,     0,   -63,   -63,     0,
     240,   -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -63,     0,   -63,   -63,   -63,   161,   -63,
     -63,   148,     0,    27,   150,     0,   151,     0,     0,   146,
     145,   -24,   -24,     0,   -24,     0,   144,   145,   193,     0,
     135,    30,    31,     0,   152,   153,     0,     0,    32,    33,
       0,   154,   155,   145,   -11,   -11,     0,   -11,   136,   137,
     -26,   -26,     0,   -26,     0,   138,   139,   145,   160,   174,
     -40,     0,   -40,   -40,   144,   -40,   -40,     0,   -40,   -40,
     161,     0,     0,     0,   101,   102,   103,   104,   105,   -27,
     -27,     0,   -27,   -40,   -40,     0,   246,   -40,   -40,     0,
     -40,   -40,   -40,     0,   -40,   -40,   145,   145,   145,   145,
     145,   145,   145,   145,   284,   285,   -28,   -28,     0,   -28,
     -13,   -13,   161,   -13,     0,   160,   161,   161,   161,   161,
     161,   161,   161,   161,   302,   303,     0,   144,     0,     0,
       0,     0,   161,     0,   144,     0,   175,   175,   175,   175,
     175,   175,   175,   175,   320,   321,     0,     0,     0,     0,
     144,   143,     0,   140,     0,     0,     0,     0,     0,   145,
     -44,     0,     0,   145,   144,    80,    81,     0,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,   160,     0,     0,
     -44,   -44,   -44,   159,   173,   156,   170,     0,     0,   143,
       0,   140,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,   144,   144,   144,   279,   280,   281,   282,
     283,     0,     0,     0,     0,     0,     0,     0,     0,   160,
       0,     0,     0,   160,   160,   160,   297,   298,   299,   300,
     301,     0,     0,     0,   145,   142,     0,     0,     0,   160,
     159,     0,   156,   174,   174,   174,   315,   316,   317,   318,
     319,     0,   143,     0,   140,     0,     0,     0,     0,   143,
       0,   140,     0,     0,     0,     0,   144,   158,   172,     0,
     144,     0,     0,   142,   -47,   143,     0,   140,     0,    80,
      81,    99,   -47,   -47,   -47,   -47,   -47,     0,     0,   143,
       0,   140,     0,   141,   -47,   -47,   -47,     0,     0,     0,
      59,   -63,   159,     0,   156,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
      60,   -63,   -63,   -63,   158,   157,   171,     0,   143,   143,
     278,   141,     0,     0,     0,     0,   142,     0,    98,     0,
       0,   144,     0,   142,   159,     0,   156,     0,   159,   159,
     296,     0,     0,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,     0,   159,     0,   156,     0,   173,   173,
     314,     0,     0,   142,     0,   -39,     0,   -39,   -39,     0,
     -39,   -39,   157,   -39,   -39,     0,   158,     0,     0,     0,
       0,   143,     0,   140,   141,   143,     0,   140,   -39,   -39,
       0,   141,   245,   -39,     0,   -39,   -39,   -39,     0,   -39,
     -39,     0,   142,   277,     0,   181,     0,   141,   148,     0,
      27,   182,     0,     0,   183,     0,     0,     0,   158,     0,
       0,   141,   158,   295,     0,     0,     0,     0,    30,    31,
       0,     0,     0,     0,   157,    32,    33,   184,   158,   185,
     186,   -48,   172,   313,     0,     0,    80,    81,     0,   -48,
     -48,   -48,   -48,   -48,     0,     0,   143,     0,   140,     0,
     276,   -48,   -48,   -48,     0,   142,     0,     0,     0,   142,
       0,     0,     0,     0,     0,     0,   157,     0,     0,   -41,
     294,   -41,   -41,     0,   -41,   -41,     0,   -41,   -41,     0,
       0,     0,     0,     0,     0,     0,   157,     0,     0,     0,
     312,     0,   -41,   -41,     0,   246,   -41,   -41,   -42,   -41,
     -41,   -41,     0,   -41,   -41,     0,    75,    76,    77,    78,
      79,     0,     0,   141,     0,     0,     0,   141,   -42,   -42,
     -42,     0,     0,   -64,     0,   -64,   -64,     0,   -64,   -64,
     142,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,
     -64,   -64,     0,   -64,   -64,   -64,     0,   -64,   -64,   -67,
       0,   -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   141,   -67,
     -67,   -67,     0,   -67,   -67,   -50,     0,   -50,   -50,     0,
     -50,   -50,     0,   -50,   -50,   254,   -50,   -50,   255,   -50,
     -50,   -50,   -50,   -50,   256,   257,   258,   259,   -50,   -50,
       0,   -50,   -50,   -50,     0,   -50,   -50,   -50,     0,   -50,
     -50,   -53,     0,   -53,   -53,     0,   -53,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,   -53,   -53,
       0,   -53,   -53,   -53,     0,   -53,   -53,   -60,     0,   -60,
     -60,     0,   -60,   -60,     0,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   -60,   -60,   -60,     0,   -60,   -60,   -60,
       0,   -60,   -60,   -61,     0,   -61,   -61,     0,   -61,   -61,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,
     -61,   -61,     0,   -61,   -61,   -61,     0,   -61,   -61,   -62,
       0,   -62,   -62,     0,   -62,   -62,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,     0,   -62,
     -62,   -62,     0,   -62,   -62,   -65,     0,   -65,   -65,     0,
     -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -65,     0,   -65,   -65,   -65,     0,   -65,
     -65,   -51,     0,   -51,   -51,     0,   -51,   -51,     0,   -51,
     -51,   254,   -51,   -51,   255,   -51,   -51,   -51,   -51,   -51,
     256,   257,   258,   259,   -51,   -51,     0,   -51,   -51,   -51,
       0,   -51,   -51,   -51,     0,   -51,   -51,   -52,     0,   -52,
     -52,     0,   -52,   -52,     0,   -52,   -52,   254,   -52,   -52,
     255,   -52,   -52,   -52,   -52,   -52,   256,   257,   258,   259,
     -52,   -52,     0,   -52,   -52,   -52,     0,   -52,   -52,   -52,
       0,   -52,   -52,   -57,     0,   -57,   -57,     0,   -57,   -57,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,
     -57,   -57,     0,   -57,   -57,   -57,     0,   -57,   -57,   -54,
       0,   -54,   -54,     0,   -54,   -54,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,     0,   -54,
     -54,   -54,     0,   -54,   -54,   -58,     0,   -58,   -58,     0,
     -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
       0,   -58,   -58,   -58,     0,   -58,   -58,   -58,     0,   -58,
     -58,   -59,     0,   -59,   -59,     0,   -59,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,
       0,   -59,   -59,   -59,     0,   -59,   -59,   -55,     0,   -55,
     -55,     0,   -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,   -55,   -55,   -55,     0,   -55,   -55,   -55,
       0,   -55,   -55,   -56,     0,   -56,   -56,     0,   -56,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,
     -56,   -56,     0,   -56,   -56,   -56,     0,   -56,   -56,   -66,
       0,   -66,   -66,     0,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,     0,   -66,
     -66,   -66,     0,   -66,   -66,   -44,     0,   -44,   -44,     0,
     -44,   -44,     0,   -44,   -44,     0,   252,   253,     0,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,   -44,   -44,
       0,   -44,   -44,   -44,     0,   -44,   -44,   -44,     0,   -44,
     -44,   -47,     0,   -47,   -47,     0,   -47,   -47,     0,   -47,
     -47,     0,   252,   253,     0,   -47,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,   -47,   -47,     0,   -47,   -47,   -47,
       0,   -47,   -47,   -47,     0,   -47,   -47,   -48,     0,   -48,
     -48,     0,   -48,   -48,     0,   -48,   -48,     0,   252,   253,
       0,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
     -48,   -48,     0,   -48,   -48,   -48,     0,   -48,   -48,   -48,
       0,   -48,   -48,   -45,     0,   -45,   -45,     0,   -45,   -45,
       0,   -45,   -45,     0,   252,   253,     0,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,     0,   -45,   -45,     0,   -45,
     -45,   -45,     0,   -45,   -45,   -45,     0,   -45,   -45,   -46,
       0,   -46,   -46,     0,   -46,   -46,     0,   -46,   -46,     0,
     252,   253,     0,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,   -46,   -46,     0,   -46,   -46,   -46,     0,   -46,
     -46,   -46,     0,   -46,   -46,   -49,     0,   -49,   -49,     0,
     -49,   -49,     0,   -49,   -49,     0,   252,   253,     0,   -49,
     -49,   -49,   -49,   -49,     0,     0,     0,     0,   -49,   -49,
       0,   -49,   -49,   -49,     0,   -49,   -49,   -49,     0,   -49,
     -49,   -43,     0,   -43,   -43,     0,   -43,   -43,     0,   -43,
     -43,     0,     0,     0,     0,   247,   248,   249,   250,   251,
       0,     0,     0,     0,   -43,   -43,     0,   -43,   -43,   -43,
       0,   -43,   -43,   -43,     0,   -43,   -43,   -31,     0,   -31,
     -31,     0,   -31,   -31,     0,   -31,   -31,     0,     0,     0,
     -18,     0,   -18,   -18,     0,   -18,   -18,     0,   -18,   -18,
     -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -18,   -18,     0,     0,     0,     0,     0,
     -18,   -18,   -18,   -18,   -18,   -18,   -20,     0,   -20,   -20,
       0,   -20,   -20,     0,   -20,   -20,     0,     0,     0,   -22,
       0,   -22,   -22,     0,   -22,   -22,     0,   -22,   -22,   -20,
     -20,     0,     0,     0,     0,     0,   -20,   -20,   -20,   -20,
     -20,   -20,   -22,   -22,     0,     0,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -19,     0,   -19,   -19,     0,
     -19,   -19,     0,   -19,   -19,     0,     0,     0,   -21,     0,
     -21,   -21,     0,   -21,   -21,     0,   -21,   -21,   -19,   -19,
       0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,   -19,
     -19,   -21,   -21,     0,     0,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,   -21,   -25,     0,   -25,   -25,     0,   -25,
     -25,     0,   -25,   -25,     0,     0,     0,   -24,     0,   -24,
     -24,     0,   -24,   -24,     0,   -24,   -24,   -25,   -25,     0,
       0,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,
     -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -33,     0,   -33,   -33,     0,   -33,   -33,
       0,   -33,   -33,     0,     0,     0,   -32,     0,   -32,   -32,
       0,   -32,   -32,     0,   -32,   -32,   -33,   -33,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -32,
     -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,
     -26,   -26,     0,     0,     0,   -27,     0,   -27,   -27,     0,
     -27,   -27,     0,   -27,   -27,   -26,   -26,     0,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -27,   -27,
       0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,   -28,
     -28,     0,     0,     0,   -34,     0,   -34,   -34,     0,   -34,
     -34,     0,   -34,   -34,   -28,   -28,     0,     0,     0,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -34,   -34,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
      24,     0,    25,    26,     0,    27,    28,     0,    29,   134,
       0,     0,     0,   -23,     0,   -23,   -23,     0,   -23,   -23,
       0,   -23,   -23,    30,    31,     0,     0,     0,     0,     0,
      32,    33,    34,     0,    35,    36,   -23,   -23,     0,     0,
       0,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -31,
       0,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,
       0,     0,   -18,     0,   -18,   -18,     0,   -18,   -18,     0,
     -18,   -18,   -31,   -31,     0,     0,     0,     0,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -18,   -18,     0,     0,     0,
       0,     0,   -18,   -18,   -18,     0,   -18,   -18,   -20,     0,
     -20,   -20,     0,   -20,   -20,     0,   -20,   -20,     0,     0,
       0,   -22,     0,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -22,   -20,   -20,     0,     0,     0,     0,     0,   -20,   -20,
     -20,     0,   -20,   -20,   -22,   -22,     0,     0,     0,     0,
       0,   -22,   -22,   -22,     0,   -22,   -22,   -19,     0,   -19,
     -19,     0,   -19,   -19,     0,   -19,   -19,     0,     0,     0,
     -21,     0,   -21,   -21,     0,   -21,   -21,     0,   -21,   -21,
     -19,   -19,     0,     0,     0,     0,     0,   -19,   -19,   -19,
       0,   -19,   -19,   -21,   -21,     0,     0,     0,     0,     0,
     -21,   -21,   -21,     0,   -21,   -21,   -33,     0,   -33,   -33,
       0,   -33,   -33,     0,   -33,   -33,     0,     0,     0,   -32,
       0,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,   -33,
     -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,     0,
     -33,   -33,   -32,   -32,     0,     0,     0,     0,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -10,     0,   -10,   -10,     0,
     -10,   -10,     0,   -10,   -10,     0,     0,     0,   -30,     0,
     -30,   -30,     0,   -30,   -30,     0,   -30,   -30,   -10,   -10,
       0,     0,     0,     0,     0,   -10,   -10,   -10,     0,   -10,
     -10,   -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -34,     0,   -34,   -34,     0,   -34,
     -34,     0,   -34,   -34,     0,     0,     0,    24,     0,    25,
      26,     0,    27,    28,     0,   196,   134,   -34,   -34,     0,
       0,     0,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,
      30,    31,     0,     0,     0,     0,     0,    32,    33,    34,
       0,    35,    36,    -8,     0,    -8,    -8,     0,    -8,    -8,
       0,    -8,    -8,     0,     0,     0,    -9,     0,    -9,    -9,
       0,    -9,    -9,     0,    -9,    -9,    -8,    -8,     0,     0,
       0,     0,     0,    -8,    -8,    -8,     0,    -8,    -8,    -9,
      -9,     0,     0,     0,     0,     0,    -9,    -9,    -9,     0,
      -9,    -9,    24,     0,    25,    26,     0,    27,    28,     0,
     262,   134,     0,     0,     0,   -25,     0,   -25,   -25,     0,
     -25,   -25,     0,   -25,   -25,    30,    31,     0,     0,     0,
       0,     0,    32,    33,    34,     0,    35,    36,   -25,   -25,
       0,     0,     0,     0,     0,   -25,   -25,   -25,     0,   -25,
     -25,   -24,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,
     -24,     0,     0,     0,   -26,     0,   -26,   -26,     0,   -26,
     -26,     0,   -26,   -26,   -24,   -24,     0,     0,     0,     0,
       0,   -24,   -24,   -24,     0,   -24,   -24,   -26,   -26,     0,
       0,     0,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -27,     0,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,
       0,     0,     0,   -28,     0,   -28,   -28,     0,   -28,   -28,
       0,   -28,   -28,   -27,   -27,     0,     0,     0,     0,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -28,   -28,     0,     0,
       0,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -29,
       0,   -29,   -29,     0,   -29,   -29,     0,   -29,   -29,     0,
       0,     0,    24,     0,     0,   148,     0,    27,    28,     0,
       0,   134,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,   -29,     0,   -29,   -29,    30,    31,     0,     0,     0,
       0,     0,    32,    33,    34,     0,    35,    36,   220,     0,
     -63,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   178,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   271,   -63,
     -63,   -63,   -63,   178,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,   -63,   -63,   -63,   -63,    59,   -63,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   261,   -63,
     -63,   -63,    59,   -63,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,     0,   -63,   -63,   -63,   -64,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -67,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,   -67,   -67,
     -67,   -67,   -50,     0,     0,   234,   -50,   -50,   235,   -50,
     -50,   -50,   -50,   -50,   236,   237,   238,   239,     0,     0,
       0,   -50,   -50,   -50,   -50,   -53,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,     0,   -53,   -53,   -53,   -53,   -60,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,   -60,   -60,   -60,
     -60,   -61,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,
     -61,   -61,   -61,   -61,   -62,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,     0,   -62,   -62,   -62,   -62,   -65,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,
     -51,     0,     0,   234,   -51,   -51,   235,   -51,   -51,   -51,
     -51,   -51,   236,   237,   238,   239,     0,     0,     0,   -51,
     -51,   -51,   -51,   -52,     0,     0,   234,   -52,   -52,   235,
     -52,   -52,   -52,   -52,   -52,   236,   237,   238,   239,     0,
       0,     0,   -52,   -52,   -52,   -52,   -57,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,     0,     0,     0,   -57,   -57,   -57,   -57,   -54,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,     0,     0,     0,   -54,   -54,
     -54,   -54,   -58,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
       0,   -58,   -58,   -58,   -58,   -59,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,     0,   -59,   -59,   -59,   -59,   -55,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,     0,     0,     0,   -55,   -55,   -55,
     -55,   -56,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,
     -56,   -56,   -56,   -56,   -66,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,   -66,   -66,   -66,   -66,   -64,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,   -67,   -64,   -64,   -64,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -50,   -67,   -67,   -67,    82,
     -50,   -50,    83,   -50,   -50,   -50,   -50,   -50,    84,    85,
      86,    87,     0,     0,   -53,   -50,   -50,   -50,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,   -60,   -53,   -53,   -53,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,   -61,   -60,   -60,   -60,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,   -62,   -61,   -61,   -61,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -65,   -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -51,
     -65,   -65,   -65,    82,   -51,   -51,    83,   -51,   -51,   -51,
     -51,   -51,    84,    85,    86,    87,     0,     0,   -52,   -51,
     -51,   -51,    82,   -52,   -52,    83,   -52,   -52,   -52,   -52,
     -52,    84,    85,    86,    87,     0,     0,   -57,   -52,   -52,
     -52,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,     0,     0,   -54,   -57,   -57,   -57,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,     0,   -58,   -54,   -54,   -54,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,   -59,   -58,   -58,   -58,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,   -55,   -59,   -59,   -59,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
       0,     0,   -56,   -55,   -55,   -55,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
       0,   -66,   -56,   -56,   -56,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -44,   -66,   -66,   -66,   232,   233,     0,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -44,   -47,     0,     0,     0,   232,   233,     0,
     -47,   -47,   -47,   -47,   -47,     0,     0,     0,     0,     0,
       0,     0,   -47,   -47,   -47,   -47,   -48,     0,     0,     0,
     232,   233,     0,   -48,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,   -48,   -48,   -48,   -48,   -45,
       0,     0,     0,   232,   233,     0,   -45,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,     0,     0,     0,   -45,   -45,
     -45,   -45,   -46,     0,     0,     0,   232,   233,     0,   -46,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,     0,
       0,   -46,   -46,   -46,   -46,   -49,     0,     0,     0,   232,
     233,     0,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,
       0,     0,     0,   -45,   -49,   -49,   -49,   -49,    80,    81,
       0,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
       0,   -46,     0,   -45,   -45,   -45,    80,    81,     0,   -46,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,   -49,
       0,   -46,   -46,   -46,    80,    81,   -43,   -49,   -49,   -49,
     -49,   -49,     0,   227,   228,   229,   230,   231,     0,   -49,
     -49,   -49,   -43,     0,     0,   -43,   -43,   -43,   -43,     0,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,   -64,   -64,   -64,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,   -67,   -67,   -67,   -67,   214,   -50,   -50,   215,   -50,
     -50,   -50,   -50,   -50,   216,   217,   218,   219,     0,     0,
       0,   -50,   -50,   -50,   -50,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,
       0,   -53,   -53,   -53,   -53,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
       0,   -60,   -60,   -60,   -60,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,   -61,   -61,   -61,   -61,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,   -62,   -62,   -62,   -62,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,   -65,   -65,   -65,   -65,   214,   -51,   -51,   215,   -51,
     -51,   -51,   -51,   -51,   216,   217,   218,   219,     0,     0,
       0,   -51,   -51,   -51,   -51,   214,   -52,   -52,   215,   -52,
     -52,   -52,   -52,   -52,   216,   217,   218,   219,     0,     0,
       0,   -52,   -52,   -52,   -52,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,
       0,   -57,   -57,   -57,   -57,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,     0,
       0,   -54,   -54,   -54,   -54,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
       0,   -58,   -58,   -58,   -58,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,   -59,   -59,   -59,   -59,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,
       0,   -55,   -55,   -55,   -55,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,     0,
       0,   -56,   -56,   -56,   -56,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,   -66,   -66,   -66,   212,   213,     0,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,     0,     0,
     -44,   -44,   -44,   -44,   212,   213,     0,   -47,   -47,   -47,
     -47,   -47,     0,     0,     0,     0,     0,     0,     0,   -47,
     -47,   -47,   -47,   212,   213,     0,   -48,   -48,   -48,   -48,
     -48,     0,     0,     0,     0,     0,     0,     0,   -48,   -48,
     -48,   -48,   212,   213,     0,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -45,   212,   213,     0,   -46,   -46,   -46,   -46,   -46,     0,
       0,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
     212,   213,     0,   -49,   -49,   -49,   -49,   -49,   207,   208,
     209,   210,   211,     0,     0,   -49,   -49,   -49,   -49,     0,
     -42,   -42,   -42,   -42,   207,   208,   209,   210,   211,     0,
       0,     0,     0,     0,     0,     0,   -43,   -43,   -43,   -43
};

static const yytype_int16 yycheck[] =
{
      17,    27,   178,   118,     3,   118,    23,   118,   118,     0,
      37,    38,    39,     1,     4,     3,     6,   127,     4,     5,
     119,     8,   132,    36,   134,     7,    28,    29,    30,   128,
       4,    30,     6,    59,    60,     4,     4,     6,     8,    65,
      66,    31,    32,    30,   220,     7,     1,    29,     3,     4,
       7,     6,     7,     6,     9,    10,    10,    31,    32,    29,
      30,     4,    31,    32,   240,    27,    28,    29,     3,    24,
      25,    28,    29,   183,    29,     8,    31,    32,    33,    27,
      35,    36,    30,    31,    28,    29,    30,   197,   198,   199,
     116,     6,   118,   119,     6,     7,     4,    30,     6,     6,
       7,   118,   128,     6,   121,   118,     4,   134,     6,   135,
       8,    59,    60,     1,     7,     3,     4,    65,     6,     7,
       4,     9,    10,    31,    32,   151,    24,    25,     7,     7,
       4,     5,    30,    31,    32,     8,    24,    25,    30,   165,
      28,    29,     8,    31,    32,    33,     4,    35,    36,    27,
      28,    29,   178,   263,   264,   265,   183,    30,    29,    30,
     186,     0,    28,    29,    30,     4,     7,    30,   116,   268,
     197,   198,   199,   186,     3,     8,     1,     7,     3,     4,
     128,     6,     7,     7,     9,    10,     7,   135,   136,   137,
      30,     7,     4,     8,   220,    28,    29,    30,     8,    24,
      25,     6,     8,   151,   152,   153,    31,    32,    33,    34,
      35,    36,    28,    29,   240,    30,    30,   165,   166,   167,
      30,    30,     8,   338,    30,   338,     8,   338,   338,   344,
     178,   344,     8,   344,   344,   261,   263,   264,   265,     7,
     339,   267,   268,   342,    30,   271,     0,     1,    30,     3,
       6,    27,    28,    29,    30,     7,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,    30,     7,    66,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,    30,    30,   134,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   338,   339,    27,    30,   342,     7,   344,   267,
      30,   338,    30,   271,    30,   338,     7,   344,   119,     8,
      30,   344,     4,     1,    -1,     3,     4,   128,     6,     7,
     125,     9,    10,   134,   183,    -1,    59,    60,    27,    28,
      29,    30,    65,    -1,    -1,    -1,    24,    25,   197,   198,
     199,    -1,    -1,    31,    32,    33,    34,    35,    36,    82,
      83,    84,    85,    86,    87,     0,     1,     4,     3,     6,
       7,    27,    28,    29,    30,    27,    28,    29,    30,     4,
      -1,     6,   183,     4,   342,     6,     7,    24,    25,     0,
       1,    -1,     3,   116,    31,    32,   197,   198,   199,    24,
      25,    -1,    -1,    24,    25,   128,    31,    32,    -1,    -1,
      31,    32,   135,    -1,   263,   264,   265,     1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    -1,   151,    -1,
      -1,    15,    16,    17,    18,    19,     0,     1,    -1,     3,
      24,    25,   165,    27,    28,    29,    -1,    31,    32,    33,
       8,    35,    36,     0,     1,   178,     3,    15,    16,    17,
      18,    19,   263,   264,   265,     0,     1,   268,     3,    27,
      28,    29,    30,     0,     1,    -1,     3,     0,     1,    -1,
       3,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,    -1,    -1,
      -1,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,    -1,    27,
      -1,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,    -1,   339,    -1,
       4,   342,     6,     4,   267,     6,     0,     1,   271,     3,
      -1,    59,    60,     0,     1,    -1,     3,    65,    -1,    -1,
      24,    25,    -1,    24,    25,    -1,    -1,    31,    32,    -1,
      31,    32,    80,    81,    -1,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    -1,    31,    32,    33,   116,    35,
      36,     4,    -1,     6,     4,    -1,     6,    -1,    -1,   342,
     128,     0,     1,    -1,     3,    -1,    27,   135,     4,    -1,
       6,    24,    25,    -1,    24,    25,    -1,    -1,    31,    32,
      -1,    31,    32,   151,     0,     1,    -1,     3,    24,    25,
       0,     1,    -1,     3,    -1,    31,    32,   165,    59,    60,
       1,    -1,     3,     4,    65,     6,     7,    -1,     9,    10,
     178,    -1,    -1,    -1,    75,    76,    77,    78,    79,     0,
       1,    -1,     3,    24,    25,    -1,    27,    28,    29,    -1,
      31,    32,    33,    -1,    35,    36,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,     0,     1,    -1,     3,
       0,     1,   220,     3,    -1,   116,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,   128,    -1,    -1,
      -1,    -1,   240,    -1,   135,    -1,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,    -1,    -1,    -1,
     151,    27,    -1,    27,    -1,    -1,    -1,    -1,    -1,   267,
       7,    -1,    -1,   271,   165,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,   178,    -1,    -1,
      27,    28,    29,    59,    60,    59,    60,    -1,    -1,    65,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,   204,   205,   206,   207,   208,   209,   210,
     211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,   224,   225,   226,   227,   228,   229,   230,
     231,    -1,    -1,    -1,   342,    27,    -1,    -1,    -1,   240,
     116,    -1,   116,   244,   245,   246,   247,   248,   249,   250,
     251,    -1,   128,    -1,   128,    -1,    -1,    -1,    -1,   135,
      -1,   135,    -1,    -1,    -1,    -1,   267,    59,    60,    -1,
     271,    -1,    -1,    65,     7,   151,    -1,   151,    -1,    12,
      13,    73,    15,    16,    17,    18,    19,    -1,    -1,   165,
      -1,   165,    -1,    27,    27,    28,    29,    -1,    -1,    -1,
       6,     7,   178,    -1,   178,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      26,    27,    28,    29,   116,    59,    60,    -1,   204,   205,
     206,    65,    -1,    -1,    -1,    -1,   128,    -1,    72,    -1,
      -1,   342,    -1,   135,   220,    -1,   220,    -1,   224,   225,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,   240,    -1,   240,    -1,   244,   245,
     246,    -1,    -1,   165,    -1,     1,    -1,     3,     4,    -1,
       6,     7,   116,     9,    10,    -1,   178,    -1,    -1,    -1,
      -1,   267,    -1,   267,   128,   271,    -1,   271,    24,    25,
      -1,   135,    28,    29,    -1,    31,    32,    33,    -1,    35,
      36,    -1,   204,   205,    -1,     1,    -1,   151,     4,    -1,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,   220,    -1,
      -1,   165,   224,   225,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,   178,    31,    32,    33,   240,    35,
      36,     7,   244,   245,    -1,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,   342,    -1,   342,    -1,
     204,    27,    28,    29,    -1,   267,    -1,    -1,    -1,   271,
      -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,     1,
     224,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,
     244,    -1,    24,    25,    -1,    27,    28,    29,     7,    31,
      32,    33,    -1,    35,    36,    -1,    15,    16,    17,    18,
      19,    -1,    -1,   267,    -1,    -1,    -1,   271,    27,    28,
      29,    -1,    -1,     1,    -1,     3,     4,    -1,     6,     7,
     342,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,   342,    31,
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
      10,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    -1,    35,    36,     1,    -1,     3,
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
      -1,    31,    32,    33,    34,    35,    36,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
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
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,     1,    -1,    -1,     4,    -1,     6,     7,    -1,
      -1,    10,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    -1,    35,    36,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    -1,    35,    36,     6,    -1,
       8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,     6,    27,
      28,    29,    30,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,     6,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,     6,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,     8,    -1,    -1,    11,
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
      -1,    -1,    -1,    27,    28,    29,    30,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
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
      22,    23,    -1,    -1,     7,    27,    28,    29,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,     7,    27,    28,    29,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,     7,    27,    28,    29,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,     7,    27,    28,    29,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
       8,    27,    28,    29,    12,    13,    -1,    15,    16,    17,
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
      -1,    27,    28,    29,    30,     8,    -1,    -1,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    27,    28,    29,    30,    12,    13,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    27,    28,    29,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    27,    28,    29,    12,    13,     8,    15,    16,    17,
      18,    19,    -1,    15,    16,    17,    18,    19,    -1,    27,
      28,    29,     7,    -1,    -1,    27,    28,    29,    30,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
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
      -1,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    12,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    12,    13,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    12,    13,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    12,    13,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    12,    13,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      12,    13,    -1,    15,    16,    17,    18,    19,    15,    16,
      17,    18,    19,    -1,    -1,    27,    28,    29,    30,    -1,
      27,    28,    29,    30,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    38,    39,    40,    41,    43,    44,     4,
       5,     0,    40,     6,     7,     4,     3,    30,     7,     4,
      10,    47,     8,    30,     1,     3,     4,     6,     7,     9,
      24,    25,    31,    32,    33,    35,    36,    41,    42,    46,
      47,    48,    49,    50,    51,    52,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     3,    47,     4,     5,     6,
      26,     4,    54,    62,    62,     6,     6,    50,    48,    48,
      48,     7,    29,    28,    27,    15,    16,    17,    18,    19,
      12,    13,    11,    14,    20,    21,    22,    23,     4,     4,
      54,    63,    54,    30,    54,    42,    53,    54,    56,    57,
      58,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    61,     8,    45,     8,    30,    30,     7,
       3,    30,    54,    46,    53,     4,    47,    34,     7,    45,
      46,    53,    30,    46,    10,     6,    24,    25,    31,    32,
      55,    56,    57,    58,    59,    60,    61,    62,     4,     7,
       4,     6,    24,    25,    31,    32,    55,    56,    57,    58,
      59,    60,    61,    62,     4,     6,    24,    25,    31,    32,
      55,    56,    57,    58,    59,    60,    61,    62,     6,     4,
       7,     1,     7,    10,    33,    35,    36,    47,    49,    50,
      51,    52,    54,     4,    42,    54,     9,    41,    42,    46,
      48,    54,    62,    62,    29,    28,    27,    15,    16,    17,
      18,    19,    12,    13,    11,    14,    20,    21,    22,    23,
       6,    54,    62,    62,    29,    28,    27,    15,    16,    17,
      18,    19,    12,    13,    11,    14,    20,    21,    22,    23,
       6,    54,    62,    62,    29,    28,    27,    15,    16,    17,
      18,    19,    12,    13,    11,    14,    20,    21,    22,    23,
      63,    26,     9,    41,    42,    46,    48,     6,     6,    50,
       7,    26,    48,    48,    48,    30,    56,    57,    58,    59,
      59,    59,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    63,    30,    56,    57,    58,    59,    59,    59,
      59,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      63,    30,    56,    57,    58,    59,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    30,    54,
      48,    48,    48,    54,    53,    54,    30,    30,    30,     7,
      46,    53,     7,    53,    30,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    41,    41,
      42,    43,    43,    43,    44,    44,    45,    45,    46,    46,
      46,    46,    46,    46,    47,    48,    48,    48,    48,    49,
      49,    50,    50,    51,    52,    53,    53,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      59,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    61,    62,    62,    62,    62,    62,    63,    63,
      63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     4,
       3,     6,     4,    10,     2,     3,     0,     4,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     2,     5,
       7,     1,     2,     2,     9,     1,     1,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     1,     1,     3,     4,     1,     0,     1,
       3
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
#line 53 "src/parser.y"
                  {;}
#line 2408 "src/parser.c"
    break;

  case 3: /* GlobalDef: GlobalDec  */
#line 57 "src/parser.y"
                  {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2417 "src/parser.c"
    break;

  case 4: /* GlobalDef: GlobalDef GlobalDec  */
#line 61 "src/parser.y"
                                {
			(yyval.state) = new_node("GlobalDefinition", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
			}
#line 2427 "src/parser.c"
    break;

  case 5: /* GlobalDec: Declaration  */
#line 69 "src/parser.y"
                    {
			(yyval.state) = (yyvsp[0].state);
		}
#line 2435 "src/parser.c"
    break;

  case 6: /* GlobalDec: FunctionDefinition  */
#line 72 "src/parser.y"
                             {
			(yyval.state) = (yyvsp[0].state);
		}
#line 2443 "src/parser.c"
    break;

  case 7: /* GlobalDec: error  */
#line 75 "src/parser.y"
                        {
			yyerrok;
			(yyval.state) = NULL;
		}
#line 2452 "src/parser.c"
    break;

  case 8: /* Declaration: TYPE IDENTIFIER SEMI  */
#line 82 "src/parser.y"
                                     {
			char str[256];
			strcpy(str, (yyvsp[-2].string));
			add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope->stack[0], true);
			strcat(str, " ");
			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);

		}
#line 2465 "src/parser.c"
    break;

  case 9: /* Declaration: TYPE LIST IDENTIFIER SEMI  */
#line 91 "src/parser.y"
                                          {
			char str[256];
			strcpy(str, (yyvsp[-3].string));
			strcat(str," LIST ");
			add_row_symbol_table(s_table, (yyvsp[-1].string), str, scope->stack[0], true);
			(yyval.state) = new_node(strcat(str, (yyvsp[-1].string)), root);

		}
#line 2478 "src/parser.c"
    break;

  case 10: /* Definition: IDENTIFIER ATT Expression  */
#line 102 "src/parser.y"
                                          {
			(yyval.state) = new_node("=", root);

			char str[256];
			strcpy(str, (yyvsp[-2].string));

			add_child((yyval.state), new_node(str, root));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2492 "src/parser.c"
    break;

  case 11: /* FunctionDefinition: FunctionHead LP TYPE IDENTIFIER RP CompStatement  */
#line 114 "src/parser.y"
                                                    {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-5].state));
		add_child((yyval.state), (yyvsp[0].state));
		add_row_symbol_table(s_table, (yyvsp[-2].string), (yyvsp[-3].string), scope->stack[0], true);
		push_arg_to_arglist(s_table, (yyvsp[-3].string), last_f);
		decrease_depth_scope(scope);

	}
#line 2506 "src/parser.c"
    break;

  case 12: /* FunctionDefinition: FunctionHead LP RP CompStatement  */
#line 124 "src/parser.y"
                                        {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-3].state));
		add_child((yyval.state), (yyvsp[0].state));
		decrease_depth_scope(scope);

	}
#line 2518 "src/parser.c"
    break;

  case 13: /* FunctionDefinition: FunctionHead LP TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList RP CompStatement  */
#line 132 "src/parser.y"
                                                                                      {
		(yyval.state) = new_node("FunctionDefinition", root);
		add_child((yyval.state), (yyvsp[-9].state));
		add_child((yyval.state), (yyvsp[-2].state));
		add_child((yyval.state), (yyvsp[0].state));
		add_row_symbol_table(s_table, (yyvsp[-6].string), (yyvsp[-7].string), scope->stack[0], true);
		push_arg_to_arglist(s_table, (yyvsp[-7].string), last_f);

		add_row_symbol_table(s_table, (yyvsp[-3].string), (yyvsp[-4].string), scope->stack[0], true);
		push_arg_to_arglist(s_table, (yyvsp[-4].string), last_f);

		decrease_depth_scope(scope);

	}
#line 2537 "src/parser.c"
    break;

  case 14: /* FunctionHead: TYPE IDENTIFIER  */
#line 149 "src/parser.y"
                        {
		char str[256];
		strcpy(str, (yyvsp[0].string));
		strcat(str, "()");

		(yyval.state) = new_node(str, root);
		add_row_symbol_table(s_table, (yyvsp[0].string), (yyvsp[-1].string), scope->stack[0], false);

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);

	}
#line 2555 "src/parser.c"
    break;

  case 15: /* FunctionHead: TYPE LIST IDENTIFIER  */
#line 163 "src/parser.y"
                             {
		char f_name[256];
		strcpy(f_name, (yyvsp[0].string));
		strcat(f_name, "()");

		(yyval.state) = new_node(f_name, root);

		char str[256];
		strcpy(str, (yyvsp[-2].string));
		strcat(str," LIST ");
		add_row_symbol_table(s_table, (yyvsp[0].string), str, scope->stack[0], false);

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);

	}
#line 2577 "src/parser.c"
    break;

  case 16: /* ParamList: %empty  */
#line 183 "src/parser.y"
             {
			(yyval.state) = new_node("ParamList", root);
		}
#line 2585 "src/parser.c"
    break;

  case 17: /* ParamList: COM TYPE IDENTIFIER ParamList  */
#line 187 "src/parser.y"
                                              {
			(yyval.state) = new_node("ParamList", root);
			add_child((yyval.state), (yyvsp[0].state));
			add_row_symbol_table(s_table, (yyvsp[-1].string), (yyvsp[-2].string), scope->stack[0], true);
		}
#line 2595 "src/parser.c"
    break;

  case 18: /* Statement: CompStatement  */
#line 197 "src/parser.y"
                              { (yyval.state) = (yyvsp[0].state); }
#line 2601 "src/parser.c"
    break;

  case 19: /* Statement: JmpStatement  */
#line 198 "src/parser.y"
                         { (yyval.state) = (yyvsp[0].state); }
#line 2607 "src/parser.c"
    break;

  case 20: /* Statement: SelStatement  */
#line 199 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 2613 "src/parser.c"
    break;

  case 21: /* Statement: ItStatement  */
#line 200 "src/parser.y"
                            { (yyval.state) = (yyvsp[0].state); }
#line 2619 "src/parser.c"
    break;

  case 22: /* Statement: ExpStatement  */
#line 201 "src/parser.y"
                             { (yyval.state) = (yyvsp[0].state); }
#line 2625 "src/parser.c"
    break;

  case 23: /* Statement: error  */
#line 202 "src/parser.y"
                      {yyerrok; (yyval.state) = NULL;}
#line 2631 "src/parser.c"
    break;

  case 24: /* CompStatement: LCB StatementExp  */
#line 206 "src/parser.y"
                                 {
			(yyval.state) =(yyvsp[0].state);
		}
#line 2639 "src/parser.c"
    break;

  case 25: /* StatementExp: RCB  */
#line 212 "src/parser.y"
                    { (yyval.state) =NULL; }
#line 2645 "src/parser.c"
    break;

  case 26: /* StatementExp: Declaration StatementExp  */
#line 213 "src/parser.y"
                                         {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2655 "src/parser.c"
    break;

  case 27: /* StatementExp: Definition StatementExp  */
#line 218 "src/parser.y"
                                        {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2665 "src/parser.c"
    break;

  case 28: /* StatementExp: Statement StatementExp  */
#line 223 "src/parser.y"
                                       {
			(yyval.state) = new_node("StatementExp", root);
			add_child((yyval.state), (yyvsp[-1].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2675 "src/parser.c"
    break;

  case 29: /* SelStatement: IF LP Expression RP Statement  */
#line 231 "src/parser.y"
                                              {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2685 "src/parser.c"
    break;

  case 30: /* SelStatement: IF LP Expression RP Statement ELSE Statement  */
#line 236 "src/parser.y"
                                                             {
			(yyval.state) = new_node("SelStatement", root);
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2696 "src/parser.c"
    break;

  case 31: /* ExpStatement: SEMI  */
#line 245 "src/parser.y"
                     { (yyval.state) = NULL; }
#line 2702 "src/parser.c"
    break;

  case 32: /* ExpStatement: Expression SEMI  */
#line 246 "src/parser.y"
                                {
			(yyval.state) = (yyvsp[-1].state);
		}
#line 2710 "src/parser.c"
    break;

  case 33: /* JmpStatement: RET ExpStatement  */
#line 252 "src/parser.y"
                                 {
			(yyval.state) = new_node("RETURN", root);
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2719 "src/parser.c"
    break;

  case 34: /* ItStatement: FOR LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement  */
#line 259 "src/parser.y"
                                                                   {
			(yyval.state) = new_node("FOR", root);
			add_child((yyval.state), (yyvsp[-6].state));
			add_child((yyval.state), (yyvsp[-4].state));
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2731 "src/parser.c"
    break;

  case 35: /* ExpAtt: Expression  */
#line 268 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 2739 "src/parser.c"
    break;

  case 36: /* ExpAtt: Definition  */
#line 272 "src/parser.y"
                   {
		(yyval.state) = (yyvsp[0].state);
	}
#line 2747 "src/parser.c"
    break;

  case 37: /* Expression: LogicalOrExpression  */
#line 279 "src/parser.y"
                                    { (yyval.state) = (yyvsp[0].state); }
#line 2753 "src/parser.c"
    break;

  case 38: /* LogicalOrExpression: LogicalAndExpression  */
#line 283 "src/parser.y"
                                     { (yyval.state) = (yyvsp[0].state); }
#line 2759 "src/parser.c"
    break;

  case 39: /* LogicalOrExpression: LogicalOrExpression OR LogicalAndExpression  */
#line 284 "src/parser.y"
                                                            {
			(yyval.state) = new_node("||", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));

		}
#line 2770 "src/parser.c"
    break;

  case 40: /* LogicalAndExpression: EqualityExpression  */
#line 293 "src/parser.y"
                                   {(yyval.state) = (yyvsp[0].state);}
#line 2776 "src/parser.c"
    break;

  case 41: /* LogicalAndExpression: LogicalAndExpression AND EqualityExpression  */
#line 294 "src/parser.y"
                                                    {
			(yyval.state) = new_node("&&", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2786 "src/parser.c"
    break;

  case 42: /* EqualityExpression: RelationalExpression  */
#line 302 "src/parser.y"
                                 { (yyval.state) = (yyvsp[0].state); }
#line 2792 "src/parser.c"
    break;

  case 43: /* EqualityExpression: EqualityExpression COMP_EQ RelationalExpression  */
#line 303 "src/parser.y"
                                                                {
			(yyval.state) = new_node("==", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
		}
#line 2802 "src/parser.c"
    break;

  case 44: /* RelationalExpression: AdditiveExpression  */
#line 311 "src/parser.y"
                                           { (yyval.state) = (yyvsp[0].state); }
#line 2808 "src/parser.c"
    break;

  case 45: /* RelationalExpression: RelationalExpression LEQ AdditiveExpression  */
#line 312 "src/parser.y"
                                                            {
				(yyval.state) = new_node("<=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
		}
#line 2818 "src/parser.c"
    break;

  case 46: /* RelationalExpression: RelationalExpression GEQ AdditiveExpression  */
#line 317 "src/parser.y"
                                                        {
				(yyval.state) = new_node(">=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 2828 "src/parser.c"
    break;

  case 47: /* RelationalExpression: RelationalExpression LT AdditiveExpression  */
#line 322 "src/parser.y"
                                                           {
				(yyval.state) = new_node("<", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 2838 "src/parser.c"
    break;

  case 48: /* RelationalExpression: RelationalExpression GT AdditiveExpression  */
#line 327 "src/parser.y"
                                                           {
				(yyval.state) = new_node(">", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 2848 "src/parser.c"
    break;

  case 49: /* RelationalExpression: RelationalExpression DIF AdditiveExpression  */
#line 332 "src/parser.y"
                                                                    {
				(yyval.state) = new_node("!=", root);
				add_child((yyval.state), (yyvsp[-2].state));
				add_child((yyval.state), (yyvsp[0].state));
	}
#line 2858 "src/parser.c"
    break;

  case 50: /* AdditiveExpression: MultiplicativeExpression  */
#line 340 "src/parser.y"
                                         { (yyval.state) = (yyvsp[0].state); }
#line 2864 "src/parser.c"
    break;

  case 51: /* AdditiveExpression: AdditiveExpression PLUS MultiplicativeExpression  */
#line 341 "src/parser.y"
                                                                 {
			(yyval.state) = new_node("+", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2874 "src/parser.c"
    break;

  case 52: /* AdditiveExpression: AdditiveExpression MIN MultiplicativeExpression  */
#line 346 "src/parser.y"
                                                        {
			(yyval.state) = new_node("-", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2884 "src/parser.c"
    break;

  case 53: /* MultiplicativeExpression: UnaryExpression  */
#line 354 "src/parser.y"
                                { (yyval.state) = (yyvsp[0].state); }
#line 2890 "src/parser.c"
    break;

  case 54: /* MultiplicativeExpression: MultiplicativeExpression MUL UnaryExpression  */
#line 355 "src/parser.y"
                                                             {
			(yyval.state) = new_node("*", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2900 "src/parser.c"
    break;

  case 55: /* MultiplicativeExpression: MultiplicativeExpression DIV UnaryExpression  */
#line 360 "src/parser.y"
                                                             {
			(yyval.state) = new_node("/", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2910 "src/parser.c"
    break;

  case 56: /* MultiplicativeExpression: MultiplicativeExpression TR UnaryExpression  */
#line 365 "src/parser.y"
                                                            {
			(yyval.state) = new_node("%", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2920 "src/parser.c"
    break;

  case 57: /* MultiplicativeExpression: MultiplicativeExpression TWD UnaryExpression  */
#line 370 "src/parser.y"
                                                         {
			(yyval.state) = new_node(":", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2930 "src/parser.c"
    break;

  case 58: /* MultiplicativeExpression: MultiplicativeExpression MAP UnaryExpression  */
#line 375 "src/parser.y"
                                                         {
			(yyval.state) = new_node(">>", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2940 "src/parser.c"
    break;

  case 59: /* MultiplicativeExpression: MultiplicativeExpression FIL UnaryExpression  */
#line 380 "src/parser.y"
                                                         {
			(yyval.state) = new_node("<<", root);
			add_child((yyval.state), (yyvsp[-2].state));
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2950 "src/parser.c"
    break;

  case 60: /* UnaryExpression: PrimaryExpression  */
#line 388 "src/parser.y"
                                  { (yyval.state) = (yyvsp[0].state); }
#line 2956 "src/parser.c"
    break;

  case 61: /* UnaryExpression: TNR PrimaryExpression  */
#line 389 "src/parser.y"
                                      {
			(yyval.state) = new_node("!", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2965 "src/parser.c"
    break;

  case 62: /* UnaryExpression: HD PrimaryExpression  */
#line 393 "src/parser.y"
                                     {
			(yyval.state) = new_node("?", root);
			add_child((yyval.state), (yyvsp[0].state));
	}
#line 2974 "src/parser.c"
    break;

  case 63: /* PrimaryExpression: IDENTIFIER  */
#line 399 "src/parser.y"
                           {(yyval.state) = new_node((yyvsp[0].string), root);}
#line 2980 "src/parser.c"
    break;

  case 64: /* PrimaryExpression: NUM_CONST  */
#line 400 "src/parser.y"
                      {
			char str[256];
			sprintf(str, "%lf", (yyvsp[0].num));
			(yyval.state) = new_node(str, root);
		}
#line 2990 "src/parser.c"
    break;

  case 65: /* PrimaryExpression: LP Expression RP  */
#line 405 "src/parser.y"
                                 {(yyval.state) = new_node("PrimaryExpression", root);  add_child((yyval.state), (yyvsp[-1].state));}
#line 2996 "src/parser.c"
    break;

  case 66: /* PrimaryExpression: IDENTIFIER LP Params RP  */
#line 406 "src/parser.y"
                                        {(yyval.state) = new_node("FunctionCall", root);  add_child((yyval.state), (yyvsp[-1].state));}
#line 3002 "src/parser.c"
    break;

  case 67: /* PrimaryExpression: NIL  */
#line 407 "src/parser.y"
                    {(yyval.state) = new_node("NIL", root);}
#line 3008 "src/parser.c"
    break;

  case 68: /* Params: %empty  */
#line 411 "src/parser.y"
               {(yyval.state) = new_node("Params", root);}
#line 3014 "src/parser.c"
    break;

  case 69: /* Params: Expression  */
#line 413 "src/parser.y"
                   {(yyval.state) = new_node("Params", root);}
#line 3020 "src/parser.c"
    break;

  case 70: /* Params: Params COM Expression  */
#line 415 "src/parser.y"
                              {(yyval.state) = new_node("Params", root); add_child((yyval.state), (yyvsp[-2].state));}
#line 3026 "src/parser.c"
    break;


#line 3030 "src/parser.c"

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

#line 418 "src/parser.y"

int yydebug = 1;

syntax_tree* parse() {
    root = new_syntax_tree();
	s_table = new_symbol_table();
	scope = new_scope_stack();
	last_f = 0;

    yyparse();

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
   fprintf (stderr, "\x1b[31m%s, at ln %lu col %lu\x1b[0m\n", s, n_line, n_column);
 }
