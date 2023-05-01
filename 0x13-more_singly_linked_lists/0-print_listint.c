#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head pointer..
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	Num = 0;

	while (h != NULL)
	{
		h = h->next;
		Num++;
	}
	return (Num);
}
