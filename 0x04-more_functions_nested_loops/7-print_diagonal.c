#include "main.h"

/**
 * print_diagonal - function that draws diagonal line with '\'
 *
 * @n: number of times to print '\'
 */

void print_diagonal(int n)
{
	int b, c;

	for (b = 0; b < n; b++)
	{
		if (n > 1)
		{
			for (c = 0; c < b; c++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n <= 0)
		_putchar('\n');
}
