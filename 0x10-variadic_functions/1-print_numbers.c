#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers.
 * @separator: a char pointer that separates the numbers.
 * @n: a number of integers passed to the function.
 *
 * Return: dont print if separator is NULL . otherwise return nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
