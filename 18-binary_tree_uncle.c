#include "binary_trees.h"

/**
 * binary_tree_uncle - finding if the node is a sibling
 * @node: node  checking
 * Return: uncle node
 */

binary_tree_ *binary_tree_uncle(binary_tree_t *node)
{
    // Check if the node, its parent, or its grandparent is NULL
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
    {
        return NULL;
    }

    // Determine the parent node
    binary_tree_t *parent = node->parent;
    // Determine the grandparent node
    binary_tree_t *grandparent = parent->parent;

    // Check and return the uncle node
    if (grandparent->left == parent)
    {
        return grandparent->right;
    }
    else
    {
        return grandparent->left;
    }
}
