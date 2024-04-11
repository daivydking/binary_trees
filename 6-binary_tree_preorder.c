#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes through the tree using preorder
 *                         traversal
 * @tree: the point to the root node of the tree
 * @func:  a point to a function that operates on each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
