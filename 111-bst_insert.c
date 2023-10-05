#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: a double p to the r node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: a p to the created node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *r, *e, **p;

	if (!tree)
	{
		r = binary_tree_node(NULL, value);
		if (!r)
			return (NULL);
		tree = &r;
		return (r);
	}
	if (!(*tree))
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	r = *tree;
	while (r)
	{
		if (value == r->n)
			return (r);
		e = r;
		if (value < r->n)
		{
			p = &(r->left);
			r = r->left;
		}
		else if (value > r->n)
		{
			p = &(r->right);
			r = r->right;
		}
	}
	*p = binary_tree_node(e, value);
	return (*p);
}
