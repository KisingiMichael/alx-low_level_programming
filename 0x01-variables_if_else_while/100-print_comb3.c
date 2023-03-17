#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;

	m = 48;
	n = 48;

	while (m < 58)
	{
		n = m + 1;
		while (n < 58)
		{
			putchar(m);
			putchar(n);

			if (m < 56 || n < 57)
			{
				putchar(44);
				putchar(32);
			}
			n++;
		}

		m++;
	}

	putchar(10);

	return (0);
}
