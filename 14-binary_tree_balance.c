#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

int treeheight(const binary_tree_t *tree);
int max(int a, int b);

/**
 * binary_tree_balance - Measures balance factor of binary tree
 * @tree: Pointer to root node
 *
 * Return: Returns balance factor or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balancefact = 0, left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = treeheight(tree->left);
	right = treeheight(tree->right);
	balancefact = left - right;
	return (balancefact);
}

/**
 * treeheight - Measures the height of binary tree
 * @tree: Pointer to tree node
 *
 * Return: Returns the height of binary tree
 */

int treeheight(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (-1);
	}
	return (max(treeheight(tree->left), treeheight(tree->right)) + 1);
}

/**
 * max - Returns the max of two integers
 * @a: Integer value 1
 * @b: Integer value 2
 *
 * Return: Max of a and b
 */

int max(int a, int b)
{
	if (a > b)
	{
		return (a);
	}
	return (b);
}

