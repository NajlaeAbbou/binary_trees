#include"110-binary_trees_left_right.c"
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if Binary Search Tre or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if ((!tree) || (!compare_left(tree, tree->left)
			|| !compare_right(tree, tree->right)))
		return (0);
	if ((!tree->left && !tree->right) ||
		((!tree->left && compare_right(tree, tree->right)) ||
		 (!tree->right && compare_left(tree, tree->left))))
		return (1);

	return (1 * binary_tree_is_bst(tree->left)
			* binary_tree_is_bst(tree->right));
}
