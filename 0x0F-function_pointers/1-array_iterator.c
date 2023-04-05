#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given as a parameter
 * @array: an array.
 * @size: size of an array
 * @action: A pointer to function to be used.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
		return;

	while (size > 0)
	{
		array = array + 1;
		action(*array);
		size--;
	}
}
