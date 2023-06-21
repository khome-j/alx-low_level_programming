#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: an integer input
 * @max: an integer input sign
 *
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
