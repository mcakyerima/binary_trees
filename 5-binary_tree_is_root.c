#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node in a binary tree is a root node
 * @node: Pointer to the node to check
 *
 * Description:
 * This function determines whether a given node in a binary tree is a root
 * node, which means it has no parent.
 *
 * Return: 1 if the node is a root, 0 otherwise
 *
 * Author: Mohammed Ak Yerima
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check if the node is NULL or has no parent */
	return (node && !node->parent);
}
