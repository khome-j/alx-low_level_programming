#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len, len1;

	for (len = 0; *(dest + len) != '\0'; len++)
		;

	len1 = 0;
	while (src[len1] != '\0')
	{
		dest[len++] = src[len1++];
	}
	dest[len] = '\0';

	return (dest);
}
