#include "main.h"

/**
 * partialfunction - Help to check the code
 * @numb: number to be checked in partialfunction
 * @b: factors of n
 * Return: 0 and 1
 */


int partialfunction(int numb, int b)
{
	if (b < numb)
	{
		if (numb % b == 0)
			return (0);
		else
			return (partialfunction(numb, b + 1));
	}
	else
		return (1);
}


/**
 * is_prime_number - Function that returns Prime Numbers
 * @n: Number
 * Return: 0 0r 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (partialfunction(n, 2));
	}
}
