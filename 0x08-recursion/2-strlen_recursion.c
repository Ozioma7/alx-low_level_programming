#include "main.h"

/**
 *_strlen_recursion - function that returns the length
 *of a string
 *@s: string's pointer
 *Return: String's lenght
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
