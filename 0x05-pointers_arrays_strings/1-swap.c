#include "main.h"
/**
 * swap_int - interchanges a and b
 * @a: checks a
 * @b: checks b
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}
