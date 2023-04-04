#include "lists.h"

/**
 * listint_len - Returns the elements of the list.
 * @h: A pointer to the head of the listint_t.
 *
 * Return: The number of elements in list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int v = 0;

	while (h)
	{
		printf("%d\n", h->n);
	       h = h->next;
	       v++;
	}
	return (v);
}
