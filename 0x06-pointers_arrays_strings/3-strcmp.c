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
	char *str1, *str2;
	int i = 0;
	int cont = 1;

	str1 = s1;
	str2 = s2;
	while (cont == 1)
	{
		if (*(str1 + i) != '\0' && *(str2 + i) != '\0')
		{
			if (*(str1 + i) == *(str2 + i))
			{
				i++;
			}
			else
			{
				cont = 0;
			}
		}
		else
		{
			cont = 0;
		}
	}
	return (*(str1 + i) - *(str2 + i));
}