#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t countL = 0, countR = 0;

if (!tree)
return 0;

if (tree->left)
countL = 1 + binary_tree_height(tree->left);
if (tree->right)
countR = 1 + binary_tree_height(tree->right);

return (countL > countR ? countL : countR);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 * Return: Balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t countL = 0, countR = 0;
int def;

if (!tree)
return 0;

if (tree->left)
countL = binary_tree_height(tree->left);
if (tree->right)
countR = binary_tree_height(tree->right);

def = (int)(countL - countR);

return def;
}
