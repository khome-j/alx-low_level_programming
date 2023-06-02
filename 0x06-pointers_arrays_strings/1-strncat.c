#include "main.h"

/**
 * _strncat - a function that concatenates two strings using n bytes from src
 * @dest: pointer to a destination string
 * @src: pointer to a source string
 *
 * Return: a pointer to the resulting string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, len1;


	for (len = 0; *(dest + len) != '\0'; len++)
		;

	len1 = 0;
	while (src[len1] != '\0' && len1 < n)
	{
		dest[len++] = src[len1++];
	}
	dest[len] = '\0';

	return (dest);
}
