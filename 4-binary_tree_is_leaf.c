#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - creates a binary tree node
 * @node: le parent dans le node
 * Return: 0 ou 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	binary_tree_is_leaf(node->right);
	binary_tree_is_leaf(node->left);
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	else
		return (0);
}
