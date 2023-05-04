#include "lists.h"

/**
 * free_listint_safe - function to free a list
 * @h: pointer to first node
 *
 * Return: list of node safely free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tempNode;
	size_t list_len = 0;
	int diff;

	if (!h || !(*h))
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tempNode = (*h)->next;
			free(*h);
			*h = tempNode;
			list_len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (list_len);
}
