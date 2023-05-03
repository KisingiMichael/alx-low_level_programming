#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete a node at index i of the list
 * @head: pointer to head of the list
 * @index: index of a node to be deleted
 *
 * Return: 1 for success or -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(*head);
		return (1);
	}
	while (i < index)
	{
		if (!(*head) || (*head)->next)
			return (-1);
		*head = (*head)->next;
		i++;
	}
	current_node = (*head)->next;
	(*head)->next = current_node->next;
	free(current_node);
	return (1);
}
