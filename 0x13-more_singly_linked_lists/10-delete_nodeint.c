#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list
 *
 * @head: head
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *i;
	listint_t *j;

	i = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && i != NULL; i++)
		{
			i = i->j;
		}
	}

	if (i == NULL || (i->j == NULL && index != 0))
	{
		return (-1);
	}

	j = i->j;

	if (index != 0)
	{
		i->j = j->j;
		free(j);
	}
	else
	{
		free(i);
		*head = j;
	}

	return (1);
}
