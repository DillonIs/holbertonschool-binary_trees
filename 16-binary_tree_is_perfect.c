#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *
 *
 *
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 1;
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (!left && !right)
	{
		return (1);
	}

	if (!left || !right)
	{
		return (0);
	}

	perfect = left;
	if (perfect == 0)
	{
		return (0);
	}


	return (perfect && right);
}

