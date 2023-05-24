#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints _putchar, followed by a new line
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar";
	int count;

	for (count = 0; count < 8; count++)
		_putchar(str[count]);
	_putchar('\n');
	return (0);
}
