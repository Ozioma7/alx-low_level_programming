#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - That concatenate two strings
 * @s1: First Sting's pointer
 * @s2: Second String's pointer
 * Return: Product or Null
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int con1, con2, size, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	con1 = 0;
	while (s1[con1] != '\0')
		con1++;
	con2 = 0;
	while (s2[con2] != '\0')
		con2++;

	cat = mallocc((sizeof(char) * size) + 1);

	if (cat == NULL)
		return (NULL);

	a = 0;
	while (a < con1)
	{
		cat[a] = s1[a];
		a++;
	}
	b = 0;
	while (a <= size)
	{
		cat[a] = s2[b];
		a++;
		b++;
	}
	return (cat);
}
