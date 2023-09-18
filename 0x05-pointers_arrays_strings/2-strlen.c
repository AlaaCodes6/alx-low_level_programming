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

	for (x = 0; *s != '\0'; x++)
		++x;

	return (x);
}
