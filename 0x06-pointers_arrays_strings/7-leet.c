#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: a pointer to a string as argument
 *
 * Return: a pointer to a string
 */

char *leet(char *s)
{
	int index, count;

	char lc[] = {'a', 'e', 'o', 't', 'l'};
	char uc[] = {'A', 'E', 'O', 'T', 'L'};
	char encode[] = {'4','3', '0', '7', '1'};

	count = 0;
	while (*(s + count) != '\0')
	{
		for (index = 0; index < 5/*sizeof(lc) / sizeof(char)*/; index++)
		{
			if (s[count] == lc[index] || s[count] == uc[index])
			{
				s[count] = encode[index];
				break;
			}

		}
		count++;
	}

	return (s);
}
