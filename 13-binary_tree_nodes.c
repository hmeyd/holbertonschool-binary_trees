#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_nodes - creates a binary tree node
 * @tree: le parent dans le node
 * Return: 0 ou 1
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left != NULL) || (tree->right != NULL))
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
