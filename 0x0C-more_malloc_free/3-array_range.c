#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: min integer
 * @max: max integer
 *
 * Return: a pointer to the newly created array or NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *new, len = 0, i;

	if (min > max)
		return (NULL);
	
	for (i = min; i <= max; i++)
		len++;	
	new = malloc(sizeof(*new) * len);
	if (new == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		new[i] = min;
		i++;
		min++;
	}
	return (new);
}

