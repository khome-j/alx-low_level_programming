#include "main.h"
#include <limits.h>
#define BUF 1024


/**
 * read_filefrom - a function that reads the content of a file
 * @file_from: filename -strings.
 *
 * Return: Nothing
 */

char *read_filefrom(const char *file_from)
{
	ssize_t fd, read_file, close_file;
	char *buffer;

	buffer = malloc(sizeof(char) * BUF);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);

	}

	read_file = read(fd, buffer, BUF);
	if (read_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	close_file = close(fd);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %li\n", fd);
		exit(100);
	}
	return (buffer);
}


/**
 * cp - a function that copies a the content of a buffer into another file
 * @buffer: a buffer to copy strings from.
 * @file_to: the file which strings would be copied into
 *
 * Return: Nothing
 */
void cp(char **buffer, char *file_to)
{
	ssize_t fd, write_file, close_file;

	if (file_to == NULL || *buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
		exit(99);
	}

	fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
		exit(99);
	}


	write_file = write(fd, *buffer, BUF);
	if (write_file == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
		exit(99);
	}


	close_file = close(fd);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %li\n", fd);
		exit(100);
	}

}


/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	char *read_file;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	read_file = read_filefrom(av[1]);
	cp(&read_file, av[2]);

	return (0);
}
