#iinclude "main.h"

/**
 * _strncat - concatenate two strings and add n bytes
 * @dest: string to be appende upon
 * @src: string to concatenate
 * @n: int
 * Return: Product
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
