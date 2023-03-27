#include "main.h"

/**
 * print_rev - Print string in rev
 * @s: string to be printed
 */
 
void print_rev(char *s)
{
	int d, e;

	d = 0;

	while (s[d] != '\0')
		d++;

	for (e = d -1; e >= 0; e--)
	{
		_putchar(s[e]);
	}
	_putchar('\n');
}
