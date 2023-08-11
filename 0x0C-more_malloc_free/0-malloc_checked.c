#include "main.h"


/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: an integer
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);

	if (new == NULL)
		exit(98);
	return ((void *)new);
}
