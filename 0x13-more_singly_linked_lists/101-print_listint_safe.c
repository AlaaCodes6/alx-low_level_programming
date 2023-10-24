#include "lists.h"

/**
 * free_listp - frees a linked list
 *
 * @head: head
 *
 * Return: nothing
 */

void free_listp(listp_t **head)
{
	listp_t *i;
	listp_t *j;

	if (head != NULL)
	{
		j = *head;
		while ((i = j) != NULL)
		{
			j = j->next;
			free(i);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 *
 * @head: head
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listp_t *h, *new, *a;

	h = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = h;
		h = new;

		a = h;

		while (a->next != NULL)
		{
			a = a->next;
			if (head == a->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&h);
				return (n);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}

	free_listp(&h);
	return (n);
}
