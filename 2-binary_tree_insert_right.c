#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the node to insert the right child
 * @value: Value to store in the new node
 *
 * Description:
 * This function inserts a new node as the right child of the given parent node.
 *
 * Return: Pointer to the new node on success, NULL on failure
 *
 * Author: Mohammed Ak Yerima
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (!parent->right)
		parent->right = new_node;
	else if (parent->right)
	{
		new_node->parent = parent->right->parent;
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	return (new_node);
}
