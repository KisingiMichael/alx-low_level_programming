#include "lists.h"

/**
 * get_nodeint_at_index - function to get node at n index i of a list
 * @head: pointer to the head of th list
 * @index: index of the nodes in the list
 *
 * Return: the node in the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (i < index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}
