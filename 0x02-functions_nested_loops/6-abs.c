#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @j: an integer taken as input to the function
 *
 * Return: the absolute number of the integer argument.
 */

int _abs(int j)
{
	if (j < 0)
	{
		j = (-1) * j;
		return (j);
	}
	else
		return (j);
}

