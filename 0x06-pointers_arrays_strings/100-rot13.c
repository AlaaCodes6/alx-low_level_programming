#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 *
 * @s: input
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == rot1[j])
			{
				s[i] = rot2[j];
				break;
			}
		}
	}
	return (s);
}
