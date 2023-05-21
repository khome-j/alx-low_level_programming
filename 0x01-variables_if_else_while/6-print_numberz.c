#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
