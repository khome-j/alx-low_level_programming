#include "main.h"

/**
 * append_text_to_file - a function that appends a text at the end of a file.
 * @filename: name of the file to be created
 * @text_content: a null terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _strlen;
	ssize_t write_file;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);


	if (text_content)
	{
		_strlen = 0;
		while (text_content[_strlen] != '\0')
			_strlen++;
		write_file = write(fd, text_content, _strlen);
		if (write_file == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
