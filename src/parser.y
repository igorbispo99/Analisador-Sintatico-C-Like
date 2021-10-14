%define lr.type canonical-lr
%define parse.error verbose

%code requires {
    #include "syntax_tree.h"
	#include "symbol_table.h"
	#include "lexical.h"
	#include "semantic_analysis.h"

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
%type <state> UnaryExpression PrimaryExpression FunctionHead ExpAtt Params ForHead FunctionArgs
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
			add_row_symbol_table(s_table, $2, $1, scope, true);
			strcat(str, " ");
			$$ = new_node(strcat(str, $2), root);

		}
		|
		TYPE LIST IDENTIFIER SEMI {
			char str[256];
			strcpy(str, $1);
			strcat(str," LIST ");
			add_row_symbol_table(s_table, $3, str, scope, true);
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
    FunctionHead LP FunctionArgs RP CompStatement{
		$$ = new_node("FunctionDefinition", root);

		add_child($$, $1);
		add_child($$, $3);
		add_child($$, $5);

		decrease_depth_scope(scope);
	}
	|
	FunctionHead LP RP CompStatement{
		$$ = new_node("FunctionDefinition", root);
		add_child($$, $1);
		add_child($$, $4);
		decrease_depth_scope(scope);

	}
    ;

FunctionArgs:
	TYPE IDENTIFIER {
		$$ = new_node("FunctionParameters", root);

		add_row_symbol_table(s_table, $2, $1, scope, true);
		push_arg_to_arglist(s_table, $1, last_f);
	}
	|
	TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList {
		$$ = new_node("FunctionParameters", root);

		add_row_symbol_table(s_table, $2, $1, scope, true);
		push_arg_to_arglist(s_table, $1, last_f);

		add_row_symbol_table(s_table, $5, $4, scope, true);
		push_arg_to_arglist(s_table, $4, last_f);
	}
	|
	TYPE LIST IDENTIFIER {
		$$ = new_node("FunctionParameters", root);

		char str[256];
		strcpy(str, $1);
		strcat(str," LIST ");

		add_row_symbol_table(s_table, $3, str, scope, true);
		push_arg_to_arglist(s_table, str, last_f);	
	}
	|
	TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList {
		$$ = new_node("FunctionParameters", root);

		char arg_1[256];
		strcpy(arg_1, $1);
		strcat(arg_1," LIST ");

		add_row_symbol_table(s_table, $3, arg_1, scope, true);
		push_arg_to_arglist(s_table, arg_1, last_f);

		char arg_2[256];
		strcpy(arg_2, $5);
		strcat(arg_2," LIST ");

		add_row_symbol_table(s_table, $7, arg_2, scope, true);
		push_arg_to_arglist(s_table, arg_2, last_f);
	}
	;

FunctionHead:
	TYPE IDENTIFIER {
		char str[256];
		strcpy(str, $2);
		strcat(str, "()");

		$$ = new_node(str, root);
		add_row_symbol_table(s_table, $2, $1, scope, false);

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
		add_row_symbol_table(s_table, $3, str, scope, false);

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

			add_row_symbol_table(s_table, $3, $2, scope, true);
			push_arg_to_arglist(s_table, $2, last_f);
		}
		|
		COM TYPE LIST IDENTIFIER ParamList {
			$$ = new_node("ParamList", root);
			add_child($$, $5);

			char str[256];
			strcpy(str, $2);
			strcat(str," LIST ");

			add_row_symbol_table(s_table, $4, str, scope, true);
			push_arg_to_arglist(s_table, str, last_f);
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
		IfHead LP Expression RP Statement {
			$$ = new_node("SelStatement", root);
			add_child($$, $3);
			add_child($$, $5);
			decrease_depth_scope(scope);
		}
	|	IfHead LP Expression RP Statement ElseHead Statement {
			$$ = new_node("SelStatement", root);
			add_child($$, $3);
			add_child($$, $5);
			add_child($$, $7);
			decrease_depth_scope(scope);
		}
		;

IfHead:
	IF {
		increase_depth_scope(scope);
	}
	;

ElseHead:
	ELSE {
		decrease_depth_scope(scope);
		increase_depth_scope(scope);
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
		ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement {
			$$ = new_node("FOR", root);
			add_child($$, $3);
			add_child($$, $5);
			add_child($$, $7);
			add_child($$, $9);
			decrease_depth_scope(scope);
		}
		;
	
ForHead:
		FOR {
			increase_depth_scope(scope);
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

		| AdditiveExpression TWD IDENTIFIER {
			$$ = new_node(":", root);
			add_child($$, $1);
		}
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

	|	LP Expression RP {
			$$ = new_node("PrimaryExpression", root); 
			add_child($$, $2);
		}

	|	IDENTIFIER LP Params RP {
			$$ = new_node("FunctionCall", root);
			add_child($$, new_node($1, root));
			add_child($$, $3);
		}
		
	|	NIL {$$ = new_node("NIL", root);}
	;

Params:
	%empty {$$ = new_node("Args", root);}
	|
	Expression {$$ = new_node("Args", root);}
	|
	Params COM Expression {$$ = new_node("Args", root); add_child($$, $1);}
;

%%
int yydebug = 1;

syntax_tree* parse() {
    root = new_syntax_tree();
	s_table = new_symbol_table();
	scope = new_scope_stack();
	last_f = 0;

    yyparse();

	if(!analyze_semantics(s_table, root)) {
		printf("\n\033[92mNo semantic errors were found.\033[0m\n");
	}

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
   fprintf (stderr, "\033[91m%s, at ln %lu col %lu\033[0m\n", s, n_line, n_column);
 }