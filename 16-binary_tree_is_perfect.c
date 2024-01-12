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
        int left_height;
        int right_height;

        if (tree == NULL)
        {
                return (0);
        }

        if (tree->left == NULL && tree->right == NULL)
        {
                return (1);
        }

        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        if (left_height == right_height)
        {
                return (1);
        }

        return (0);
}

/**
 * binary_tree_height - measure binary tree height
 * @tree: root node
 * Return: the maximum value between left and right or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left = -1, right = -1;

        if (tree == NULL)
                return (0);
        if (tree->right != 0 || tree->left != 0)
        {
                left = binary_tree_height(tree->left);
                right = binary_tree_height(tree->right);
        }

        if (left > right)
                return (left + 1);
        else
                return (right + 1);
}
