#include "lists.h"

/**
 * reverse_listint - function to reverse the list
 * @head: pointer to the head of the list
 *
 * Return: pointer to the first element in the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *nxt_node = NULL;

	while (*head)
	{
		nxt_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = nxt_node;
	}
	*head = prev_node;
	return (*head);
}
