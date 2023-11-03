#include "binary_trees.h"

/**
 * binary_tree_preorder - Applies a function to each node in a binary tree
 * @tree: Pointer to the root node of a binary tree
 * @func: Pointer to a function that takes an integer as a parameter
 *
 * Description:
 * This function traverses a binary tree in preorder and applies the given
 * function to each node's value.
 *
 * Author: Mohammed Ak Yerima
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
