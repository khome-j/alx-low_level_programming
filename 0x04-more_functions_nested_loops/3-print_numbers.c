#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: nothing (on success)
 */

void print_numbers(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
		_putchar(digit);
	_putchar('\n');
}
