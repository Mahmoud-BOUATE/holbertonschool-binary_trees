#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a node is a root
 * @node: is a pointer to the node is aroot, otherwise 0
 *
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->parent == NULL)
return (1);

return (0);
}
