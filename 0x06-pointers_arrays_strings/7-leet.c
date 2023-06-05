#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: a pointer to a string as argument
 *
 * Return: a pointer to a string
 */

char *leet(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		if (*(s + count) == 'a' || *(s + count) == 'A')
			*(s + count) = '4';
		else if (*(s + count) == 'e' || *(s + count) == 'E')
			*(s + count) = '3';
		else if (*(s + count) == 'o' || *(s + count) == 'O')
			*(s + count) = '0';
		else if (*(s + count) == 't' || *(s + count) == 'T')
			*(s + count) = '7';
		else if (*(s + count) == 'l' || *(s + count) == 'L')
			*(s + count) = '1';
		count++;
	}
	return (s);
}
