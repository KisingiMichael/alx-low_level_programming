#include "search_algos.h"
#include <unistd.h>

/**
 * linear_search - function searching for value in array
 * @array: array to search value
 * @size: size of an array
 * @value: searched value
 *
 * Return: an index of found value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
