#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n = tmp->n;
	*head = tmp->next;
	return (n);
}

