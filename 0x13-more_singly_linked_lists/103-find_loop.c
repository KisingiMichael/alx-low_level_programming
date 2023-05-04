#include "lists.h"


/**
 * find_listint_loop - function to find loop in list
 * @h: pointer to first node in the list
 *
 * Return: number of loop when success, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *firstNode = head; 
	listint_t secondNode = head;

	if (head == NULL)
		return (NULL);
	while (firstNode && secondNode && secondNode->next)
	{
		secondNode = secondNode->next->next;
		firstNode = firstNode->next;
		if (firstNode == secondNode)
		{
			firstNode = head;
			while (firstNode != secondNode)
			{
				firstNode = firstNode->next;
				secondNode = secondNode->next;
			}
			return (secondNode);
		}
	}
	return (NULL);
}
