#include <stdlib.h>
#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
 */
int tree_height(const binary_tree_t *tree)
{
	int hl, hr;

	if (tree == NULL)
		return (0);
	hl = tree_height(tree->left);
	hr = tree_height(tree->right);
	return (1 + (hl > hr ? hl : hr));
}
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_perfect - creates a binary tree node
 * @tree: le parent dans le node
 * Return: 0 ou 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hl, hr, hlp, hrp;

	if (tree == NULL)
		return (0);
	hl = tree_height(tree->left);
	hr = tree_height(tree->right);

	if (hl != hr)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	hlp = binary_tree_is_perfect(tree->left);
	hrp = binary_tree_is_perfect(tree->right);
	return (hlp && hrp);
}
