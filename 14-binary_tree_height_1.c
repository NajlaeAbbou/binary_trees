#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: the height (the longest path possible)
 */
size_t binary_tree_height_1(const binary_tree_t *tree)
{
	size_t h_right, h_left;

	if (!tree)
		return (-1);
	h_right = (tree->right) ? 1 + binary_tree_height_1(tree->right) : 0;
	h_left	= (tree->left) ? 1 + binary_tree_height_1(tree->left) : 0;
	if (h_right >= h_left)
		return (h_right);
	else
		return (h_left);
}
