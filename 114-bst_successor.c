#include "binary_trees.h"

/**
 * find_replace_successor - find and replaces the node with successor
 * @r: the root of the tree
 * @n: replacement
 */
void find_replace_successor(bst_t **r, bst_t *n)
{
	bst_t *s = n;

	n = n->right;
                while (n->left)
                {
                        n = n->left;
                }


	if (n->parent)
		n->parent->left = n->right;
	if (n->right)
		n->right->parent = n->parent;
	s->right->parent = n;
	s->left->parent = n;
	n->right = s->right;
	n->left = s->left;
	n->parent = s->parent;
	if (s == *r)
		*r = n;
	else if (s->parent)
	{
		if (s->parent && s == s->parent->left)
			s->parent->left = n;
		else
			s->parent->right = n;
	}
}
/**
 * one_child - handles the case when node has one child
 * @n: node
 * @ch: child node
 */
void one_child(bst_t *n, bst_t *ch)
{
	ch->parent = n->parent;
	if (n == n->parent->right)
		n->parent->right = ch;
	else
		n->parent->left = ch;
}
