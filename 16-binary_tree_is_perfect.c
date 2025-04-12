#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to root node
 *
 * Return: Returns 1 if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t _height = height(tree);
	int perfect = 1;
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}
	if (!_height)
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

size_t max(size_t a, size_t b);
/**
 * height - Finds height of binary tree
 * @tree: Pointer to root node
 *
 * Return: Returns height of binary tree
 */
size_t height(const binary_tree_t *tree)
{
	int heightleft;
	int heightright;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	heightleft = height(tree->left);
	heightright = height(tree->right);

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
