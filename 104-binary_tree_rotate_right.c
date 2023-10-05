#include"binary_trees.h"
/* binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree:  pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
        binary_tree_t *bt;

        if (!tree || !tree->left)
                return (tree);
        bt = tree->left;
        bt->parent = tree->parent;
        if (bt->right)
                (bt->right)->parent = tree;
        tree->left = bt->right;
        bt->right = tree;
        tree->parent = bt;
        while (bt->parent)
        {
                bt = bt->parent;
        }
        return (bt);
}
