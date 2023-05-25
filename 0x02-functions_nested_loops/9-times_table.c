#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting from 0.
 *
 * Return: nothing (on success)
 */

void times_table(void)
{
	int count_num, count_mult, count_prod;

	for (count_num = 0; count_num <= 9; count_num++)
	{
		_putchar(48);
		for (count_mult = 1; count_mult <= 9; count_mult++)
		{
			_putchar(',');
			/*_putchar(' ');*/
			count_prod = count_num * count_mult;

			if (count_prod <= 9)
				_putchar(' ');
			else
				_putchar((count_prod / 10) + 48);
			_putchar((count_prod % 10) + 48);
		}
		_putchar('\n');
	}
}
