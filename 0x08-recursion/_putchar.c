#include <unistd.h>

/**
 * _putchar - a function that writes to the stdout
 * @c: a char written to the stdout
 *
 * Return: the number of bytes written (on success)
 * -1 is returned on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
