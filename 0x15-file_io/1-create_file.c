#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to be created
 * @text_content: a null terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t write_file, bytes_read;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	printf("the value of fd is %d\n", fd);
	if (fd == -1)
		return (-1);

	i = 0;

	while (text_content[i])
	{
		i++;
	}
	if (text_content == NULL)
		return (1);

	bytes_read = i;
	write_file = write(fd, text_content, bytes_read);
	if (write_file == -1)
		return (-1);
	close(fd);
	return (1);
}
