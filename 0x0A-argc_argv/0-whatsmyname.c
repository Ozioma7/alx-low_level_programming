#include <stdio.h>
#include "main.h"

/**
 * main - name of program
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */

void main(int argc, char *argv[])
{
	int a;
	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
