#include "lists.h"

/**
 * free_list - function to free linked list
 * @head: head to free
 */
void free_list(list_t *head)
{
	list_t *myList;

	while (head)
	{
		myList = head->next;
		free(head->str);
		free(head);
		head = myList;
	}
}
