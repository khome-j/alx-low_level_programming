#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr, min; /* hr for hour, min for minutes*/

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10 + 48));
			_putchar((hr % 10 + 48));
			_putchar(':');
			_putchar((min / 10 + 48));
			_putchar((min % 10 + 48));
			_putchar('\n');
		}
	}
}
