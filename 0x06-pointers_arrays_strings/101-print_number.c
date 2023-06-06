#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the number to be printed
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int sign;

	if (n < 0)
	{
		sign = -n;
		_putchar('-');
	}
	else
	{
		sign = n;
	}

	if (sign / 10)
		print_number(sign / 10);
	_putchar((sign % 10) + '0');
}
