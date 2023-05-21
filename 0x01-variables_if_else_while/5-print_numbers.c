#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints all single digit numbers of base 10
 * starting from 0
 *
 * Result: always 0 (sucess)
 */
int main(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
