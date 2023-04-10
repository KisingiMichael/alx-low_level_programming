#include <stdio.h>

/**
 * main - print all arguments passed
 * @argc: number of arguments
 * @argv: array of arguments in the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%2d]: %s\n", i, argv[i]);
	}
	return (0);
}
