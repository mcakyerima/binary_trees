/*
 * File: 101-binary_trees_ancestor.c
 * Author: Mohammed Ak Yerima
 * Description: Finds the lowest common ancestor of two nodes in a binary tree.
 */

#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor, or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t lowest;

	if (first && second)
	{
		if (first->parent == second)
			return ((binary_tree_t *)second);
		if (second->parent == first)
			return ((binary_tree_t *)first);
		lowest = binary_tree_depth(first);
		return (binary_tree_depth(second) < lowest ? second->parent : first->parent);
	}
	return (NULL);
}

/**
 * binary_tree_depth - measures the depth of a binary tree node
 * @node: node to measure
 *
 * Return: node depth
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (node)
	{
		for (depth = 0; node->parent; node = node->parent, depth++)
		;
	}
	return (depth);
}
