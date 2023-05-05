#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: String containing binary number
 * Return: Result or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int con = 0;
	int a = 0;

	if (b == NULL)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		con = 2 * con + (b[a] - '0');
	}
	return (con);
}
