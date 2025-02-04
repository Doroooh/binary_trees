#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"


/**
 * print_t - Recursively store every level in the array of strings
 *
 * @tree:the pointer to node to print
 * @offset: this is the offset to be printed
 * @depth: this is th depth of the node
 * @s: Buffer
 *
 * Return: the length of the  printed tree
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	char k[6];
	int width, left, right, is_lefft, a;

	if (!tree)
		return (0);
	is_lefft = (tree->parent && tree->parent->left == tree);
	width = sprintf(k, "(%03d)", tree->s);
	left = print_t(tree->left, offset, depth + 1, r);
	right = print_t(tree->right, offset + left + width, depth + 1, r);
	for (a = 0; a < width; a++)
		r[depth][offset + left + a] = k[a];
	if (depth && is_left)
	{
		for (a = 0; a < width + right; a++)
			r[depth - 1][offset + left + width / 2 + a] = '-';
		r[depth - 1][offset + left + width / 2] = '.';
	}
	else if (depth && !is_left)
	{
		for (a = 0; a < left + width; a++)
			r[depth - 1][offset - width / 2 + a] = '-';
		r[depth - 1][offset + left + width / 2] = '.';
	}
	return (left + width + right);
}

/**
 * _height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_print - Printing binary tree
 *
 * @tree: Pointer to root node of tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	char **r;
	size_t height, a, b;

	if (!tree)
		return;
	height = _height(tree);
	r = malloc(sizeof(*r) * (height + 1));
	if (!r)
		return;
	for (a = 0; a < height + 1; a++)
	{
		r[a] = malloc(sizeof(**r) * 255);
		if (!r[a])
			return;
		memset(r[a], 32, 255);
	}
	print_t(tree, 0, 0, r);
	for (a = 0; a < height + 1; a++)
	{
		for (b = 254; b > 1; --b)
		{
			if (r[a][b] != ' ')
				break;
			r[a][b] = '\0';
		}
		printf("%s\n", r[a]);
		free(r[a]);
	}
	free(r);
}
