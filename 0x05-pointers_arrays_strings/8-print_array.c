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
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
