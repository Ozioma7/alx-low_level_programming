#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head: head of the linked list.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *newNode;

	while ((newNode = head) != NULL)
	{
		head = head->next;
		free(newNode->str);
		free(newNode);
	}
}
