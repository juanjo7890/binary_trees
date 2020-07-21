#include "binary_trees.h"

/**
 * binary_tree_insert_left - will create a left_child
 * @parent: is a variable / pointer to the parent node
 * @value: value to put in node
 * Return: null if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_node;

	if (parent ==  NULL)
	{
		return (NULL);
	}

	l_node = malloc(sizeof(binary_tree_t));
	if (l_node == NULL)
	{
		return (NULL);
	}

	l_node->n = value;
	l_node->parent = parent;
	l_node->left = NULL;
	l_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = l_node;
	}
	else
	{
		parent->left->left = l_node;
		l_node->parent = parent->left;
	}
	return (l_node);
}
