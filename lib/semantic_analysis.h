#ifndef SEMANTIC_ANALYSIS_H_
#define SEMANTIC_ANALYSIS_H_

#include "symbol_table.h"
#include "syntax_tree.h"

bool main_exists(symbol_table* table);
int analyze_semantics(symbol_table* table, syntax_tree* root);
int print_error(const char* message);

#endif