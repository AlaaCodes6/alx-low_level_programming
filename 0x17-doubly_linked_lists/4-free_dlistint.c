#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 *
 * Return: northing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((i = head) != NULL)
	{
		head = head->next;
		free(i);
	}
}
