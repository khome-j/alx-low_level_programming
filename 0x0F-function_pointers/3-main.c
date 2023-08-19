#include "3-calc.h"


/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or 100 if it fails
 */

int main(int ac, char *av[])
{
	int num1, num2;
	char *operator;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}


	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	operator = av[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}

