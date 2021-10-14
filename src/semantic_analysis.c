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

int analyze_semantics(symbol_table* table, syntax_tree* tree) {
    char*** vars = (char***) calloc(1, sizeof(char**));
    uint16_t n_vars = 0;

    if (!main_exists(table)) return print_error("No main function found.");

    if (double_declaration_exists(table, vars, &n_vars)) {
        for (int i = 0; i < n_vars; i++) {
            fprintf(stderr, "\033[91mSemantic error: Variable %s redeclared\033[0m\n", (*vars)[i]);
        }

        free(*vars);
        free(vars);

        return -1;
    }

    free(vars);
    return 0;
}