#include "main.h"

/**
 * print_rev - Print string in rev
 * @s: string to be printed
 */
 
void print_rev(char *s)
{
	int d = 0;

	while (s[d])
		d++;

	while (d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');
}
