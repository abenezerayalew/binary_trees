#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{ 
    binary_tree_t *new_node;

    binary_tree_t *temp;

    if (parent == NULL)
        return NULL;
    new_node = binary_tree_node(parent, value);
    if (!new_node)
        return NULL;

    if (parent->right)
    {
        temp = parent->right;
        parent->right = new_node;
        temp->parent = new_node;
        new_node-> right = temp;
    }
    else
        parent->right = binary_tree_node(parent, value);
    
    return new_node;
}