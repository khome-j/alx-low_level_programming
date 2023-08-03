#include "main.h"


/**
 * _strlen_recursion - a function that returns tthe lenght of a string
 * @s: a string
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int count = 1;


	if (*s == '\0')
		return (0);

	return (count + _strlen_recursion(s + 1));
}
