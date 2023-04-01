#include "main.h"

/**
 *string_toupper - from lowercase to uppercase
 *@str: string to be worked on
 *Return: strings
 */

char *string_toupper(char *str)
{
	int w;

	for (w = 0; str[w] != '\0'; w++)
	{
		if (str[w] >= 'a' && str[w] <= 'z')
			str[w] = str[w] - 32;
	}
	return (str);
}
