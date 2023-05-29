#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints 1 to 100 using fizz for multiples of 3
 * and buzz for multiples of 5 and fizzbuzz for multiples of 3 and 5.
 *
 * Return: 0 (on success)
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 != 0)
			printf("Fizz");
		else if (count % 5 == 0 && count % 3 != 0)
			printf("Buzz");
		else if (count % 3 == 0 && count % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d ", count);
		if (count <= 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
