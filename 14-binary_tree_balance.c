#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function measures the balance factor of a binary tree by
 * calculating the height of its left and right subtrees and
 * subtracting them.
 *
 * Return: The balance factor of the binary tree.
 *
 * Author: Mohammed Ak Yerima
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree)
	{
		if (tree->left)
			left_height = binary_tree_height(tree->left) + 1;
		if (tree->right)
			right_height = binary_tree_height(tree->right) + 1;
	}
	return (left_height - right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function calculates the height of a binary tree by recursively
 * traversing both the left and right subtrees, and considering the maximum
 * height of the two.
 *
 * Return: The height of the binary tree.
 *
 * Author: Mohammed Ak Yerima
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		if (tree->left)
		{
			left_height += binary_tree_height(tree->left);
			left_height++;
		}
		if (tree->right)
		{
			right_height += binary_tree_height(tree->right);
			right_height++;
		}
	}
	return (left_height > right_height ? left_height : right_height);
}
