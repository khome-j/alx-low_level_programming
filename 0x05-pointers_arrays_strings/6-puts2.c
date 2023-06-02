#include "main.h"

/**
 * puts2 - a function that prints other character of a string starting with the
 * first character, followed by a new line
 *
 * @str: pointer to a string
 *
 */

void puts2(char *str)
{
	int count;

	count = 0;
	while (*(str + count))
	{
		if (*(str + count) % 2 == 0)
			_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}	
