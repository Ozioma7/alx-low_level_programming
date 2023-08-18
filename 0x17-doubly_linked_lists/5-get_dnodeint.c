#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to head
 * @index: index of the element
 * Return: result or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}

	return (head);
}
