#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function that prints a single char
 * @c: char to be sent to the stdout
 *
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_binary - a function that prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, i, flag = 0;


	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!flag)
		_putchar('0');
}
