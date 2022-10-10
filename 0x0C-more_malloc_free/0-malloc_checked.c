#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc check - a function that allocates memory.
 * @b - an unsigned integer
 *
 * Return: a pointer to the allocated memory or
 * return a status value of 98 if malloc allocation fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

