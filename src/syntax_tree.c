#include "syntax_tree.h"

syntax_tree* new_syntax_tree() {
    syntax_tree* t = (syntax_tree*) malloc(sizeof(syntax_tree));
    t->tree_size = 0;
    t->element_list = (syntax_tree_node**) malloc(sizeof(syntax_tree_node*));
    return t;
}

syntax_tree_node* new_node(char* element, syntax_tree* tree, uint16_t scope, bool is_symbol, char* type) {
    syntax_tree_node* n = (syntax_tree_node*) malloc(sizeof(syntax_tree_node));
    n->n_children = 0;
    n->element = (char*) malloc(128);
    strcpy(n->element, element);
    n->children = (syntax_tree_node**) malloc(sizeof(syntax_tree_node*));
    n->scope = scope;
    n->is_symbol = is_symbol;
    n->type = (char*) malloc(128);
    strcpy(n->type, type);

    tree->tree_size = tree->tree_size + 1;
    tree->element_list = realloc(tree->element_list, sizeof(syntax_tree_node*)*tree->tree_size);
    tree->element_list[tree->tree_size - 1] = n;

    return n;
}

syntax_tree_node* add_child(syntax_tree_node* parent, syntax_tree_node* child) {
    parent->n_children = parent->n_children + 1;
    parent->children = realloc(parent->children, sizeof(syntax_tree_node*)*parent->n_children);
    parent->children[parent->n_children - 1] = child;

    return parent;
}

void push_search_queue(syntax_tree_node* node, syntax_tree_node*** queue, uint32_t* q_size) {
    *queue = realloc(*queue, (*q_size + 1) * sizeof(syntax_tree_node*));

    (*queue)[*q_size] = node;

    *q_size = *q_size + 1;
}

syntax_tree_node* pop_search_queue(syntax_tree_node*** queue, uint32_t* q_size) {
    if (0 == *q_size) return NULL;
    
    syntax_tree_node* n = (*queue)[0];

    *q_size = *q_size - 1;

    for (int i = 0; i < *q_size; i++)
        (*queue)[i] = (*queue)[i+1];

    return n;
}

void show_tree(syntax_tree_node* node, char* line, bool is_last) {
    if (!node) return;
    if (!node->element) return;
    
    printf("%s+- \033[92m%s (%s)\033[0m\n",  line, node->element, node->type);
    char* new_line = (char*) malloc(MAX_BUFFER_SIZE);
    strcpy(new_line, line);

    strcat(new_line, is_last ? "  " : "|  ");
    for (int i = 0; i < node->n_children; i++) {
        show_tree(node->children[i], new_line, i == (node->n_children - 1));
    }
    free(new_line);
}

void free_tree(syntax_tree* tree) {
    syntax_tree_node* node;
    for (int i = 0; i < tree->tree_size; i+= 1) {
        node = tree->element_list[i];

        free(node->element);
        free(node->children);
        free(node->type);

        free(node);
    }

    free(tree->element_list);
    free(tree);
}