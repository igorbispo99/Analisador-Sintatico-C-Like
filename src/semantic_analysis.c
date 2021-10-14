#include "semantic_analysis.h"

bool main_exists(symbol_table* table) {
    for (int i = 0; i < table->n_lines; i++) {
        if (!table->is_var[i] && !strcmp(table->symbol[i], "main"))
            return true;
    }
    return false;
}

bool double_declaration_exists(symbol_table* table, char*** vars, uint16_t* n_vars) {
    bool double_dec = false;

    for(int i = 0; i < table->n_lines; i++) {
        char* symbol = table->symbol[i];

        for (int j = 0; j < i; j++) {
            if(!strcmp(table->symbol[j], symbol) && (table->is_var[i] == table->is_var[j])) {
                if (table->scope[i]->stack[0] == table->scope[j]->stack[0]) {
                    *n_vars = *n_vars + 1;
                    *vars = realloc(*vars, *n_vars * sizeof(char*));

                    (*vars)[*n_vars - 1] =  symbol;

                    double_dec = true;
                }
            }
        }
    }

    return double_dec;
}

int print_error(const char* message) {
    fprintf(stderr, "\033[91mSemantic error: %s\033[0m\n", message);

    return -1;
}

bool analyze_semantics(symbol_table* table, syntax_tree* tree) {
    char*** vars = (char***) calloc(1, sizeof(char**));
    uint16_t n_vars = 0;

    if (!main_exists(table)) return print_error("No main function found.");

    if (double_declaration_exists(table, vars, &n_vars)) {
        for (int i = 0; i < n_vars; i++) {
            fprintf(stderr, "\033[91mSemantic error: Variable %s redeclared.\033[0m\n", (*vars)[i]);
        }

        free(*vars);
        free(vars);

        return true;
    }

    free(vars);
    return false;
}

bool variable_was_declared(symbol_table* table, scope_t* scope, char* symbol) {
    uint16_t scope_symbol = scope->stack[0];

    for(int i = 0; i < table->n_lines; i++) {
        char* cur_symbol = table->symbol[i];

        if(!strcmp(cur_symbol, symbol)) {
            for (int j = 0; j < scope->stack_size; j++) {
                if (scope_symbol == scope->stack[j]) return true;
            }
        }
    }
    return false;
}

void push_default_functions(symbol_table* table, scope_t* scope, uint16_t* last_f) {
    add_row_symbol_table(table, "write", "None", scope, false);
	push_arg_to_arglist(table, "Polymorphic", *last_f);
	*last_f = *last_f + 1;

	add_row_symbol_table(table, "read", "Polymorphic", scope, false);
    *last_f = *last_f + 1;

    add_row_symbol_table(table, "writeln", "None", scope, false);
	push_arg_to_arglist(table, "Polymorphic", *last_f);
	*last_f = *last_f + 1;  

}