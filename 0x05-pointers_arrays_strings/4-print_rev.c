#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by
 * a newline.
 * @s: a pointer to the string
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
		;
	while (len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
