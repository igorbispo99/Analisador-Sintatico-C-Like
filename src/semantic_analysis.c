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

char* get_type_var(char* symbol, symbol_table* table, scope_t* scope, bool is_var) {
    if (equal_to(symbol, "NIL")) return "NIL";

    for (int i = table->n_lines-1; i >= 0; i--) {
        if(!strcmp(table->symbol[i], symbol)) {
            return table->type[i];
        }
    }

    return "*";
}

uint16_t get_num_of_args(symbol_table* table, char* symbol) {
    uint16_t num_of_args = 0;

    for(uint16_t i = 0; i < table->n_lines; i++) {
            if (equal_to(table->symbol[i], symbol) && !table->is_var[i]) {
                if (equal_to(table->args[i][0], "-")) {
                    num_of_args = 0;
                } else {
                    num_of_args = table->n_args[i];
                }
            }
    }

    return num_of_args;
}

char* check_type_subtree(syntax_tree_node* node, symbol_table* table, scope_t* scope) {
    char* type_left = NULL;
    char* type_right = NULL;
    char* type_exp = NULL;
    char* type_func = NULL;

    if(!node) return NULL;

    if (node->n_children > 1) {
        if (equal_to(node->element, "FunctionCall")) {
            char* type_var = get_type_var(node->children[0]->element, table, scope, false);
            strcpy(node->type, type_var);
            return type_var;
        }

        type_left = check_type_subtree(node->children[0], table, scope);
        type_right = check_type_subtree(node->children[1], table, scope);

        if (!type_left || !type_right) {
            return NULL;   
        }

    } else if (node->n_children == 1) {
        char* child_type = check_type_subtree(node->children[0], table, scope);

        if (equal_to(node->element, "PrimaryExpression") || equal_to(node->element, "Args")) {
            strcpy(node->type, child_type);
            return child_type;
        }

        if (equal_to(node->element, "?")) {
            if (equal_to(child_type, "float LIST ")) {
                strcpy(node->type, "float");
                return "float";
            } else if(equal_to(child_type, "int LIST ")) {
                strcpy(node->type, "int");
                return "int";
            } else {
                return NULL;
            }
        } else if (equal_to(node->element, "%")) {
            if (equal_to(child_type, "float LIST ") ) {
                strcpy(node->type, "float LIST");
                return "float LIST ";
            } else if (equal_to(child_type, "int LIST ")) {
                stpcpy(node->type, "int LIST ");
                return "int LIST ";
            } else {
                return NULL;
            }
        } else if (equal_to(node->element, "!")) {
            if (equal_to(child_type, "float LIST ") ) {
                strcpy(node->type, "float LIST");
                return "float LIST ";
            } else if (equal_to(child_type, "int LIST ")) {
                strcpy(node->type, "int LIST ");
                return "int LIST ";
            } else {
                strcpy(node->type, "int");
                return "int";
            }
        } else if (equal_to(node->element, "RETURN")) {
            type_exp = child_type;
            type_func = table->type[last_f];

            if ((equal_to(type_exp, "float") || equal_to(type_exp, "int")) &&
            (equal_to(type_func, "float") || equal_to(type_func, "int"))) {
                strcpy(node->type, type_exp);
                return type_exp;
            } else if ((equal_to(type_exp, "int LIST ") || equal_to(type_exp, "NIL")) && equal_to(type_func, "int LIST ")){ 
                strcpy(node->type, "int LIST ");
                return "int LIST ";
            } else if ((equal_to(type_exp, "float LIST ") || equal_to(type_exp, "NIL")) && equal_to(type_func, "float LIST ")){ 
                strcpy(node->type, "float LIST ");
                return "float LIST ";
            } else {
                return NULL;
            }
        }
        return child_type;
    } else {
        char* n;
        strtod(node->element, &n);

        if ((n == node->element) || (*n != '\0')) {
            char* type_var = get_type_var(node->element, table, scope, true);
            strcpy(node->type, type_var);
            return type_var;
        } else {
            // verify if its a float number
            if (strchr(node->element, '.')) {
                strcpy(node->type, "float");
                return "float";
            } else {
                strcpy(node->type, "int");
                return "int";
            }
        }
    }

    if (equal_to(node->element, "+") || equal_to(node->element, "*") || 
        equal_to(node->element, "-") || equal_to(node->element, "/"))
        {
        if (equal_to(type_left, "float") && equal_to(type_right, "float")) {
            strcpy(node->type, "float");
            return "float";
        } else if (equal_to(type_left, "int") && equal_to(type_right, "int")) {
            strcpy(node->type, "int");
            return "int";
        } else if (equal_to(type_left, "int") && equal_to(type_right, "float")) {
            strcpy(node->type, "float");
            return "float";
        } else if (equal_to(type_left, "float") && equal_to(type_right, "int")) {
            strcpy(node->type, "float");
            return "float";
        } else {
            return NULL;
        }
    } else if (equal_to(node->element, "=")) {
        if (equal_to(type_left, type_right)) {
            return type_left;
        } else if ((equal_to(type_left, "int") && equal_to(type_right, "float"))){
            strcpy(node->type, "int");
            return "int";
        } else if ((equal_to(type_left, "float") && equal_to(type_right, "int"))){
            strcpy(node->type, "float");
            return "float";
        } else if (equal_to(type_left, "int LIST ") && equal_to(type_right, "NIL")) {
            strcpy(node->type, "int LIST ");
            return "int LIST ";
        } else if (equal_to(type_left, "float LIST ") && equal_to(type_right, "NIL")) {
            strcpy(node->type, "float LIST ");
            return "float LIST ";
        } else {
            return NULL;
        }
    } else if (equal_to(node->element, ":")) {
        if (equal_to(type_left, "float LIST ") && (equal_to(type_right, "float LIST ") || equal_to(type_right, "NIL"))) {
            strcpy(node->type, "float LIST ");
            return "float LIST ";
        } else if (equal_to(type_left, "int LIST ") && (equal_to(type_right, "int LIST ") || equal_to(type_right, "NIL"))) {
            strcpy(node->type, "int LIST ");
            return "int LIST ";
        } else if ((equal_to(type_left, "int") || equal_to(type_left, "float")) && (equal_to(type_right, "int LIST ") || equal_to(type_right, "float LIST "))) {
            strcpy(node->type, type_right);
            return type_right;
        } else if (equal_to(type_left, "int") && (equal_to(type_right, "NIL"))) {
            strcpy(node->type, "int LIST ");
            return "int LIST ";
        } else if (equal_to(type_left, "float") && equal_to(type_right, "NIL")) {
            strcpy(node->type, "float LIST ");
            return "float LIST ";
        } else {
            return NULL;
        } 
    } else if (equal_to(node->element, ">>")) {
        if (is_func(node->children[0]->element, table, scope)) {
            uint16_t args_n = get_num_of_args(table, node->children[0]->element);
            if (args_n == 1) {
                if (equal_to(type_left, "int") && (equal_to(type_right, "int LIST ") || equal_to(type_right, "float LIST ") || equal_to(type_right, "NIL"))) {
                    strcpy(node->type, "int LIST ");
                    return "int LIST ";
                } else if (equal_to(type_left, "float") && (equal_to(type_right, "int LIST ") || equal_to(type_right, "float LIST ") || equal_to(type_right, "NIL"))) {
                    strcpy(node->type, "float LIST ");
                    return "float LIST ";
                } else {
                    return NULL;
                }
            } else {
                return NULL;
            }
        } else {
            return NULL;
        }
    } else if (equal_to(node->element, "<<")) {
        if (is_func(node->children[0]->element, table, scope)) {
            uint16_t args_n = get_num_of_args(table, node->children[0]->element);
            if (args_n == 1) {
                if ((equal_to(type_left, "int") || equal_to(type_left, "float")) && equal_to(type_right, "int LIST ")) {
                    strcpy(node->type, "int LIST ");
                    return "int LIST ";
                } else if ((equal_to(type_left, "int") || equal_to(type_left, "float")) && equal_to(type_right, "float LIST ")) {
                    strcpy(node->type, "float LIST ");
                    return "float LIST ";
                } else {
                    return NULL;
                }
            } else {
                return NULL;
            }
        } else {
            return NULL;
        }
    } else if (equal_to(node->element, "==")) {
        if ((equal_to(type_left, "int") || equal_to(type_left, "float")) &&
            (equal_to(type_right, "int") || equal_to(type_right, "float")))
        {
            node->type = "int";
            return "int";
        } else if ((equal_to(type_left, "int LIST ") || equal_to(type_left, "float LIST "))) {
            if (!node->children[1]) {
                return NULL;
            } else if (equal_to(node->children[1]->element, "NIL")) {
                strcpy(node->type, "int");
                return "int";
            }
        } else if ((equal_to(type_right, "int LIST ") || equal_to(type_right, "float LIST "))) {
            if (!node->children[0]) {
                return NULL;
            } else if (equal_to(node->children[0]->element, "NIL")) {
                strcpy(node->type, "int");
                return "int";
            }
        } else {
            return NULL;
        }
    } else if (equal_to(node->element, "!=")) {
        if ((equal_to(type_left, "int") || equal_to(type_left, "float")) &&
            (equal_to(type_right, "int") || equal_to(type_right, "float")))
        {
            strcpy(node->type, "int");
            return "int";
        } else if ((equal_to(type_left, "int LIST ") || equal_to(type_left, "float LIST "))) {
            if (!node->children[1]) {
                return NULL;
            } else if (equal_to(node->children[1]->element, "NIL")) {
                strcpy(node->type, "int");
                return "int";
            }
        } else if ((equal_to(type_right, "int LIST ") || equal_to(type_right, "float LIST "))) {
            if (!node->children[0]) {
                return NULL;
            } else if (equal_to(node->children[0]->element, "NIL")) {
                strcpy(node->type, "int");
                return "int";
            }
        } else {
            return NULL;
        }   
    } else if (equal_to(node->element, ">") || equal_to(node->element, "<") ||
        equal_to(node->element, ">=") || equal_to(node->element, "<=")) {
        if ((equal_to(type_left, "int") || equal_to(type_left, "float")) &&
            (equal_to(type_right, "int") || equal_to(type_right, "float")))
            {
                strcpy(node->type, "int");
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

void push_param_to_paramlist(symbol_table* table, const char* type, char*** paramlist, int* n_params) {
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
	push_arg_to_arglist(table, "Polymorphic", *last_f, true);
	*last_f = *last_f + 1;

	add_row_symbol_table(table, "read", "Polymorphic", scope, false);
    *last_f = *last_f + 1;

    add_row_symbol_table(table, "writeln", "None", scope, false);
	push_arg_to_arglist(table, "Polymorphic", *last_f, true);
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

syntax_tree_node* get_node_by_element(syntax_tree* root, char* element) {
    for(uint16_t i = 0; i < root->tree_size; i++) {
        if (root->element_list[i]) {
            if(root->element_list[i]->n_children) {
                if (root->element_list[i]->children[0]) {
                    if (equal_to(root->element_list[i]->children[0]->element, element)) {
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
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-') {
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



uint16_t get_scope_inside_within_function(char* symbol_function, syntax_tree* root) {
    uint16_t scope = 0;

    char temp_symbol[MAX_BUFFER_SIZE];
    strcpy(temp_symbol, symbol_function);
    strcat(temp_symbol, "()");

    for(uint16_t i = 0; i < root->tree_size; i++) {
        if (root->element_list[i]) {
            if(root->element_list[i]->n_children) {
                if (root->element_list[i]->children[0]) {
                    if (equal_to(root->element_list[i]->children[0]->element, temp_symbol)) {
                        for (int j = 1; j < root->element_list[i]->n_children; j++) {
                            if (equal_to(root->element_list[i]->children[j]->element, "StatementExp")) {
                                scope = root->element_list[i]->children[j]->scope;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    return scope;
}


char** get_all_variables_name(syntax_tree* root, char* symbol_function) {
   syntax_tree_node* function_node = NULL;

    for (int i = 0; i < root->tree_size; i++) {
        if(root->element_list[i]) {
            if(equal_to(root->element_list[i]->element, "FunctionDefinition")) {
                char str[MAX_BUFFER_SIZE];
                sprintf(str, "%s()", symbol_function);
                if(root->element_list[i]->n_children) {
                    if(equal_to(root->element_list[i]->children[0]->element, str)) {
                        function_node = root->element_list[i];
                        break;
                    }
                }
            }
        }
    }

    if (!function_node || !equal_to(function_node->children[1]->element, "FunctionParameters")) {
        return NULL;
    }

    char** var_names = (char**)malloc(sizeof(char*));
    uint16_t n_args = 1;
    syntax_tree_node* arg_node = function_node->children[1];

    if(arg_node->n_children > 1) {
        var_names[0] = arg_node->children[0]->element;
        for(int i = strlen(var_names[0])-1; i >= 0; i--) {
            if (var_names[0][i] == ' '){
                var_names[0] = var_names[0] + i + 1;
                break;
            }
        }

        n_args++;
        var_names = (char**)realloc(var_names, sizeof(char*) * (n_args));

        var_names[1] = arg_node->children[1]->element;
        for(int i = strlen(var_names[1])-1; i >= 0; i--) {
            if (var_names[1][i] == ' '){
                var_names[1] = var_names[1] + i + 1;
                break;
            }
        }
    } else {
        var_names[0] = arg_node->children[0]->element;
        for(int i = strlen(var_names[0])-1; i >= 0; i--) {
            if (var_names[0][i] == ' '){
                var_names[0] = var_names[0] + i + 1;
                break;
            }
        }
    }

    if(arg_node->n_children == 3) {
        arg_node = arg_node->children[2];

        while(equal_to(arg_node->element, "ParamList")) {
            var_names = (char**)realloc(var_names, sizeof(char*) * (n_args + 1));
            var_names[n_args] = arg_node->children[0]->element;
            for(int i = strlen(var_names[n_args])-1; i >= 0; i--) {
                if (var_names[n_args][i] == ' '){
                    var_names[n_args] = var_names[n_args] + i + 1;
                    break;
                }
            }

            n_args++;
            if(arg_node->children[1])
                arg_node = arg_node->children[1];
            else
                break;
        }
    }

    return var_names;
}

char** get_arg_types(symbol_table* table, char* symbol_function) {
    char** arg_types = (char**)malloc(sizeof(char*));
    arg_types[0] = "-";

    for(uint16_t i = 0; i < table->n_lines; i++) {
        if (equal_to(table->symbol[i], symbol_function) && !table->is_var[i]) {
            if (equal_to(table->args[i][0], "-")) {
                arg_types[0] = "-";
            } else {
                arg_types = (char**)realloc(arg_types, sizeof(char*) * (table->n_args[i] + 1));
                for(int j = 0; j < table->n_args[i]; j++) {
                    arg_types[j] = table->args[i][j];
                }
            }
        }
    }

    return arg_types;
}

char** get_types_parameters(syntax_tree_node* node) {
    syntax_tree_node* args_node = node->children[1];

    if(equal_to(args_node->element, "")) {
        return NULL;
    }


    char** types = (char**)malloc(sizeof(char*));
    int n_types = 0;

    while(args_node->n_children != 1) {
        types[n_types] = args_node->children[1]->type;
        n_types = n_types + 1;
        types = (char**)realloc(types, sizeof(char*) * (n_types + 1));
        args_node = args_node->children[0];
    }

    types[n_types] = args_node->type;

    return types;
}

uint16_t how_many_constructions(syntax_tree_node* node) {
    if (!node) {
        return 0;
    }

    if(!node->children) {
        return 0;
    }


    uint16_t n_constructions = 0;

    if (equal_to(node->element, ":")) {
        n_constructions = 1;
    }

    syntax_tree_node* temp_node = node;

    while(temp_node->n_children == 2) {
        if (equal_to(temp_node->children[1]->element, ":")) {
            n_constructions = n_constructions + 1;
        } else {
            break;
        }
        temp_node = temp_node->children[1];
    }

    return n_constructions;
}

char* get_tac_from_node(symbol_table* table, syntax_tree* root, syntax_tree_node* node, char* tac_exp, size_t* last_v_idx, size_t* last_label_idx) {
    if (node == NULL) {
        return NULL;
    }

    if (equal_to(node->element, "StatementExp")) {
        for(uint16_t i = 0; i < node->n_children; i++) {
            if (node->children[i]) {
                get_tac_from_node(table, root, node->children[i], tac_exp, last_v_idx, last_label_idx);
            }
        }
        return tac_exp;
    } else if (equal_to(node->element, "PrimaryExpression")) {
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        return tac_exp;
    } else if (equal_to(node->element, "")) {
        return tac_exp;
    } 


    char* line = calloc(MAX_BUFFER_SIZE, sizeof(char));

    if (equal_to(node->element, "Args")) {
        if (node->n_children == 1) {
            if (!equal_to(node->children[0]->element, "")) {
                get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
                sprintf(line, "push $%zu\n", *last_v_idx -1);
                strcat(tac_exp, line);
            }
        } else if (node->n_children == 2) {
            if(!equal_to(node->children[0]->element, "")) {
                get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
            }

            if(!equal_to(node->children[1]->element, "")) {
                get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);
                sprintf(line, "push $%zu\n", *last_v_idx -1);
                strcat(tac_exp, line);
            }
        }
    } else if (equal_to(node->element, "IF")) {
        // if_cond_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "brz IF_END_%zu, $%zu\n", *last_label_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        size_t if_label_idx = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        // if_body_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "IF_END_%zu:\n", if_label_idx);
        strcat(tac_exp, line);

        *last_label_idx = *last_label_idx + 1;
    } else if (equal_to(node->element, "FOR")) {
        // for_init_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "FOR_%zu:\n", *last_label_idx);
        strcat(tac_exp, line);

        size_t for_head_label = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        // for_cond_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "brz FOR_END_%zu, $%zu\n", *last_label_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        size_t for_end_label = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        // for_body_exp
        get_tac_from_node(table, root, node->children[3], tac_exp, last_v_idx, last_label_idx);

        // for_inc_exp
        get_tac_from_node(table, root, node->children[2], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "jump FOR_%zu\n", for_head_label);
        strcat(tac_exp, line);

        sprintf(line, "FOR_END_%zu:\n", for_end_label);
        strcat(tac_exp, line);
    } else if (equal_to(node->element, "IF_ELSE")) {
        // if_cond_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "brz IF_ELSE_%zu, $%zu\n", *last_label_idx, *last_v_idx-1);
        strcat(tac_exp, line);

        size_t if_label_idx = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        // if_body_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        size_t else_end_label_idx = *last_label_idx;
        *last_label_idx = *last_label_idx + 1;

        sprintf(line, "jump END_IF_ELSE_%zu\n", else_end_label_idx);
        strcat(tac_exp, line);

        sprintf(line, "IF_ELSE_%zu:\n", if_label_idx);
        strcat(tac_exp, line);

        // else_body_exp
        get_tac_from_node(table, root, node->children[2], tac_exp, last_v_idx, last_label_idx);

        sprintf(line, "END_IF_ELSE_%zu:\n", else_end_label_idx);
        strcat(tac_exp, line);

    } else if (equal_to(node->element, "=")) {
        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);
        // left exp
        char* l_symbol = node->children[0]->element;
        uint16_t scope = which_scope(node->children[0]);

        char* type_left = node->type;
        char* type_right = node->children[1]->type;

        if (equal_to(type_left, "int") && equal_to(type_right, "float")) {
            sprintf(line, "fltoint $%zu, $%zu\n", *last_v_idx, *last_v_idx-1);
            strcat(tac_exp, line);
            *last_v_idx = *last_v_idx + 1;
            sprintf(line, "mov %s_%u, $%zu\n", l_symbol, scope, *last_v_idx-1);
            strcat(tac_exp, line);
        } else if (equal_to(type_left, "float") && equal_to(type_right, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx-1);
            strcat(tac_exp, line);
            *last_v_idx = *last_v_idx + 1;
            sprintf(line, "mov %s_%u, $%zu\n", l_symbol, scope, *last_v_idx-1);
            strcat(tac_exp, line);
        } else if ((equal_to(type_left, "float") && equal_to(type_right, "float")) ||
                   (equal_to(type_left, "int") && equal_to(type_right, "int"))) {
            sprintf(line, "mov %s_%u, $%zu\n", l_symbol, scope, *last_v_idx-1);
            strcat(tac_exp, line);
        } else if ((equal_to(type_left, "float LIST ") || equal_to(type_left, "int LIST ")) && (equal_to(type_right, "float LIST ") || equal_to(type_left, "int LIST "))) {
            if (node->children[0]->is_symbol && node->children[1]->is_symbol) {
                sprintf(line, "mov $%zu, %s_%u_size\n", *last_v_idx, node->children[0]->element, which_scope(node->children[0]));
                size_t size_l_address = *last_v_idx;
                strcat(tac_exp, line);
                *last_v_idx = *last_v_idx + 1;

                sprintf(line, "mov $%zu, &%s_%u\n", *last_v_idx, node->children[0]->element, scope);
                size_t vector_l_address = *last_v_idx;
                strcat(tac_exp, line);
                *last_v_idx = *last_v_idx + 1;

                sprintf(line, "mov $%zu, &%s_%u\n", *last_v_idx, node->children[1]->element, which_scope(node->children[1]));
                size_t vector_r_address = *last_v_idx;
                strcat(tac_exp, line);
                *last_v_idx = *last_v_idx + 1;


                // loop counter
                sprintf(line, "mov $%zu, 0\n", *last_v_idx);
                strcat(tac_exp, line);
                size_t loop_counter_address = *last_v_idx;

                *last_v_idx = *last_v_idx +1;

                sprintf(line, "LOOP_WRITE_%zu:\n", *last_label_idx);
                strcat(tac_exp, line);
                size_t loop_label_idx = *last_label_idx;
                *last_label_idx = *last_label_idx + 1;

                // loop condition
                sprintf(line, "slt $%zu, $%zu, %s_%u_size\n",  *last_v_idx, loop_counter_address, node->children[1]->element, which_scope(node->children[1]));
                strcat(tac_exp, line);
                *last_v_idx = *last_v_idx + 1;

                // entry of loop
                sprintf(line, "brz END_WRITE_LOOP_%zu,  $%zu\n",  *last_label_idx, *last_v_idx - 1);
                strcat(tac_exp, line);
                size_t end_loop_address = *last_label_idx;
                *last_v_idx = *last_v_idx + 1;

                //loop body
                sprintf(line, "mov $%zu, $%zu[$%zu]\n", *last_v_idx, vector_r_address, loop_counter_address);
                strcat(tac_exp, line);
                *last_v_idx = *last_v_idx + 1;


                sprintf(line, "mov $%zu[$%zu], $%zu\n", vector_l_address, size_l_address, *last_v_idx-1);
                strcat(tac_exp, line);

                // increment vector indexing   
                sprintf(line, "add $%zu, $%zu, 1\n", size_l_address, size_l_address);
                strcat(tac_exp, line);             

                // increment vector size
                sprintf(line, "add %s_%u_size, %s_%u_size, 1\n", node->children[0]->element, which_scope(node->children[0]), node->children[0]->element, which_scope(node->children[0]));
                strcat(tac_exp, line);

                // increment loop counter
                sprintf(line, "add $%zu, $%zu, 1\n", loop_counter_address, loop_counter_address);
                strcat(tac_exp, line);


                sprintf(line, "jump LOOP_WRITE_%zu\n", loop_label_idx);
                strcat(tac_exp, line);
                sprintf(line, "END_WRITE_LOOP_%zu:\n", end_loop_address);
                strcat(tac_exp, line);


            } else {
                uint16_t n_constructors = how_many_constructions(node->children[1]);

                if (n_constructors) {
                    sprintf(line, "mov $%zu, %s_%u_size\n", *last_v_idx, node->children[0]->element, which_scope(node->children[0]));
                    size_t size_l_address = *last_v_idx;
                    strcat(tac_exp, line);
                    *last_v_idx = *last_v_idx + 1;


                    sprintf(line, "mov $%zu, &%s_%u\n", *last_v_idx, node->children[0]->element, scope);
                    size_t vector_l_address = *last_v_idx;
                    strcat(tac_exp, line);
                    *last_v_idx = *last_v_idx + 1;
    
                    syntax_tree_node* temp_node = node->children[1];

                    for (int i = 0; i < n_constructors; i++) {
                        get_tac_from_node(table, root, temp_node->children[0], tac_exp, last_v_idx, last_label_idx);

                        if (equal_to(temp_node->children[0]->type, "float") && equal_to(type_right, "int LIST ")) {
                            sprintf(line, "fltoint $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
                            strcat(tac_exp, line);
                            *last_v_idx = *last_v_idx + 1;
                        } else if (equal_to(temp_node->children[0]->type, "int") && equal_to(type_right, "float LIST ")) {
                            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
                            strcat(tac_exp, line);
                            *last_v_idx = *last_v_idx + 1;
                        }

                        sprintf(line, "mov $%zu[$%zu], $%zu\n", vector_l_address, size_l_address, *last_v_idx - 1);
                        strcat(tac_exp, line);
                        sprintf(line, "add %s_%u_size, %s_%u_size, 1\n", node->children[0]->element, which_scope(node->children[0]),
                                                                        node->children[0]->element, which_scope(node->children[0]));
                        strcat(tac_exp, line);
                        sprintf(line, "add $%zu, $%zu, 1\n", size_l_address, size_l_address);
                        strcat(tac_exp, line);

                        temp_node = temp_node->children[1];
                    }

                }

            }
        }

    } else if (equal_to(node->element, "<")) {
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "slt $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
        } else {
            sprintf(line, "slt $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        }

        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, ">")) {
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "slt $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-2, *last_v_idx-1);
        } else {
            sprintf(line, "slt $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, left_v_idx);
        }

        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "+")) {
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "add $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
        } else {
            sprintf(line, "add $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        }

        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "-")) {

        if (node->n_children == 2) {
            // left_exp
            get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
            size_t left_v_idx = *last_v_idx - 1;

            // right_exp
            get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

            char* left_type = node->children[0]->type;
            char* right_type = node->children[1]->type;
            bool left_was_cast = false;

            if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
                sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
                *last_v_idx = *last_v_idx + 1;
                left_was_cast = true;
                strcat(tac_exp, line);

            } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
                sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
                *last_v_idx = *last_v_idx + 1;
                strcat(tac_exp, line);
            }

            if (left_was_cast){
                sprintf(line, "sub $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
            } else {
                sprintf(line, "sub $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
            }

            strcat(tac_exp, line);

            *last_v_idx = *last_v_idx + 1;
        } else if (node->n_children == 1) {
            // right exp
            get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
            sprintf(line, "minus $%zu, $%zu\n", *last_v_idx, *last_v_idx-1);

        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
        }
    } else if (equal_to(node->element, "*")) {
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "mul $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
        } else {
            sprintf(line, "mul $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        }

        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "/")) {
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "div $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
        } else {
            sprintf(line, "div $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        }

        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, ">=")) {
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "sleq $%zu, $%zu, $%zu\n", *last_v_idx,  *last_v_idx-2, *last_v_idx-1);
        } else {
            sprintf(line, "sleq $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, left_v_idx);
        }
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "<=")) {
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "sleq $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
        } else {
            sprintf(line, "sleq $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        }

        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "&&")){
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "and $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
        } else {
            sprintf(line, "and $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        }
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "||")){
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "or $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
        } else {
            sprintf(line, "or $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);
        }
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "==")){
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "sub $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
        } else {
            sprintf(line, "sub $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);      
        }

        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;

        sprintf(line, "not $%zu, $%zu\n", *last_v_idx-1, *last_v_idx-1);

        strcat(tac_exp, line);
    } else if (equal_to(node->element, "!=")){
        // left_exp
        get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);
        size_t left_v_idx = *last_v_idx - 1;

        // right_exp
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        char* left_type = node->children[0]->type;
        char* right_type = node->children[1]->type;
        bool left_was_cast = false;

        if(equal_to(left_type, "int") && equal_to(right_type, "float")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, left_v_idx);
            *last_v_idx = *last_v_idx + 1;
            left_was_cast = true;
            strcat(tac_exp, line);

        } else if(equal_to(left_type, "float") && equal_to(right_type, "int")) {
            sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx -1);
            *last_v_idx = *last_v_idx + 1;
            strcat(tac_exp, line);
        }

        if (left_was_cast){
            sprintf(line, "sub $%zu, $%zu, $%zu\n", *last_v_idx, *last_v_idx-1, *last_v_idx-2);
        } else {
            sprintf(line, "sub $%zu, $%zu, $%zu\n", *last_v_idx, left_v_idx, *last_v_idx-1);      
        }

        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "!")) {
        if (equal_to(node->type, "int")) {
            get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);

            sprintf(line, "not $%zu, $%zu\n", *last_v_idx, *last_v_idx-1);
            strcat(tac_exp, line);

            *last_v_idx = *last_v_idx + 1;
        }
    } else if (equal_to(node->element, "FunctionCall")) {
        // function name
        char* function_name = node->children[0]->element;

        // Evaluating each parameter of the function call before calling the function
        get_tac_from_node(table, root, node->children[1], tac_exp, last_v_idx, last_label_idx);

        // The function parameters are in the stack, so we need to pop them
        uint16_t num_of_args = get_num_of_args(table, function_name);

        if (num_of_args) {
            uint16_t scope = get_scope_inside_within_function(function_name, root);
            char** arg_names = get_all_variables_name(root, function_name);
            char** arg_types = get_arg_types(table, function_name);
            char** exp_types = get_types_parameters(node);

            if (!arg_names || !arg_types || !exp_types) {
                printf("Error: function %s does not exist\n", function_name);
                exit(1);
            }

            for (int i = 0; i < num_of_args; i++) {
                bool was_cast = false;

                if (equal_to(arg_types[num_of_args - i -1], "int") && equal_to(exp_types[i], "float")) {

                    sprintf(line, "pop $%zu\n", *last_v_idx);
                    strcat(tac_exp, line);
                    *last_v_idx = *last_v_idx + 1;
                    sprintf(line, "fltoint $%zu, $%zu\n", *last_v_idx, *last_v_idx-1);
                    strcat(tac_exp, line);
                    *last_v_idx = *last_v_idx + 1;
                    was_cast = true;
                } else if (equal_to(arg_types[num_of_args - i -1], "float") && equal_to(exp_types[i], "int")) {
                    sprintf(line, "pop $%zu\n", *last_v_idx);
                    strcat(tac_exp, line);
                    *last_v_idx = *last_v_idx + 1;
                    sprintf(line, "inttofl $%zu, $%zu\n", *last_v_idx, *last_v_idx-1);
                    strcat(tac_exp, line);
                    *last_v_idx = *last_v_idx + 1;
                    was_cast = true;
                }

                if (was_cast) {
                    sprintf(line, "mov %s_%u, $%zu\n", arg_names[num_of_args - i -1], scope, *last_v_idx-1);
                } else {
                    sprintf(line, "pop $%zu\n", *last_v_idx);
                    strcat(tac_exp, line);

                    *last_v_idx = *last_v_idx + 1;
                    sprintf(line, "mov %s_%u, $%zu\n", arg_names[num_of_args - i -1], scope, *last_v_idx-1);
                }

                strcat(tac_exp, line);
            }

            free(arg_types);
            free(arg_names);
            free(exp_types);
        }

        sprintf(line, "call %s\n", function_name);
        strcat(tac_exp, line);

        sprintf(line, "mov $%zu, #0\n", *last_v_idx);
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
            get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);

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
            get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);

            sprintf(line, "print $%zu\n", *last_v_idx-1);
            strcat(tac_exp, line);
        }
    } else if (equal_to(node->element, "read_call")) {
        // read_variable
        char* var_name = node->children[0]->element;
        uint16_t var_scope = node->children[0]->scope;

        if(equal_to(node->children[0]->type, "int")) {
            sprintf(line, "scani %s_%u\n", var_name, var_scope);
        } else if(equal_to(node->children[0]->type, "float")) {
            sprintf(line, "scanf %s_%u\n", var_name, var_scope);
        }

        strcat(tac_exp, line);

    } else if (node->is_symbol) {
        // variable
        sprintf(line, "mov $%zu, %s_%u\n", *last_v_idx, node->element, which_scope(node));

        strcat(tac_exp, line);
        *last_v_idx = *last_v_idx + 1;
    } else if (is_num(node->element)) {
        // number literal
        sprintf(line, "mov $%zu, %s\n", *last_v_idx, node->element);
        strcat(tac_exp, line);

        *last_v_idx = *last_v_idx + 1;
    } else if (equal_to(node->element, "RETURN")) {
        if (!is_inside_main(node, root)) { 
            // return expression
            get_tac_from_node(table, root, node->children[0], tac_exp, last_v_idx, last_label_idx);

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


syntax_tree_node** get_nodes_of_all_functions(syntax_tree* root, symbol_table* table, uint16_t* size) {
    syntax_tree_node** functions = (syntax_tree_node**) malloc(sizeof(syntax_tree_node*));
    *size = 0;

    for (size_t i = 0; i < table->n_lines; i++) {
        if (!table->is_var[i]) {
            char temp_func[MAX_BUFFER_SIZE];
            sprintf(temp_func, "%s()", table->symbol[i]);

            syntax_tree_node* node_func = get_node_by_element(root, temp_func);
            functions[*size] = node_func;
            *size = *size + 1;
            functions = (syntax_tree_node**) realloc(functions, sizeof(syntax_tree_node*) * (*size + 1));
        }
    }

    return functions;
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
    uint16_t max_vector_size = 512;

    for (int i = 0; i < table->n_lines; i++) {
        if (table->is_var[i]) {
            if (equal_to(table->type[i], "int") || equal_to(table->type[i], "float")) {
                fprintf(fp, "%s %s_%u\n", table->type[i], table->symbol[i], table->scope[i]->stack[0]);
            } else if (equal_to(table->type[i], "int LIST ")) {
                fprintf(fp, "int %s_%u[]={", table->symbol[i], table->scope[i]->stack[0]);
                for (int j = 0; j < max_vector_size-1; j++) {
                    fprintf(fp, "0, ");
                }
                fprintf(fp, "0}\n");
                fprintf(fp, "int %s_%u_size=0\n", table->symbol[i], table->scope[i]->stack[0]);
            } else if (equal_to(table->type[i], "float LIST ")) {
                fprintf(fp, "float %s_%u[]={", table->symbol[i], table->scope[i]->stack[0]);
                for (int j = 0; j < max_vector_size-1; j++) {
                    fprintf(fp, "0.0, ");
                }
                fprintf(fp, "0.0}\n");
                fprintf(fp, "int %s_%u_size=0\n", table->symbol[i], table->scope[i]->stack[0]);
            }
        }
    }    

    fprintf(fp, "\n.code\n");

    size_t last_v_idx = 1;
    size_t last_label_idx = 1;

    // get all functions nodes
    uint16_t n_functions = 0;
    syntax_tree_node** functions = get_nodes_of_all_functions(root, table, &n_functions);

    char* program_tac_str = calloc(MAX_BUFFER_SIZE*MAX_BUFFER_SIZE*2, sizeof(char));

    for (size_t i = 0; i < n_functions; i++) {
        syntax_tree_node* func_node = functions[i];
        char func_label[MAX_BUFFER_SIZE];
        strcpy(func_label, func_node->children[0]->element);

        //remove parenthesis
        for (int i = 0; i < strlen(func_label); i++) {
            if (func_label[i] == '(') {
                func_label[i] = '\0';
                break;
            }
        }

        strcat(program_tac_str, "\n");

        strcat(func_label, ":\n");
        strcat(program_tac_str, func_label);

        if (func_node->n_children == 2) {
            // function without parameters
            get_tac_from_node(table, root, func_node->children[1], program_tac_str, &last_v_idx, &last_label_idx);
        } else if (func_node->n_children == 3) {
            // function with parameters
            get_tac_from_node(table, root, func_node->children[2], program_tac_str, &last_v_idx, &last_label_idx);
        }

        if(!equal_to(func_label, "main:\n")) {
            if (equal_to(func_node->children[0]->type, "int")) {
                strcat(program_tac_str, "return 0\n");
            } else if (equal_to(func_node->children[0]->type, "float")) {
                strcat(program_tac_str, "return 0.0\n");
            }
        }

        last_v_idx = 1;

    }

    fprintf(fp, "%s", program_tac_str);

    free(program_tac_str);
    free(functions);

    fclose(fp);
}