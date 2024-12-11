#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_leaves - creates a binary tree node
 * @tree: le parent dans le node
 * Return: 0 ou 1
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
