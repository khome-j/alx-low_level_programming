#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int test_val = 0x12345678;
	unsigned char *ptr = (unsigned char *) &test_val;

	if (*ptr == 0x78)
		return (1);
	else
		return (0);
}
