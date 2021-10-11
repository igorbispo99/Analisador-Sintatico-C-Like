%define lr.type canonical-lr
%define parse.error verbose

%code requires {
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
}

%union{
    char string[256];
    double num;
    syntax_tree_node* state;
	syntax_tree* tree;
}

%token TYPE IDENTIFIER LIST
%token LP SEMI COM RCB LCB TWD PLUS MIN MUL LT GT LEQ GEQ DIF MAP FIL DIV TR TNR HD ATT EQ AND OR RP
%token NUM_CONST NIL
%token IF ELSE FOR RET
%nonassoc ELSE RP

%type <state> GlobalDef GlobalDec Declaration ParamList CompStatement SelStatement JmpStatement LogicalAndExpression
%type <state> FunctionDefinition Definition Statement StatementExp ExpStatement ItStatement Expression LogicalOrExpression
%type <state> EqualityExpression RelationalExpression AdditiveExpression MultiplicativeExpression
%type <state> UnaryExpression UnaryOperator  PrimaryExpression FunctionRet ExpAtt Params
%type <num> NUM_CONST 
%type <string> IDENTIFIER TYPE SEMI LIST
%type <tree> ROOT_TREE

%left PLUS MIN MUL LEQ GEQ DIF DIV EQ AND OR 
%start ROOT_TREE

%precedence IDENTIFIER
%precedence LP

%%

ROOT_TREE:
        GlobalDef {;}
        ;

GlobalDef:
        GlobalDec {
			$$ = new_node("GlobalDef", root);
			add_child($$, $1);
		}
        |   GlobalDef GlobalDec {
			$$ = new_node("GlobalDef", root);
			add_child($$, $1);
			add_child($$, $2);
			}
        ;

GlobalDec:
        Declaration {
			$$ = new_node("GlobalDec", root);
			add_child($$, $1);
		}
        |   FunctionDefinition {
			$$ = new_node("GlobalDec", root);
			add_child($$, $1);
		}
		| error {
			yyerrok;
			$$ = NULL;
		}
        ;

Declaration:
		TYPE IDENTIFIER SEMI {
			char str[128];
			strcpy(str, $1);
			add_row_symbol_table(s_table, $2, $1, scope->stack[0], true);
			$$ = new_node(strcat(str, $2), root);

		}
		|
		TYPE LIST IDENTIFIER SEMI {
			char str[128];
			strcpy(str, $1);
			strcat(str," LIST ");
			add_row_symbol_table(s_table, $3, str, scope->stack[0], true);
			$$ = new_node(strcat(str, $3), root);

		}
		;

Definition:
		IDENTIFIER ATT Expression {
			$$ = new_node("Definition", root);
			add_child($$, $3);
		}
		;
 
FunctionDefinition:
    FunctionRet LP TYPE IDENTIFIER RP CompStatement{
		$$ = new_node("FunctionDefinition", root);
		add_child($$, $1);
		add_child($$, $6);
		add_row_symbol_table(s_table, $4, $3, scope->stack[0], true);
		decrease_depth_scope(scope);

	}
	|
	FunctionRet LP RP CompStatement{
		$$ = new_node("FunctionDefinition", root);
		add_child($$, $1);
		add_child($$, $4);
		decrease_depth_scope(scope);

	}
	|
	FunctionRet LP TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList RP CompStatement{
		$$ = new_node("FunctionDefinition", root);
		add_child($$, $1);
		add_child($$, $8);
		add_child($$, $10);
		add_row_symbol_table(s_table, $4, $3, scope->stack[0], true);
		add_row_symbol_table(s_table, $7, $6, scope->stack[0], true);
		decrease_depth_scope(scope);

	}
    ;

FunctionRet:
	TYPE IDENTIFIER {
		$$ = new_node("FunctionRet", root);
		add_row_symbol_table(s_table, $2, $1, scope->stack[0], false);
		increase_depth_scope(scope);

	}
	|
	TYPE LIST IDENTIFIER {
		$$ = new_node("FunctionRet", root);
		char str[128];
		strcpy(str, $1);
		strcat(str," LIST ");
		add_row_symbol_table(s_table, $3, str, scope->stack[0], false);
		increase_depth_scope(scope);

	}
	;

ParamList:
      %empty {
			$$ = new_node("ParamList", root);
		}
		|
		COM TYPE IDENTIFIER ParamList {
			$$ = new_node("ParamList", root);
			add_child($$, $4);
			add_row_symbol_table(s_table, $3, $2, scope->stack[0], true);
		}
    ;

//

Statement:
		CompStatement { $$ = $1; }
	|   JmpStatement { $$ = $1; }
	|	SelStatement { $$ = $1; }
	|	ItStatement { $$ = $1; }
	|	ExpStatement { $$ = $1; }
	|	error {yyerrok; $$ = NULL;}
		;

