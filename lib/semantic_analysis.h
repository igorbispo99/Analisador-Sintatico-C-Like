#ifndef SEMANTIC_ANALYSIS_H_
#define SEMANTIC_ANALYSIS_H_

#include "symbol_table.h"
#include "syntax_tree.h"

void push_default_functions(symbol_table* table, scope_t* scope, uint16_t* last_f);

bool main_exists(symbol_table* table);
bool double_declaration_exists(symbol_table* table, char*** vars, uint16_t* n_vars);
bool variable_was_declared(symbol_table* table, scope_t* scope, char* symbol);
bool analyze_semantics(symbol_table* table, syntax_tree* root);

char* check_type_subtree(syntax_tree_node* node, symbol_table* table, scope_t* scope);

int print_error(const char* message);

#endif