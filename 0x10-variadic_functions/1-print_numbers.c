#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: The separator
 * @n: number
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list nums;

	va_start(nums, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(nums, int));
		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}


