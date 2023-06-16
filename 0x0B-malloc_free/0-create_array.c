#include "main.h"

/**
 * create_array - a function that creates an array of chars and initializes it
 * with a specific char
 * @size: the size of memory to allocate
 * @c: argument to initialize with
 *
 * Return: a pointer to an array (on success)
 *         NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}

	return (t);
}
