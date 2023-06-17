#include "lists.h"

/**
 * dlistint_len - function to return number of nodes
 * @h: pointer pointing to head
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t list_length = 0;

	while (h)
	{
		h = h->next;
	       	list_length++;
	}
	return (list_length);
}
