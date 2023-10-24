#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: head of a list.
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *temp;

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
