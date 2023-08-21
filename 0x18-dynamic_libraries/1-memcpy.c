#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: stored memory
 * @src: copied memeory
 * @n: number of bytes
 * Return: Copied mem with no of new bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int j = n;

	for  (; a < j; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);

}
