#include "lists.h"

/**
 * add_node - function to add node
 * @head: head of the linked list
 * @str: pointer to string
 *
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *myNode;

	myNode = malloc(sizeof(list_t));
	if (myNode == NULL)
	{
		free(myNode);
		return (NULL);
	}
	myNode->str = strdup(str);
	myNode->len = strlen(str);
	myNode->next = *head;
	*head = myNode;
	return (*head);
}
