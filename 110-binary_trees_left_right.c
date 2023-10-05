#include"binary_trees.h"
/**
 * compare_left -  compares the values of tree node to left
 * @tree: pointer to root node of the subtree
 * @child: pointer to the node of left child
 * Return: 1 ,0
 */
int compare_left(const binary_tree_t *tree, binary_tree_t *child)
{
	if (!child)
		return (1);
	if (tree->n <= child->n)
		return (0);
	return (1 * compare_left(tree, child->left)
			* compare_left(tree, child->right));
}

/**
 * compare_right -  compares the values of tree node right
 * @tree: pointer to root node of the subtree
 * @child: pointer to the node of right child
 * Return: 1 or 0
 */
int compare_right(const binary_tree_t *tree, binary_tree_t *child)
{
	if (!child)
		return (1);
	if (tree->n >= child->n)
		return (0);
	return (1 * compare_right(tree, child->left)
			* compare_right(tree, child->right));
}
