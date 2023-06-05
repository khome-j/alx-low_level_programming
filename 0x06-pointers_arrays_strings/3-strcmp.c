#include "main.h"
/**
* _strcmp - compares strings just like strcmp function
* @s1: first argument
* @s2: second argument
* Return: an integer - 0 for exactly same strings
* and any other integer for unsimilar strings
*/
int _strcmp(char *s1, char *s2)
{
	int count, i = 0;

	count = 1;

	while (count == 1)
	{
		if (*(s1 + i) != '\0' && *(s2 + i) != '\0')
		{
			if (*(s1 + i) == *(s2 + i))
			{
				i++;
				count = 1;
			}
			else
				count = 0;
		}
		else
			count = 0;
	}

	return (*(s1 + i) - *(s2 + i));
}

