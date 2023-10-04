#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 i* @value: value to store in the new node
 * Return: pointer to the created node,null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *mynode;

	if (parent == NULL)
		return (NULL);
	mynode = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		(parent->left)->parent = mynode;
		mynode->left = parent->left;
	}
	parent->left = mynode;
	return (mynode);
}
