#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: One of the strings
 * @src: The other string
 * @n: max no of byte
 * Return: Copied String
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
