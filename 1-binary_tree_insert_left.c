#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: data to store in the new node
 * Return: the new node if success, NULL if fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_branch;

	if (parent == NULL)
		return (NULL);
	left_branch = binary_tree_node(parent, value);
	if (left_branch == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		parent->left->parent = left_branch;
		left_branch->left = parent->left;
		parent->left = left_branch;
		left_branch->parent = parent;
	}
	else
	{
		parent->left = left_branch;
		left_branch->parent = parent;
	}

	return (left_branch);
}

