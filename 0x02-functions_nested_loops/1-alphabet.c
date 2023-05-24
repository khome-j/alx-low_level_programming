#include "main.h"

/**
 * print_alphabet -a function that prints the alphabet in lowercase
 *
 * Return: 0 (on success), 1 (on failure)
 */

void print_alphabet(void)
{
	int count;

	for (count = 97; count <= 122; count++)
		_putchar(count);
	_putchar('\n');
	return; 
}
