#include "binary_trees.h"
/**
 * binary_tree_leaves - this function returns total leaf number
 * @tree: tree  checking
 * Return: leaf number
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lf = 0, y = 0, z = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		y = binary_tree_leaves(tree->left);
		z = binary_tree_leaves(tree->right);
		lf = y + z;
		return ((!y && !z) ? lf + 1 : lf + 0);
	}
}
