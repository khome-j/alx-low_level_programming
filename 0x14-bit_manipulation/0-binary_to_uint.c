#include "main.h"


/**
 * binary_to_uint - a function that converts a binary num to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: the converted num or 0 if one more chars in str is not 0 or 1
 * and  if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, res = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = res << 1;
		res += (b[i] - '0');
	}

	return (res);
}
