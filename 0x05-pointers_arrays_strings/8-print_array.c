#include "main.h"

/**
 * print_array - a function that prints n elements of array fo integers
 * followed by a new line.
 * @a: a pointer to an integer
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		printf("%d", *(a + count));
		if (count < (n - 1))
			printf(", ");
		count++;
	}
	printf("\n");
}
