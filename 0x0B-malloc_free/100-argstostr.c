#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, m, x = 0, y = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (m = 0; av[a][m]; m++)
			y++;
	}
	y += ac;

	cat = malloc(sizeof(char) * y + 1);

	if (cat == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (m = 0; av[a][m]; m++)
	{
		cat[x] = av[a][m];
		x++;
	}

	if (cat[x] == '\0')
	{
		cat[x++] = '\n';
	}
	}
	return (cat);
}
