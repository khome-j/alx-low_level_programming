#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible combinations of single-digit
 * numbers.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	ch = 48;
	while (ch <= 57)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');

	return (0);
}

