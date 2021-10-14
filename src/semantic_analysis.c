#include "semantic_analysis.h"

bool main_exists(symbol_table* table) {
    for (int i = 0; i < table->n_lines; i++) {
        if (!table->is_var[i] && !strcmp(table->symbol[i], "main"))
            return true;
    }
    return false;
}

int print_error(const char* message) {
    fprintf(stderr, "\033[91m%s\033[0m\n", message);

    return -1;
}

int analyze_semantics(symbol_table* table, syntax_tree* tree) {
    if (!main_exists(table)) return print_error("No main function found.");

    return 0;
}