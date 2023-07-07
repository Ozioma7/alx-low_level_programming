#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all -  function that prints anything.
 * @format: list al arguments passed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int a;
	va_list inputs;
	char *s, *separator;

	va_start(inputs, format);

	separator = "";

	a = 0;
	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%s%c", separator, va_arg(inputs, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(inputs, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(inputs, double));
				break;
			case 's':
				s = va_arg(inputs, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				a++;
				continue;
		}
		separator = ", ";
		a++;
	}
	printf("\n");
	va_end(inputs);
}
