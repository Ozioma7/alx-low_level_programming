#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: index
 * Return: Result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int sz1 = 0, sz2 = 0, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[sz1] != '\0')
	{
		sz1++;
	}

	while (s2[sz2] != '\0')
	{
		sz2++;
	}

	if (n > sz2)
	n = sz2;
	pt = malloc((sz1 + n + 1) * sizeof(char));

	if (pt == NULL)
		return (0);

	for (a = 0; a < sz1; a++)
	{
		pt[a] = s1[a];
	}

	for (; a < (sz1 + n); a++)
	{
		pt[a] = s2[a - sz1];
	}
	pt[a] = '\0';

	return (pt);
}
