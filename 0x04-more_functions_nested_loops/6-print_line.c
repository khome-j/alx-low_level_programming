#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: an integer that represents the number of times the character _ should be
 * printed.
 *
 * Return: nothing.
 */

void print_line(int n)
{
	int count;

	if (!(n <= 0))
	{
		count = 0;
		while (count < n)
		{
			_putchar('_');
			count++;
		}
	}
	_putchar('\n');
}
