#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - function that determines if n is a printable ASCII char
 *
 * @n: input
 *
 * Return: 1 if tre, 0 if false
 */

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}


/**
 * printHexes - function that prints hex values
 *
 * @b: input
 * @start: starting point
 * @end: finishing point
 *
 * Return: nothing
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * print_buffer - function that prints a buffer
 *
 * @b: input
 * @size: size of a bufferr
 *
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n")
}
