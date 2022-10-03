#include <stdio.h>
/**
 * main - Program prints the number of arguments passed into it.
 *
 * @argc: number of arguments.
 * @argv: a pointer to the number of arguments passed.
 *
 * Return: Always 0(success).
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
