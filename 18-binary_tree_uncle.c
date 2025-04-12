#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds uncle of given node
 * @node: Pointer to node
 *
 * Return: Returns uncle or NULL or nil if no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandp;

	if (node->parent == NULL || node == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;
	grandp = node->parent->parent;

	if (grandp->left == parent)
	{
		return (grandp->right);
	}
	else
	{
		return (grandp->left);
	}
	return (NULL);
}
