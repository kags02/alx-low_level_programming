#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of the list.
 *
 * @head: A pointer to the address of the head of the linstint list.
 *
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tell = *head;
	listint_t *hello;

	hello = malloc(sizeof(listint_t));
	if (hello == NULL)
	{
		return (NULL);
	}
	hello->n = n;
	hello->next = NULL;
	if (*head == NULL)
		*head = hello;
	else
	{
	while (tell)
	{
		if (tell->next == NULL)
		{	tell->next = hello;
			return (*head);
		}


		tell = tell->next;
	}
	}
	return (*head);

}

