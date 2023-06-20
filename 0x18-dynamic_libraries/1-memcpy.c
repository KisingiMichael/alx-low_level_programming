#include "main.h"

/**
 * _memcpy - Function to copy memory space
 * @dest: destination memory adress
 * @src: source memory address
 * @n: number of bytes to be copied
 *
 * Return: a copy to destination address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; 

	char *destination = dest;

	char *source = src;

	for (i = 0; i < n; i++) 
	{
		destination[i] = source[i];
	}
	return (dest);
}
