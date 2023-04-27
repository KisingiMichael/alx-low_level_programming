#include "lists.h"

/**
 * add_node_end - function to add node at the node of a linked list
 * @head: head of the linked list
 * @str: pointer to string
 *
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *myNode, *temp;

	myNode = malloc(sizeof(list_t));
	if (myNode == NULL)
	{
		free(myNode);
		return (NULL);
	}
	myNode->str = strdup(str);
	myNode->len = strlen(str);
	myNode->next = NULL;
	temp = *head;

	if (!*head)
		*head = myNode;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = myNode;
	}
	return (*head);
}

