#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"
/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to root node
 *
 * Return: Returns 1 if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leavesleft = 0;
	int leavesright = 0;
	int left = 0;
	int right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
	{
		return (0);
	}

	leavesleft = binary_tree_leaves(tree->left);
	leavesright = binary_tree_leaves(tree->right);


	return (leavesleft == leavesright);
}
