#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function counts the nodes in a binary tree that have at least one child
 * by recursively traversing the tree.
 *
 * Return: Number of nodes with at least one child in the binary tree
 *
 * Author: Mohammed Ak Yerima
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			count++;
		if (tree->left)
			count += binary_tree_nodes(tree->left);
		if (tree->right)
			count += binary_tree_nodes(tree->right);
	}
	return (count);
}
