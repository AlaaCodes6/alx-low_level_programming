#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 *
 * @n: unsigned long int
 * @index: index
 *
 * Return: 1 if it worked, or -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
