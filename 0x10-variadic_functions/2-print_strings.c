#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings followed by a new line.
 * @separator: a string pointer to be printed between strings.
 * @n: the number of strings passed to the function.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
