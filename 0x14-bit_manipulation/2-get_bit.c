#include "main.h"
/**
  * get_bit - extracts the bit (0/1 digit) at an index
  * @n: a given decimal number
  * @index: the specified index
  * Return: the bit at the stated index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int digit;

	if (index > 64)
		return (-1);
	digit = (n >> index) & 1;
	return (digit);
}
