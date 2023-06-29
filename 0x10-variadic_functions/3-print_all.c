#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of all types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0, count = 0;
	char *sep = "";
	format_l fmt[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", str_print}
	};
	va_list arg;

	va_start(arg, format);

	while (format && format[i])
	{
		count = 0;
		while (count < 4 && (format[i] != *(fmt[count].symbol)))
			count++;

		if (count < 4)
		{
			printf("%s", sep);
			fmt[count].func_ptr(arg);
			sep = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(arg);
}


/**
 * char_print - a function that prints char
 * @arg: optional argument to be printed if char
 *
 */
void char_print(va_list arg)
{

	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * int_print - a function that prints an integer
 * @arg: optional argument pointer to be printed if integer
 *
 */

void int_print(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * float_print - a function that prints a float
 * @arg: optional argument pointer to be printed if float
 *
 */

void float_print(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * str_print - a function that prints a string
 * @arg: optional argument pointer to be printed if string
 *
 */

void str_print(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		printf("(nil)");

	printf("%s", s);
}
