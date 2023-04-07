#include "main.h"

/**
 * partialfunction - Checker's function
 * @numb: Number
 * @SQRT: Square root of numb
 * Return: square root of -1
 */

int partialfunction(int numb, int SQRT)
{
	if ((SQRT * SQRT) == numb)
	{
		return (SQRT);
	}
	else
	{
		if ((SQRT * SQRT) > numb)
			return (-1);
		else
			return (partialfunction(numb, SQRT + 1));
	}
}

/**
 *_sqrt_recursion - function that returns the
 *natural square root of a number
 *@n: The number to find its square root
 *
 *Return: Natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (partialfunction(n, 0));
}
