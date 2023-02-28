#include "binary_trees.h"
/**
 * binary_tree_insert_right - that inserts a node as the right-child of node.
 *
 * @parent: is a pointer to the node to insert the right-child in.
 * @value:  is the value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		temp = parent->right;
		parent->right = new_node;
		temp->parent = new_node;
		new_node->right = temp;
	}
	else
		parent->right = new_node;
	return (new_node);
}
