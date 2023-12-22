#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: pointer to the hash table
 *
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *c;

	if (ht == NULL)
		return;

	printf("{");
	c = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", c, tmp->key, tmp->value);
			c = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}