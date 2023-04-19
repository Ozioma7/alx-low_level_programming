#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimun Number
 * @max: maximun Number
 * Return: Array of int
 */

int *array_range(int min, int max)
{
	int *Ar, a = 0, b = min;

	if (min > max)
		return (0);
	Ar = malloc((max - min + 1) * sizeof(int));

	if (!Ar)
		return (0);
	while (a <= max - min)
		Ar[a++] = b++;
	return (Ar);
}
