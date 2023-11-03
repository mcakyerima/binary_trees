/*
 * File: 18-binary_tree_uncle.c
 * Author: Mohammed Ak Yerima
 * Description: Finds the uncle of a binary tree node.
 */

#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the binary tree node.
 *
 * Return: A pointer to the uncle node, or NULL if no uncle exists.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent)
	{
		return (binary_tree_sibling(node->parent));
	}
	return (NULL);
}

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
