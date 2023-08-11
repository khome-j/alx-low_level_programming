#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: num of array elements
 * @size: size in bytes of the array
 *
 * Return: a pointer to the newly allocated memory or NULL
 * if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(size * nmemb);
	if (new == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		new[i] = 0;
		i++;
	}
	return (new);
}
