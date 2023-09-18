#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: input parameter
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0; s[x] != '\0'; x++)
		count++;

	return (count);
}
