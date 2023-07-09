#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index - function to get nth node in the list
 * @head: pointer to the headof the list
 * @index: index of the node to be returned
 *
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
