#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @node_len: String legth
 * @next: next node
 *
 * Dscription: Singly linked list 
 */
typedef struct list_s
{
	char *str;
	unsigned int node_len;
	struct list_s *next;
}list_t;



int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif 

