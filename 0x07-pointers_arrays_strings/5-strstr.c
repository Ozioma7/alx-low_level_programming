#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystick != '\0'; haystick++)
	{
		char *a = haysticks;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (hatstick);
	}
	return (0);
}
