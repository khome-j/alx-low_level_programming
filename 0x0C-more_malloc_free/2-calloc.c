#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 *
 * @nmemb: an array size
 * @size: size of bytes
 *
 * Return: Always a pointer or fail if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
