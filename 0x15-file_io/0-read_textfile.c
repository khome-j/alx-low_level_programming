#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * posix standard output
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 *
 * Return: 0 if file cannot be opened or read and if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t read_file, write_file;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_file = read(fd, buffer, letters);
	if (read_file == -1)
		return (0);

	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file == -1 || read_file != write_file)
		return (0);

	free(buffer);
	close(fd);

	return (write_file);
}
