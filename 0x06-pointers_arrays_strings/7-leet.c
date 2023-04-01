#include "main.h"

/**
 * leet - Function that encodes 1337
 * @str: string
 */
char *leet(char *str)
{
	int j;
	int k;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
			if (str[j] == a[k])
				str[j] = b[k]
		}
	}
	return (str);
}
