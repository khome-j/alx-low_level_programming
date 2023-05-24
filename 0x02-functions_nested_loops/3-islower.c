#include "main.h"

/**
 * _islower - a functiion that checks for lowercase character.
 *
 * @c: is an unsigned char or EOF
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	int count;

	for (count = 97; count <= 122; count++)
	{
		if (c == count)
			return (1);

	}
	return (0);
}
