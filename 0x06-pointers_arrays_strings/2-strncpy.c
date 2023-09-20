#include "main.h"

/**
 * *_strncpy - function that copies strings
 *
 * @src: pointer to input 1
 * @dest: pointer to input 2
 * @n: most bytes from src
 *
 * Return: pointer to resulting @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
