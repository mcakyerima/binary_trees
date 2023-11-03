/*
 * File: 17-binary_tree_sibling.c
 * Author: Mohammed Ak Yerima
 * Description: Finds the sibling of a binary tree node.
 */

#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the binary tree node.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling exists.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
