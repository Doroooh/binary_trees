#include "binary_trees.h"
/**
 * binary_tree_insert_left - adding a node in the left of the parent
 * if the node is present on teh left, move down once and inset new node first
 * @parent: parent to a specified node
 * @value: node value
 * Return: NULL on failure or new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
    binary_tree_t *new_node;

    // Check if the parent is NULL
    if (parent == NULL)
    {
        return NULL;
    }

    // Create the new node
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
    {
        return NULL;
    }

    // If the parent already has a left child, move it down one level
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    // Insert the new node as the left child of the parent
    parent->left = new_node;

    return new_node;
}
