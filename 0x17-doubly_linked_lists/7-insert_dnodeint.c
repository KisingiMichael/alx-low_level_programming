#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert element at at a given position
 * @h: pointer to head of the list
 * @idx: index to new inserted node
 * @n: value of a new node
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	temp = *h;
	if (!h || !new_node)
		return (NULL);
	new_node->n = n;

	if (!(*h))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; temp; i++)
	{
		if (i == idx)
		{
			new_node->prev = temp->prev;
			(temp->prev)->next = new_node;
			temp->prev = new_node;
			new_node->next = temp;
			return (new_node);
		}
		else if (!temp->next && 1 + i == idx)
			return (add_dnodeint_end(h, n));
		temp = temp->next;
	}
	return (NULL);
}
