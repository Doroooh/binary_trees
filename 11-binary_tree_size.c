#include "binary_trees.h"
/**
 * binary_tree_size - teh function to return tree size 
 * @tree: tree  checking
 * Return: tree size 
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, z = 0, y = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		y = binary_tree_size(tree->left);
		z = binary_tree_size(tree->right);
		size = z + y + 1;
	}
	return (size);
}
