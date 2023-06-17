#include "lists.h"

/**
 * add_dnodeint - function to add new node in alist
 * @head: pointer to head of the list
 * @n: number of a node to be added
 *
 * Return: new added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
