#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: a pointer to a string
 *
 */

void puts_half(char *str)
{
	int len, len_half;

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		len_half = len / 2;
	else
		len_half = ((len - 1) / 2) + 1;

	while (*(str + len_half) != '\0' && len > len_half)
	{
		_putchar(*(str + len_half));
		len_half++;
	}
	_putchar('\n');
}

