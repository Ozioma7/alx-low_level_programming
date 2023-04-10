#include <stdio>
#include "main.h"

/**
 * _putchar - writes char c
 * @c: char
 * Return: 1 and -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
