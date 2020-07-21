#include "binary_trees.h"

/**
 * binary_tree_insert_right - will create a right_child
 * @parent: is a variable / pointer to the parent node
 * @value: value to put in node
 * Return: null if fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	r_node = malloc(sizeof(binary_tree_t));
	if (r_node == NULL)
	{
		return (NULL);
	}

	r_node->parent = parent;
	r_node->left = NULL;
	r_node->right = NULL;
	r_node->n = value;

	if (parent->right == NULL)
	{
		parent->right = r_node;
	}
	else
	{
		r_node->right = parent->right;
		parent->right->parent = r_node;
		parent->right = r_node;
	}
	return (r_node);
}
