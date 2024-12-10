#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_inorder - creates a binary tree node
 * @tree: le parent dans le node
 * @func: le function
 * Return: 0 ou 1
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}

}
