#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *j;
	dlistint_t *k;
	unsigned int i;

	j = *head;

	if (j != NULL)
		while (j->prev != NULL)
			j = j->prev;

	i = 0;

	while (j != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = j->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				k->next = j->next;

				if (j->next != NULL)
					j->next->prev = k;
			}

			free(j);
			return (1);
		}
		k = j;
		j = j->next;
		i++;
	}

	return (-1);
}
