#include "binary_trees.h"

/**
 * binary_tree_is_perfect - vérifie si un arbre binaire est parfait
 * @tree: pointeur vers la racine
 * Return: 1 si parfait, 0 sinon
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return 1;
if (tree->left == NULL || tree->right == NULL)
return (0);

left_height = binary_tree_is_perfect(tree->left);
right_height = binary_tree_is_perfect(tree->right);

return (left_height && right_height);
}
