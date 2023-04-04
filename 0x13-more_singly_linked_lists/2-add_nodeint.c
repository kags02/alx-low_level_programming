#include "lists.h"

/**
 * add_nodeint - Adds a new node at the start of list.
 *
 * @head: A pointer which stores the address of listint_t head.
 *
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *vull;

	vull = malloc(sizeof(listint_t));
	if (vull == NULL)
		return (NULL);
	vull->n = n;
	vull->next = *head;
	*head = vull;
	return (*head);
}

