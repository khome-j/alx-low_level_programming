#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to a previously allocated memory block
 * @old_size: size of the previously allocated memory
 * @new_size: size of the newly reallocated memory block
 *
 * Return: ptr if the new_size == old_size
 *         NULL if new_size == 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, len = 0;
	char *new, *tmp;

	for (i = old_size; i <= new_size; i++)
		len++;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new = malloc(new_size);

		if (new == NULL)
			return (NULL);
		free(ptr);
	}

	tmp = ptr;

	if (new_size > old_size)
	{
		new = malloc(new_size);
		i = 0;
		while (i < old_size)
		{
			new[i] = tmp[i];
			i++;
		}

		return (new);
	}
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	return (new);
}
