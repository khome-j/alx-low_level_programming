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
		for (count_mult = 0; count_mult <= 9; count_mult++)
		{
			count_prod = count_num * count_mult;
			if (count_mult == 0)
				_putchar(count_mult + '0');
			if (count_prod <= 9 && count_num != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(count_prod + '0');
			}
			else if (count_prod > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((count_prod / 10) + '0'); /*get the first number*/
				_putchar((count_prod % 10) + '0'); /* get the last number*/
			}
		}
		_putchar('\n');
	}
}
