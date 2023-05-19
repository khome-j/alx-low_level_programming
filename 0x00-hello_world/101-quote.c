#include <unistd.h>
#include <string.h>
/**
 * main - Entry point.
 *
 * Description: a function that prints a string to standard error.
 *
 * Return: Always 1
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, strlen(s));
	return (1);
}
