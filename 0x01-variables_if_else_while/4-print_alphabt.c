#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints the alphabet in lowercase followed by
 * a new line.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
