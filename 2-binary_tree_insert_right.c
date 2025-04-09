#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node on the right
 * If parent has right-child newnode takes its place and old
 * right-child becomes right-child of newnode
 *
 * @parent: Pointer to parent node
 * @value: Value of new node
 *
 * Return: Returns binary_tree_t or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right)
	{
		temp = parent->right;
		NewNode->right = temp;
		temp->parent = NewNode;
	}
	parent->right = NewNode;
	return (NewNode);
}
