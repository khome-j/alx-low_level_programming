#include "main.h"

/**
 * str_concat - a function that concatenateds two strings.
 * @s1: a string
 * @s2: another string
 *
 * Return: a new pointer containing the contents of s1 and s2
 *         Null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *t;
	int i, count, str_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	str_len = strlen(s1) + strlen(s2);

	t = malloc(sizeof(*t) * str_len + 1);

	if (t == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (count = 0; s1[count] != '\0'; count++)
		t[count] = s1[count];

	for (i = 0; s2[i] != '\0'; i++)
	{
		t[count] = s2[i];
		count++;
	}
	t[count] = '\0';

	return (t);
}
