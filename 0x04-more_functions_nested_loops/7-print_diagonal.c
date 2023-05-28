#include "main.h"
void print_diagonal(int);
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: an integer that represents the number of times the character '\' should
 * be printed
 * 
 * Return: nothing (on success)
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			if (i != n)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
