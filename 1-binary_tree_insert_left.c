#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node on the left
 * If parent has left-child newnode takes its place and old
 * left-child becomes left-child of newnode.
 *
 * @parent: Pointer to parent node
 * @value: Value of the new node
 *
 * Return: Returns binary_tree_t or NULL if failed
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL, *NewNode = NULL;

	if (!parent)
	{
		return (NULL);
	}

	NewNode = malloc(sizeof(binary_tree_t));
	if (!NewNode)
	{
		return (NULL);
	}

	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;
	if (parent->left)
	{
		temp = parent->left;
		NewNode->left = temp;
		temp->parent = NewNode;
	}
	parent->left = NewNode;
	return (NewNode);
}
