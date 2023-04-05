#include "main.h"

/**
 * _strlen_recursion - function to find lenght of a string
 * @s: string to be searched
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
