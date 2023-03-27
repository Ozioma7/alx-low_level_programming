#include "main.h"


/**
 * rev_string - Reverse String
 * @s: string to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	int d, i;
	char temp;

	for (d = 0; s[d] != '\0'; ++d)

	For (i = 0; i < d / 2; i++)
	{
		temp = s[i];
		s[i] = s[d - 1 - i];
		s[d - 1 - i] = temp;
	}

}
