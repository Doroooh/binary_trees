#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree using recursion.
 *                      Frees each node when its left and right children are NULL.
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
    // Base case: if the tree is NULL, return immediately
    if (tree == NULL)
    {
        return;
    }

    // Recursively delete the left subtree
    if (tree->left != NULL)
    {
        binary_tree_delete(tree->left);
    }

    // Recursively delete the right subtree
    if (tree->right != NULL)
    {
        binary_tree_delete(tree->right);
    }

    // Free the current node
    free(tree);
}
