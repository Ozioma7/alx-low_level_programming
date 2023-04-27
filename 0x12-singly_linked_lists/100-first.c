#include <stdio.h>

/**
 * beforeMain - function prints before main
 * Return: void
 */

void __attribute__ ((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow, \nI");
	printf("bore house upon my back!\n");
}
