#include "main.h"

/**
 * print_square - prints a square using #
 *
 * @size: size of the square
 *
 * Return: always 0 (success)
 */

void print_square(int size)
{
	int row, colomn;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
