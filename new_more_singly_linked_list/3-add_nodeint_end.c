#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Double pointer to head.
 * @n: Content of New Node.
 * Return: Address of New Node or Null.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *EndNode;
	listint_t *trav = *head;

	EndNode = malloc(sizeof(listint_t));

	if (EndNode == NULL)
		return (NULL);

	EndNode->n = n;
	EndNode->next = NULL;

	if (*head == NULL)
	{
		*head = EndNode;
	}

	else
	{
		EndNode = *head;
		while (trav->next != NULL)
			trav = trav->next;
		trav->next = EndNode;
	}

	return (*head);
}
