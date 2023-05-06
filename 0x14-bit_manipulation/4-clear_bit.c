#include "main.h"

/**
 * clear_bit - function to set a particular bit to 0
 * @n: pointer to bit to be set
 * @index: index of a particular bit
 *
 * Return: 1 if success or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > INT_BITS)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
