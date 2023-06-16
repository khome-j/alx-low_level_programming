#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point to a program that prints the mininum number of coins to
 * make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector.
 *
 * Return: 0 if argmument is negative
 *         1 if arguments passed is more than 1
 */
int main(int argc, char *argv[])
{
	int cents, coin_count, coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		coin_count = 0;
		while (cents > 0)
		{
			if (cents >= coins[0])
				cents = cents - coins[0];
			else if (cents >= coins[1])
				cents = cents - coins[1];
			else if (cents >= coins[2])
				cents = cents - coins[2];
			else if (cents >= coins[3])
				cents = cents - coins[3];
			else
				cents = cents - coins[4];

			coin_count += 1;
		}
		printf("%d\n", coin_count);
		return (0);
	}
}

