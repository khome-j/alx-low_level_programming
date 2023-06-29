#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, unsigned int, ...);
void print_all(const char * const format, ...);


/**
 * struct func_format - a structure that holds the format symbol and a function
 * to print based on the type of argument(symbol) passed to the function
 *
 * @symbol: the symbol that will determine the function to be invoked
 * @func_ptr: a pointer to the function that will print based on the type of
 * argument passed
 */
typedef struct func_format
{
	char *symbol;
	void (*func_ptr)(va_list);
} format_l;

void char_print(va_list);
void int_print(va_list);
void float_print(va_list);
void str_print(va_list);

#endif /* FUNCTIONS_H */
