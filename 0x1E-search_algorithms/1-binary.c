#include "search_algos.h"


/**
  * binary_search - function to search a value in a sorted array
  *                 of integers using binary search
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  *
  * Return: -1 or index found
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, leftHalf, rightHalf;

	if (array == NULL)
		return (-1);

	for (leftHalf = 0, rightHalf = size - 1; rightHalf >= leftHalf;)
	{
		printf("Searching in array: ");
		for (i = leftHalf; i < rightHalf; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = leftHalf + (rightHalf - leftHalf) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rightHalf = i - 1;
		else
			leftHalf = i + 1;
	}

	return (-1);
}
