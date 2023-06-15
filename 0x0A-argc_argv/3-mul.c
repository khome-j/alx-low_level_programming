#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to a program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success, 1 on Error.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
