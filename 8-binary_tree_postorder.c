#include "binary_trees.h"

/**
 * binary_tree_postorder - uses post order traversal
 * @tree: pointer to the root node of the tree to be traversed
 * @func: pointer to the func to operate on node value
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
