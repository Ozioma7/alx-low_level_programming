#include "main.h"

/**
 * _puts - To print string to stdout
 * @s: The String
 * Return: the lenght of the string
 */

void _puts(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		_putchar(s[b]);
		b++;
	}
	_putchar('\n');
}
