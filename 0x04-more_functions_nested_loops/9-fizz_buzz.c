#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The fizz-buzz test is a program that prints from 1 to 100
 * followed by a new line. but for the multiples of three print fizz and
 * multiples of five print buzz. for numbers which are multiples of both 3
 * and five print fizzbuzz.
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	int digit;

	for (digit = 1; digit <= 100; digit++)
	{
		if ((digit % 3 == 0) && (digit % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (digit % 5 == 0 && digit % 3 != 0)
			printf("Buzz");
		else if (digit % 3 == 0 && digit % 5 != 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", digit);
			printf(" ");
		}
		if (digit >= 1 && digit < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
