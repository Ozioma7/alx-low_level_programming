#include "main.h"

/**_puts_recursion - function that prints a string, followed by a new line.
 * @s: string's pointer
 *
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_putsd_recusion(s + 1);
}
