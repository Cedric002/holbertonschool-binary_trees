#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: balance factor measured
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		if (node->parent->right)
		{
			return (node->parent->right);
		}
	}

	else
	{
		if (node->parent->left)
		{
			return (node->parent->left);
		}
	}

	return (NULL);
}
