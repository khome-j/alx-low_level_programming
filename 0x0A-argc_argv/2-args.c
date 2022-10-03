#include <stdio.h>
/**
 * main - This program prints all arguments it receives.
 *
 * @argc: The argument count
 * @argv: The argument vector which is a one dimensional array
 *
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	int count;
	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
