#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: measure the depth
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{

		return (0);
	}

	else
	{
		size_t left_Depth = binary_tree_depth(tree->left);
		size_t right_Depth = binary_tree_depth(tree->right);

		if (left_Depth > right_Depth)
		{
			return (left_Depth + 1);
		}

		else
		{
			return (right_Depth + 1);
		}
	}
}
