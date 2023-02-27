#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{ 
    binary_tree_t *new_node;

    binary_tree_t *temp;

    if (parent == NULL)
        return NULL;
    new_node = binary_tree_node(parent, value);
    if (!new_node)
        return NULL;

    if (parent->left)
    {
        temp = parent->left;
        parent->left = new_node;
        temp->parent = new_node;
        new_node-> left = temp;
    }
    else
        parent->left = binary_tree_node(parent, value);
    
    return new_node;
}