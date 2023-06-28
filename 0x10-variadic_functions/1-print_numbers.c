#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;


	if (separator != NULL && (strlen(separator)) >= 2 && n != 0)
	{
		va_list arg;

		va_start(arg, n);

		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s", va_arg(arg, int), separator);
		}
		printf("%d", va_arg(arg, int));
		printf("\n");
		va_end(arg);
	}
}
