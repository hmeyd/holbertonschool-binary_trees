#include <stdlib.h>
#include "binary_trees.h"

/**
 * tree_height - Calcule la hauteur d'un arbre binaire
 * @tree: Pointeur vers la racine de l'arbre
 * Return: Hauteur de l'arbre ou 0 si arbre est NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;

	if (tree == NULL)
		return (0);

	hl = tree_height(tree->left);
	hr = tree_height(tree->right);

	return ((hl > hr ? hl : hr) + 1);
}

/**
 * binary_tree_balance - Calcule le facteur d'équilibre d'un arbre binaire
 * @tree: Pointeur vers la racine de l'arbre
 * Return: Facteur d'équilibre ou 0 si arbre est NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		hl = tree_height(tree->left);
	if (tree->right != NULL)
		hr = tree_height(tree->right);

	return (hl - hr);
}
