#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
