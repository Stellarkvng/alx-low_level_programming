#include <unistd.h>

/**
 * _putchar - a function to print a char c
 *
 * @c: char to be printed
 *
 * Return: 1 on success or -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
