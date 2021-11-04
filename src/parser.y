%locations
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

	extern syntax_tree* root;
	extern symbol_table* s_table;
	extern scope_t* scope;
	extern uint16_t last_f;
	extern bool first_pass_sematic_error_found;
	extern char** args_last_f;
	extern int args_count;
	extern bool syntax_error_found;
}

%union{
    char string[MAX_BUFFER_SIZE/2];
    double num_float;
	long int num_int;
    syntax_tree_node* state;
	syntax_tree* tree;
}

%token TYPE IDENTIFIER LIST 
%token LP SEMI COM RCB LCB TWD PLUS MIN MUL LT GT LEQ GEQ DIF MAP FIL DIV TR TNR HD ATT COMP_EQ AND OR RP NUM_CONST_INT NUM_CONST_FLOAT
%token NIL STR WRITE READ WRITE_LN
%token IF ELSE FOR RET

%precedence DIF GT LT GEQ LEQ
%precedence FIL TWD

%precedence RP
%precedence ELSE
%precedence IDENTIFIER
%precedence LP

%type <state> GlobalDef GlobalDec Declaration ParamList CompStatement SelStatement JmpStatement LogicalAndExpression
%type <state> FunctionDefinition Definition Statement StatementExp ExpStatement ItStatement Expression LogicalOrExpression
%type <state> EqualityExpression RelationalExpression AdditiveExpression MultiplicativeExpression IfHead ElseHead
%type <state> UnaryExpression PrimaryExpression FunctionHead ExpAtt Params ForHead FunctionArgs
%type <num_int> NUM_CONST_INT
%type <num_float> NUM_CONST_FLOAT
%type <string> IDENTIFIER TYPE SEMI LIST STR
%type <tree> ROOT_TREE
%start ROOT_TREE

%%

ROOT_TREE:
        GlobalDef {;}
        ;

