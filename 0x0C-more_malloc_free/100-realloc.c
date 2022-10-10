#include "main.h"
/**
 * _realloc - a function that reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size in bytes of the allocated space for
 * ptr.
 * @new_size: the new size in bytes of the new memory block
 *
 * Return: always a pointer or NULL if fail.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned char *temp = ptr;

	i = 0;
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		while (i < old_size)
		{
			*((unsigned char *)ptr + i) = temp[i];
			i++;
		}
	}
	if (new_size < old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		while (i < new_size)
		{
			*((unsigned char *)ptr + i) = temp[i];
			i++;
		}
	}
	free(temp);
	return (ptr);	
}
