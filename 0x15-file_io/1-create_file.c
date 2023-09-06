#include "main.h"

/**
 * _strlen - a function the returns the length of a string
 * @s: string
 *
 * Return: the length of a string on success
 */
int _strlen(char *s)
{
	int count = 1;

	if (*s == '\0')
		return (0);
	return (count + _strlen(++s));
}
/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: a NULL terminated string
 *
 * Return: 1 on success, -1 on failure if file cannot be created, file can not
 * be written, filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_file, buf_count;


	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		buf_count = _strlen(text_content);

		write_file = write(fd, text_content, buf_count);
		if (write_file == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
