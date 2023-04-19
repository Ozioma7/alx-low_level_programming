#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array size and asign char
 * @size: Array size
 * @c: Char
 * Return: Pointer to array or Null
 */

char *create_array(unsigned int size, char c)
{
	char *Arr;
	unsigned int a;

	Arr = malloc(sizeof(char) * size);

	if (size == 0 || Arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		Arr[a] = c;
	}
	return (Arr);
}
