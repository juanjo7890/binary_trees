#include "binary_trees.h"

/**
 * binary_tree_depth - will return the depth of a binary tree
 * @tree: variable
 * Return: 1 or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent)
	{
		d = binary_tree_depth(tree->parent) + 1;
	}
	return (d);
}
