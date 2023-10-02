#include "main.h"

/**
 * _isupper - checks if c is  uppercase character
 *
 * @c: input for alphabets
 *
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
