#include "binary_trees.h"
/**
 * binary_tree_inorder - using the in-order traversal to print elements 
 * @tree: the tree
 * @func: function
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->s);
		binary_tree_inorder(tree->right, func);
	}
}
