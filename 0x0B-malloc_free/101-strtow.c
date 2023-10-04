#include <stdlib.h>
#include "main.h"

/**
 * counter - counts the number of words in a string
 *
 * @s: input
 *
 * Return: number of words
 */

int counter(char *s)
{
	int flag, i, n;

	flag = 0;
	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			n++;
		}
	}

	return (n);
}

/**
 * **strtow - splits a string into words
 *
 * @str: input
 *
 * Return: pointer to an array of strings
 *	or NULL (Error)
 */

char **strtow(char *str)
{
	char **arr, *tmp;
	int i, j = 0, l = 0, w, c = 0, start, end;

	while (*(str + l))
		l++;
	w = counter(str);
	if (w == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (w + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				arr[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	arr[j] = NULL;

	return (arr);
}
