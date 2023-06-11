#include "main.h"

int check_prime(int n, int count);

/**
 * is_prime_number - a function that checks if a number is prime number
 * @n: the number(integer) to check for prime
 *
 * Return: 1 if the input(n) is a prime number, otherwise 0(if not a prime).
 */

int is_prime_number(int n)
{
	int count = 2;

	if (n <= 1)
		return (0);
	else
		return (check_prime(n, count));
}

/**
 * check_prime - a function that checks if a number is a prime number
 * @n: the input integer to check if its a prime.
 * @count: the input integer to count
 *
 * Return: 1 if the input(n) is a prime number, otherwise 0 (if not a prime)
 */

int check_prime(int n, int count)
{
	if (n == count)
		return (1);
	else if (n % count == 0)
		return (0);
	else
		return (check_prime(n, count + 1));
}
