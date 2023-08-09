#include "main.h"


/**
 * create_array - a function that creates an array of characters and
 * initializes it with a specific char
 *
 * @size: an integer
 * @c: a char
 *
 * Return: a pointer to the array, or NULL if it fails i.e if size=0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
