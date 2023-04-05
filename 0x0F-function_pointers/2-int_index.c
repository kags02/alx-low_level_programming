#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: this is the array of integers.
 * @size: The real size of an array.
 * @cmp: A pointer to the function to be used.
 *
 * Return: If size <= 0, return -1;
 *         If no element matches, return -1;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int v = 0, x = -1;

	if (cmp == NULL || array == NULL)
		return (x);

	while (v < size)
	{
		if (cmp(array[v]) != 0)
			return (v);
		v++;
	}

	return (x);
}
