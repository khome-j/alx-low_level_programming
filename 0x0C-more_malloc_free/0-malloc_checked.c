#include "main.h"

/**
 * malloc_checked - a program that allocates memory using malloc
 * @b: size of the memory to be allocated
 *
 * Return: a pointer to the allocated memory(address).
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b <= 0)
		return (NULL);

	ptr = malloc(b);
	/*void pointer(void *) promotes to any data type */
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
