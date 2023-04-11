#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - print grid 
 * @width: grid rows
 * @height: grid columns
 * Return: pointer to a grid of 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **_2Dgrid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2Dgrid = malloc(sizeof(int *) * height);

	if (_2Dgrid == NULL)
	{
		free(_2Dgrid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		_2Dgrid[i] = (int *)malloc(sizeof(int) * width);

		if (_2Dgrid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(_2Dgrid[i]);
			free(_2Dgrid);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			_2Dgrid[i][j] = 0;

	return (_2Dgrid);
}
