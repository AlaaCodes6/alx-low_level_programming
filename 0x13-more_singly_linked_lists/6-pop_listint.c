#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 *
 * @head: head
 *
 * Return:  head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *h;
	listint_t *k;

	if (*head == NULL)
		return (0);

	k = *head;

	i = k->n;

	h = k->next;

	free(k);

	*head = h;

	return (i);
}
