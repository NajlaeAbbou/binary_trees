#include"binary_trees.h"
/* binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
 
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int i , ad1 = 1, max = 1024, j=0, onode = 0;
        binary_tree_t *tab[max];

        if (!tree)
                return (0);

        for (i = 0; i < max; i++)
                tab[i] = NULL;

        tab[j] = (binary_tree_t *)tree;
        while (tab[j])
        {
                if ((!tab[j]->left && tab[j]->right) || ((tab[j]->right || tab[j]->left) && onode == 1))
                {
			return (0);
                }
		if (!tab[j]->right)
			onode = 1;
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
	return (1);
}
