#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of a parent
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *tr;
if (!parent)
return (NULL);
tr = malloc(sizeof(binary_tree_t));
if (tr == NULL)
return (NULL);

tr->n = value;
tr->parent = parent;
tr->left = NULL;
tr->right = parent->right;

if (parent->right != NULL)
parent->right->parent = tr;

parent->right = tr;
return (tr);
}