CompStatement:
		LCB StatementExp {
			$$ = new_node("CompStatement", root);
			add_child($$, $2);
		}
		;

StatementExp:
		RCB { $$ = new_node("StatementExp", root); }
	|	Declaration StatementExp {
			$$ = new_node("StatementExp", root);
			add_child($$, $1);
			add_child($$, $2);
		}
	|	Definition StatementExp {
			$$ = new_node("StatementExp", root);
			add_child($$, $1);
			add_child($$, $2);
		}
	| Statement StatementExp {
			$$ = new_node("StatementExp", root);
			add_child($$, $1);
			add_child($$, $2);
		}
	;

 SelStatement:
		IF LP Expression RP Statement {
			$$ = new_node("SelStatement", root);
			add_child($$, $3);
			add_child($$, $5);
		}
	|	IF LP Expression RP Statement ELSE Statement {
			$$ = new_node("SelStatement", root);
			add_child($$, $3);
			add_child($$, $5);
			add_child($$, $7);
		}
		;

ExpStatement:
		SEMI { $$ = new_node("ExpStatement", root); }
	|	Expression SEMI {
			$$ = new_node("ExpStatement", root);
			add_child($$, $1);
		}
		;

JmpStatement:
		RET ExpStatement {
			$$ = new_node("JmpStatement", root);
			add_child($$, $2);
		}
		;

ItStatement:
		FOR LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement {
			$$ = new_node("For", root);
			add_child($$, $3);
			add_child($$, $5);
			add_child($$, $7);
			add_child($$, $9);
		}
		;
ExpAtt:
	Expression {
		$$ = $1;
	}
	|
	Definition {
		$$ = $1;
	}
	; 
//

Expression:
		LogicalOrExpression { $$ = $1; }
		;

LogicalOrExpression:
		LogicalAndExpression { $$ = $1; }
	|	LogicalOrExpression OR LogicalAndExpression { $$ = $3; }
		;

LogicalAndExpression:
        LogicalAndExpression AND EqualityExpression { $$ = $3; }
	|	EqualityExpression {$$ = $1;}
		;

EqualityExpression:
	    RelationalExpression { $$ = $1; }
	|	EqualityExpression EQ RelationalExpression { $$ = $3; }
		;

RelationalExpression:
			AdditiveExpression { $$ = $1; }
	|       RelationalExpression LEQ AdditiveExpression { $$ = $3; }
    |       RelationalExpression GEQ AdditiveExpression { $$ = $3; }
	|       RelationalExpression LT AdditiveExpression { $$ = $3; }
	|       RelationalExpression GT AdditiveExpression { $$ = $3; }
	|		RelationalExpression DIF AdditiveExpression { $$ = $3; }
		;

AdditiveExpression:
		MultiplicativeExpression { $$ = $1; }
	|	AdditiveExpression PLUS MultiplicativeExpression { $$ = $3; }
    |	AdditiveExpression MIN MultiplicativeExpression { $$ = $3; }
		;

MultiplicativeExpression:
		UnaryExpression { $$ = $1; }
	|	MultiplicativeExpression MUL UnaryExpression { $$ = $3; }
	|	MultiplicativeExpression DIV UnaryExpression { $$ = $3; }
	|	MultiplicativeExpression TR UnaryExpression { $$ = $3; }
	|   MultiplicativeExpression TWD UnaryExpression {$$ = $3;}
	|   MultiplicativeExpression MAP UnaryExpression {$$ = $3;}
	|   MultiplicativeExpression FIL UnaryExpression {$$ = $3;}
		;

UnaryExpression:
		PrimaryExpression { $$ = $1; }
	|	UnaryOperator PrimaryExpression { $$ = $2; }
		;

UnaryOperator:
	    TNR { $$ = new_node("UnaryOperator", root); }
		|
		HD { $$ = new_node("UnaryOperator", root); }

		;

PrimaryExpression:
		IDENTIFIER {$$ = new_node($1, root);}
	|   NUM_CONST {
			char str[128];
			sprintf(str, "%lf", $1);
			$$ = new_node(str, root);
		}
	|	LP Expression RP {$$ = new_node("PrimaryExpression", root);  add_child($$, $2);}
	|	IDENTIFIER LP Params RP {$$ = new_node("FunctionCall", root);  add_child($$, $3);}
	|	NIL {$$ = new_node("PrimaryExpression", root);}
	;

Params:
	%empty {$$ = new_node("Params", root);}
	|
	Expression {$$ = new_node("Params", root);}
	|
	Params COM Expression {$$ = new_node("Params", root); add_child($$, $1);}
;


%%
int yydebug = 1;
syntax_tree* root;

syntax_tree* parse() {
    root = new_syntax_tree();
	s_table = new_symbol_table();
	scope = new_scope_stack();

    yyparse();

	show_table(s_table);

	char* line = malloc(1);

	show_tree(root, );
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