#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
