#include "binary_trees.h"

/**
 * binary_tree_node - this is creating the  binary node
 * @parent: the parent node
 * @value: node value 
 * Return: the return value is the new node
 */

binary_tree *binary_tree_node(binary_tree *parent, int value)
{
	binary_tree *new_node;

	new_node = malloc(sizeof(binary_tree));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
