#include "main.h"
/**
 * swap_int - swap the values ot two int
 * @a: first int
 * @b: Second int
 * Return: 0
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
