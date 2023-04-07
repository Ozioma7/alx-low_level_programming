#include "main.h"

/**
 *factorial - Finds factoria of a given number
 *@n: Number
 *Return: Factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
