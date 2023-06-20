#include "lists.h"

/**
 * free_dlistint - function to delete all nodes from a list
 * @head: pointer to head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
