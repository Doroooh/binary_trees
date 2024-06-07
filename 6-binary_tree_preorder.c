#include "binary_trees.h"
/**
 * binary_tree_preorder - printing elements of tree with pre-order traversal
 * @tree: tree 
 * @func: function
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->s);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
