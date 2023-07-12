#include "lists.h"


/**
 * delete_dnodeint_at_index - function to delete a node at a specific index
 * @head: pointer to head of the list
 * @index: index of an element
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head || !temp)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (; temp; i++)
	{
		if (i == index)
		{
			if (temp->next)
			{
				(temp->prev)->next = temp->next;
				(temp->next)->prev = temp->prev;
				free(temp);
				return (1);
			}
			else
			{
				(temp->prev)->next = NULL;
				free(temp);
				return (1);
			}
		}
		temp = temp->next;
	}
	return (-1);
}

