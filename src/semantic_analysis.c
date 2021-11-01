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
    if (equal_to(symbol, "NIL")) return "float LIST ";

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

    if(!node) return NULL;

    if (node->n_children > 1) {
        if (equal_to(node->element, "FunctionCall")) {
            return get_type_var(node->children[0]->element, table, scope);
        }

        type_left = check_type_subtree(node->children[0], table, scope);
        type_right = check_type_subtree(node->children[1], table, scope);

        if (!type_left || !type_right) {
            return NULL;   
        }

    } else if (node->n_children == 1) {
        char* child_type = check_type_subtree(node->children[0], table, scope);

        if (equal_to(node->element, "PrimaryExpression") || equal_to(node->element, "Args"))
            return child_type;

        if (equal_to(node->element, "?")) {
            if (equal_to(child_type, "float LIST ") || equal_to(child_type, "int LIST ")) {
                return "float";
            } else {
                return NULL;
            }
        } else if (equal_to(node->element, "%") || equal_to(node->element, "!")) {
            if (equal_to(child_type, "float LIST ") || equal_to(child_type, "int LIST ")) {
                return "float LIST ";
            } else {
                return NULL;
            }
        } else if (equal_to(node->element, "RETURN")) {
            type_exp = child_type;
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
                return "float LIST ";
        } else {
            return NULL;
        }
    } else if (equal_to(node->element, ":")) {
        return "float LIST ";
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

char** get_function_signature(char* symbol_func, symbol_table* table, scope_t* scope, uint16_t* n_params, bool double_check) {
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

    if (double_check) {
        for (int i = 0; i < table->n_lines; i++) {
            if (equal_to(table->symbol[i], symbol_func) &&
                variable_was_declared(table, scope, symbol_func) &&
                table->is_var[i]) {
                    return NULL;
                }
        }
    }

    *n_params = table->n_args[func_table_idx];
    return table->args[func_table_idx];
}

bool check_type_with_casting(char* symbol_1, char* symbol_2) {
    if (equal_to(symbol_1, "int") && equal_to(symbol_2, "float")) {
        return true;
    } else if (equal_to(symbol_1, "float") && equal_to(symbol_2, "int")) {
        return true;
    } else if (equal_to(symbol_1, "int LIST ") && equal_to(symbol_2, "float LIST ")) {
        return true;
    } else if (equal_to(symbol_1, "float LIST ") && equal_to(symbol_2, "int LIST ")) {
        return true;
    }else if (equal_to(symbol_1, symbol_2)) {
        return true;
    } else {
        return false;
    }
}

bool check_function_arg(char* type_exp, char* symbol_func, uint16_t param_idx, symbol_table* table, scope_t* scope, uint16_t* n_params) {
    char** func_signature = get_function_signature(symbol_func, table, scope, n_params, false);

    if (func_signature == NULL) {
        return false;
    }

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

syntax_tree_node* get_main_node(syntax_tree* root){
    for(uint16_t i = 0; i < root->tree_size; i++) {
        if (root->element_list[i]) {
            if(root->element_list[i]->n_children) {
                if (root->element_list[i]->children[0]) {
                    if (equal_to(root->element_list[i]->children[0]->element, "main()")) {
                        return root->element_list[i];
                    }
                }
            }
        }
    }

    return NULL;
}

uint16_t which_scope(syntax_tree_node* node) {
    return node->scope;
}

bool is_num(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i]) && str[i] != '.') {
            return false;
        }
    }
    return true;
}

bool is_str(char* str) {
    if (str[0] == '\"' && str[strlen(str)-1] == '\"') {
        return true;
    } else {
        return false;
    }
}

bool is_declaration(char* str) {
    bool found_open_parenthesis = false;
    bool found_close_parenthesis = false;
    bool found_scope_word = false;

    for(size_t i = 0; i < strlen(str); i++) {
        if (str[i] == '(') {
            found_open_parenthesis = true;
        } else if (str[i] == ')') {
            found_close_parenthesis = true;
        }

    }

    int string_len_minus_4 = strlen(str) - 4;

    for(int i = 0; i < string_len_minus_4; i++) {
        if (str[i] == 's' && str[i+1] == 'c' && str[i+2] == 'o' && str[i+3] =='p' && str[i+4] == 'e') {
            found_scope_word = true;
        }
    }

    if (found_open_parenthesis && found_close_parenthesis && found_scope_word) {
        return true;
    } else {
        return false;
    }
}


bool is_inside_main_inner(syntax_tree_node* target_n, syntax_tree_node* current_n, syntax_tree* root) {
    if (!current_n) {
        return false;
    }

    if (current_n == target_n) {
        return true;
    }

    for(int i = 0; i < current_n->n_children; i++) {
        if (current_n->children[i]) {
            if (is_inside_main_inner(target_n, current_n->children[i], root)) {
                return true;
            }
        }
    }

    return false;
}

bool is_inside_main(syntax_tree_node* node, syntax_tree* root) {
    syntax_tree_node* main_node = get_main_node(root);
    if (!main_node) {
        return false;
    }

    return is_inside_main_inner(node, main_node, root);
}

