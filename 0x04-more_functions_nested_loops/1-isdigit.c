#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: integer argument
 *
 * Return: 1 (on success), 0 (otherwise)
 */

int _isdigit(int c)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == c)
			return (1);
	}
	return (0);
}
