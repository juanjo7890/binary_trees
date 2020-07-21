#include "binary_trees.h"

/**
 * binary_tree_delete - will delete all the tree
 * @tree: is a pointer to the root node of the tree that will be deleted
 * Return: deleted tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
