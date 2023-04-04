#include "lists.h"

/**
 * free_listint - function do frees a listint_t list.
 *@head: stands for a pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *file;

	while (head)
	{
		file = head->next;
		free(head);
		head = file;
	}
}

