#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert
 * @value: the value to store
 * Return: pointer to the created node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *mynode;

	if (parent == NULL)
		return (NULL);
	mynode = binary_tree_node(parent, value);
	if (mynode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		(parent->right)->parent = mynode;
		mynode->right = parent->right;
	}
	parent->right = mynode;
	return (mynode);
}
