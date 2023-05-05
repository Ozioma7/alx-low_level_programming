#include "main.h"

/**
 * get_endianness - That checks the endianness.
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;
	if (*c == 1)
		return (1);

	return (0);
}
