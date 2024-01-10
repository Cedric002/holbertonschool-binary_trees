#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as right-child
 * @binary-tree_t: pointer
 * @parent: pointer to the parent node of the node to insert the right-child
 * @value: new node's value
 *
 * Return: right-child
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	right_child = malloc(sizeof(binary_tree_t));

	if (right_child == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		return (NULL);
	}

	right_child->n = value;

	right_child->parent = right_child;
	right_child->left = NULL;
	right_child->right = NULL;

	return (right_child);
}
