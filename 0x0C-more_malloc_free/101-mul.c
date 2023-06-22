#include "main.h"

/**
 * main - Entry point to a program that multiplies 2 positive numbers
 * argc: argument count
 * argv: argument vector
 *
 * Return: 0 (on success), 98 on failure
 */

int main(int argc, char *argv[])
{
	int count, res = 1;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	count = 1;

	while (count < argc)
	{
		res *= atoi(argv[count]);
		count++;
	}
	printf("%d\n", res);
	return (0);
}
