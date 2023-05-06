#include "main.h"

/**
 * get_bit -function to find bit at a given index
 * @n: to be searched 
 * @index: index of a bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > INT_BITS)
		return (-1);
	bitVal = (n >> index) & 1;
	return (bitVal);
}
