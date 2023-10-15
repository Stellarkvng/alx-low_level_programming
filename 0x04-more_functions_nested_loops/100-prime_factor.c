#include <stdio.h>

/**
 * main - function to print the largest prime factor
 * of the number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int m, n, o;

	n = 612852475143;

	for (m = 1; m <= n; m++)
	{
		if (n % m == 0)
		{
			if (n == m)
			{
				printf("%ld\n", m);
				break;
			}
			o = n / m;
			n = o;
			m = 1;
		}
	}

	return (0);
}
