#include "main.h"

/**
 * factorial - function return factorial
 * @n: number of combination
 *
 * Return: number of permutation
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
