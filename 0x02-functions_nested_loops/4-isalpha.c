#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: an unsigned integer
 *
 * Return: 1 if a letter(lower or uppercase)
 * Return: 0 if otherwise
 */

int _isalpha(int c)
{
	int lower, upper;

	lower = 65;
	upper = 97;

	for (lower = 65; lower <= 90 && upper <= 122; lower++)
	{
		if (c == lower || c == upper)
			return (1);
		upper++;
	}

	return (0);
}
