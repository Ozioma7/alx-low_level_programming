#include "main.h"

/**
 * binary_to_uint - Cnverts a binary number to an unsigned int.
 * @b: string
 * Return: Converted number or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int con = 0;
	int a;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		con = 2 * con + (b[a] - '0');
	}

	return (con);
}
