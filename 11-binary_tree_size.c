#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - creates a binary tree node
 * @tree: le parent dans le node
 * Return: 0 ou 1
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		hl = binary_tree_size(tree->left);
	if (tree->right != NULL)
		hr = binary_tree_size(tree->right);

	return (hl + hr + 1);
}
