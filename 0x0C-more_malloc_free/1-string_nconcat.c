#include "main.h"

int _strlen(char *);

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: a string
 * @s2: a string
 * @n: an unsigned integer
 *
 * Return: a pointer to a newly allocated space(on sucess)
 *  or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		new = malloc(sizeof(*new) * (len1 + len2 + 1));
	else
		new = malloc(sizeof(*new) * (len1 + n + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n && s2[j])
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (new);
}


/**
 * _strlen - a function that returns the length of a string
 * @s: a string
 *
 * Return: the lenght of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}
