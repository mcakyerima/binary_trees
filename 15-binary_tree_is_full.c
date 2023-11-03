#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is a full binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function checks if a binary tree is a full binary tree, meaning that
 * all of its non-leaf nodes have exactly two child nodes (0 or 2 children).
 *
 * Return: 1 if the tree is full, else 0.
 *
 * Author: Mohammed Ak Yerima
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree) % 2 == 0 ? 0 : 1);
	return (0);
}

/**
 * binary_tree_size - Measures the size (number of nodes) of a binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function calculates the size of a binary tree by counting the number
 * of nodes in the tree through recursive traversal.
 *
 * Return: The number of nodes in the binary tree.
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
