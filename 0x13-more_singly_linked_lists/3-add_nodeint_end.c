#include "lists.h"

/**
 * add_nodeint_end - add a i node at the end
 * of a linked list
 * @head: head
 * @n: input
 *
 * Return: address of the i element. NUll if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *j;

	(void)j;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;
	j = *head;
	if (*head == NULL)
	{
		*head = i;
	}
	else
	{
		while (j->next != NULL)
		{
			j = j->next;
		}
		j->next = i;
	}

	return (*head);
}
