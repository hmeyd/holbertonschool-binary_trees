#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - creates a binary tree node
 * @tree: le parent dans le node
 * Return: 0 ou 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		hl = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		hr = binary_tree_height(tree->right) + 1;

	return (hl > hr ? hl : hr);
}
