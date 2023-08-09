#include "main.h"

int _strlen(char *s);
/**
 * str_concat - a function that concatenates two strings.
 * @s1: a string
 * @s2: a string
 *
 * Return: a pointer that contains the contents of s1 and s2, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *t;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + _strlen(s2) + 1;
	t = malloc(sizeof(*t) * len);

	if (t == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		t[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		t[i] = s2[j];
		i++;
	}
	t[len - 1] = '\0';

	return (t);
}



/**
 * _strlen - a function that returns the length of a string
 * @s: string
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int count = 1;

	if (*s == '\0')
		return (0);
	return (count + _strlen(++s));
}
