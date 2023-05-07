#include "main.h"

/**
 * flip_bits - function to count number of bits to flip
 * @n: number to flip
 * @m: fliped number
 *
 * Return: number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numBits = 0;
	unsigned long int flips = n ^ m;

	while (flips != 0)
	{
		if ((flips & 1) == 1)
			numBits++;
		flips = flips >> 1;
	}
	return (numBits);
}
