#include "lists.h"

/**
 * looplist - function to list number of nodes in loop list
 * @head: pointer to first element
 *
 * Return: 0 if not looped, number of nodes in llop
 */
size_t looplist(const listint_t *head)
{
	const listint_t *myNode, *otherNode;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	myNode = head->next;
	otherNode = head->next->next;

	while (otherNode)
	{
		if (myNode == otherNode)
		{
			myNode = head;
			while (myNode != otherNode)
			{
				node++;
				myNode = myNode->next;
				otherNode = otherNode->next;
			}
			myNode = myNode->next;
			while (myNode != otherNode)
			{
				node++;
				myNode = myNode->next;
			}
			return (node);
		}
		myNode =myNode->next;
		otherNode = otherNode->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - print list safely
 * @head: pointer to first element
 *
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;
	
	node = looplist(head);
	if (node == 0)
	{
		for (node = 0; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
                }
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
