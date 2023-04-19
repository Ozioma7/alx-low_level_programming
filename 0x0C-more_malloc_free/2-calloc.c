#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory
 * for an array, using malloc
 * @nmemb: no of element in []
 * @size: size
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(nmemb * size);

	if (pt == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		pt[a] = 0;

	return (pt);
}
