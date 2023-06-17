#include "lists.h"

/**
 * print_dlistint - print all elements of a list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		x++;
	}
	return (x);
}
