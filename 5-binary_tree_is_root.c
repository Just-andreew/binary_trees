#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a node is a root.
 * @node: Pointer to the node to be checked
 * Return: 1 if is root, 0 otherwise or.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	return (1);
}
