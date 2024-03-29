#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This function prints the size of various data types in 32
 * and 64 bit operating system.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
