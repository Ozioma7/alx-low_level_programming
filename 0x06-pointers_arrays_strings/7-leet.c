#include "main.h"

/**
 * leet - Function that encodes 1337
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	int j;
	int k;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; x[k] != '\0'; k++)
		{
			if (str[j] == x[k])
				str[j] = y[k]
		}
	}
	return (str);
}
