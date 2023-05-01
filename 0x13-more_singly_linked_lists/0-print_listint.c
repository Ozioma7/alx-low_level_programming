#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: singly linked list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	struct node* Num = head;

	int count = 0;

	while (Num != NULL)
	{
		Num = Num->next;

		count++;
	}
	printf("Number of Nodes is %d\n", count);
}
