#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: input
 * @argv: input
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
