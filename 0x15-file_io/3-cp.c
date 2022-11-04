#include "main.h"
/**
 * read_text - a function that reads a text
 * @file_from: a file to read the text from
 * @letters: number of bytes it should read at a time.
 *
 * Return: a buffer with the stored letters read
 */
char *read_text(const char *file_from, size_t letters)
{
	int fd;
	ssize_t read_file;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		free(buf);
		exit(98);
	}
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't read from file: %s\n", file_from);
		exit(98);
	}
	read_file = read(fd, buf, letters);
	if (read_file == -1)
		exit(98);

	buf[letters + 1] = '\0';
	close(fd);
	return (buf);
}

/**
 * create_textfile - creates a new file
 * @file_to: name of the file to create
 * @buf: the text to write into the file
 *
 * Return: 1 if successful
 */
int create_textfile(const char *file_to, char *buf)
{
	int fd, _strlen;
	ssize_t write_file, close_file;

	if (file_to == NULL)
	{
		printf("Error: Can't write to %s\n", file_to);
		exit(99);
	}
	fd = open(file_to, O_WRONLY | O_CREAT, 00664);
	if (fd == -1)
		exit(99);
	if (buf)
	{
		_strlen = 0;
		while (buf[_strlen] != '\0')
			_strlen++;
		write_file = write(fd, buf, _strlen);
		if (write_file == -1)
		{
			printf("Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	close_file = close(fd);
	if (close_file == -1)
	{
		printf("Error: Can't close fd %ld\n", close_file);
		exit(100);
	}
	return (0);
}


/**
 * main - entry point of the program that calls the other functions
 * @ac: number of arguments passed to program
 * @av: array of vectors.
 * Return: Always 0
 */
int main(int ac, char **av)
{
	char *c;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	c = read_text(av[1], 1024);
	create_textfile(av[2], c);
	return (0);
}
