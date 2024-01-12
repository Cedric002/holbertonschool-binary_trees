#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the root node
 * Return: the size or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	return (right + left + 1);
}
