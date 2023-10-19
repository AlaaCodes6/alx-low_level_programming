#include <stdio.h>

void printer(void) __attribute__ ((constructor));

/**
 * printer - prints a sentence before the main
 *	function is executed
 *
 * Returns : Nothing
 */


void printer(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
