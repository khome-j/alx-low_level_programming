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
	if (separator && n > 0)
	{
		va_list ap;
		unsigned int i;

		va_start(ap, n);

		i = 0;
		while (i < n)
		{
			if (i % 10)
				printf("%s", separator);
			if (!(i % 10) && i)
				printf("\n");
			printf("%d", va_arg(ap, int));
			i++;
		}
		printf("\n");
	}
}
