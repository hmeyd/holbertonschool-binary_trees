#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_full - creates a binary tree node
 * @tree: le parent dans le node
 * Return: 0 ou 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
