#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, i, flag = 0;


	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (n & mask)
		{
			printf("1");
			flag = 1;
		}
		else if (flag)
		{
			printf("0");
		}
		mask >>= 1;
	}
	if (!flag)
		printf("0");
}
