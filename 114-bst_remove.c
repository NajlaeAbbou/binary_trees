#include"114-bst_successor.c"
/**
 * bst_remove - a function that removes a node from a Binary Search Tree
 * @root: a pointer to the root node of the tree
 * @value: the value to remove in the tree
 * Return: a pointer to the root
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *n;

	if (!root)
		return (NULL);
	n = (bst_t *)root;
	while (n)
	{
		if (n->n == value)
		{
			if (n->left && n->right)
			{
				find_replace_successor(&root, n);
			}
			else if (n->left && n->parent)
			{
				one_child(n, n->left);
			}
			else if (n->right && n->parent)
			{
				one_child(n, n->right);
			}

			else if ((n->left || n->right) && !n->parent)
			{
				n->left->parent = NULL;
				root = n->left;
			}
			free(n);
			return (root);
		}
		else if (n->n > value)
			n = n->left;
		else if (n->n < value)
			n = n->right;
	}
	return (root);
}
