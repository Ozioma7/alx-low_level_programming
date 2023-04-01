#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: first number
 * @s2: second number
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, dif = 0;

	while (1)
	{
		if (s1[a] == '\0' && s2[i] == '\0')
			break;
		else if (s1[a] == '\0')
		{
			dif = s2[a];
			break;
		}
		else if (s2[a] == '\0')
		{
			dif = s1[a];
			break;
		}
		else if (s1[a] != s2[a])
		{
			dif = s1[a] - s2[a];
			break;
		}
		else
			a++;
	}
	return (dif);
}
