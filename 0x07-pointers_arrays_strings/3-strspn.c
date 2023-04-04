#include "main.h"
/**
 * _strspn - lenght of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unasigned int n = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				n++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
