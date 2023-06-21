#include "main.h"

/**
 * _calloc - a function that  allocates memory for an array, using malloc.
 * @nmemb: size of the array
 * @size: size of the data type(in bytes)
 *
 * Return: a pointer to the allocated memory or NULL if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
