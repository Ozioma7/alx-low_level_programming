#include <stdio.h>
#include "main.h"

/**
 * main - Prime factors
 * Return: 0
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
	}
	printf("%lu\n", n);
	rturn (0);
}
