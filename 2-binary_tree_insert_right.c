#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the right child
 *                            of another node
 * @parent: the pointer to the node to insert the right child in
 * @value: the value of the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (!parent)
	{
		free(new_node);
		return (NULL);
	}
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}