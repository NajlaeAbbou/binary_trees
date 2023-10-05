#include"16-binary_leave_perfect.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ht;

	if (!tree || !binary_tree_is_full(tree))
		return (0);
	ht = (int)binary_tree_height(tree);
	return (binary_leave_perfect(tree, ht));
}
