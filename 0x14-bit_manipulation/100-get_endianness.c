#include "main.h"

/**
  * get_endianness - checks the endianness
  *
  * Return: 1 for little endianness;
  * 0, for big endianness.
  */
int get_endianness(void)
{
	unsigned int addrss = 1;
	char *c = (char *)&addrss;

	if (*c)
		return (1);
	else
		return (0);
}
