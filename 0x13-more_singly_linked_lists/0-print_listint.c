#include "lists.h"

/**
 * print_listint - function to print all the nodes of a linked list
 * @h: pointer to list
 *
 * Return: nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
