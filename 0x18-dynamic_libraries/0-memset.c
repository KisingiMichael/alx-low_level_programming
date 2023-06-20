#include "main.h"

/**
 * *_memset - function filling memory
 * @s: memory area
 * @b: character to fill memory
 * @n: number of memory copy
 * Return: return pointer to the memory space s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
