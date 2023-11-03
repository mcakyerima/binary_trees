#include "binary_trees.h"

/**
 * binary_tree_postorder - Applies a function to each node in a binary tree (postorder)
 * @tree: Pointer to the root node of a binary tree
 * @func: Pointer to a function that takes an integer as a parameter
 *
 * Description:
 * This function traverses a binary tree in postorder and applies the given
 * function to each node's value.
 *
 * Author: Mohammed Ak Yerima
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
