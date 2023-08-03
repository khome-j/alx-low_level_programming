#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to the power
 * of y.
 * @x: an integer
 * @y: an integer expontial
 *
 * Return: the power of x raised to the power of y, or -1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
