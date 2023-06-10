#include "main.h"

/**
 * int _strlen_recursion - a function that returns the length of a string
 * @s: a pointer to a string
 *
 * Return: the number of bytes in the string pointed to by s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
