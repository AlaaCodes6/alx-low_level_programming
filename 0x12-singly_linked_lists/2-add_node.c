#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t list
 *
 * @head: input
 * @str: string input
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	unsigned int len = 0;

	while (str[len])
		len++;

	i = malloc(sizeof(list_t));
	if (!i)
		return (NULL);

	i->str = strdup(str);
	i->len = len;
	i->next = (*head);
	(*head) = i;

	return (*head);
}
