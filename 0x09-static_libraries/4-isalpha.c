#include "main.h"

/**
 * _isalpha - function to check if
 *	the letter is lowercase or uppercase
 *
 * @c: takes input of a function
 *
 * Return: 1 is c if true
 * otherwise always 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
