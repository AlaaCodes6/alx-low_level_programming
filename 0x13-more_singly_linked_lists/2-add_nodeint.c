#include "lists.h"

/**
 * add_nodeint - add a i node at the beginning
 * of linked list
 * @head: head
 * @n: number
 *
 * Return: address of the i element or NUll if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;

	return (*head);
}
