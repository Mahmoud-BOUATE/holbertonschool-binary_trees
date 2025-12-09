#include "binary_trees.h"


/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the node is aroot, otherwise 0
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int countL, countR;
if (tree == NULL)
return (0);

countL = 0;
countR = 0;
if (tree->left != NULL)
{
countL = 1 + binary_tree_height(tree->left);
}
if (tree->right != NULL)
{
countR = 1 + binary_tree_height(tree->right);

}
if (countL > countR)
return (countL);
else
return (countR);
}
