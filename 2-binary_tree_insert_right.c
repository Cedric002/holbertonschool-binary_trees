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
	binary_tree_t *right_branch;

	right_branch = malloc(sizeof(binary_tree_t));

	if (right_branch == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	right_branch->n = value;
	right_branch->parent = parent;
	right_branch->left = NULL;
	if (parent->right != NULL)
	{
		right_branch->right = parent->right;
		parent->right->parent = right_branch;
	}
	else
	{
		right_branch->right = NULL;
	}
	parent->right = right_branch;

	return (right_branch);
}
