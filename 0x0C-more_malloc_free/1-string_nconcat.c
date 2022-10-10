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

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	ptr = malloc((len1 + len2) + 1);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (n <= len2+1)
		{
			ptr[i] = s2[j];
			i++;
			n++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
