#include "3-calc.h"
#include <stdlib.h>
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
	operator = av[2];

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}



	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == 37 || *operator == 47) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
