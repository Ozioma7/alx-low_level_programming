#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: singly linked list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
