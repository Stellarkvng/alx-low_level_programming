#include "main.h"

/**
 * print_triangle - function to print a triangle using '#'
 *
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int m, n;

	if (size > 0)
	{
		for (m = 0; m <  size; m++)
		{
			for (n = 0; n < size; n++)
			{
				if (n < size - (m + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
