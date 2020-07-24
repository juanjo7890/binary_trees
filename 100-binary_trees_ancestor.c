#include "binary_trees.h"

/**
 * binary_tree_ancestor - will return if nodes have a common ancestor
 * @first: variable - pointer to the first node
 * @second: variable - pointer to the second node
 * Return: 1 or 0
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t const *f = NULL, *t = NULL;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	for (f = first; f; f = f->parent)
	{
		for (t = second; t; t = t->parent)
		{
			if (f == t)
			{
				return ((binary_tree_t *)f);
			}
		}
	}
	return (NULL);
}
