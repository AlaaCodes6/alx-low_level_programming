#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates 2 strings
 *
 * @s1: string 1 input
 * @s2: string 2 input
 * @n: number input
 *
 * Return: pointer to the rnewly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len_1 = 0, len_2 = 0;

	while (s1 && s1[len_1])
		len_1++;
	while (s2 && s2[len_2])
		len_2++;

	if (n < len_2)
		str = malloc(sizeof(char) * (len_1 + n + 1));
	else
		str = malloc(sizeof(char) * (len_1 + len_2 + 1));

	if (!str)
		return (NULL);

	while (i < len_1)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < len_2 && i < (len_1 + n))
		str[i++] = s2[j++];

	while (n >= len_2 && i < (len_1 + len_2))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
