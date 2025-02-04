#include "binary_trees.h"

/**
 * binary_tree_uncle - finding if the node is a sibling
 * @node: node  checking
 * Return: uncle node
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
    {
        return NULL;
    }

    if (node->parent == node->parent->parent->left)
    {
        return node->parent->parent->right;
    }
    else
    {
        return node->parent->parent->left;
    }
}
