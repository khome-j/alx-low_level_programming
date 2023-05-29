#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: the size of the triangle(an integer)
 *
 */

void print_triangle(int size)
{
	int outer_loop, inner_loop;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (outer_loop = 1; outer_loop <= size; outer_loop++)
		{
			for (inner_loop = outer_loop; inner_loop < size; inner_loop++)
				_putchar(' ');

			for (inner_loop = 1; inner_loop <= outer_loop; inner_loop++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
