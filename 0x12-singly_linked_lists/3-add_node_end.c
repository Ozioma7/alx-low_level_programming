#include "lists.h"

/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	size_t Num;
	
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	
	newNode->str = strdup(str);
	
	for (Num = 0; str[Num]; Num++)
		;
	
	newNode->len = Num;
	newNode->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (*head);
}
