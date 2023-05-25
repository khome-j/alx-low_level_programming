#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @j: an integer taken as an argument to the function
 *
 * Return: the last value of the argument
 */

int print_last_digit(int j)
{
	int last_digit;

	last_digit = j % 10;

	if (last_digit < 0)
	{
		last_digit *= (-1);
		_putchar(last_digit + 48);
		return (last_digit);
	}
	_putchar(last_digit + 48);
	return (last_digit);
}
