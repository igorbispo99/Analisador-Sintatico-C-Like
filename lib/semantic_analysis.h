#ifndef SEMANTIC_ANALYSIS_H_
#define SEMANTIC_ANALYSIS_H_

#include "symbol_table.h"
#include "syntax_tree.h"

extern uint16_t last_f;

void push_default_functions(symbol_table* table, scope_t* scope, uint16_t* last_f);

bool main_exists(symbol_table* table);
bool double_declaration_exists(symbol_table* table, char*** vars, uint16_t* n_vars);
bool variable_was_declared(symbol_table* table, scope_t* scope, char* symbol);
bool check_function_arg(char* type_exp, char* symbol_func,uint16_t param_idx, symbol_table* table, scope_t* scope, uint16_t* n_args);
char** get_function_signature(char* symbol_func, symbol_table* table, scope_t* scope, uint16_t* n_params);
void push_param_to_paramlist(symbol_table* table, const char* type, char*** paramlist, uint16_t* n_params);
bool analyze_semantics(symbol_table* table, syntax_tree* root);
bool check_type_with_casting(char* symbol_1, char* symbol_2);

bool equal_to(char* str1, char* str2);

char* check_type_subtree(syntax_tree_node* node, symbol_table* table, scope_t* scope);

int print_error(const char* message);

void output_tac(symbol_table* table, syntax_tree* root, char* filename);

#endif