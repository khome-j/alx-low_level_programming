#include "main.h"

int _pow(int a, int b);
int _strlen(const char *b);
int _atoi(char b);
/**
 * binary_to_uint - a function that convertss a binary number to an
 * unsigned int
 * @b: a pointer of char type
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, j = 0;
	char *p;
	unsigned int k = 0;

	p = malloc(sizeof(char *));
	if (p == NULL)
		return (1);

	p = strdup(b);
	len = _strlen(p) - 1;

	while (p && p[j])
	{
		if (p[j] >= '0' && p[j] <= '9')
		{
			k += _atoi(p[j]) * (_pow(2, len));
			/*return (n);*/
		}
		else
			return (0);
		j++;
		len--;
	}
	free(p);
	return (k);
}

/**
 * _strlen - a function that gets the length of a string
 * @b: a pointer to the string
 *
 * Return: length of the string.
 */
int _strlen(const char *b)
{
	unsigned int i, len = 0;

	i = 0;
	while (b[i])
	{
		len += 1;
		i++;
	}
	return (len);
}

/**
 * _atoi - a function that converts string to integer
 * @b: a string character
 *
 * Return: an integer
 */
int _atoi(char b)
{
	int result = 0;

	result = result * 10 + (b - '0');
	return (result);
}

/**
 * _pow - a function that returns the exponential value of a number
 * @a: an integer
 * @b: an integer
 *
 * Return: the exponential value
 */
int _pow(int a, int b)
{
	int i, result;

	if (b == 0)
		result = 1 * 1;
	else
		for (i = 0; i < b; i++)
		{
			result *= a;
		}
	return (result);
}
