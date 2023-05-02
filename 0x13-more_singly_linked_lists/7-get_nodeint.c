#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list.
 * @head: head
 * @index: index of the node to be returned
 * Return: The nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *trav = head;

	while (trav && a < index)
	{
		trav = trav->next;
		a++;
	}

	return (trav ? trav : NULL);
}
