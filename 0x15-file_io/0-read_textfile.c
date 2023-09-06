#include "main.h"


/**
 * read_textfile - a function that reads a textfile and prints to the
 * POSIX standard output
 * @filename: file path to the file
 * @letters: is the num of letters it should read and print
 *
 * Return: the actual num of letters it could read and print, 0 if the file can
 * not be opened, 0 if filename is NULL, 0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	void *buffer;
	ssize_t read_file, write_file, fd;

	buffer = malloc(letters);
	if (!buffer)
		return (0);


	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	read_file = read(fd, buffer, letters);
	if (read_file == -1)
		return (0);

	write_file = write(STDOUT_FILENO, buffer, read_file);

	close(fd);
	return (write_file);
}
