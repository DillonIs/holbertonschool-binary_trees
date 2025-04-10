#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in binary tree
 * @tree: Pointer to root node
 *
 * Return: Returns the node count or 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
