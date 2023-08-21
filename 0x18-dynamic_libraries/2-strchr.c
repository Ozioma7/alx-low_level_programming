#include "main.h"

/**
 * _strchr - Function that locates a char in a string
 * @s: input1
 * @c: input2
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
