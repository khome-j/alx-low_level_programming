#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: an integer representing the size of the square
 *
 */

void print_square(int size)
{
	int outer_loop, inner_loop;

	if (size > 0)
	{
		for (outer_loop = 1; outer_loop <= size; outer_loop++)
		{
			for (inner_loop = 1; inner_loop <= size; inner_loop++)
			{
				_putchar('#');
			}
			if (outer_loop != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
