#include "main.h"

/**
 * is_sqrt - checks if a number is a perfect square
 * @n: number to be checked
 * @i: average of @n
 * Return: i if perfect square, else -1
 */
int is_perfect_sqrt(int i, int n)
{
	if (n <= 1)
		return (-1);
	else if (n % 1 == 0 && n / i == i)
		return (i);
	else
		return (is_perfect_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - checks if a number is a perfect square
 * @n: number to be checked
 * Return: i if perfect square, else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (is_perfect_sqrt(n, 2));
}
