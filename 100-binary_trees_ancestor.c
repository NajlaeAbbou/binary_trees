#include "10-binary_tree_depth.c"
/**
 * binary_tree_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t depth_n1, depth_n2, i = 0;
	binary_tree_t *n1, *n2;

	if (!first || !second)
		return (NULL);
	depth_n1 = binary_tree_depth(first);
	depth_n2 = binary_tree_depth(second);
	n1 = (binary_tree_t *)first;
	n2 = (binary_tree_t *)second;
	if (depth_n1 > depth_n2)
	{
		while (depth_n1 - depth_n2 - i)
		{
			n1 = n1->parent;
			i++;
		}
	}
	else if (depth_n2 > depth_n1)
	{
		while (depth_n2 - depth_n1 - i)
		{
			n2 = n2->parent;
			i++;
		}
	}
	while (n1)
	{
		if (n1 == n2)
			return (n1);
	n1 = n1->parent;
	n2 = n2->parent;
	}
	return (NULL);
}
