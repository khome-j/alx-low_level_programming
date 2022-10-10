#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a program that concatenates two strings
 * @s1: a character data type as input
 * @s2: a character data type as input
 * @n: an unsigned int data type to determine the byte of
 * s2.
 *
 * Return: Always a pointer or  NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j;
	unsigned int len1, len2;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	if (n >= len2)
		n = len2;
	ptr = malloc((len1 + n + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;

	}
	ptr[i] = '\0';
	return (ptr);
}
