#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 * -1 if filename is NULL or if you don't have the required permissions.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		text_len = 0;
		while (text_content[text_len])
			text_len++;

		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
