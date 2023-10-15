#include <stdio.h>

/**
 * main - function that prints the numbers 1 - 100,
 * but for multiples of 3 & 5 print Fizz Buzz
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1 ; n < 100 ; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
		} else if (n % 3 == 0)
		{
			printf("Fizz ");
		} else if (n % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
		printf("%d ", n);
		}
	}

	printf("Buzz");
	printf("\n");

	return (0);
}
