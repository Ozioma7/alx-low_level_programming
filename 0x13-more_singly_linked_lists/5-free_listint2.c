#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 * Return: Result
 */
void free_listint2(listint_t **head)
{
	listint_t *trav, *fhead;
	fhead = *head;

	while (fhead)
	{
		trav = fhead->next;
		free(fhead);
		fhead = trav;
	}

	*head = NULL;
}

