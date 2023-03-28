#include "main.h"

/**
 * _atoi - Convert a string to int
 * @s: string to be converted
 *
 * Return: Converted Result
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = i;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);

}
