#include "binary_trees.h"

/**
 * binary_tree_preorder - using pre-order traversal
 * @binary-tree_t: pointer
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: pre-order traversal
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->data);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
