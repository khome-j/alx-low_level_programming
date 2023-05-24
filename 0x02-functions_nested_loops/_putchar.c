#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: _putchar function takes one argument to print
 *
 * Return: Always 1 (success)
 *         always 0 (On Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
