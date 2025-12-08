#include "binary_trees.h"

void binary_tree_print(const binary_tree_t *tree)
{
if (!tree)
return;

printf("%d\n", tree->n);
binary_tree_print(tree->left);
binary_tree_print(tree->right);
}