char* get_tac_from_node(syntax_tree* root, syntax_tree_node* node, char* tac_exp, size_t* last_v_idx, size_t* last_label_idx) {
    if (node == NULL) {
        return NULL;
    }

    if (equal_to(node->element, "StatementExp")) {
        for(uint16_t i = 0; i < node->n_children; i++) {
            if (node->children[i]) {
                get_tac_from_node(root, node->children[i], tac_exp, last_v_idx, last_label_idx);
            }
        }
        return tac_exp;
    } else if (equal_to(node->element, "PrimaryExpresion")) {
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);

        return tac_exp;
    }

    char* line = calloc(MAX_BUFFER_SIZE, sizeof(char));

    if (equal_to(node->element, "IF")) {
        // if_cond_exp
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "brz IF_END_%zu, $%zu\n", *last_label_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        size_t if_label_idx = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        // if_body_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "IF_END_%zu:\n", if_label_idx);
        strcat(tac_exp, line);

        *last_label_idx = *last_label_idx + 1;
    } else if (equal_to(node->element, "FOR")) {
        // for_init_exp
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "FOR_%zu:\n", *last_label_idx);
        strcat(tac_exp, line);

        size_t for_head_label = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        // for_cond_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "brz FOR_END_%zu, $%zu\n", *last_label_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        size_t for_end_label = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        // for_body_exp
        get_tac_from_node(root, node->children[3], tac_exp, last_v_idx, last_label_idx);

        // for_inc_exp
        get_tac_from_node(root, node->children[2], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "jump FOR_%zu\n", for_head_label);
        strcat(tac_exp, line);

        sprintf(line, "FOR_END_%zu:\n", for_end_label);
        strcat(tac_exp, line);
    } else if (equal_to(node->element, "IF_ELSE")) {
        // if_cond_exp
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "brz IF_ELSE_%zu, $%zu\n", *last_label_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        size_t if_label_idx = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        // if_body_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        size_t else_end_label_idx = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        sprintf(line, "jump END_IF_ELSE_%zu\n", else_end_label_idx);
        strcat(tac_exp, line);

        sprintf(line, "IF_ELSE_%zu:\n", if_label_idx);
        strcat(tac_exp, line);

        // else_body_exp
        get_tac_from_node(root, node->children[2], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "END_IF_ELSE_%zu:\n", else_end_label_idx);
        strcat(tac_exp, line);

    } else if (equal_to(node->element, "=")) {
        // right_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        // left exp
        char* l_symbol = node->children[0]->element;
        uint16_t scope = which_scope(node->children[0]);

        sprintf(line, "mov %s_%u, $%zu\n", l_symbol, scope, *last_v_idx-1);
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "<")) {
        // left_exp
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "slt $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, ">")) {
        // left_exp
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "slt $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, left_v_idx);
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "+")) {
        // left_exp
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "add $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "-")) {
        // left_exp
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "sub $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "*")) {
        // left_exp
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "mul $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "/")) {
        // left_exp
        get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "div $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "write_ln_call")) {
        if(is_str(node->children[0]->element)) {
            // write_ln_string
            int str_size = strlen(node->children[0]->element) - 1;
            for(int i = 1; i < str_size ; i++) {
                sprintf(line, "print '%c'\n", node->children[0]->element[i]);
                strcat(tac_exp, line);

            }
            sprintf(line, "print '\\n'\n");
            strcat(tac_exp, line);
        } else {
            // write_ln_expression
            get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);

            sprintf(line, "println $%zu\n", *last_v_idx-1);
            strcat(tac_exp, line);
        }
    } else if (equal_to(node->element, "write_call")) {
        if(is_str(node->children[0]->element)) {
            // write_string
            int str_size = strlen(node->children[0]->element) - 1;
            for(size_t i = 1; i < str_size; i++) {
                sprintf(line, "print '%c'\n", node->children[0]->element[i]);
                strcat(tac_exp, line);

            }
        } else {
            // write_expression
            get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);

            sprintf(line, "print $%zu\n", *last_v_idx-1);
            strcat(tac_exp, line);
        }
    } else if (node->is_symbol) {
        // variable
        sprintf(line, "mov $%zu, %s_%u\n", *last_v_idx, node->element, which_scope(node));

        strcat(tac_exp, line);
        *last_v_idx = *last_v_idx + 1;
    } else if (is_num(node->element)) {
        // number literal
        sprintf(line, "add $%zu, %s, 0\n", *last_v_idx, node->element);

        strcat(tac_exp, line);
        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "RETURN")) {
        if (!is_inside_main(node, root)) { 
            // return expression
            get_tac_from_node(root, node->children[0], tac_exp, last_v_idx, last_label_idx);

            sprintf(line, "return $%zu\n", *last_v_idx-1);
            strcat(tac_exp, line);
            *last_v_idx = 1;
        } else {
            sprintf(line, "println \n");
            strcat(tac_exp, line);
        }
    }

    free(line);
    return tac_exp;
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


    syntax_tree_node* main_node = get_main_node(root);

    if (!main_node) {
        fprintf(stderr, "Error: main function not found\n");
        return;
    }

    syntax_tree_node* main_body = main_node->children[1];

    char* main_body_tac_str = calloc(MAX_BUFFER_SIZE*MAX_BUFFER_SIZE, sizeof(char));

    size_t last_v_idx = 1;
    size_t last_label_idx = 1;
    get_tac_from_node(root, main_body, main_body_tac_str, &last_v_idx, &last_label_idx);

    fprintf(fp, "%s", main_body_tac_str);

    free(main_body_tac_str);

    fclose(fp);
}