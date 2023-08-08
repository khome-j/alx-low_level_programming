#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * @argv: argument vector
 * @argc: argument constant
 *
 * Return: 0 on Success, 1 on Error
 */
int main(int argc, char *argv[])
{
	int i, num, coin_count = 0, cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	i = 0;
	while ((i < 5) && (num >= 0))
	{
		while (num >= cent[i])
		{
			coin_count++;
			num -= cent[i];
		}
		i++;
	}
	printf("%d\n", coin_count);
	return (0);
}
