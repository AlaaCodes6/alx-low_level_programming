#include "lists.h"

/**
 * free_listp2 - frees a linked list
 *
 * @head: head
 *
 * Return: nothing
 */

void free_listp2(listp_t **head)
{
	listp_t *j;
	listp_t *i;

	if (head != NULL)
	{
		i = *head;
		while ((j = i) != NULL)
		{
			i = i->next;
			free(j);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 *
 * @h: head
 *
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listp_t *h, *new, *a;
	listint_t *i;

	h = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = h;
		h = new;

		a = h;

		while (a->next != NULL)
		{
			a = a->next;
			if (*h == a->p)
			{
				*h = NULL;
				free_listp2(&h);
				return (n);
			}
		}

		i = *h;
		*h = (*h)->next;
		free(i);
		n++;
	}

	*h = NULL;
	free_listp2(&h);
	return (n);
}
