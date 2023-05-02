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
	if (newNode != 0 || head != 0)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);

	for (a = 0; trav && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newNode->next = trav->next;
			trav->next = newNode
			return (newNode);
		}
		else
			trav = trav->next;
	}

	return (NULL);
}
