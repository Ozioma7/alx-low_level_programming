#include "lists.h"

/*
 * listint_len -  function that returns the number
 * of elements in a linked listint_t list.
 * @h: Hesd Pointer.
 * Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	int Count = 0;

	while (h != NULL)
	{
		Count++;
		h = h->next;
	}
	return (Count);
}
