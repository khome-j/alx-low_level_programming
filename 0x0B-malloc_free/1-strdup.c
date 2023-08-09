#include "main.h"

int _strlen(char *s);
/**
 * _strdup - a function that returns a pointer which contains a
 * copy of the string given as a parameter
 * @str: a string to be copied
 *
 * Return: a pointer that contains a copy of
 * the string given as parameter, or NULL
 * if str = NULL or if sufficient memory was available
 */
char *_strdup(char *str)
{
	char *t;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str) + 1;
	t = malloc(sizeof(*t) * len);

	if (t == NULL)
		return (NULL);

	i = 0;
	while (i < (len - 1))
	{
		t[i] = str[i];
		i++;
	}
	t[len] = '\0';
	return (t);
}


/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer to a char
 *
 * Return: lenght of string on success
 */
int _strlen(char *s)
{
	int count = 1;

	if (*s == '\0')
		return (0);

	return (count + _strlen(++s));
}
