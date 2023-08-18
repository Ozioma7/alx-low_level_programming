#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the
 * end of a dlistint_t list.
 * @head: double pointer to the head
 * @n: the element to be added
 * Return: Result or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *end;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = NULL;

	end = *head;

	if (*head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		while (end->next)
			end = end->next;
		end->next = newNode;
	}
	newNode->prev = end;

	return (newNode);
}
