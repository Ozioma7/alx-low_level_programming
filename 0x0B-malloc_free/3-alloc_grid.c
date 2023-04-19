#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: martix's width
 * @height: matix's height
 * Return: Product or Null
 */

int **alloc_grid(int width, int height)
{
	int a, b, x, y;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));

		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (a = 0; a < height; a++)
		{
			p[a] = (int *) malloc(width * sizeof(int));
			if (!p[a])
			{
				for (b = 0; b <= a; b++)
					free(p[b]);
				free(p);
				return (NULL);
			}
		}
		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
				p[x][y] = 0;
		}
		return (p);
	}
}
