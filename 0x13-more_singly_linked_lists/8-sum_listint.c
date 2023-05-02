#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a list
 * @head: head
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *trav = head;

	if` (trav == NULL)
		return (NULL);

	while (trav)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
