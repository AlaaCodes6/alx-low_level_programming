#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: number
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - function that calculates if a number is prime
 *
 * @n: number
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
