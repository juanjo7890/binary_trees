#include "binary_trees.h"

/**
 * binary_tree_postorder - will traverse a binary tree in postorder
 * @tree: variable
 * @func: variable
 * Return: 1 or 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
