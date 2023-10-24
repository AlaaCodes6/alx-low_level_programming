#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * linked list
 *
 * @h: head
 *
 * Return: numbers of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
