#include "lists.h"

/**
 * add_dnodeint_end - function to add node at the end
 * @head: pointer to head of the list
 * @n: number of node to insert in the list
 *
 * Return: new node at head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *curr_node;

	new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		curr_node = *head;	

		while (curr_node->next != NULL)
			curr_node = curr_node->next;

		curr_node->next = new_node;
		new_node->prev = curr_node;
	}
	return (new_node);
}
