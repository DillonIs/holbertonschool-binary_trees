#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is root
 * @node: Pointer to node
 *
 * Return: Returns 1 if the node is root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
	{
		return (0);
	}
	return (1);
}
