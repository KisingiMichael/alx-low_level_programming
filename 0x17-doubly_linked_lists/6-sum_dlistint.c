#include "lists.h"

/**
 * sum_dlistint - function to findd sum of all node values in the list
 * @head: pointer to the head of list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
