#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *arg[])
{
	(void)
		printf("%d\n", argc - 1);
	return (0);
}
