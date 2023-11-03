#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively frees memory allocated by a binary tree
 * @tree: Pointer to the root node of a binary tree
 *
 * Description:
 * This function recursively traverses a binary tree and frees the memory
 * allocated for each node, including the root node.
 *
 * Author: Mohammed Ak Yerima
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
