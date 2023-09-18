#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @str: input parameter
 *
 * Return: length of a string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
