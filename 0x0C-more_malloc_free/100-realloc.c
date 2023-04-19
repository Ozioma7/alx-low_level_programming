#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: previous memory's pointer
 * @old_size: size of ptr
 * @new_size: new memory size
 * Return: Result, Null or ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (mem);
		for (a = 0; a < old_size; a++)
			mem[a] = *((char *)ptr + 1);
		free(ptr);
	}
	return (mem);

}
