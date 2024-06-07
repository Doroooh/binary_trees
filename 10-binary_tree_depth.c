#include "binary_trees.h"
/**
 * binary_tree_depth - the depth on a specified node from the root
 * @tree: the node for checking depth
 * Return: 0 the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
