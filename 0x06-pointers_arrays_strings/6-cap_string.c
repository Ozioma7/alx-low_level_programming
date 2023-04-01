#include "main.h"

/**
 *cap_string - Function that capitalizes a string
 *@str: string
 *Return: The capitalized string
 */

char *cap_string(char *str)
{
	int a = 0;

	while (str[++a])
	{
		while (!(str[a] >= 'a' && str[a] <= 'z'))
			a++;

		if (str[a - 1] == ' ' ||
				str[a - 1] == '\t' ||
				str[a - 1] == '\n' ||
				str[a - 1] == ',' ||
				str[a - 1] == ';' ||
				str[a - 1] == '.' ||
				str[a - 1] == '?' ||
				str[a - 1] == '"' ||
				str[a - 1] == '(' ||
				str[a - 1] == ')' ||
				str[a - 1] == '{' ||
				str[a - 1] == '}' ||
			str[a] -= 32;
		}
		return (str);




}
