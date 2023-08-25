#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: a string
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
