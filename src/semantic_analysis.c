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
    if (!main_exists(table)) return print_error("No main function found.");

    return false;
}

bool variable_was_declared(symbol_table* table, scope_t* scope, char* symbol) {
    for(int i = 0; i < table->n_lines; i++) {
        char* cur_symbol = table->symbol[i];

        if(!strcmp(cur_symbol, symbol)) {
            int j = scope->stack_size-1;
            int k = table->scope[i]->stack_size - 1;

            for (;j >= 0 && k >= 0; j--, k--) {
                if (scope->stack[j] != table->scope[i]->stack[k]) break;
            }

            if (k != -1) {
                continue;
            } else {
                return true;
            }
        }
    }
    return false;
}

char* element_is_operator(char* element) {
    const char * operators[] = {
        "+", "-", "*", "||", ":", ">>", "<<", "&&",
        "=", "==", "/", "?", ">=", "<=", "%"
    };

    int lim = (sizeof (operators) / sizeof (const char *));

    for (int i = 0; i < lim; i++) {
        if (!strcmp(operators[i], element))
            return element;
    }

    return NULL;
}

bool equal_to(char* str1, char* str2) {
    return !strcmp(str1, str2);
}

bool is_func(char* symbol, symbol_table* table, scope_t* scope) {
    for (int i = table->n_lines-1; i >= 0; i--) {
        if(!strcmp(table->symbol[i], symbol)) {
            if(!table->is_var[i])
                return true;
        }
    }

    return false;
}

char* get_type_var(char* symbol, symbol_table* table, scope_t* scope) {
    if (equal_to(symbol, "NIL")) return "NIL";

    for (int i = table->n_lines-1; i >= 0; i--) {
        if(!strcmp(table->symbol[i], symbol)) {
            return table->type[i];
        }
    }

    return "*";
}

char* check_type_subtree(syntax_tree_node* node, symbol_table* table, scope_t* scope) {
    char* type_left = NULL;
    char* type_right = NULL;
    char* type_exp = NULL;
    char* type_func = NULL;

    if (node->n_children > 1) {
        type_left = check_type_subtree(node->children[0], table, scope);
        type_right = check_type_subtree(node->children[1], table, scope);

        if (!type_left || !type_right) {
            return NULL;   
        }

    } else if (node->n_children == 1) {
        if (equal_to(node->element, "PrimaryExpression"))
            return check_type_subtree(node->children[0], table, scope);

        char* child_type = get_type_var(node->children[0]->element, table, scope);

        if (equal_to(node->element, "?")) { 
            if (equal_to(child_type, "float LIST ") || equal_to(child_type, "int LIST ")) {
                return "float";
            } else {
                return NULL;
            }
        } else if (equal_to(node->element, "%") || equal_to(node->element, "!")) {
            if (equal_to(child_type, "float LIST ") || equal_to(child_type, "int LIST ")) {
                return "float LIST";
            } else {
                return NULL;
            }
        } else if (equal_to(node->element, "RETURN")) {
            type_exp = check_type_subtree(node->children[0], table, scope);
            type_func = table->type[last_f];

            if ((equal_to(type_exp, "float") || equal_to(type_exp, "int")) &&
            (equal_to(type_func, "float") || equal_to(type_func, "int"))) {
                return type_exp;
            } else if ((equal_to(type_exp, "int LIST ") || equal_to(type_exp, "float LIST ")) &&
            (equal_to(type_func, "int LIST ") || equal_to(type_func, "float LIST "))) {
                return type_exp;
            } else {
                return NULL;
            }

        }
        return child_type;
    } else {
        char* n;
        strtod(node->element, &n);

        if ((n == node->element) || (*n != '\0')) {
            return get_type_var(node->element, table, scope);
        } else {
            return "float";

        }
    }

    if (equal_to(node->element, "+") || equal_to(node->element, "*") || 
        equal_to(node->element, "-") || equal_to(node->element, "/"))
        {
        if ((equal_to(type_left, "int") || equal_to(type_left, "float")) &&
            (equal_to(type_right, "int") || equal_to(type_right, "float"))) 
            {
                return "float";
        } else {
            return NULL;
        }

    } else if (equal_to(node->element, "=")) {
        if (equal_to(type_left, type_right)) {
            return type_left;
        } else if ((equal_to(type_left, "int") || equal_to(type_left, "float")) &&
            (equal_to(type_right, "int") || equal_to(type_right, "float"))){
            return "float";
        } else if ((equal_to(type_left, "int LIST ") || equal_to(type_left, "float LIST "))) {
            if  (equal_to(type_right, "NIL")){
                return type_left;
            }
            if ((equal_to(type_left, "int LIST ") || equal_to(type_left, "float LIST "))) {
                return "float LIST ";
            }
        } else {
            return NULL;
        }
    } else if (equal_to(node->element, ":")) {
        if ((equal_to(type_right, "int LIST ") || equal_to(type_right, "float LIST ")) &&  
            (equal_to(type_left, "int") || equal_to(type_left, "float"))){
            return "float LIST ";
        }
    } else if (equal_to(node->element, ">>") || equal_to(node->element, "<<")) {
        if ((equal_to(type_left, "float") || (equal_to(type_left, "int"))) &&
            is_func(node->children[0]->element, table, scope))
            {
            if  ((equal_to(type_right, "int LIST ") || equal_to(type_right, "float LIST "))){
                return "float LIST ";
            }
        } else {
            return NULL;
        }
    } else if (equal_to(node->element, "==")) {
        if ((equal_to(type_left, "int") || equal_to(type_left, "float")) &&
            (equal_to(type_right, "int") || equal_to(type_right, "float")))
            {
                return "int";
            } else {
                return NULL;
            }
    } else if (equal_to(node->element, "!=")) {
        if ((equal_to(type_left, "int") || equal_to(type_left, "float")) &&
            (equal_to(type_right, "int") || equal_to(type_right, "float")))
            {
                return "int";
            } else {
                return NULL;
            }
    } else if (equal_to(node->element, ">") || equal_to(node->element, "<") ||
        equal_to(node->element, ">=") || equal_to(node->element, "<=")) {
        if ((equal_to(type_left, "int") || equal_to(type_left, "float")) &&
            (equal_to(type_right, "int") || equal_to(type_right, "float")))
            {
                return "int";
            } else {
                return NULL;
            }
    }

    return "0";
}

