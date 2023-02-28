#include "binary_trees.h"
/**
 * binary_tree_insert_left - That inserts a node as the left-child of node.
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		temp = parent->left;
		parent->left = new_node;
		temp->parent = new_node;
		new_node->left = temp;
	}
	else
		parent->left = new_node;
	return (new_node);
}
