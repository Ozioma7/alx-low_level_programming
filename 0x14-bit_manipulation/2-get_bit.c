#include "main.h"

/**
 * get_bit - that returns the value of a bit at a given index.
 * @n: no of search
 * @index: Index
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index);

	return (value);
}
