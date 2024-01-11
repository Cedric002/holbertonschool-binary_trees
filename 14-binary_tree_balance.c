#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * binary_tree_t: pointer
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor measured
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		left_height = binary_tree_balance(tree->left);
		right_height = binary_tree_balance(tree->right);

		return (left_height - right_height);
	}
}
