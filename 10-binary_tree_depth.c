#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dpt = 0;
	binary_tree_t *pt;

	if (!tree)
		return (0);
	pt = (binary_tree_t *)tree;
	while (pt->parent)
	{
		dpt++;
		pt = pt->parent;
	}
	return (dpt);
}
