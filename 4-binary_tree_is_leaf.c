#include "binary_trees.h"

/**
 * binary_tree_is_leaf - node is a leaf or no
 * @binary-tree_t: pointer
 * @node: pointer to the node to check
 *
 * Return: tree deleted
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
