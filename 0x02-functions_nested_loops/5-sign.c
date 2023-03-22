#include "main.h"
/**
 * print_sign - prints the sign of a num
 * @n: the numb to be checked for
 * Return: 1 and prints + if n is > 0
 * 0 and prints 0 if n is 0
 * -1 and prints - if n is < zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		-putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		-putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
