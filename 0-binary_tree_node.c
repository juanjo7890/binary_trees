#include "binary_trees.h"

/**
 * binary_tree_node - will create a node
 * @parent: is a variable / pointer to the parent node
 * @value: value to put in node
 * Return: null if fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;

	n_node = malloc(sizeof(binary_tree_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;

	return (n_node);
}
