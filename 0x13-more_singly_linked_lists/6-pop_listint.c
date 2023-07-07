#include "lists.h"

/**
 * pop_listint - that deletes the head node of a list
 * @head: Double pointer to head
 * Return: Deleted data or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *trav;
	int num;

	if (*head == NULL)
		return (0);

	trav = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(trav);

	return (num);
}
