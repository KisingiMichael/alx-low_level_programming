#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copies a string and return the memory location
 * @str: stringto be copied
 *
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, str_len;

	if (str == NULL)
		return (NULL);
	str_len = strlen(str);
	ptr = (char *)malloc(sizeof(char) * (str_len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
