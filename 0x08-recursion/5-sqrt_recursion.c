#include "main.h"

int sqrt_checker(int n, int x);

/**
 * _sqrt_recursion - a function that returns the natural square root of a
 * num.
 * @n: an integer that is a natural number
 *
 * Return: the natural square root of n, or -1 if n is otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* if n is less than 0, then its not a natural num
				*/
	else
		return (sqrt_checker(n, 0));
}


/**
 * sqrt_checker - a helper function that checks the natural square root of
 * a number
 * @n: an integer that is a natural number
 * @x: an integer that guesses the a number to start with
 *
 * Return: the square root of the number n, or -1 if n is not a natural num
 */
int sqrt_checker(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (sqrt_checker(n, x + 1));
}
