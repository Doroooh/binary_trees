#include "binary_trees.h"
/**
 * binary_tree_nodes - the function to return number of nodes in a tree that has children
 * @tree: tree checking
 * Return: the total number of nodes that has children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  nodse = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		nodse += ((tree->left || tree->right) ? 1 : 0);
		nodse += binary_tree_nodes(tree->left);
		nodse += binary_tree_nodes(tree->right);
		return (nodse);
	}
}
