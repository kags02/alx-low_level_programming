#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new is to be added.
 *
 * @n: The integer for the new node to equalise.
 * Return: If the function fails output is NULL.
 *         Otherwise returns new head address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hello = *head;
	listint_t *tmp, *he;
	unsigned int x = 0;

	while (hello)
	{
		x++;
		if (x == idx)
		{
			tmp = hello->next;
			he = malloc(sizeof(listint_t));
			hello->next = he;
			he->n = n;
			he->next = tmp;
		}
		hello = hello->next;
	}
	return (*head);
}

