#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in 
 * lowercase, followed by a new line.
 *
 * Return: always 0 (on success). 1 (on fail)
 */

void print_alphabet_x10(void)
{
	int count;
	int ch;

	count = 0;
	while (count < 10)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
		_putchar('\n');
		count++;
	}
}
