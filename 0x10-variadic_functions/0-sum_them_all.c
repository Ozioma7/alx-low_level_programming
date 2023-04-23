#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: Sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, a;
	va_list mylist;

	if (n == 0)
		return (0);

	va_start(mylist, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(mylist, int);
	}
	va_end(mylist);
	return (sum);
}
