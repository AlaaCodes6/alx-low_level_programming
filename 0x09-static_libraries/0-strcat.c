#include "main.h"

/**
 * _strcat - concatenates 2 strings
 *
 * @src: pointer to input 1
 * @dest: pointer to input 2
 *
 * Return: pointer to resulting @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
