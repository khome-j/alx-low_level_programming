#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src, including
 * the terminating null byte(\0), to the buffer pointed to by dest
 * @dest: a pointer to an array
 * @src: a pointer to strings
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, count;

	for (len = 0; *(src + len) != '\0'; len++)
		;
	count = 0;
	while (count < len)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}

