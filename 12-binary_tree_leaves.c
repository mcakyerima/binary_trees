#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function calculates the number of leaf nodes (nodes with no children)
 * in a binary tree by recursively traversing the tree.
 *
 * Return: Number of leaf nodes in the binary tree
 *
 * Author: Mohammed Ak Yerima
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			count++;
		if (tree->left)
			count += binary_tree_leaves(tree->left);
		if (tree->right)
			count += binary_tree_leaves(tree->right);
	}
	return (count);
}
