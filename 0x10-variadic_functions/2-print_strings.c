#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: separator
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *c;
	va_list stng;

	if (separator == NULL)
		separator = "";

	va_start(stng, n);

	for (a = 0; a < n; a++)
	{
		c = va_arg(stng, char *);

		if (c == NULL)
			c = "(nil)";
		printf("%s", c);

		if (a < n - 1)
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(stng);
	}
}
