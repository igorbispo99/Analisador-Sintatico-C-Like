#include "symbol_table.h"

symbol_table* new_symbol_table() {
    symbol_table* t = (symbol_table*) malloc(sizeof(symbol_table));

    t->symbol = (char**) malloc(sizeof(char*));
    t->scope = (uint16_t*) malloc(sizeof(uint16_t));
    t->type = (char**) malloc(sizeof(char*));
    t->is_var = (bool*) malloc(sizeof(bool));

    t->n_lines = 0;

    return t;
}

symbol_table* add_row_symbol_table(symbol_table* table, const char* symbol, const char* type, uint16_t scope, bool is_var) {
    table->n_lines = table->n_lines + 1;
    table->symbol = (char**) realloc(table->symbol, sizeof(char*)*table->n_lines);
    char* str_symbol = (char*) malloc(128);
    strcpy(str_symbol, symbol);

    table->type = (char**) realloc(table->type, sizeof(char*)*table->n_lines);
    char* str_type = (char*) malloc(128);
    strcpy(str_type, type);

    table->scope = (uint16_t*) realloc(table->scope, sizeof(uint16_t)*table->n_lines);
    table->is_var = (bool*) realloc(table->is_var, sizeof(bool)*table->n_lines);

    table->symbol[table->n_lines - 1] = str_symbol;
    table->type[table->n_lines - 1] = str_type;
    table->scope[table->n_lines - 1] = scope;
    table->is_var[table->n_lines -1] = is_var;

    return table;
}

void show_table(symbol_table* table) {
    char* first_row[] = {"Function?", "Type", "Symbol", "Scope"};

    printf("\n%-10s   %-15s   %-32s   %-10s\n", first_row[0], first_row[1], first_row[2], first_row[3]);
    printf("\n");
    for (int i = 0; i < table->n_lines; i += 1) {
        printf("%-10s   %-15s   %-32s   %-10u\n", table->is_var[i] ? "No" : "Yes", table->type[i], table->symbol[i], table->scope[i]);
    }
    printf("\n");
}

void free_table(symbol_table* table) {
    if (!table) return;

    for (int i = 0; i < table->n_lines; i += 1) {
        free(table->symbol[i]);
        free(table->type[i]);
    }

    free(table->scope);
    free(table->symbol);
    free(table->type);
    free(table->is_var);
    free(table); 
}

scope_t* new_scope_stack() {
    scope_t* s = (scope_t*) malloc(sizeof(scope_t));

    s->stack = (uint16_t*) malloc(sizeof(uint16_t));

    s->current_n = 0;
    s->stack[0] = s->current_n;
    s->stack_size = 1;

    return s;
}

void increase_depth_scope(scope_t* scp) {
    scp->current_n = scp->current_n + 1;
    scp->stack = realloc(scp->stack, (scp->stack_size + 1)*sizeof(uint16_t));

    for (int i = scp->stack_size; i > 0; i-=1) {
        scp->stack[i] = scp->stack[i-1];
    }

    scp->stack[0] = scp->current_n;
    scp->stack_size += 1;
}

void decrease_depth_scope(scope_t* scp) {
    scp->stack_size = scp->stack_size - 1;

    for (int i = 0; i < scp->stack_size; i+=1) {
        scp->stack[i] = scp->stack[i+1];
    }
}

void free_scope(scope_t* scp) {
    if (!scp) return;
    free(scp->stack);
    free(scp);
}