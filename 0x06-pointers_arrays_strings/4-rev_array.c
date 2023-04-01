#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: array
 * @n: no of elements
 */

void reverse_array(int *a, int n)
{
	int j;
	int k;

	for (j = 0; j < n / 2;  j++)
	{
		k = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = k;
	}
}
