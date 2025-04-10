#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t max(size_t a, size_t b);
/**
 * binary_tree_height - Finds the height of each node
 * @tree: Pointer to root node
 *
 * Return: Returns the max height of each node or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int heightleft;
	int heightright;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	heightleft = binary_tree_height(tree->left);
	heightright = binary_tree_height(tree->right);

	return (max(heightleft, heightright) + 1);
}

/**
 * max - Returns the bigger of two numbers
 * @a: Value of first number
 * @b: Value of second number
 *
 * Return: Returns the max of a and b
 */

size_t max(size_t a, size_t b)
{
	if (a > b)
	{
		return (a);
	}
	return (b);
}

