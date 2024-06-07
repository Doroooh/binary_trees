#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of the parent
 *                            If a right child already exists, it moves down one level
 *                            and the new node takes its place.
 * @parent: Pointer to the parent node
 * @value: Value to be inserted in the new node
 * Return: Pointer to the newly created node, or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    // Ensure the parent node is not NULL
    if (parent == NULL)
    {
        return NULL;
    }

    // Create a new node
    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
    {
        return NULL;
    }

    // If the right child exists, move it down one level
    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }

    // Set the new node as the right child of the parent
    parent->right = new_node;

    return new_node;
}
