#include "main.h"

/**
 * print_square -  function to print a square using '#'
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int m, n;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
				_putchar('#');

			_putchar('\n');
		}
	} else
		_putchar('\n');
}
