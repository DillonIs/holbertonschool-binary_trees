#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: Pointer to root node
 *
 * Return: Returns 1 if a tree is full otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int _full = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	if (!tree->left || !tree->right)
	{
		return (0);
	}

	_full = binary_tree_is_full(tree->left);
	if (_full == 0)
	{
		return (0);
	}

	_full = _full && binary_tree_is_full(tree->right);

	return (_full);
}
