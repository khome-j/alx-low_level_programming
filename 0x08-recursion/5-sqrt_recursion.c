#include "main.h"

int check_sqrt(int n, int count);

/**
 * _sqrt_recursion - a function that returns the natural square root a number.
 * @n: an integer
 *
 * Return: the natural square root of a number.
 * if n does not have a natural square root, the function should return -1.
 */

int _sqrt_recursion(int n)
{
	int a, count = 0;

	a = check_sqrt(n, count);

	return (a);
}


/**
 * check_sqrt - a function that checks if a number is a natural square root
 * of a number.
 * @num: integer argument
 * @c: integer argument
 *
 * Return: the sqrt of a given number
 */

int check_sqrt(int num, int c)
{
	int res;

	if (num < 0 || c * c > num)
		return (res = -1);
	else if (c * c == num)
		return (res = c);
	else
		return (res = check_sqrt(num, c + 1));
}
