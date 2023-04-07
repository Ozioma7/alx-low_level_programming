#include "main.h"

/**
 * str_Lenght - lenght of str checker
 * @s: string
 * Return: string's lenght
 */

int str_Lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_Lenght(s + 1));
}

/**
 * checker - palindore checker
 * @a: index
 * @x: lenght of string
 * @s: string
 * Return: 0 or 1
 */

int checker(int a, int x, char *s)
{
	if (x > 0)
	{
		if (s[a] == s[x])
		{
			return (checker(a + 1, x - 1, s));
		}
		else if (s[a] != s[x])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - Palindora
 * @s: String
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	return (checker(0, str_Lenght(s) - 1, s));
}
