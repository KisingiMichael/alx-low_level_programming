#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @squareSize: size of the square
 */
void print_square(int squareSize)
{
	if (squareSize <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < squareSize; i++)
		{
			for (j = 0; j < squareSize; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
