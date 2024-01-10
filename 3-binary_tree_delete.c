#include "binary_trees.h"

/**
 * binary_tree_delete - delete the binary tree
 * @tree: pointer to the root node of the node to tree to delete
 *
 * Return: tree deleted
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
