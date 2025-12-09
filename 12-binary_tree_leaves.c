#include "binary_trees.h"
/**
 * binary_tree_leaves - Measures the leaves of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
int countR, countL;

countR = 0;
countL = 0;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
else
countL = binary_tree_leaves(tree->left);
countR = binary_tree_leaves(tree->right);
return (countL + countR);
}
