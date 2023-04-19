#include "function_pointers.h"

/**
 * array_iterator - execute array elements
 * @array: array passed to a function
 * @size: size of an array passed
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
