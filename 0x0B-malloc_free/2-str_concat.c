#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_ptr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat_ptr = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (concat_ptr == NULL)
	{
		free(concat_ptr);
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		concat_ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		concat_ptr[i] = s2[j];
	concat_ptr[i] = '\0';
	return (concat_ptr);
}

