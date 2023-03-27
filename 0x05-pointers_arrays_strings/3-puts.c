#include "main.h"

/**
 * _puts - To print string to stdout
 * @str: The String
 * Return: the lenght of the string
 */

void _puts(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		-putchar(str[b]);
		b++;
}
