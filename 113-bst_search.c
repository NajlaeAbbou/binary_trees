#include "binary_trees.h"

/**
 * bst_search - seacrhes for a value in a Binary Search Tree
 * @tree: a pointer to the root node
 * @value: the value
 * Return: null
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *myn;

	if (!tree)
		return (NULL);
	myn = (bst_t *)tree;
	while (myn)
	{
		if (myn->n == value)
			return (myn);
		if (myn->n > value)
			myn = myn->left;
		if (myn->n < value)
			myn = myn->right;
	}
	return (NULL);
}
