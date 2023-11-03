#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function calculates the height of a binary tree by recursively
 * traversing the tree from the root node.
 *
 * Return: Height of the binary tree
 *
 * Author: Mohammed Ak Yerima
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree)
	{
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
	}
	return (right < left ? left : right);
}
