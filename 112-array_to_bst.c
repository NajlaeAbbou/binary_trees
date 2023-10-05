#include "binary_trees.h"

/**
 * array_to_bst - a function that builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * Return: a pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t s;
	bst_t *r, *f;

	r = NULL;
	for (s = 0; s < size; s++)
	{
		f = bst_insert(&r, array[s]);
		if (!f)
			return (NULL);
	}
	return (r);
}
