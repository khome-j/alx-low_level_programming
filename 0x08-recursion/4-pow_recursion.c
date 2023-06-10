#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to the power
 * of y
 * @x: an integer
 * @y: an integer
 *
 * Return: -1 if y is lower than 0, else return the x exp y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
