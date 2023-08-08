#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if one of the number contains symbols that
 * are not digits
 */

int main(int argc, char *argv[])
{
	int i, j, res = 0;
	char n;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 1;
		while (argv[i][j])
		{
			n = argv[i][j];
			if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += atoi(argv[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
