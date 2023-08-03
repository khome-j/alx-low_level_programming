#include "main.h"

int check_prime(int n, int x);
/**
 * is_prime_number - a function that checks if an integer is a prime number
 * @n: input integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (check_prime(n, 2) == 1)
		return (0);
	return (1);
}


/**
 * check_prime - a function that checks if a number is a prime number
 * @n: input integer
 * @x: number check starting from 2
 *
 * Return: 1 if prime or 0 if otherwise
 */
int check_prime(int n, int x)
{
	if (x < n)
	{
		if ((n % x) == 0)
			return (1);
		else
			return (check_prime(n, (x + 1)));
	}
	return (0);
}
