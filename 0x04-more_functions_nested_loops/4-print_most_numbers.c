#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers 0 to 9 except 2 and
 * 4.
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		if (digit == '2' || digit == '4')
			continue;
		else
			_putchar(digit);
	}
	_putchar('\n');
}
