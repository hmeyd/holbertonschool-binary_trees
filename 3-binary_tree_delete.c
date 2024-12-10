#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - creates a binary tree node
 * @tree: le parent dans le node
 * Return: le nouvau noeud
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree->left != NULL)
		free(tree->left);
	if (tree->right != NULL)
		free(tree->right);
	if (tree->parent != NULL)
		free(tree->parent);
	if (tree != NULL)
		free(tree);
}
