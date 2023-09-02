#include "main.h"


/**
 * flip_bits - a function that returns the number of bits you would flip to get
 * from one num to another
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int counter = 0;

	while (xor_res)
	{
		if (xor_res & 1)
			counter++;
		xor_res >>= 1;
	}
	return (counter);
}
