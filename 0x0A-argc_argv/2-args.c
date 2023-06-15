#include <stdio.h>

/**
 * main - Entry point, where a program prints all the arguments it receives.
 * @argc: argument count.
 * @argv: argument vector(a char array of pointers)
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}

