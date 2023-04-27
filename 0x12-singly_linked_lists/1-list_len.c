#include "lists.h"

/**
 * list_len - function to calculate length of singly linked in
 * @h: pointer to header
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
