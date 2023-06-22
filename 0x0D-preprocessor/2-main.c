#include <stdio.h>

/**
 * main - Entry point to a program that prints the name of the fie it was
 *  compiled from , followed by a new line.
 *
 *  Return: 0 on success.
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
