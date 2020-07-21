#include "binary_trees.h"

/**
 * binary_tree_preorder - will traverse a binary tree in pre-order
 * @tree: variable
 * @func: variable
 * Return: 1 or 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
