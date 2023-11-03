#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node in a binary tree is a leaf node
 * @node: Pointer to the node to check
 *
 * Description:
 * This function determines whether a given node in a binary tree is a leaf
 * node, which means it has no left or right children.
 *
 * Return: 1 if the node is a leaf, 0 otherwise
 *
 * Author: Mohammed Ak Yerima
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if the node is NULL or has either left or right children */
	return (node && !node->left && !node->right);
}

