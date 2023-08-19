#ifndef VAR_FUNC
#define VAR_FUNC

#include <stdio.h>
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);

typedef struct op
{
	char *p;
	void (*func_print)(va_list ap);
} func_t;


#endif /*VAR_func*/