char** get_function_signature(char* symbol_func, symbol_table* table, scope_t* scope, uint16_t* n_params) {
    int func_table_idx;

    for (func_table_idx = 0; func_table_idx < table->n_lines; func_table_idx++) {
        if (equal_to(table->symbol[func_table_idx], symbol_func) &&
            variable_was_declared(table, scope, symbol_func) &&
            !table->is_var[func_table_idx]){
            break;
        }
    }

    if (func_table_idx == table->n_lines) {
        return NULL;
    }

    *n_params = table->n_args[func_table_idx];
    return table->args[func_table_idx];
}

bool check_function_arg(char* type_exp, char* symbol_func, uint16_t param_idx, symbol_table* table, scope_t* scope, uint16_t* n_params) {
    char** func_signature = get_function_signature(symbol_func, table, scope, n_params);
    char* param_type = func_signature[param_idx];

    if (equal_to(type_exp, param_type)) {
        return true;
    } else if ((equal_to(param_type, "float") || equal_to(param_type, "int")) && (equal_to(type_exp, "int") || equal_to(type_exp, "float"))) {
        return true;
    } else if ((equal_to(param_type, "int LIST ") || equal_to(param_type, "float LIST ")) &&
        (equal_to(type_exp, "int LIST ") || equal_to(type_exp, "float LIST "))) {
        return true;
    }

    return false;
}

void push_param_to_paramlist(symbol_table* table, const char* type, char*** paramlist, uint16_t* n_params) {
    if (*n_params == 0) {
        *paramlist = (char**) malloc(sizeof(char*));
    }

    *n_params = *n_params + 1;
    *paramlist = realloc(*paramlist, *n_params * (sizeof(char*)));

    (*paramlist)[*n_params-1] = calloc(MAX_BUFFER_SIZE, sizeof(char));
    strcpy((*paramlist)[*n_params-1], type);
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

void output_tac(symbol_table* table, syntax_tree* root, char* filename) {
    char* out_filename = filename;

    for (int i = 0; i < strlen(out_filename); i++) {
        if (out_filename[i] == '.') {
            out_filename[i] = '\0';
            break;
        }
    }

    out_filename = strcat(out_filename, ".tac");

    FILE* fp = fopen(out_filename, "w");

    if (fp == NULL) {
        fprintf(stderr, "Error opening file %s\n", out_filename);
        return;
    }

    fprintf(fp, ".table\n");

    for (int i = 0; i < table->n_lines; i++) {
        if (table->is_var[i]) {
            if (equal_to(table->type[i], "int") || equal_to(table->type[i], "float")) {
                fprintf(fp, "%s %s_%u\n", table->type[i], table->symbol[i], table->scope[i]->stack[0]);
            } else if (equal_to(table->type[i], "int LIST ")) {
                fprintf(fp, "int %s_%u[]={0}\n", table->symbol[i], table->scope[i]->stack[0]);
            } else if (equal_to(table->type[i], "float LIST ")) {
                fprintf(fp, "float %s_%u[]={0}\n", table->symbol[i], table->scope[i]->stack[0]);
            }
        }
    }    

    fprintf(fp, "\n.code\n");
    fprintf(fp, "main:\n");

    

    fclose(fp);
}