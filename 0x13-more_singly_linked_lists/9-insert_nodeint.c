#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 *
 * @head: head
 * @idx: index of the list where the new node should
 * added
 * @n: input
 *
 * Return: the address of the new node, or NULL if
 * it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *j;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	j = malloc(sizeof(listint_t));
	if (j == NULL)
		return (NULL);

	j->n = n;

	if (idx == 0)
	{
		j->next = *head;
		*head = j;
	}
	else
	{
		j->next = h->next;
		h->next = j;
	}

	return (j);
}
