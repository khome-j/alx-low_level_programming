#include "main.h"


/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer
 * @b: a string character
 * @n: the number of bytes to be copied to memory.
 *
 * Return: a pointer to the memory area s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		*(s + count) = b;
		count++;
	}
	return (s);
}
