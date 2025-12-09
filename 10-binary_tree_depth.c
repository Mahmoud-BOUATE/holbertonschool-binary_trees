#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node in a binary
 * @tree: is a pointer to the node is aroot, otherwise 0
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
int count;
if (tree == NULL)
return (0);

count = 0;
if (tree->parent == NULL)
return (0);

if (tree->parent != NULL)
{
count = 1 + binary_tree_depth(tree->parent);
}

return (count);
}
