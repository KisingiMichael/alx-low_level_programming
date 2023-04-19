#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using function pointer f
 * @name: name passed to be printed
 * @f: pointer to function
 *
 * Return: nothing to return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
