/**
 * binary_tree_is_full - Vérifie si un arbre binaire est full
 * @tree: Pointeur vers la racine de l'arbre
 * Return: 1 si full, 0 sinon ou si tree est NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return 0;
if (tree->left == NULL && tree->right == NULL)
return 1;
if (tree->left != NULL && tree->right != NULL)
return binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right);
return 0;
}
