#include "binary_trees.h"


/**
 * binary_tree_inorder - pre-order traversal
 * @tree: is a pointer to the node is aroot, otherwise 0
 * @func: function that print value of the node
 * Return: pointer to the new node, or NULL on failure
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
