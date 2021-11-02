/* A Bison parser, made by GNU Bison 3.8.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_PARSER_H_INCLUDED
# define YY_YY_SRC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 5 "src/parser.y"

    #include "syntax_tree.h"
	#include "symbol_table.h"
	#include "lexical.h"
	#include "semantic_analysis.h"

	extern size_t n_line;
   	extern size_t n_column; 

	#include <stdio.h>

    int yylex(void);
    void yyerror(const char *);

	extern syntax_tree* root;
	extern symbol_table* s_table;
	extern scope_t* scope;
	extern uint16_t last_f;
	extern bool first_pass_sematic_error_found;
	extern char** args_last_f;
	extern uint16_t args_count;
	extern bool syntax_error_found;

#line 73 "src/parser.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TYPE = 258,                    /* TYPE  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    LIST = 260,                    /* LIST  */
    LP = 261,                      /* LP  */
    SEMI = 262,                    /* SEMI  */
    COM = 263,                     /* COM  */
    RCB = 264,                     /* RCB  */
    LCB = 265,                     /* LCB  */
    TWD = 266,                     /* TWD  */
    PLUS = 267,                    /* PLUS  */
    MIN = 268,                     /* MIN  */
    MUL = 269,                     /* MUL  */
    LT = 270,                      /* LT  */
    GT = 271,                      /* GT  */
    LEQ = 272,                     /* LEQ  */
    GEQ = 273,                     /* GEQ  */
    DIF = 274,                     /* DIF  */
    MAP = 275,                     /* MAP  */
    FIL = 276,                     /* FIL  */
    DIV = 277,                     /* DIV  */
    TR = 278,                      /* TR  */
    TNR = 279,                     /* TNR  */
    HD = 280,                      /* HD  */
    ATT = 281,                     /* ATT  */
    COMP_EQ = 282,                 /* COMP_EQ  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    RP = 285,                      /* RP  */
    NUM_CONST = 286,               /* NUM_CONST  */
    NIL = 287,                     /* NIL  */
    STR = 288,                     /* STR  */
    WRITE = 289,                   /* WRITE  */
    READ = 290,                    /* READ  */
    WRITE_LN = 291,                /* WRITE_LN  */
    IF = 292,                      /* IF  */
    ELSE = 293,                    /* ELSE  */
    FOR = 294,                     /* FOR  */
    RET = 295                      /* RET  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "src/parser.y"

    char string[MAX_BUFFER_SIZE/2];
    double num;
    syntax_tree_node* state;
	syntax_tree* tree;

#line 137 "src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_SRC_PARSER_H_INCLUDED  */
