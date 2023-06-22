#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc.
 * @old_size: is the size, in bytes of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block.
 *
 *
 * Return: a pointer to the newly allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr1, *tmp;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	tmp = ptr;
	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);

		for (i = 0; i < old_size; i++)
			ptr1[i] = tmp[i];
	}
	if (new_size < old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
	}
	free(tmp);
	return (ptr1);
}
