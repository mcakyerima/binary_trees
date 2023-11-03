/*
 * File: 101-binary_tree_levelorder.c
 * Author: Mohammed Ak Yerima
 * Description: Traverses a binary tree using a level-order traversal.
 */

#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal.
 * @tree: A pointer to the root node of the binary tree.
 * @func: A function to call for each node visited.
 *
 * Description:
 * This function traverses the binary tree in level-order, calling the provided
 * function on each node as it's visited.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_t *queue[1024];
	int front = 0, rear = 0;
	binary_tree_t *current;

	queue[rear] = (binary_tree_t *)tree;
	rear = (rear + 1) % 1024;

	while (front != rear)
	{
		current = queue[front];
		front = (front + 1) % 1024;
		func(current->n);

		if (current->left)
		{
			queue[rear] = current->left;
			rear = (rear + 1) % 1024;
		}

		if (current->right)
		{
			queue[rear] = current->right;
			rear = (rear + 1) % 1024;
		}
	}
}
