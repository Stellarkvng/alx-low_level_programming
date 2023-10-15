#include "main.h"

/**
 * print_line - function to draw a straight line with '_'
 *
 * @n: number of times to print '_'
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (n > 0)
			_putchar('_');
	}

	_putchar('\n');
}
