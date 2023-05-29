#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 (on success)
 */

int main(void)
{
	static int d;
	static long int num;
	int m;

	d = 2;
	num = 612852475143;
	while (d < num)
	{
		m = d;
		while (num % m == 0)
		{
			num = num / m;
		}
		d++;
	}
	printf("%ld\n", num);

	return (0);
}
