#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: a pointer
 * @accept: a pointer
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *tmp = NULL;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				tmp = s + i;
				return (tmp);
			}
			j++;
		}
		i++;
	}
	return (tmp);
}
