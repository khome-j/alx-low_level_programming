#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int h;
	char ch;

	for (h = 48; h <= 57; h++)
	{
		putchar(h);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
