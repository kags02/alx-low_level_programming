#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node of the given index.
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of list to be deleted.
 *
 *Return: On success - 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t  *g;
	unsigned int x = 0;

	while (tmp)
{
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (x);
	}
	if (x == index - 1 && index != 0)
{
	g = tmp->next;
	tmp->next = g->next;
	free(g);
	return (1);

}
tmp = tmp->next;
x++;
}
return (x);
}

