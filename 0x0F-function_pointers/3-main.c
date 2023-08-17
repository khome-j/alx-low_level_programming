#include "3-calc.h"

/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */

int main(int ac, char *av[])
{
	int num1, num2;
	char *operator;

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	operator = argv[2];

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (operator == "/"
