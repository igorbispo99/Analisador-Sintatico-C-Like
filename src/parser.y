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
	uint16_t last_f;
}

%union{
    char string[256];
    double num;
    syntax_tree_node* state;
	syntax_tree* tree;
}

%token TYPE IDENTIFIER LIST
%token LP SEMI COM RCB LCB TWD PLUS MIN MUL LT GT LEQ GEQ DIF MAP FIL DIV TR TNR HD ATT COMP_EQ AND OR RP
%token NUM_CONST NIL
%token IF ELSE FOR RET
%nonassoc ELSE RP

%type <state> GlobalDef GlobalDec Declaration ParamList CompStatement SelStatement JmpStatement LogicalAndExpression
%type <state> FunctionDefinition Definition Statement StatementExp ExpStatement ItStatement Expression LogicalOrExpression
%type <state> EqualityExpression RelationalExpression AdditiveExpression MultiplicativeExpression
%type <state> UnaryExpression PrimaryExpression FunctionHead ExpAtt Params
%type <num> NUM_CONST 
%type <string> IDENTIFIER TYPE SEMI LIST
%type <tree> ROOT_TREE

%left PLUS MIN MUL LEQ GEQ DIF DIV COMP_EQ AND OR 
%start ROOT_TREE

%precedence IDENTIFIER
%precedence LP

%%

ROOT_TREE:
        GlobalDef {;}
        ;

GlobalDef:
        GlobalDec {
			$$ = new_node("GlobalDefinition", root);
			add_child($$, $1);
		}
        |   GlobalDef GlobalDec {
			$$ = new_node("GlobalDefinition", root);
			add_child($$, $1);
			add_child($$, $2);
			}
        ;

GlobalDec:
        Declaration {
			$$ = $1;
		}
        | FunctionDefinition {
			$$ = $1;
		}
		| error {
			yyerrok;
			$$ = NULL;
		}
        ;

Declaration:
		TYPE IDENTIFIER SEMI {
			char str[256];
			strcpy(str, $1);
			add_row_symbol_table(s_table, $2, $1, scope->stack[0], true);
			strcat(str, " ");
			$$ = new_node(strcat(str, $2), root);

		}
		|
		TYPE LIST IDENTIFIER SEMI {
			char str[256];
			strcpy(str, $1);
			strcat(str," LIST ");
			add_row_symbol_table(s_table, $3, str, scope->stack[0], true);
			$$ = new_node(strcat(str, $3), root);

		}
		;

Definition:
		IDENTIFIER ATT Expression {
			$$ = new_node("=", root);

			char str[256];
			strcpy(str, $1);

			add_child($$, new_node(str, root));
			add_child($$, $3);
		}
		;
 
FunctionDefinition:
    FunctionHead LP TYPE IDENTIFIER RP CompStatement{
		$$ = new_node("FunctionDefinition", root);
		add_child($$, $1);
		add_child($$, $6);
		add_row_symbol_table(s_table, $4, $3, scope->stack[0], true);
		push_arg_to_arglist(s_table, $3, last_f);
		decrease_depth_scope(scope);

	}
	|
	FunctionHead LP RP CompStatement{
		$$ = new_node("FunctionDefinition", root);
		add_child($$, $1);
		add_child($$, $4);
		decrease_depth_scope(scope);

	}
	|
	FunctionHead LP TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList RP CompStatement{
		$$ = new_node("FunctionDefinition", root);
		add_child($$, $1);
		add_child($$, $8);
		add_child($$, $10);
		add_row_symbol_table(s_table, $4, $3, scope->stack[0], true);
		push_arg_to_arglist(s_table, $3, last_f);

		add_row_symbol_table(s_table, $7, $6, scope->stack[0], true);
		push_arg_to_arglist(s_table, $6, last_f);

		decrease_depth_scope(scope);

	}
    ;

FunctionHead:
	TYPE IDENTIFIER {
		char str[256];
		strcpy(str, $2);
		strcat(str, "()");

		$$ = new_node(str, root);
		add_row_symbol_table(s_table, $2, $1, scope->stack[0], false);

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);

	}
	|
	TYPE LIST IDENTIFIER {
		char f_name[256];
		strcpy(f_name, $3);
		strcat(f_name, "()");

		$$ = new_node(f_name, root);

		char str[256];
		strcpy(str, $1);
		strcat(str," LIST ");
		add_row_symbol_table(s_table, $3, str, scope->stack[0], false);

		last_f = s_table->n_lines -1;

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
			$$ =$2;
		}
		;

