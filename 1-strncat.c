#include "main.h"

/**
 * *_strncat - function name
 *
 * @src: pointer to input 1
 * @dest: pointer to input 2
 * @n: most bytes from src
 *
 * Return: pointer to resulting @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;

	while (dest[c1])
		c1++;

	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)

		dest[c1 + c2] = src[c2];

	dest[c1 + c2] = '\0';

	return (dest);
}
