#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 * Return: Freed Memory
 */
void free_listint(listint_t *head)
{
	listint_t *trav;

	while (head)
	{
		trav = head->next;
		free(head);
		head = trav;
	}
}
