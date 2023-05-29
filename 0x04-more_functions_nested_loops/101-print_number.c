#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: an integer argument
 *
 */

void print_number(int n)
{
	unsigned int digit = n;

	if (n < 0)
	{
		digit = -digit;
		_putchar('-');
	}

	if ((digit / 10) > 0)
		print_number(digit / 10);
	_putchar((digit % 10) + '0');
}
