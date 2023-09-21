#include "main.h"

/**
   * rev_string - reverse array
   * @n: integer params
   * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
	i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
	temp = *(n + j);
	*(n + j) = *(n + i);
	*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
	i++;
	while (*(n2 + j) != '\0')
	j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
	if (i < 0)
	val1 = 0;
	else
	val1 = *(n1 + i) - '0';
	if (j < 0)

	val2 = 0;
	else
	val2 = *(n2 + j) - '0';
	temp_tot = val1 + val2 + overflow;
	if (temp_tot >= 10)
	overflow = 1;
	else
	overflow = 0;
	if (digits >= (size_r - 1))
	return (0);
	*(r + digits) = (temp_tot % 10) + '0';
	digits++;
	j--;
	i--;
	}
	if (digits == size_r)
	return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}




Task 104

#include "main.h"
#include <stdio.h>

/**
 * print_buffer - main function
 *
 * @b: The buffer.
 *
 * @size: size of buffer
 *
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int x;
	int y;
	int z;

	x = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (x < size)
	{
	y = size - x < 10 ? size - x : 10;
	printf("%08x: ", x);
	for (z = 0; z < 10; z++)
	{
	if (z < y)
	printf("%02x", *(b + x + z));
	else
	printf("  ");
	if (z % 2)
	{
	printf(" ");
	}
	}
	for (z = 0; z < y; z++)
	{
	int c = *(b + x + z);

	if (c < 32 || c > 132)
	{
	c = '.';
	}
	printf("%c", c);
	}
	printf("\n");
	x += 10;
	}
}

