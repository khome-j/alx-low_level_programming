#include "main.h"
#include <limits.h>
#define BUF 1024

/**
 * exit_code - a function that displays code errors
 * @code: exit code num
 * @fd: file descriptor
 * @str: file_from or file_to string
 *
 * Return: nothing
 */
void exit_code(int code, ssize_t fd, char *str)
{
	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(code);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(code);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(code);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd);
			exit(code);
	}
}

/**
 * cp - a function that copies the content of a file to another file
 * @file_from: file from
 * @file_to: file_to
 *
 */
void cp(char *file_from, char *file_to)
{
	ssize_t fd, fd1, rfile_from, wfile_to, close_fd, close_fd1;
	char *buffer;

	buffer = malloc(sizeof(char) * BUF);
	if (buffer == NULL)
	{
		free(buffer);
		exit_code(99, 0, file_from);
	}
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		exit_code(98, 0, file_from);
	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
		exit_code(99, 0, file_to);

	while ((rfile_from = read(fd, buffer, BUF)) != 0)
	{
		if (rfile_from == -1)
			exit_code(98, fd, file_from);

		wfile_to = write(fd1, buffer, rfile_from);
		if (wfile_to == -1)
			exit_code(99, fd, file_to);

	}
	close_fd = close(fd);
	if (close_fd == -1)
		exit_code(100, fd, NULL);

	close_fd1 = close(fd1);
	if (close_fd1 == -1)
		exit_code(100, fd1, NULL);
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
	if (ac != 3)
		exit_code(97, 0, NULL);
	cp(av[1], av[2]);

	return (0);
}
