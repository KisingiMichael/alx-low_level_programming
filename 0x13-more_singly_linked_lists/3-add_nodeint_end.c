#include "lists.h"

/**
 * add_nodeint_end - function to add node at en of the list
 * @head: pointer to the head of the list
 * @n: node to be added
 *
 * Return: added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!node_end)
		return (NULL);
	node_end->n = n;
	node_end->next = NULL;
	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = node_end;
	return (node_end);
}
