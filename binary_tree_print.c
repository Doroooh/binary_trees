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
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	char **s;
	size_t height, i, j;

	if (!tree)
		return;
	height = _height(tree);
	s = malloc(sizeof(*s) * (height + 1));
	if (!s)
		return;
	for (i = 0; i < height + 1; i++)
	{
		s[i] = malloc(sizeof(**s) * 255);
		if (!s[i])
			return;
		memset(s[i], 32, 255);
	}
	print_t(tree, 0, 0, s);
	for (i = 0; i < height + 1; i++)
	{
		for (j = 254; j > 1; --j)
		{
			if (s[i][j] != ' ')
				break;
			s[i][j] = '\0';
		}
		printf("%s\n", s[i]);
		free(s[i]);
	}
	free(s);
}
