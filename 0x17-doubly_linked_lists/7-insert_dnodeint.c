#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head
 * @idx: index of node
 * @n: data
 * Return: Result or 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *head;
	unsigned int i;

	newNode = NULL;
	if (idx == 0)
		newNode = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					newNode = add_dnodeint_end(h, n);
				else
				{
					newNode = malloc(sizeof(dlistint_t));
					if (newNode != NULL)
					{
						newNode->n = n;
						newNode->next = head->next;
						newNode->prev = head;
						head->next->prev = newNode;
						head->next = newNode;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (newNode);
}
