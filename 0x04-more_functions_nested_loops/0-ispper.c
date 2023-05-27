#include "main.h"

/**
 *  _isupper - a function that checks for uppercase character.
 *  @c: an integer
 *
 *  Return: 1 (on success), 0 (on-fail)
 */

int _isupper(int c)
{
	int ch;

	for (ch = 65; ch <= 90; ch++)
	{
		if (ch == c)
			return (1);
	}
		return (0);
}
