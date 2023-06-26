#include "function_pointers.h"

/**
 * print_name - a functioin that prints a name
 * @name: the name of type string
 * @f: a function pointer to a function that prints the name.
 *
 */


void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		(*f)(name);
}
