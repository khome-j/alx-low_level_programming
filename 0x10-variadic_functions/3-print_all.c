#include "variadic_functions.h"

void char_print(va_list);
void int_print(va_list);
void float_print(va_list);
void str_print(va_list);

/**
 * print_all - a function that prints anything
 * @format: is a list of all types of arguments passed to the
 * function
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep = "";
	int i, j;

	func_t tabs[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", str_print},
		{NULL, NULL}
	};

	va_start(ap, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;

		while (j < 4 && (format[i] != *(tabs[j].p)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			tabs[j].func_print(ap);
			sep = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}



/**
 * char_print - a function tht prints a char
 * @ap: va_list(argument pointer)
 */
void char_print(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	printf("%c", c);
}

/**
 * int_print - a function that prints an integer
 * @ap: argument pointer
 */
void int_print(va_list ap)
{
	int n = va_arg(ap, int);

	printf("%d", n);
}

/**
 * float_print - prints a float
 * @ap:argument pointer
 */
void float_print(va_list ap)
{
	float num = va_arg(ap, double);

	printf("%f", num);
}

/**
 * str_print - a function tht prints a string
 * @ap: argument pointer
 */
void str_print(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
