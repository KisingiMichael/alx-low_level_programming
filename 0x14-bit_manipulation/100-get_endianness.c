#include "main.h"

/**
 * get_endianness - determine endian order
 *
 * Return: the endian order
 */
int get_endianness(void)
{
	union
	{
		uint32_t i;
		char c[1];
	} e = {0x01020304};
	return (e.c[0]);
}
