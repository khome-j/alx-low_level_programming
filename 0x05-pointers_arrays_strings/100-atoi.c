#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: a pointer to the string
 *
 * Return: 0 (if there are no numbers in the string)
 * otherwise return the number
 */

int _atoi(char *s)
{
	unsigned int n = 0; /*numbers found in the string*/
	int sign = 1;

	do {
		if (*s == '-') /*if the first char of s is pointing to is '-'*/
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0) /* then *s is an letter */
			break;
	} while (*s++);
	return (n * sign);
}
