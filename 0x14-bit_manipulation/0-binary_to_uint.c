#include "main.h"
/**
 * binary_to_uint - nverts a binary number to an unsigned int
 * @b: String containing binary number
 * Return: Result or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int con = 0;
	int a = 0;

	if (b == NULL)
		return 0;

	while (b[a] == '0' || b[a] == '1')
	{
		con <<= 1;
		con += b[a]-'0';
		a++;
	}
	return (con);
}
