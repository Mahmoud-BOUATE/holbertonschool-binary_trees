#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *tr = malloc(sizeof(binary_tree_t));
if (tr == NULL)
return (NULL);

tr->n = value;
tr->parent = parent;
tr->left = NULL;
tr->right = NULL;

return (tr);
}