StatementExp:
		RCB { $$ =NULL; }
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
	| 	Statement StatementExp {
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
		SEMI { $$ = NULL; }
	|	Expression SEMI {
			$$ = $1;
		}
		;

JmpStatement:
		RET ExpStatement {
			$$ = new_node("RETURN", root);
			add_child($$, $2);
		}
		;

ItStatement:
		FOR LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement {
			$$ = new_node("FOR", root);
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
	|	LogicalOrExpression OR LogicalAndExpression {
			$$ = new_node("||", root);
			add_child($$, $1);
			add_child($$, $3);

		}
		;

LogicalAndExpression:
		EqualityExpression {$$ = $1;}
    |	LogicalAndExpression AND EqualityExpression {
			$$ = new_node("&&", root);
			add_child($$, $1);
			add_child($$, $3);
		}
	;

EqualityExpression:
	    RelationalExpression { $$ = $1; }
	|	EqualityExpression COMP_EQ RelationalExpression {
			$$ = new_node("==", root);
			add_child($$, $1);
			add_child($$, $3);
		}
		;

RelationalExpression:
			AdditiveExpression { $$ = $1; }
	|       RelationalExpression LEQ AdditiveExpression {
				$$ = new_node("<=", root);
				add_child($$, $1);
				add_child($$, $3);
		}
    |       RelationalExpression GEQ AdditiveExpression {
				$$ = new_node(">=", root);
				add_child($$, $1);
				add_child($$, $3);
	}
	|       RelationalExpression LT AdditiveExpression {
				$$ = new_node("<", root);
				add_child($$, $1);
				add_child($$, $3);
	}
	|       RelationalExpression GT AdditiveExpression {
				$$ = new_node(">", root);
				add_child($$, $1);
				add_child($$, $3);
	}
	|		RelationalExpression DIF AdditiveExpression {
				$$ = new_node("!=", root);
				add_child($$, $1);
				add_child($$, $3);
	}
		;

AdditiveExpression:
		MultiplicativeExpression { $$ = $1; }
	|	AdditiveExpression PLUS MultiplicativeExpression {
			$$ = new_node("+", root);
			add_child($$, $1);
			add_child($$, $3);
	}
    |	AdditiveExpression MIN MultiplicativeExpression {
			$$ = new_node("-", root);
			add_child($$, $1);
			add_child($$, $3);
	}
		;

MultiplicativeExpression:
		UnaryExpression { $$ = $1; }
	|	MultiplicativeExpression MUL UnaryExpression {
			$$ = new_node("*", root);
			add_child($$, $1);
			add_child($$, $3);
	}
	|	MultiplicativeExpression DIV UnaryExpression {
			$$ = new_node("/", root);
			add_child($$, $1);
			add_child($$, $3);
	}
	|	MultiplicativeExpression TR UnaryExpression {
			$$ = new_node("%", root);
			add_child($$, $1);
			add_child($$, $3);
	}
	|   MultiplicativeExpression TWD UnaryExpression {
			$$ = new_node(":", root);
			add_child($$, $1);
			add_child($$, $3);
	}
	|   MultiplicativeExpression MAP UnaryExpression {
			$$ = new_node(">>", root);
			add_child($$, $1);
			add_child($$, $3);
	}
	|   MultiplicativeExpression FIL UnaryExpression {
			$$ = new_node("<<", root);
			add_child($$, $1);
			add_child($$, $3);
	}
	;

UnaryExpression:
		PrimaryExpression { $$ = $1; }
	|	TNR PrimaryExpression {
			$$ = new_node("!", root);
			add_child($$, $2);
	}
	|	HD PrimaryExpression {
			$$ = new_node("?", root);
			add_child($$, $2);
	}
	;
PrimaryExpression:
		IDENTIFIER {$$ = new_node($1, root);}
	|   NUM_CONST {
			char str[256];
			sprintf(str, "%lf", $1);
			$$ = new_node(str, root);
		}
	|	LP Expression RP {$$ = new_node("PrimaryExpression", root);  add_child($$, $2);}
	|	IDENTIFIER LP Params RP {$$ = new_node("FunctionCall", root);  add_child($$, $3);}
	|	NIL {$$ = new_node("NIL", root);}
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