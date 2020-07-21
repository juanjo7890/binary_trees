#include "binary_trees.h"

/**
 * binary_tree_is_root - will check if node is a root
 * @node: variable
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left != NULL && node->right != NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
