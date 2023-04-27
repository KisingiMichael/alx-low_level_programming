#include "lists.h"
#include <stdio.h>

/**
 * print_list - function to list
 * @h: List
 * Return: nodes of the function
 */
size_t print_list(const list_t *h)
{
	size_t my_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->node_len, h->str);
		h = h->next;
		my_nodes++;
	}
	return (my_nodes);
}
