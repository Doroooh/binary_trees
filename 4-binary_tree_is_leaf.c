#include "binary_trees.h"
/**
 * binary_tree_is_leaf  check for if  node is a lef
 * @node: studying node
 * Return: 1 if it success or 0 if failure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
