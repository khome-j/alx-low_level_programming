#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: a pointer to a string
 * @c: the character to be located
 *
 * Return: a pointer to the first occurence of the character in the string.
 */

char *_strchr(char *s, char c)
{
	int count;
	char *tmp = NULL;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if (*(s + count) == c)
		{
			tmp = s + count;
			break;
		}
	}

	if (*(s + count) == c)
		tmp = s + count;
	return (tmp);
}

