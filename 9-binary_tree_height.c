#include "binary_trees.h"

/**
 * binary_tree_height - will return the height of a binary tree
 * @tree: variable
 * Return: 1 or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		l = binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		r = binary_tree_height(tree->right) + 1;
	}

	if (l > r)
	{
		return (l);
	}
	else
	{
		return (r);
	}
}
