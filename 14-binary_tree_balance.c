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
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - measure binary tree height
 * @tree: root node
 * Return: the maximum value between left and right or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (1 + binary_tree_height(tree->left));
	return (1 + binary_tree_height(tree->right));

}
