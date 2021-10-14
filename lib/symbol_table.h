#ifndef SYMBOL_TABLE_H_
#define SYMBOL_TABLE_H_

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct{
    uint16_t* stack;
    uint16_t stack_size;
    uint16_t current_n;
} scope_t;


typedef struct {
    char** symbol;
    scope_t** scope;
    char** type;
    char*** args;
    uint16_t* n_args;
    bool* is_var;

    uint16_t n_lines;
} symbol_table;

symbol_table* new_symbol_table();
symbol_table* add_row_symbol_table(symbol_table* table, const char* symbol, const char* type, scope_t* scope, bool is_var);
void push_arg_to_arglist(symbol_table* table, const char* type, uint16_t line);
void show_table(symbol_table* table);
void free_table(symbol_table* table);

scope_t* new_scope_stack();
void increase_depth_scope(scope_t* scp);
void decrease_depth_scope(scope_t* scp);
void free_scope(scope_t* scp);

#endif