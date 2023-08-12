#include "main.c"

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
	void *new;
	unsigned int i, len = 0;

	for (i = old_size; i <= new_size; i++)
		len++;

	new = (void *)malloc(len);

	if (new == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		i = 0;
		while (i < old_size)
		{
			new[i] = ptr[i];
			i++;
		}

		return (new);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		
