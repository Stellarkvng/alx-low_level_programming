#include "main.h"

/**
 * more_numbers - function to print numbers 0-14, 10 times
 */

void more_numbers(void)
{
	int c, n;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}

		_putchar('\n');
	}
}
