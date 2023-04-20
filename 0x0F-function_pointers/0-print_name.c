#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints name
 * @name: name to be printed
 * @f: pointer
 * Return: Printed Name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
