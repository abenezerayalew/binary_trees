#include "binary_trees.h"
/**
 * binary_tree_inorder - that goes through a binary tree u
 * sing in-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);
	}
}
