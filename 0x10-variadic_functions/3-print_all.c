#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *s, *seperator = "";


	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(arg, double));
					break;
				case 's':
					s = va_arg(arg, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", seperator, s);
					break;
				default:
					i++;
					continue;
			}
			seperator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(arg);
}
