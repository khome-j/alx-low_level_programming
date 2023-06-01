#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer to char
 *
 * Return: the number of bytes in the string pointed to by s.
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + 0) != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
