#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @node: Pointer to the node to measure
 *
 * Description:
 * This function calculates the depth of a given node in a binary tree by
 * counting the number of edges from the node to the root.
 *
 * Return: Depth of the node
 *
 * Author: Mohammed Ak Yerima
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
