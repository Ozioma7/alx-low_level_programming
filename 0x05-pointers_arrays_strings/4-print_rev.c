#include "main.h"

/**
 * print_rev - Print string in rev
 * @s: string to be printed
 * Return: void
 */
 
void print_rev(char *s)
{
	int f = 0;

	while (s[f])
		f++;

	while (f--)
	{
		_putchar(s[f]);
	}
	_putchar('\n');
}
