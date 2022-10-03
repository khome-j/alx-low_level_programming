#include <stdio.h>
#include "main.h"
/**
 * main - A program that multiplies two numbers.
 * @argc: The argument count.
 * @argv: The one dimensional argument pointer
 *
 * Return: 0 if successful and 1 if not successful.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
