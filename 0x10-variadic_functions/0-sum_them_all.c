#include "variadic_functions.h"


/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: integer
 *
 * Return: 0 if n == 0, else return the sum of all it's parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		result += va_arg(ap, int);
		i++;
	}
	return (result);
}
