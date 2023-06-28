#include "variadic_functions.h"


/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: an unsigned int that is a constant
 *
 * Return: the sum of optional arguments on Success, 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
