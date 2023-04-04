#include "lists.h"

/**
 * listint_len - Returns the number of elements in the list.
 * @h: A pointer to the head of the listint_t.
 *
 * Return: The number of elements in list.
 */

size_t listint_len(const listint_t *h)
{
	size_t v = 0;

	while (h)
	{
		h = h->next;
		v++;
	}
	return (v);
}

