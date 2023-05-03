#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a new node in a list
 * @head: pointer to a head of the list
 * @idx: index of the added node
 * @n: the inserted node
 *
 * Return: pointer of the node inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_insert;
	unsigned int i = 0;

	node_insert = malloc(sizeof(listint_t));
	if (node_insert == NULL || head == NULL)
		return (NULL);
	node_insert->n = n;
	if (i == 0)
	{
		node_insert->next = *head;
		*head = node_insert;
		return (node_insert);
	}
	for (i = 1; head && i <= idx; i++)
	{
		if (i == idx)
		{
			node_insert->next = (*head)->next;
			(*head)->next = node_insert;
			return (node_insert);
		}
		else
			*head = (*head)->next;
	}
	return (NULL);
}
