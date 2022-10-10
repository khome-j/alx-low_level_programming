#include "main.h"

/**
 * array_range - a function that creates an array of
 * integers
 *
 * @min: minimum value of integer data type
 * @max: maximum value of integer data type
 *
 * Return: Always a pointer or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int *ptr, i, nb;

	if (min > max)
		return (NULL);

	nb = (max + min) - 1;
	ptr = malloc(nb * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
