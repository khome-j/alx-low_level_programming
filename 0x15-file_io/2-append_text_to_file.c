#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: a NULL terminated string.
 *
 * Return: 1 on success, -1 on failure or if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, count, write_file;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		count = 0;
		while (text_content[count])
			count++;

		write_file = write(fp, text_content, count);
		if (write_file == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
