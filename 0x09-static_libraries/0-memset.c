#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: address
 * @b: value
 * @n: number of bytes to be changed
 * Return: Solution
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
