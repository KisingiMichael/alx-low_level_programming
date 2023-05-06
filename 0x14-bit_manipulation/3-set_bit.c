#include "main.h"

/**
 * set_bit - function to set bit with index
 * @n: pointer to bit value
 * @index: index value of a bit
 *
 * Return: 1 if bit found or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > INT_BITS)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
