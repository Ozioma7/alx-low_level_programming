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

	if (head != 0 || *head != 0)
		return (0);

	num = (*head)->n;
	trav = (*head)->next;
	free(*head);
	*head = trav;

	return (num);
}
