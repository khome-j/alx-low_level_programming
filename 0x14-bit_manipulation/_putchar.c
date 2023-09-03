#include "main.h"


/**
 * _putchar - a function that prints a char
 * @c: char to be print to stdout
 *
 * Return: the num of bytes printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
