#include "main.h"


/**
 * print_numbers - function to print numbers 0 - 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);

	_putchar('\n');
}
