#include "lists.h"

/**
 * pop_listint - function to delet first element
 * @head: pointer to first element of the list
 *
 * Return: data of the first deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
