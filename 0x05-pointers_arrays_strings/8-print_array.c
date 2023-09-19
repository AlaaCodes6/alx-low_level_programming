#include "main.h"

/**
 * print_array - function name
 *
 * @a: input parameter 1
 * @n: input parameter 2
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		{
			if (i < n - 1)
				printf(", ");
		}
		printf("\n");
}
