#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting from 0.
 *
 * Return: nothing (on success)
 */
void times_table(void)
{
	int n, m, prod, a, b;

	n = 0;
	while (n < 10)
	{m = 0;
		while (m < 10)
		{prod = n * m;
			a = prod / 10;
			b = prod % 10;

			if (m == 0)
			{_putchar(prod + '0');
			}
			else
			{
			if (a == 0)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(b + '0');
			}
			else
			{_putchar(' ');
				_putchar(a + '0');
				_putchar(b + '0');

			}
			}
			if (m == 9)
			{_putchar('\n');
			}
			else
			{_putchar(',');
			}
			m++;
		}
		n++;
	}
}
