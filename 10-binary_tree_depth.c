#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_depth - creates a binary tree node
 * @tree: le parent dans le node
 * Return: 0 ou 1
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t hl = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		hl = binary_tree_depth(tree->parent) + 1;
	return (hl);
}
