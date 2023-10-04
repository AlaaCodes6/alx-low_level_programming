#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: input
 * @av: dinput
 *
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, n, j = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			k++;
	}
	k += ac;

	str = malloc(sizeof(char) * k + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[j] = av[i][n];
		j++;
	}
	if (str[j] == '\0')
	{
		str[j++] = '\n';
	}
	}
	return (str);
}
