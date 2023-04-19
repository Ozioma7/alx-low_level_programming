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
	char *string;
	unsigned int a;

	string = malloc(sizeof(char) * size);

	if (size == 0 || string == NULL)


		return (NULL);

	for {(a = 0; a < size; a++)
		string[a] = c;
	}

	return (string);
}
