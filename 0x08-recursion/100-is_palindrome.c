#include "main.h"

int check_p(char *s, int i, int l);
int _strlen(char *s);

/**
 * is_palindrome - shows if a string is a palindrome
 *
 * @s: input
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_p(s, 0, _strlen(s)));
}


/**
 * _strlen - returns the length of a string
 *
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check_p - function that checks for palindrome
 *
 * @s: input
 * @i: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_p(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check_p(s, i + 1, l - 1));
}

