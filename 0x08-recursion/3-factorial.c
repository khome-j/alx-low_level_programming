#include "main.h"

/**
 * factorial - a function that  returns the factorial of a given number
 * @n: an integer whose factorial we want to find
 *
 * Return: the factorial of the aforementioned integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
