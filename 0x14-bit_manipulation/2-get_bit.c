#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: an unsigned long int
 * @index: unsigned int starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m_index = sizeof(unsigned long int) * 8 - 1;
	unsigned long int b_mask = 1UL << index;
	int bit_val;

	if (index > m_index)
		return (-1);

	bit_val = (n & b_mask) ? 1 : 0;

	return (bit_val);
}
