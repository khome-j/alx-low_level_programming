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
	int fd, i, write_file;
	char *buf;

	buf = malloc(sizeof(char) * _strlen(text_content));
	if (filename == NULL || buf == NULL)
	{
		free(buf);
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	i = 0;

	if (text_content != NULL)
	{
		while (text_content[i])
		{
			buf[i] = text_content[i];
			i++;
		}

		write_file = write(fd, buf, _strlen(text_content));
		if (write_file == -1)
			return (-1);
	}
	close(fd);

	free(buf);

	return (1);
}
