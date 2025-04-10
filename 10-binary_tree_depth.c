#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t min(size_t a, size_t b);
/**
 * binary_tree_depth - Finds the depth of each node
 * @tree: Pointer to root node
 *
 * Return: Returns depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *current = NULL;

	if (tree == NULL)
	{
		return (0);
	}
	current = tree->parent;

	while (current)
	{
		depth += 1;
		current = current->parent;
	}
	return (depth);
}
