#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t tl, tr;

	if (!tree)
		return (0);
	tl = binary_tree_height(tree->left,1);
	tr = binary_tree_height(tree->right,1);

	return (tl - tr);
}
