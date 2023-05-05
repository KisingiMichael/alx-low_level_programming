#include "main.h"

/**
 * binary_to_uint - function to convert binary number to unsigned int
 * @b: binary number to be converted
 *
 * Return: converted deciml value
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned decVal = 0;

	if (!b)
		return (0);
	for (; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decVal = 2 * decVal + (b[i] - '0');
	}
	return (decVal);
}
