#include "symbol_table.h"

symbol_table* new_symbol_table() {
    symbol_table* t = (symbol_table*) malloc(sizeof(symbol_table));

    t->symbol = (char**) malloc(sizeof(char*));
    t->scope = (scope_t**) malloc(sizeof(scope_t*));
    t->type = (char**) malloc(sizeof(char*));
    t->is_var = (bool*) malloc(sizeof(bool));

    t->args = (char***) malloc(sizeof(char**));

    t->n_args = (uint16_t*) malloc(sizeof(uint16_t));

    t->n_lines = 0;

    return t;
}

void push_arg_to_arglist(symbol_table* table, const char* type, uint16_t line) {
    table->n_args[line] = table->n_args[line] + 1;
    table->args[line] = realloc(table->args[line], table->n_args[line] * (sizeof(char*)));

    table->args[line][table->n_args[line]-1] = calloc(256, sizeof(char));
    strcpy(table->args[line][table->n_args[line]-1], type);
}

symbol_table* add_row_symbol_table(symbol_table* table, const char* symbol, const char* type, scope_t* scope, bool is_var) {
    table->n_lines = table->n_lines + 1;

    table->symbol = (char**) realloc(table->symbol, sizeof(char*)*table->n_lines);
    char* str_symbol = (char*) calloc(128, sizeof(char));
    strcpy(str_symbol, symbol);

    table->type = (char**) realloc(table->type, sizeof(char*)*table->n_lines);
    char* str_type = (char*) calloc(128, sizeof(char));
    strcpy(str_type, type);

    table->scope = (scope_t**) realloc(table->scope, sizeof(scope_t*)*table->n_lines);
    table->is_var = (bool*) realloc(table->is_var, sizeof(bool)*table->n_lines);
    table->args = (char***) realloc(table->args, sizeof(char**)*table->n_lines);
    table->n_args = (uint16_t*) realloc(table->n_args, sizeof(uint16_t)*table->n_lines);

    table->symbol[table->n_lines - 1] = str_symbol;
    table->type[table->n_lines - 1] = str_type;
    table->is_var[table->n_lines -1] = is_var;
    table->n_args[table->n_lines -1] = 0;
    table->args[table->n_lines -1] = (char**) malloc(sizeof(char**));

    table->scope[table->n_lines - 1] = (scope_t*) malloc(sizeof(scope_t));
    table->scope[table->n_lines - 1]->current_n = scope->current_n;
    table->scope[table->n_lines - 1]->stack_size = scope->stack_size;
    table->scope[table->n_lines - 1]->stack = (uint16_t *) malloc(sizeof(uint16_t) * scope->stack_size);
    memcpy(table->scope[table->n_lines - 1]->stack, scope->stack, sizeof(uint16_t) * scope->stack_size);

    return table;
}

char* get_func_args(symbol_table* table, uint16_t line) {
    char* out_str = calloc(1024, sizeof(char));

    out_str[0] = '(';

    int i = 0;
    for (; i < table->n_args[line] -1 ; i++) {
        strcat(out_str, table->args[line][i]);
        strcat(out_str, ", ");
    }

    if (table->n_args[line])
        strcat(out_str, table->args[line][i]);
        
    strcat(out_str, ")");
    return out_str;
}

char* get_scope_stack(symbol_table* table, uint16_t line) {
    char* out_str = calloc(1024, sizeof(char));

    int i = 0;
    for (; i < table->scope[line]->stack_size - 1; i++) {
        char num[128];
        sprintf(num, "%u -> ", table->scope[line]->stack[i]);
        strcat(out_str, num);
    }

    char num[128];
    sprintf(num, "%u", table->scope[line]->stack[i]);
    strcat(out_str, num);  

    return out_str;
}

void show_table(symbol_table* table) {
    char* first_row[] = {"Symbol", "Function?", "Args", "Type/Return", "Scope Stack"};

    printf("\n%-16s   %-10s   %-32s   %-16s   %-32s\n", first_row[0], first_row[1], first_row[2], first_row[3], first_row[4]);
    printf("\n");
    for (int i = 0; i < table->n_lines; i += 1) {
        char* func_args = table->is_var[i] ? strdup("*") : get_func_args(table, i);
        char* scope_stack = get_scope_stack(table, i);

        printf("%-16s   %-10s   %-32s   %-16s   %-32s\n", table->symbol[i], table->is_var[i] ? "No" : "Yes",
                                                        func_args, table->type[i], scope_stack);
        
        free(func_args);
        free(scope_stack);
    }
    printf("\n");
}

void free_table(symbol_table* table) {
    if (!table) return;

    for (int i = 0; i < table->n_lines; i += 1) {
        free(table->symbol[i]);
        free(table->type[i]);

        for (int j = 0; j < table->n_args[i]; j++) {
            free(table->args[i][j]);
        }

        free(table->args[i]);

        free(table->scope[i]->stack);
        free(table->scope[i]);
    }

    free(table->scope);
    free(table->symbol);
    free(table->type);
    free(table->n_args);
    free(table->args);
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