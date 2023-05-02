#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: new node index
 * @n: content of new node
 * Return: address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *newNode;
	listint_t *trav = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next =  NULL;

	if (idx < 0 || idx > a)
		return (NULL);
	else if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
		*trav = *head;

	while (--idx)
		trav = trav->next;
	newNode->next = trav->next;
	trav->next = newNode;
	return (newNode);
}
