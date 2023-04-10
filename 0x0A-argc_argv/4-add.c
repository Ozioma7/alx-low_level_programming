#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * checker - check string
 * @s: array string
 *
 * Return: 0
 */

int checker(char *s)
{
	unsigned int counter;

	counter = 0;
	while (counter < strlen(s))
	{
		if (!isdigit(s[counter]))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

/**
 * main - that adds positive numbers
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;
	int s_to_int;
	int total = 0;

	counter = 1;
	while (counter < argc)
	{
		if (checker(argv[counter]))
		{
			s_to_int = atoi(argv[counter]);
			total += s_to_int;

		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", total);

	return (0);
}
