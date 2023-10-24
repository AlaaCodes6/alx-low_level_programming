#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: head
 *
 * Return: pointer to the first node of list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *i;

	ptr = NULL;
	i = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = i;
	}

	*head = ptr;
	return (*head);
}
