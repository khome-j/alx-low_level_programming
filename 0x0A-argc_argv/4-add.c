#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector.
 *
 * Return: 0 if no number is passed, 1 for  non-digit.
 */

int main(int argc, char *argv[])
{
	int count, index, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (index = 1; index < argc; index++)
		{
			for (count = 0; argv[index][count] != '\0'; count++)
			{
				if (argv[index][count] < '0' || argv[index][count] > '9')
				{

					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[index]);
		}
	printf("%d\n", sum);
		return (0);
	}
}

