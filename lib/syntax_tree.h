#ifndef SYNTAX_TREE_H_
#define SYNTAX_TREE_H_

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

struct syntax_tree_node {
    char* element;
    struct syntax_tree_node** children;
    uint16_t n_children;
};

typedef struct syntax_tree_node syntax_tree_node;

typedef struct {
    syntax_tree_node** element_list;
    uint16_t tree_size;
} syntax_tree;

syntax_tree* new_syntax_tree();
syntax_tree_node* new_node(char* element, syntax_tree* tree);
syntax_tree_node* add_child(syntax_tree_node* parent, syntax_tree_node* child);
void free_tree(syntax_tree* tree);
void show_tree(syntax_tree_node* node, char* line, bool is_last);

#endif