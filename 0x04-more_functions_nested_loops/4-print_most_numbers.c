#include "main.h"

/**
 * print_most_numbers - function to print 0-9 excluding 2&4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
			_putchar(n);
	}

	_putchar('\n');
}