GlobalDef:
        GlobalDec {
			$$ = new_node("GlobalDefinition", root, -1, false, "-");
			add_child($$, $1);
		}
        |   GlobalDef GlobalDec {
			$$ = new_node("GlobalDefinition", root, -1, false, "-");
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
        ;

Declaration:
		TYPE IDENTIFIER SEMI {
			char str[2*MAX_BUFFER_SIZE];
			if(!add_row_symbol_table(s_table, $2, $1, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @2.first_line, @2.first_column, $2);
				first_pass_sematic_error_found = true;
			}

			sprintf(str, "%s %s (scope %u)", $1, $2, get_scope_symbol(s_table, $2, scope, true));

			$$ = new_node(str, root, get_scope_symbol(s_table, $2, scope, true), false, $1);
		}
		|
		TYPE LIST IDENTIFIER SEMI {
			char str[2*MAX_BUFFER_SIZE];
			sprintf(str, "%s LIST ", $1);
			
			if(!add_row_symbol_table(s_table, $3, str, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @3.first_line, @3.first_column, $3);
				first_pass_sematic_error_found = true;
			}

			char node_str[2*MAX_BUFFER_SIZE];
			sprintf(node_str,"%s LIST %s (scope %u)", $1, $3, get_scope_symbol(s_table, $3, scope, true));
			
			$$ = new_node(node_str, root, get_scope_symbol(s_table, $3, scope, true), false, str);
		}
		;

Definition:
		IDENTIFIER ATT Expression {
			char* exp_type = get_type_var($1, s_table, scope, true);

			$$ = new_node("=", root, get_scope_symbol(s_table, $1, scope, true), false, exp_type);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, $1);

			add_child($$, new_node(str, root, get_scope_symbol(s_table, $1, scope, true), true, exp_type));
			add_child($$, $3);

			if (!variable_was_declared(s_table, scope, $1)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", $1, @1.first_line, @1.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

			
			if(!check_type_subtree($$, s_table, scope)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Invalid operand types, at ln %lu col %lu.", n_line, n_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
		|
		IDENTIFIER ATT MIN NUM_CONST_FLOAT {
			char* exp_type = get_type_var($1, s_table, scope, true);

			$$ = new_node("=", root, get_scope_symbol(s_table, $1, scope, true), false, exp_type);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, $1);

			add_child($$, new_node(str, root, get_scope_symbol(s_table, $1, scope, true), true, exp_type));
			sprintf(str, "-%lf", $4);

			add_child($$, new_node(str, root, get_scope_symbol(s_table, $1, scope, true), false, "float"));

			if (!variable_was_declared(s_table, scope, $1)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", $1, @1.first_line, @1.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

			
			if(!check_type_subtree($$, s_table, scope)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Invalid expression type, at ln %d col %d.", @4.first_line, @4.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
		|
		IDENTIFIER ATT MIN NUM_CONST_INT{
			char* exp_type = get_type_var($1, s_table, scope, true);

			$$ = new_node("=", root, get_scope_symbol(s_table, $1, scope, true), false, exp_type);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, $1);

			add_child($$, new_node(str, root, get_scope_symbol(s_table, $1, scope, true), true, exp_type));
			sprintf(str, "-%ld", $4);

			add_child($$, new_node(str, root, get_scope_symbol(s_table, $1, scope, true), false, "int"));

			if (!variable_was_declared(s_table, scope, $1)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", $1, @1.first_line, @1.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

			
			if(!check_type_subtree($$, s_table, scope)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Invalid expression type, at ln %d col %d.", @4.first_line, @4.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
		|
		IDENTIFIER ATT MIN IDENTIFIER {
			char* exp_type = get_type_var($1, s_table, scope, true);
			$$ = new_node("=", root, get_scope_symbol(s_table, $1, scope, true), false, exp_type);

			char str[MAX_BUFFER_SIZE];
			strcpy(str, $1);

			add_child($$, new_node(str, root, get_scope_symbol(s_table, $1, scope, true), true, exp_type));

			exp_type = get_type_var($4, s_table, scope, true);
			add_child($$, new_node("-", root, get_scope_symbol(s_table, $4, scope, true), false, exp_type));

			add_child($$->children[1], new_node($4, root, get_scope_symbol(s_table, $4, scope, true), true, exp_type));

			if (!variable_was_declared(s_table, scope, $1)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", $1, @1.first_line, @1.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

			if (!variable_was_declared(s_table, scope, $4)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", $4, @4.first_line, @4.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

			if(!check_type_subtree($$, s_table, scope)) {
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Invalid expression type, at ln %d col %d.", @4.first_line, @4.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}
		;
 
FunctionDefinition:
    FunctionHead LP FunctionArgs RP CompStatement{
		$$ = new_node("FunctionDefinition", root, scope->stack[0], false, "-");

		add_child($$, $1);
		add_child($$, $3);
		add_child($$, $5);

		decrease_depth_scope(scope);
	}
	|
	FunctionHead LP RP CompStatement{
		$$ = new_node("FunctionDefinition", root, scope->stack[0], false, "-");
		add_child($$, $1);
		add_child($$, $4);
		decrease_depth_scope(scope);

		push_arg_to_arglist(s_table, "-", last_f, true);
	}
	|
	FunctionHead LP error RP CompStatement {
		$$ = new_node("FunctionDefinition", root, scope->stack[0], false, "-");
		add_child($$, $1);
		add_child($$, $5);
		decrease_depth_scope(scope);
	}
    ;

FunctionArgs:
	TYPE IDENTIFIER {
		$$ = new_node("FunctionParameters", root, scope->stack[0], false, "-");
		char str[MAX_BUFFER_SIZE];
		sprintf(str, "%s %s", $1, $2);

		add_child($$, new_node(str, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, $2, $1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @2.first_line, @2.first_column, $2);
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, $1, last_f, true);
	}
	|
	TYPE IDENTIFIER COM TYPE IDENTIFIER ParamList {
		$$ = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char str[MAX_BUFFER_SIZE];
		sprintf(str, "%s %s", $1, $2);
		add_child($$, new_node(str, root, scope->stack[0], false, "-"));

		sprintf(str, "%s %s", $4, $5);
		add_child($$, new_node(str, root, scope->stack[0], false, "-"));
		
		add_child($$, $6);


		if(!add_row_symbol_table(s_table, $2, $1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @2.first_line, @2.first_column, $2);
			first_pass_sematic_error_found = true;
		}


		if(!add_row_symbol_table(s_table, $5, $4, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @5.first_line, @5.first_column, $5);
			first_pass_sematic_error_found = true;
		}
		push_arg_to_arglist(s_table, $4, last_f, false);
		push_arg_to_arglist(s_table, $1, last_f, false);

	}
	|
	TYPE LIST IDENTIFIER {
		$$ = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char str[MAX_BUFFER_SIZE];
		strcpy(str, $1);
		strcat(str," LIST ");

		char str_list[MAX_BUFFER_SIZE*2];
		sprintf(str_list, "%s LIST %s", $1, $3);

		add_child($$, new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, $3, str, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @3.first_line, @3.first_column, $3);
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, str, last_f, true);	
	}
	|
	TYPE LIST IDENTIFIER COM TYPE LIST IDENTIFIER ParamList {
		$$ = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, $1);
		strcat(arg_1," LIST ");

		char str_list[MAX_BUFFER_SIZE*2];
		sprintf(str_list, "%s LIST %s", $1, $3);

		add_child($$, new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, $3, arg_1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @3.first_line, @3.first_column, $3);
			first_pass_sematic_error_found = true;
		}


		char arg_2[MAX_BUFFER_SIZE*2];
		strcpy(arg_2, $5);
		strcat(arg_2," LIST ");

		sprintf(str_list, "%s LIST %s", $5, $7);

		add_child($$, new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, $7, arg_2, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @7.first_line, @7.first_column, $7);
			first_pass_sematic_error_found = true;
		}

		add_child($$, $8);

		push_arg_to_arglist(s_table, arg_2, last_f, false);
		push_arg_to_arglist(s_table, arg_1, last_f, false);

	}
	|
	TYPE IDENTIFIER COM TYPE LIST IDENTIFIER ParamList {
		$$ = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char str[MAX_BUFFER_SIZE];
		sprintf(str, "%s %s", $1, $2);

		add_child($$, new_node(str, root, scope->stack[0], false, "-"));
		if(!add_row_symbol_table(s_table, $2, $1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @2.first_line, @2.first_column, $2);
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, $1, last_f, false);

		char arg_2[MAX_BUFFER_SIZE];
		strcpy(arg_2, $4);
		strcat(arg_2," LIST ");

		char str_list[MAX_BUFFER_SIZE*2];
		sprintf(str_list, "%s LIST %s", $4, $6);

		add_child($$, new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, $6, arg_2, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @6.first_line, @6.first_column, $6);
			first_pass_sematic_error_found = true;
		}

		add_child($$, $7);

		push_arg_to_arglist(s_table, arg_2, last_f, false);
	}
	|
	TYPE LIST IDENTIFIER COM TYPE IDENTIFIER ParamList {
		$$ = new_node("FunctionParameters", root, scope->stack[0], false, "-");

		char arg_1[MAX_BUFFER_SIZE];
		strcpy(arg_1, $1);
		strcat(arg_1," LIST ");

		char str_list[MAX_BUFFER_SIZE*2];
		sprintf(str_list, "%s LIST %s", $1, $3);

		add_child($$, new_node(str_list, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, $3, arg_1, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @3.first_line, @3.first_column, $3);
			first_pass_sematic_error_found = true;
		}

		push_arg_to_arglist(s_table, arg_1, last_f, false);

		char str[MAX_BUFFER_SIZE];
		sprintf(str, "%s %s", $1, $2);

		add_child($$, new_node(str, root, scope->stack[0], false, "-"));

		if(!add_row_symbol_table(s_table, $6, $5, scope, true))
		{
			printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @6.first_line, @6.first_column, $6);
			first_pass_sematic_error_found = true;
		}

		add_child($$, $7);

		push_arg_to_arglist(s_table, $5, last_f, false);
	}
	;

FunctionHead:
	TYPE IDENTIFIER {
		char str[MAX_BUFFER_SIZE];
		strcpy(str, $2);
		strcat(str, "()");

		$$ = new_node(str, root, scope->stack[0], false, $1);

		if(!add_row_symbol_table(s_table, $2, $1, scope, false))
		{
			printf("\033[91mSemantic error at line %d, column %d: Function %s already declared\033[0m\n", @2.first_line, @2.first_column, $2);
			first_pass_sematic_error_found = true;
		}

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);
	}
	|
	TYPE LIST IDENTIFIER {
		char f_name[MAX_BUFFER_SIZE];
		strcpy(f_name, $3);
		strcat(f_name, "()");


		char str[MAX_BUFFER_SIZE];
		strcpy(str, $1);
		strcat(str," LIST ");

		$$ = new_node(f_name, root, scope->stack[0], false, str);

		if(!add_row_symbol_table(s_table, $3, str, scope, false))
		{
			printf("\033[91mSemantic error at line %d, column %d: Function %s already declared\033[0m\n", @3.first_line, @3.first_column, f_name);
			first_pass_sematic_error_found = true;
		}

		last_f = s_table->n_lines -1;

		increase_depth_scope(scope);
	}
	;

ParamList:
      %empty {
			$$ = NULL;
		}
		|
		COM TYPE IDENTIFIER ParamList {
			$$ = new_node("ParamList", root, scope->stack[0], false, "-");

			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%s %s", $2, $3);

			add_child($$, new_node(str, root, scope->stack[0], false, "-"));
			add_child($$, $4);

			if (!add_row_symbol_table(s_table, $3, $2, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @3.first_line, @3.first_column, $3);
				first_pass_sematic_error_found = true;
			}

			push_arg_to_arglist(s_table, $2, last_f, true);
		}
		|
		COM TYPE LIST IDENTIFIER ParamList {
			$$ = new_node("ParamList", root, scope->stack[0], false, "-");

			char str[MAX_BUFFER_SIZE];
			strcpy(str, $2);
			strcat(str," LIST ");

			char str_list[MAX_BUFFER_SIZE*2];
			sprintf(str_list, "%s LIST %s", $2, $4);

			add_child($$, new_node(str_list, root, scope->stack[0], false, "-"));

			add_child($$, $5);


			if(!add_row_symbol_table(s_table, $4, str, scope, true))
			{
				printf("\033[91mSemantic error at line %d, column %d: Variable %s already declared\033[0m\n", @4.first_line, @4.first_column, $4);
				first_pass_sematic_error_found = true;
			}

			push_arg_to_arglist(s_table, str, last_f, true);
		}
    ;

//

Statement:
		CompStatement { $$ = $1; }
	|   JmpStatement { $$ = $1; }
	|	SelStatement { $$ = $1; }
	|	ItStatement { $$ = $1; }
	|	ExpStatement { $$ = $1; }

		;

CompStatement:
		LCB StatementExp {
			$$ =$2;
		}
		;

StatementExp:
		RCB { $$ =NULL; }
	|	Declaration StatementExp {
			$$ = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child($$, $1);
			add_child($$, $2);
		}
	|	Definition StatementExp {
			$$ = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child($$, $1);
			add_child($$, $2);
		}
	| 	Statement StatementExp {
			$$ = new_node("StatementExp", root, scope->stack[0], false, "-");
			add_child($$, $1);
			add_child($$, $2);
		}
	|	error RCB {yyerrok; $$ = NULL;}

	;

 SelStatement:
		IfHead LP Expression RP Statement {
			$$ = new_node("IF", root, scope->stack[0], false, "-");
			add_child($$, $3);
			add_child($$, $5);
			decrease_depth_scope(scope);
		}
		| IfHead LP Expression RP Definition {
			$$ = new_node("IF", root, scope->stack[0], false, "-");
			add_child($$, $3);
			add_child($$, $5);
			decrease_depth_scope(scope);
		}

		| IfHead LP Expression RP Statement ElseHead Statement {
			$$ = new_node("IF_ELSE", root, scope->stack[0], false, "-");

			add_child($$, $3);
			add_child($$, $5);
			add_child($$, $7);

			decrease_depth_scope(scope);
		}

		
	|   IfHead LP error RP Statement {
		$$ = new_node("IF", root, scope->stack[0], false, "-");
		add_child($$, $5);
	}
	|   error ElseHead Statement {$$=NULL;decrease_depth_scope(scope);yyerrok;}
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
			$$ = new_node("RETURN", root, scope->stack[0], false, $2->type);
			add_child($$, $2);

			if (!check_type_subtree($$, s_table, scope))
			{
				printf("\033[91mSemantic error at line %d, column %d: Incompatible return type.\033[0m\n", @2.first_line, @2.first_column);
				first_pass_sematic_error_found = true;
			}

		}
		;

ItStatement:
		ForHead LP ExpAtt SEMI ExpAtt SEMI ExpAtt RP Statement {
			$$ = new_node("FOR", root, scope->stack[0], false, "-");
			add_child($$, $3);
			add_child($$, $5);
			add_child($$, $7);
			add_child($$, $9);
			decrease_depth_scope(scope);
		}
		|
		ForHead LP ExpAtt SEMI error RP Statement {
			$$ = new_node("FOR", root, scope->stack[0], false, "-");
			add_child($$, $3);
			add_child($$, $7);

			decrease_depth_scope(scope);
			yyerrok;
		} 
		|
		ForHead LP error RP Statement {
			$$ = new_node("FOR", root, scope->stack[0], false, "-");
			add_child($$, $5);
			
			decrease_depth_scope(scope);
			yyerrok;
		}
		|
		ForHead LP ExpAtt SEMI ExpAtt SEMI error RP Statement {
			$$ = new_node("FOR", root, scope->stack[0], false, "-");
			add_child($$, $3);
			add_child($$, $5);
			add_child($$, $9);
			decrease_depth_scope(scope);
			yyerrok;
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
	|
	error SEMI {
		yyerrok;
		$$ = NULL;
	}
	|
	error COM {
		yyerrok;
		$$ = NULL;
	}
	; 
//

Expression:
		LogicalOrExpression { $$ = $1; }
		;

LogicalOrExpression:
		LogicalAndExpression { $$ = $1; }
	|	LogicalOrExpression OR LogicalAndExpression {
			$$ = new_node("||", root, scope->stack[0], false, "int");
			add_child($$, $1);
			add_child($$, $3);

		}
		;

LogicalAndExpression:
		EqualityExpression {$$ = $1;}
    |	LogicalAndExpression AND EqualityExpression {
			$$ = new_node("&&", root, scope->stack[0], false, "int");
			add_child($$, $1);
			add_child($$, $3);
		}
	;

EqualityExpression:
	    RelationalExpression { $$ = $1; }
	|	EqualityExpression COMP_EQ RelationalExpression {
			$$ = new_node("==", root, scope->stack[0], false, "int");
			add_child($$, $1);
			add_child($$, $3);
		}

		;

RelationalExpression:
			AdditiveExpression { $$ = $1; }
	|       RelationalExpression LEQ AdditiveExpression {
				$$ = new_node("<=", root, scope->stack[0], false, "int");
				add_child($$, $1);
				add_child($$, $3);
		}
    |       RelationalExpression GEQ AdditiveExpression {
				$$ = new_node(">=", root, scope->stack[0], false, "int");
				add_child($$, $1);
				add_child($$, $3);
	}
	|       RelationalExpression LT AdditiveExpression {
				$$ = new_node("<", root, scope->stack[0], false, "int");
				add_child($$, $1);
				add_child($$, $3);
	}
	|       RelationalExpression GT AdditiveExpression {
				$$ = new_node(">", root, scope->stack[0], false, "int");
				add_child($$, $1);
				add_child($$, $3);
	}
	|		RelationalExpression DIF AdditiveExpression {
				$$ = new_node("!=", root, scope->stack[0], false, "int");
				add_child($$, $1);
				add_child($$, $3);
	}
	|   AdditiveExpression MAP AdditiveExpression {
				$$ = new_node(">>", root, scope->stack[0], false, "float LIST ");
				add_child($$, $1);
				add_child($$, $3);
	}
	|   AdditiveExpression FIL RelationalExpression {
				$$ = new_node("<<", root, scope->stack[0], false, "float LIST ");
				add_child($$, $1);
				add_child($$, $3);
	}
	| AdditiveExpression TWD RelationalExpression {
			$$ = new_node(":", root, scope->stack[0], false, "float LIST ");
			add_child($$, $1);
			add_child($$, $3);
	}
	;

AdditiveExpression:
		MultiplicativeExpression { $$ = $1; }
	|	AdditiveExpression PLUS MultiplicativeExpression {
			if (equal_to($1->type, "float") || equal_to($3->type, "float")) {
				$$ = new_node("+", root, scope->stack[0], false, "float");
				add_child($$, $1);
				add_child($$, $3);
			} else {
				$$ = new_node("+", root, scope->stack[0], false, "int");
				add_child($$, $1);
				add_child($$, $3);
			}
	}
    |	AdditiveExpression MIN MultiplicativeExpression {
			if (equal_to($1->type, "float") || equal_to($3->type, "float")) {
				$$ = new_node("-", root, scope->stack[0], false, "float");
				add_child($$, $1);
				add_child($$, $3);
			} else {
				$$ = new_node("-", root, scope->stack[0], false, "int");
				add_child($$, $1);
				add_child($$, $3);
			}
	}
		;

MultiplicativeExpression:
		UnaryExpression { $$ = $1; }
	|	MultiplicativeExpression MUL UnaryExpression {
			if (equal_to($1->type, "float") || equal_to($3->type, "float")) {
				$$ = new_node("*", root, scope->stack[0], false, "float");
				add_child($$, $1);
				add_child($$, $3);
			} else {
				$$ = new_node("*", root, scope->stack[0], false, "int");
				add_child($$, $1);
				add_child($$, $3);
			}
	}
	|	MultiplicativeExpression DIV UnaryExpression {
			if (equal_to($1->type, "int")) {
				$$ = new_node("/", root, scope->stack[0], false, "int");
				add_child($$, $1);
				add_child($$, $3);
			} else {
				$$ = new_node("/", root, scope->stack[0], false, "float");
				add_child($$, $1);
				add_child($$, $3);
			}
	}
	;

UnaryExpression:
		PrimaryExpression { $$ = $1; }
	|	TNR UnaryExpression {
			if (equal_to($2->type, "float LIST ")) {
				$$ = new_node("!", root, scope->stack[0], false, "float LIST ");
				add_child($$, $2);
			} else {
				$$ = new_node("!", root, scope->stack[0], false, "int LIST ");
				add_child($$, $2);
			}
		}
	|	HD UnaryExpression {
			if (equal_to($2->type, "float LIST ")) {
				$$ = new_node("?", root, scope->stack[0], false, "float");
				add_child($$, $2);
			} else {
				$$ = new_node("?", root, scope->stack[0], false, "int");
				add_child($$, $2);
			}
		}
	|	TR UnaryExpression {
			if (equal_to($2->type, "float LIST ")) {
				$$ = new_node("%", root, scope->stack[0], false, "float LIST ");
				add_child($$, $2);
			} else {
				$$ = new_node("%", root, scope->stack[0], false, "int LIST ");
				add_child($$, $2);
			}
	}
	;
PrimaryExpression:
		IDENTIFIER {
			char* exp_type = get_type_var($1, s_table, scope, true);

			$$ = new_node($1, root, get_scope_symbol(s_table, $1, scope, true), true, exp_type);
			if (!variable_was_declared(s_table, scope, $1)) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Variable %s not declared, at ln %d col %d.", $1, @1.first_line, @1.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}
		}

	|   NUM_CONST_INT {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%ld", $1);
			$$ = new_node(str, root, scope->stack[0], false, "int");
		}
	|   NUM_CONST_FLOAT {
			char str[MAX_BUFFER_SIZE];
			sprintf(str, "%lf", $1);
			$$ = new_node(str, root, scope->stack[0], false, "float");
		}

	|	LP Expression RP {
			$$ = new_node("PrimaryExpression", root, scope->stack[0], false, $2->type); 
			add_child($$, $2);
		}

	|	LP error RP {
			yyerrok;
			$$ = NULL;
		}

	|	IDENTIFIER LP Params RP {
			char* exp_type = get_type_var($1, s_table, scope, false);

			$$ = new_node("FunctionCall", root, scope->stack[0], false, exp_type);
			add_child($$, new_node($1, root, scope->stack[0], true, exp_type));
			add_child($$, $3);

			if (!variable_was_declared(s_table, scope, $1)) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Function %s was not declared, at ln %d col %d.", $1, @1.first_line, @1.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;

								
				for (size_t i = 0; i < args_count; i++) {
						free(args_last_f[i]);
					}

				free(args_last_f);
			} else {
				uint16_t n_args = 0;

				char** args = get_function_signature($1, s_table, scope, &n_args, true);

				if (!args) {
					first_pass_sematic_error_found = true;
					char err[MAX_BUFFER_SIZE];
					sprintf(err, "Invalid function call, %s is not a function, at ln %d col %d.", $1, @1.first_line, @1.first_column);

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
						sprintf(err, "Invalid function call, function %s expect parameters ", $1);

						for (size_t i = 0; i < n_args; i++) {
							strcat(err, args[i]);
							if (i != n_args - 1) {
								strcat(err, ", ");
							}
						}

						char err_tail[MAX_BUFFER_SIZE];
						sprintf(err_tail, " at ln %d col %d.", @1.first_line, @1.first_column);
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
	|	IDENTIFIER LP RP {
			char* exp_type = get_type_var($1, s_table, scope, false);

			$$ = new_node("FunctionCall", root, scope->stack[0], false, exp_type);
			add_child($$, new_node($1, root, scope->stack[0], true, exp_type));
			add_child($$, new_node("", root, scope->stack[0], false, "-"));

			if (!variable_was_declared(s_table, scope, $1)) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE];
				sprintf(err, "Function %s was not declared, at ln %d col %d.", $1, @1.first_line, @1.first_column);

				print_error(err);

				first_pass_sematic_error_found = true;
			}

	        uint16_t n_args = 0;

			if (!check_function_arg("-", $1, 0, s_table, scope, &n_args)) {
				first_pass_sematic_error_found = true;
				char err[MAX_BUFFER_SIZE*2];

		        char** args = get_function_signature($1, s_table, scope, &n_args, true);

				if(!args) {
					sprintf(err, "Invalid function call, %s is not a function, at ln %d col %d.", $1, @1.first_line, @1.first_column);
					print_error(err);
				} else {
					sprintf(err, "Invalid function call, function %s expect parameters ", $1);

					for (uint16_t i = 0; i < n_args; i++) {
						strcat(err, args[i]);
						if (i != n_args - 1) {
							strcat(err, ", ");
						}
					}

					char err_tail[MAX_BUFFER_SIZE];

					sprintf(err_tail, ", at ln %d col %d.", @1.first_line, @1.first_column);
					strcat(err, err_tail);

					print_error(err);
				}

			}
	}		
	|	WRITE LP STR RP {
			$$ = new_node("write_call", root, scope->stack[0], false, "-");
			add_child($$, new_node($3, root, scope->stack[0], true, "String"));

		}
	|   WRITE LP Expression RP {
			$$ = new_node("write_call", root, scope->stack[0], false, "-");
			add_child($$, $3);
		}
	|	READ LP IDENTIFIER RP {
			char* exp_type = get_type_var($3, s_table, scope, true);

			$$ = new_node("read_call", root, scope->stack[0], false, exp_type);
			add_child($$, new_node($3, root, scope->stack[0], true, exp_type));
		}
	|	WRITE_LN LP STR RP  {
			$$ = new_node("write_ln_call", root, scope->stack[0], false, "-");
			add_child($$, new_node($3, root, scope->stack[0], false, "String"));
		}
	|	WRITE_LN LP Expression RP  {
			$$ = new_node("write_ln_call", root, scope->stack[0], false, "-");
			add_child($$, $3);
		}
		
	|	NIL {$$ = new_node("NIL", root, scope->stack[0], false, "float LIST ");}
	;

Params:
	Expression {
		$$ = new_node("Args", root, scope->stack[0], false, $1->type);
		add_child($$, $1);
		push_param_to_paramlist(s_table, check_type_subtree($1, s_table, scope), &args_last_f, &args_count);
	}
	|
	Params COM Expression {
		$$ = new_node("Args", root, scope->stack[0], false, $3->type);
		add_child($$, $1); 
		add_child($$, $3);
		push_param_to_paramlist(s_table, check_type_subtree($3, s_table, scope), &args_last_f, &args_count);
	}
;

%%
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