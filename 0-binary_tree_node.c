#include "binary_trees.h"

/**
 * binary_tree_node - node's binary tree
 * @binary-tree_t: pointer
 * @parent: pointer to the parent node of the node to create
 * @value: new node's value
 *
 * Return: pointer to the new node
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{

		return (NULL);
	}

	new_node->value = value;

	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
