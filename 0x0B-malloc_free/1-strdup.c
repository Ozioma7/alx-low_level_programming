#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: String's pointer
 * Return: Pointer to duplicate or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int a, l = 0;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
		a++;

	dup = malloc(sizeof(char) * (a + 1));

	if (dup == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		dup[l] = str[l];

	return (dup);
}
