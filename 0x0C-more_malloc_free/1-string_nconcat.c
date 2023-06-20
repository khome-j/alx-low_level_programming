#include "main.h"


/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: a string
 * @s2: a string
 * @n: bytes of s2 to be copied into s1.
 *
 * Return: a pointer to a newly allocated space which contains s1,
 * followed by the first n bytes of s2. or returns NULL if allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, strlen1, strlen2, j = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		strlen1++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		strlen2++;
	ptr = malloc(sizeof(*ptr) * (strlen1 + strlen2 + 1));
	if (ptr == NULL)
	{
		free(NULL);
		return (NULL);
	}
	for (i = 0; *(s1 + i) != 0; i++)
		ptr[i] = s1[i];
	if (n >= strlen2 && j < strlen2)
	{
		for (j = 0; *(s2 + j) != '\0'; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	else
	{
		j = 0;
		while (j < n && *(s2 + j) != '\0')
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
