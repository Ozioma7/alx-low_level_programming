#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Write a function that returns the number of
 * elements in a linked list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t Num;

	Num = 0;
	while (h != NULL)
	{
		h = h->next;
		Num++;
	}
	return (Num);
}
