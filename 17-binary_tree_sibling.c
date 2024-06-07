#include "binary_trees.h"

/**
 * binary_tree_sibling - finding if the node is a sibling
 * @ndes: node checking
 * Return: sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (ndes == NULL || ndes->parent == NULL)
	{
		return (NULL);
	}
	if (ndes->parent->left == ndes)
		return (ndes->parent->right);
	return (ndes->parent->left);
}
