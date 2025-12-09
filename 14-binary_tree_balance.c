#include "binary_trees.h"

/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire
 * @tree: Pointeur vers la racine de l'arbre
 * Return: Hauteur de l'arbre, 0 si tree est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (tree == NULL)
return 0;

if (tree->left != NULL)
left_height = binary_tree_height(tree->left);

if (tree->right != NULL)
right_height = binary_tree_height(tree->right);

if (left_height > right_height)
return left_height + 1;
else
return right_height + 1;
}

/**
 * binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire
 * @tree: Pointeur vers la racine de l'arbre
 * Return: Facteur d'équilibre, 0 si tree est NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (tree == NULL)
return 0;

if (tree->left != NULL)
left_height = binary_tree_height(tree->left);

if (tree->right != NULL)
right_height = binary_tree_height(tree->right);

return (int)(left_height - right_height);
}
