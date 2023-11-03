#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function calculates the number of nodes in a binary tree by
 * recursively traversing the tree.
 *
 * Return: Number of nodes in the binary tree
 *
 * Author: Mohammed Ak Yerima
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left)
			count += binary_tree_size(tree->left);
		if (tree->right)
			count += binary_tree_size(tree->right);
		count++;
	}
	return (count);
}
