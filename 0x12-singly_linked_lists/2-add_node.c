#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t Num;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (Num = 0; str[Num]; Num++)
		;

	newNode->len = Num;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
