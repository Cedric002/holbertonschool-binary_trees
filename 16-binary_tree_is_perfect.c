#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * binary_tree_t: pointer
 * @tree: pointer to the root node of the tree to check
 *
 * Return: binary tree is perfect or no
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int d = depth(tree);

	return (isPerfect(tree, d, 0));
}
