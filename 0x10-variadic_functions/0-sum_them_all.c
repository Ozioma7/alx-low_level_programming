#include "VARIADIC_FUNCTIONS_H"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: Sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, a;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (a = 0, a < n, a++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);
	return (sum);
}
