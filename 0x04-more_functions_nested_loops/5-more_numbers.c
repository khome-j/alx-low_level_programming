#include "main.h"

/**
 * more_numbers - a function that prints 10times the numbers from 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 14; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
