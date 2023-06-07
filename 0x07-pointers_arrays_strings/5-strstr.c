#include "main.h"

/**
 * _strstr - a function that located a substring
 * @haystack: a string pointer
 * @needle: a string pointer
 *
 * Return: a pointer to the beginning of the located substring
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] != needle[j])
				return (needle + j);
			j++;
		}
		i++;
	}
	return (NULL);
}
