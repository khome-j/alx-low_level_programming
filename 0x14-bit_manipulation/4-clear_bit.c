#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: 1 if it works or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m_index = sizeof(unsigned long int) * 8 - 1;
	unsigned long int b_mask = ~(1UL << index);


	if (index > m_index)
		return (-1);

	*n &= b_mask;

	return (1);
}

