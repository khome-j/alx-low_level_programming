#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: This program will assign a random number to the variable n
 *
 * Return: Always 0 (success)
 */

void positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

}
