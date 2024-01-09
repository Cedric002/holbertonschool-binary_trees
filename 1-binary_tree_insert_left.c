#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left-child
 * @binary-tree_t: pointer
 * @parent: pointer to the parent node of the node to insert the left-child
 * @value: new node's value
 *
 * Return: left-child
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	left_child = malloc(sizeof(binary_tree_t));

	if (left_child == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		return (NULL);
	}

	left_child->n = value;

	left_child->parent = left_child;
	left_child->left = NULL;
	left_child->right = NULL;

	return (left_child);
}
