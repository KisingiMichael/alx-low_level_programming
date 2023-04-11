#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenate all arguments
 * @ac: length of string
 * @av: address of string
 *
 * Return: pointer to the string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j = 0, str_len = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		str_len += strlen(av[i]);

	ptr = (char *)malloc(sizeof(char) * str_len + (1 + ac));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
			ptr[c] = av[i][j];

		ptr[c] = '\n';
		++c;
	}
        ptr[c] = '\0';
	return (ptr);
}
