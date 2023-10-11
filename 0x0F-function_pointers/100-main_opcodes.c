#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the opcodes of its own main function
 *
 * @argc: input
 * @argv: input
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
