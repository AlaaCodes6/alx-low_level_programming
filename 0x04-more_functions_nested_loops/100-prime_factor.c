#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input
 *
 * Return: square root of x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 *	prime factor of num
 *
 * @num: input
 *
 */

void largest_prime_factor(long int num)
{
	int prmNo, largestNo;

	while (num % 2 == 0)
		num = num / 2;

	for (prmNo = 3; prmNo <= _sqrt(num); prmNo += 2)
	{
		while (num % prmNo == 0)
		{
			num = num / prmNo;
			largestNo = prmNo;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", latgestNo);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
