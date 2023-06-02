#include "main.c"

/**
 * _strncpy - a function that copies a string
 * @dest: a pointer to a char
 * @src: a pointer to a char
 * @n: number of times to be copied
 *
 * Return: a pointer to the resulting destination
 */


char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;
	while(*(src + len) != '\0' && len1 < n)
	{
		dest[len] = src[len];
		len++;
	}
	
	while (len < n)
	{
		*(dest + len) = '\0';
		len++;
	}
	return (dest);
}
