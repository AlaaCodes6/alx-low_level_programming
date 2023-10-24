#include "lists.h"

/**
 * free_listp2 - frees a linked list
 *
 * @head: head of a list.
 *
 * Return: nothing
 */

void free_listp2(listp_t **head)
{
	listp_t *curr;
	listp_t *temp;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 *
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listp_t *i, *new, *j;
	listint_t *curr;

	i = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = i;
		i = new;

		j = i;

		while (j->next != NULL)
		{
			j = j->next;
			if (*h == j->p)
			{
				*h = NULL;
				free_listp2(&i);
				return (n);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		n++;
	}

	*h = NULL;
	free_listp2(&i);
	return (n);
}
