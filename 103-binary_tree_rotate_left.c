#include"binary_trees.h"
/*
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree:  pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *bt;

	if (!tree || !tree->right)
		return (tree);
	bt = tree->right;
	bt->parent = tree->parent;
	if (bt->left)
		(bt->left)->parent = tree;
	tree->right = bt->left;
	bt->left = tree;
	tree->parent = bt;
	while (bt->parent)
	{
		bt = bt->parent;
	}
	return (bt);
}
