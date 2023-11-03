#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is a perfect binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function checks if a binary tree is perfect, meaning that
 * it is balancedm and all of its non-leaf nodes have exactly two
 * child nodes.
 *
 * Return: 1 if the tree is perfect, else 0.
 *
 * Author: Mohammed Ak Yerima
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree)
	{
		if (binary_tree_balance(tree) == 0)
		{
			left_depth = binary_tree_is_perfect(tree->left);
			right_depth = binary_tree_is_perfect(tree->right);
			if (left_depth == right_depth)
				return (1);
		}
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function measures the balance factor of a binary tree by calculating
 * the height of its left and right subtrees and subtracting them.
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
	return (right_height < left_height ? left_height : right_height);
}
