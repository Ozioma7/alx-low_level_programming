#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: char to be checked
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for(; *s++;)
		a++;
	return (a);
}
