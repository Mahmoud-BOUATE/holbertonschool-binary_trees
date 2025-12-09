#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a binary
 * @tree: is a pointer to the node is aroot, otherwise 0
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int countL, countR, def;
if (tree == NULL)
return (0);

countL = 0;
countR = 0;
if (tree->left != NULL)
{
countL = 1 + binary_tree_balance(tree->left);
}
if (tree->right != NULL)
{
countR = 1 + binary_tree_balance(tree->right);
}
def = countL - countR;
return(def);
}
