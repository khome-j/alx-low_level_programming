#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a pointer of char type
 * @f: a function pointer pointing to a function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}

