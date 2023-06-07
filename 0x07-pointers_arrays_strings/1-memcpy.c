#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: a pointer to the destination memory
 * @src: a pointer to the source mem
 * @n: number of bytes to be copied
 *
 * Return: a pointer to the destination memory.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}
