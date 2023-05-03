#include "lists.h"

/**
 * sum_listint - function to sum the data in the nodes of the list
 * @head: pointer pointing to the first node of the list
 *
 * Return: summaation of data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
