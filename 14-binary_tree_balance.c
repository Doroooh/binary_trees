#include "binary_trees.h"

/**
 * binary_tree_height_b - Measuing the  height of binary tree for the bal tree
 * @tree: tree that will go through
 * Return: height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t y = 0;
	size_t z = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			y = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			z = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((y > z) ? y : z);
	}
}

/**
 * binary_tree_balance - Measuring balance factor of binary tree
 * @tree: tree
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
