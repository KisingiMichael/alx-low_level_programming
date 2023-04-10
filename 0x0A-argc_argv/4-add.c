#include <stdio.h>
#include "main.h"
/**
 * main - adds positive number
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n",  sum);
	return (0);
}
