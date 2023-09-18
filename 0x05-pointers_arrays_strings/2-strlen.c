#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char *str;
	int len;

	str = "my first strlen";
	len = _strlen(str);

	printf("%d\n", len);

	return (0);
}
