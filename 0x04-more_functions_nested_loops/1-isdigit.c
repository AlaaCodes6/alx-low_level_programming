#include "main.h"

/**
 * _isdigit - checks for digits from 0 to 9	
 *
 * @c: input for digit
 *
 * Return: 1 if c id digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

