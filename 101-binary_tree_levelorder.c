#include"binary_trees.h"
/*
 * binary_tree_levelorder -  goes through a binary tree using
 * level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: If tree or func is NULL, do nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, ad1, max = 1024, j = 0;
	binary_tree_t *tab[max];

	if (!tree || !func)
		return;

	for (i = 0; i < max; i++)
		tab[i] = NULL;

	tab[j] = (binary_tree_t *)tree;
	ad1 = 1;
	while (tab[j])
	{
		func(tab[j]->n);
		if (tab[j]->left)
		{
			tab[ad1] = tab[j]->left;
			ad1++;
		}
		if (tab[j]->right)
		{
			tab[ad1] = tab[j]->right;
			ad1++;
		}
	j++;
	}
}
