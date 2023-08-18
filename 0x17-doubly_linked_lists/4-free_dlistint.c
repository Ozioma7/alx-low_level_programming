#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: double pointer to head
 * Return: freed list
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);

		head = next;
	}
}
