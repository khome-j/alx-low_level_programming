#include "main.h"

/**
 * _strdup - a function that returns a pointer to a new allocated space in
 *           memory, which contains a copy of the string given as a parameter.
 * @str: a pointer to a string
 *
 * Return: a pointer to a new string
 *         NULL for insufficient memory
 */

char *_strdup(char *str)
{
	int count;
	char *new_space;

	if (str == NULL)
		return (NULL);
	new_space = malloc(sizeof(*str));

	if (new_space == NULL)
		return (NULL);

	for (count = 0; *(str + count) != '\0'; count++)
	{
		new_space[count] = str[count];
	}
	new_space[count] = '\0';

	return (new_space);
}
