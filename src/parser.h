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
#line 4 "src/parser.y"

    #include "syntax_tree.h"
	#include "symbol_table.h"
	#include "lexical.h"

	extern size_t n_line;
   	extern size_t n_column; 

	#include <stdio.h>

    int yylex(void);
    void yyerror(const char *);

	syntax_tree* root;
	symbol_table* s_table;
	scope_t* scope;

#line 67 "src/parser.h"

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
    EQ = 282,                      /* EQ  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    RP = 285,                      /* RP  */
    NUM_CONST = 286,               /* NUM_CONST  */
    NIL = 287,                     /* NIL  */
    IF = 288,                      /* IF  */
    ELSE = 289,                    /* ELSE  */
    FOR = 290,                     /* FOR  */
    RET = 291                      /* RET  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "src/parser.y"

    char string[256];
    double num;
    syntax_tree_node* state;
	syntax_tree* tree;

#line 127 "src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_PARSER_H_INCLUDED  */
